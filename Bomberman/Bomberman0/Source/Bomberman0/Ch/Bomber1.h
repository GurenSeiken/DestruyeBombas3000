// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "bomb/Bomb.h"
#include "Bomber1.generated.h"


UCLASS()
class BOMBERMAN0_API ABomber1 : public ACharacter
{	//Genera el cuerpo para que tenga colision
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABomber1();
	//para verse tambien el blueprint
	//brazo de la camara
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;
	//camara
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera)
		UCameraComponent* FollowCamera;
	//declaramos metodos
	void MoveForward(float Axis);
	void MoveRight(float Axis);
	//seleccionar que se spawnea
	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABomb> ToSpawn;
	//funcion spawn
	UFUNCTION(BlueprintCallable)
	void Spawn();
	//obtener locaclizacion del personaje
	UPROPERTY(VisibleAnywhere, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = "Variables")
		int vida = 1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};