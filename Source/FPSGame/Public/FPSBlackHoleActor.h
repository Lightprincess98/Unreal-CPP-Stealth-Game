// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSBlackHoleActor.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class FPSGAME_API AFPSBlackHoleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSBlackHoleActor();

protected:
	//Static Mesh Components
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	//Destroys the overlapping objects
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* InnerSphereComp;

	//Pulls components towards center
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* OuterSphereComp;

	//Create function to check overlapping of the inner sphere.
	UFUNCTION()
	void OverlapInnerSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OverlapOuterSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
