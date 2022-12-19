// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"
#include "Bomb.generated.h"

UCLASS()
class BOMBERMAN0_API ABomb : public AActor
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	ABomb();
	UFUNCTION(BlueprintCallable,Category ="Tiempo")
	void onTimerEnd();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TiemeBomb")
	float tim = 3;
	float DamageAmount = 50;
	float Radius = 150;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	FTimerHandle _loopTimeHandler;


};
