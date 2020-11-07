/**
 * This file is generated by xresloader 2.10.0-rc1, please don't edit it.
 * You can find more information about this xresloader on https://xresloader.atframe.work/ .
 * If there is any problem, please find or report issues on https://github.com/xresloader/xresloader/issues .
 */
#pragma once

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"
#include "TestMsgVerifier.generated.h"


USTRUCT(BlueprintType)
struct FTestMsgVerifier : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    // Start of fields
    /** Field Type: INT, Name: TestId1, Index: 10001 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 TestId1;

    /** Field Type: INT, Name: TestId2, Index: 10002 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 TestId2;

};