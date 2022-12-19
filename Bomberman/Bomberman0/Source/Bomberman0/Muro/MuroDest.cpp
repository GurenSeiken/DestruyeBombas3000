// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroDest.h"

// Sets default values
AMuroDest::AMuroDest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Salud = CreateDefaultSubobject<UHealt>(TEXT("SaludMuro"));

}

// Called when the game starts or when spawned
void AMuroDest::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AMuroDest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
