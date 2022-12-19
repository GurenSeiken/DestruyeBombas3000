// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomb.h"

// Sets default values
ABomb::ABomb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABomb::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorld()->GetTimerManager().SetTimer(_loopTimeHandler, this, &ABomb::onTimerEnd, tim, false);
	
}

// Called every frame
void ABomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ABomb::onTimerEnd() {
	TArray<AActor*> ignoredActors;
	UGameplayStatics::ApplyRadialDamage(GetWorld(),
		DamageAmount,
		GetActorLocation(),
		Radius,
		UDamageType::StaticClass(),
		ignoredActors,
		this,
		nullptr,
		false,
		ECollisionChannel::ECC_Visibility);
	Destroy();
}