// Copyright Ben Tristem 2016.

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();
	void OpenDoor ();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

private:
	// Indicates that this property is visable in property windows, but cannot be edited at all.
	// This operator is incompatible with the Edit* specifiers.
	UPROPERTY(VisibleAnywhere)
		float OpenAngle = 90.f;
	UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePlate;

	UPROPERTY (EditAnywhere)
		AActor* ActorThatOpens;
};
