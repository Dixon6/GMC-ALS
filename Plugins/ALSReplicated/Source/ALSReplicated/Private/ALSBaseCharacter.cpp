// Fill out your copyright notice in the Description page of Project Settings.


#include "ALSBaseCharacter.h"

// Sets default values
AALSBaseCharacter::AALSBaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UALSCharacterMovementComponent>(CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AALSBaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	ALSCharacterMovement = Cast<UALSCharacterMovementComponent>(GetCharacterMovement());

	if (GetLocalRole() == ROLE_SimulatedProxy)
	{
		GetMesh()->GetAnimInstance()->SetRootMotionMode(ERootMotionMode::IgnoreRootMotion);
	}

	SetReplicateMovement(true);

	if (HasAuthority())
	{
		SetReplicates(true);
	}
}

// Called every frame
void AALSBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetLocalRole() != ROLE_SimulatedProxy)
	{
		ControlRotation = FMath::RInterpTo(ControlRotation, GetControlRotation(), DeltaTime, 30.0f);
	}
}

// Called to bind functionality to input
void AALSBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AALSBaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(AALSBaseCharacter, ControlRotation, COND_SkipOwner);
}

