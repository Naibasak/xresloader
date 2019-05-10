// This file is generated by xresloader, please don't edit it.

#pragma once
// Test arr_in_arr_cfg

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"
#include "Config/ArrInArr.h"
#include "ArrInArrCfg.generated.h"


USTRUCT(BlueprintType)
struct FArrInArrCfg : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    // Start of fields
    // This is a Key
    /** Field Type: INT, Name: Id **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Id;

    /** Field Type: MESSAGE, Name: Arr **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    TArray< FArrInArr > Arr;

};


UCLASS(Blueprintable, BlueprintType)
class UArrInArrCfgHelper : public UObject
{
    GENERATED_BODY()

public:
    UArrInArrCfgHelper();

    void OnReload();

    static FName GetRowName(int32 Id);

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    FName GetDataRowName(int32 Id) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    FName GetTableRowName(const FArrInArrCfg& TableRow) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    const FArrInArrCfg& GetDataRowByName(const FName& Name, bool& IsValid) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    const FArrInArrCfg& GetDataRowByKey(int32 Id, bool& IsValid) const;

    bool ForeachRow(TFunctionRef<void (const FName& Key, const FArrInArrCfg& Value)> Predicate) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    UDataTable* GetRawDataTable(bool& IsValid) const;

    static void ClearRow(FArrInArrCfg& TableRow);

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    void ClearDataRow(FArrInArrCfg& TableRow) const;

private:
    TSharedPtr<ConstructorHelpers::FObjectFinder<UDataTable> > Loader;
    UDataTable* DataTable;
    FArrInArrCfg Empty;
};

