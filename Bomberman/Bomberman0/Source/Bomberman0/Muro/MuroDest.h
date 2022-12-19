// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Public/Ch/Healt.h"
#include "MuroDest.generated.h"

UCLASS()
class BOMBERMAN0_API AMuroDest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMuroDest();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Salud")
		UHealt* Salud;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
