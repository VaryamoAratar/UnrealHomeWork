// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor1.h"

// Sets default values
ACppBaseActor1::ACppBaseActor1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppBaseActor1::BeginPlay()
{
	Super::BeginPlay();
	ShowActorInformation();

}

// Called every frame
void ACppBaseActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACppBaseActor1::ShowActorInformation()
{
	//UE_LOG(LogTemp, Display, TEXT("CppBase is here"));
	//UE_LOG(LogTemp, Warning, TEXT("CppBase ����� ������"));
	//UE_LOG(LogTemp, Error, TEXT("CppBase ������"));

	FString InstanceName = GetActorNameOrLabel();
	UE_LOG(LogTemp, Display, TEXT("Instance name : %s"), *InstanceName);
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), EnemyNum);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %s"), IsAlive ? TEXT("1") : TEXT("0"));

}
