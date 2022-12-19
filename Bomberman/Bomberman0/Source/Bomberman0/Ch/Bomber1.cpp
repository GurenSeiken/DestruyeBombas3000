// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomber1.h"

// Sets default values
ABomber1::ABomber1()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//rotaciones, todas en false
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 0.0f, 0.0f);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->bUsePawnControlRotation = false;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollorCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	FollowCamera->bUsePawnControlRotation = false;

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(RootComponent);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));


}

void ABomber1::Spawn()
{
	if (ToSpawn)
	{
		UWorld* world = GetWorld();
		if (world)
		{
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = this;

			FRotator rotator;

			FVector spawnLocation = this->FP_MuzzleLocation->GetComponentLocation();
			world->SpawnActor<ABomb>(ToSpawn, spawnLocation, rotator, spawnParams);
		}
	}
}

// Called when the game starts or when spawned
void ABomber1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABomber1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABomber1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ABomber1::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABomber1::MoveRight);
}

void ABomber1::MoveForward(float Axis)
{

	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

void ABomber1::MoveRight(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);
}