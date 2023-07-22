// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Spaceship.generated.h"

UCLASS()
class UE_LEARNING_API ASpaceship : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpaceship();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
	int Test;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComponent;
	// Called when the game starts or when spawned

	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
