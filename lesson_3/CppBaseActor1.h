// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor1.generated.h"

UCLASS()
class CPPBASE_API ACppBaseActor1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBaseActor1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere)
	int EnemyNum;

	UPROPERTY(EditAnywhere)
	bool IsAlive;

	void ShowActorInformation();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
