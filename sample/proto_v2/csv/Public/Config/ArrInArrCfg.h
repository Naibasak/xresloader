/**
 * This file is generated by xresloader 2.10.0, please don't edit it.
 * You can find more information about this xresloader on https://xresloader.atframe.work/ .
 * If there is any problem, please find or report issues on https://github.com/xresloader/xresloader/issues .
 */
#pragma once
// Test arr_in_arr_cfg

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"
#include "ArrInArrCfg.generated.h"


USTRUCT(BlueprintType)
struct FArrInArrCfg : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    // Start of fields
    /** Field Type: STRING, Name: Name, Index: 0. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FName Name;

    // This is a Key
    /** Field Type: INT, Name: Id, Index: 1 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Id;

    // This is a test name in array
    /** Field Type: STRING, Name: Arr_0_Name, Index: 1 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FString Arr_0_Name;

    /** Field Type: INT, Name: Arr_0_IntArr_0, Index: 2 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Arr_0_IntArr_0;

    /** Field Type: INT, Name: Arr_0_IntArr_1, Index: 2 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Arr_0_IntArr_1;

    /** Field Type: STRING, Name: Arr_0_StrArr_0, Index: 3 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FString Arr_0_StrArr_0;

    /** Field Type: STRING, Name: Arr_0_StrArr_1, Index: 3 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FString Arr_0_StrArr_1;

    // This is a test name in array
    /** Field Type: STRING, Name: Arr_1_Name, Index: 1 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FString Arr_1_Name;

    /** Field Type: INT, Name: Arr_1_IntArr_0, Index: 2 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Arr_1_IntArr_0;

    /** Field Type: INT, Name: Arr_1_IntArr_1, Index: 2 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Arr_1_IntArr_1;

    /** Field Type: STRING, Name: Arr_1_StrArr_0, Index: 3 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FString Arr_1_StrArr_0;

    /** Field Type: STRING, Name: Arr_1_StrArr_1, Index: 3 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FString Arr_1_StrArr_1;

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

