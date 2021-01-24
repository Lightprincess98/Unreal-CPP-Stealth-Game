/*
* Copyright (c) <2018> Side Effects Software Inc.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
*    this list of conditions and the following disclaimer.
*
* 2. The name of Side Effects Software may not be used to endorse or
*    promote products derived from this software without specific prior
*    written permission.
*
* THIS SOFTWARE IS PROVIDED BY SIDE EFFECTS SOFTWARE "AS IS" AND ANY EXPRESS
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
* NO EVENT SHALL SIDE EFFECTS SOFTWARE BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
* OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

#include "HoudiniGenericAttribute.generated.h"

UENUM()
enum class EAttribStorageType : int8
{
	Invalid		= -1,

	INT			= 0,
	INT64		= 1,
	FLOAT		= 2,
	FLOAT64		= 3,
	STRING		= 4
};

UENUM()
enum class EAttribOwner : int8
{
	Invalid = -1,

	Vertex,
	Point,
	Prim,
	Detail,
};

USTRUCT()
struct HOUDINIENGINERUNTIME_API FHoudiniGenericAttribute
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FString AttributeName;

	UPROPERTY()
	EAttribStorageType AttributeType;
	UPROPERTY()
	EAttribOwner AttributeOwner;

	UPROPERTY()
	int32 AttributeCount;
	UPROPERTY()
	int32 AttributeTupleSize;

	UPROPERTY()
	TArray<double> DoubleValues;
	UPROPERTY()
	TArray<int64> IntValues;
	UPROPERTY()
	TArray<FString> StringValues;

	double GetDoubleValue(int32 index = 0);
	void GetDoubleTuple(TArray<double>& TupleValues, int32 index = 0);

	int64 GetIntValue(int32 index = 0);
	void GetIntTuple(TArray<int64>& TupleValues, int32 index = 0);

	FString GetStringValue(int32 index = 0);
	void GetStringTuple(TArray<FString>& TupleValues, int32 index = 0);

	bool GetBoolValue(int32 index = 0);
	void GetBoolTuple(TArray<bool>& TupleValues, int32 index = 0);

	void* GetData();

	//
	static bool UpdatePropertyAttributeOnObject(
		UObject* InObject, FHoudiniGenericAttribute InPropertyAttribute, const int32& AtIndex = 0);

	// Tries to find a Uproperty by name/label on an object
	// FoundPropertyObject will be the object that actually contains the property
	// and can be different from InObject if the property is nested.
	static bool FindPropertyOnObject(
		UObject* InObject,
		const FString& InPropertyName,
		FProperty*& OutFoundProperty,
		UObject*& OutFoundPropertyObject,
		void*& OutContainer);

	// Modifies the value of a found Property
	static bool ModifyPropertyValueOnObject(
		UObject* InObject,
		FHoudiniGenericAttribute InGenericAttribute,
		FProperty* FoundProperty,
		void* InContainer,
		const int32& AtIndex = 0 );

	// Recursive search for a given property on a UObject
	static bool TryToFindProperty(
		void* InContainer,
		UStruct* InStruct,
		const FString& InPropertyName,
		FProperty*& OutFoundProperty,
		bool& bOutPropertyHasBeenFound,
		void*& OutContainer);
};