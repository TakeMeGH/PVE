// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CharacterAttributeSets.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class PVE_API UCharacterAttributeSets : public UAttributeSet
{
	GENERATED_BODY()
	

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, Health)

	UPROPERTY(BlueprintReadOnly, Category = "AttackDamage", ReplicatedUsing = OnRep_AttackDamage)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, AttackDamage)
};
