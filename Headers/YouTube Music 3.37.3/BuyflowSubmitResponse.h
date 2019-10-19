//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class BuyflowPage, NSMutableArray, NSString, OrchIntegratorCallbackData, OrchLoadTarget, OrchResponseContext, OrchSecureDataHeader, OrchUiError, OrchWidgetReference;

@interface BuyflowSubmitResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalPageArray; // @dynamic additionalPageArray;
@property(readonly, nonatomic) unsigned long long additionalPageArray_Count; // @dynamic additionalPageArray_Count;
@property(retain, nonatomic) BuyflowPage *basePage; // @dynamic basePage;
@property(retain, nonatomic) OrchIntegratorCallbackData *callbackData; // @dynamic callbackData;
@property(copy, nonatomic) NSString *checkoutOrderId; // @dynamic checkoutOrderId;
@property(retain, nonatomic) OrchResponseContext *context; // @dynamic context;
@property(retain, nonatomic) OrchUiError *error; // @dynamic error;
@property(nonatomic) _Bool flowComplete; // @dynamic flowComplete;
@property(nonatomic) int flowInstruction; // @dynamic flowInstruction;
@property(nonatomic) _Bool hasBasePage; // @dynamic hasBasePage;
@property(nonatomic) _Bool hasCallbackData; // @dynamic hasCallbackData;
@property(nonatomic) _Bool hasCheckoutOrderId; // @dynamic hasCheckoutOrderId;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasFlowComplete; // @dynamic hasFlowComplete;
@property(nonatomic) _Bool hasFlowInstruction; // @dynamic hasFlowInstruction;
@property(nonatomic) _Bool hasIntegratorCallbackData; // @dynamic hasIntegratorCallbackData;
@property(nonatomic) _Bool hasIntegratorData; // @dynamic hasIntegratorData;
@property(nonatomic) _Bool hasIntegratorDisplayMessage; // @dynamic hasIntegratorDisplayMessage;
@property(nonatomic) _Bool hasInvalidateTemplates; // @dynamic hasInvalidateTemplates;
@property(nonatomic) _Bool hasLegacyManagedProfileId; // @dynamic hasLegacyManagedProfileId;
@property(nonatomic) _Bool hasNextLoadTarget; // @dynamic hasNextLoadTarget;
@property(nonatomic) _Bool hasNextPage; // @dynamic hasNextPage;
@property(nonatomic) _Bool hasNextWidget; // @dynamic hasNextWidget;
@property(nonatomic) _Bool hasSecureHeader; // @dynamic hasSecureHeader;
@property(retain, nonatomic) OrchIntegratorCallbackData *integratorCallbackData; // @dynamic integratorCallbackData;
@property(copy, nonatomic) NSString *integratorData; // @dynamic integratorData;
@property(copy, nonatomic) NSString *integratorDisplayMessage; // @dynamic integratorDisplayMessage;
@property(nonatomic) _Bool invalidateTemplates; // @dynamic invalidateTemplates;
@property(nonatomic) long long legacyManagedProfileId; // @dynamic legacyManagedProfileId;
@property(retain, nonatomic) OrchLoadTarget *nextLoadTarget; // @dynamic nextLoadTarget;
@property(retain, nonatomic) BuyflowPage *nextPage; // @dynamic nextPage;
@property(retain, nonatomic) OrchWidgetReference *nextWidget; // @dynamic nextWidget;
@property(retain, nonatomic) NSMutableArray *overflowMenuOptionArray; // @dynamic overflowMenuOptionArray;
@property(readonly, nonatomic) unsigned long long overflowMenuOptionArray_Count; // @dynamic overflowMenuOptionArray_Count;
@property(retain, nonatomic) OrchSecureDataHeader *secureHeader; // @dynamic secureHeader;

@end

