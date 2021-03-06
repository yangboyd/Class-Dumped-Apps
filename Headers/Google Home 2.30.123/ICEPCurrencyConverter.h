//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ICEPBehavior, ICEPCurrencyItem, ICEPCurrencyValue, ICEPStyle, NSMutableArray, NSString, QLTComponent;

@interface ICEPCurrencyConverter : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *baseAmountInputComponentUid; // @dynamic baseAmountInputComponentUid;
@property(retain, nonatomic) ICEPCurrencyItem *baseCurrencyItem; // @dynamic baseCurrencyItem;
@property(copy, nonatomic) NSString *baseCurrencyListComponentUid; // @dynamic baseCurrencyListComponentUid;
@property(retain, nonatomic) ICEPBehavior *behavior; // @dynamic behavior;
@property(retain, nonatomic) QLTComponent *content; // @dynamic content;
@property(retain, nonatomic) NSMutableArray *currencyListArray; // @dynamic currencyListArray;
@property(readonly, nonatomic) unsigned long long currencyListArray_Count; // @dynamic currencyListArray_Count;
@property(retain, nonatomic) ICEPCurrencyValue *exchangeRate; // @dynamic exchangeRate;
@property(nonatomic) _Bool hasBaseAmountInputComponentUid; // @dynamic hasBaseAmountInputComponentUid;
@property(nonatomic) _Bool hasBaseCurrencyItem; // @dynamic hasBaseCurrencyItem;
@property(nonatomic) _Bool hasBaseCurrencyListComponentUid; // @dynamic hasBaseCurrencyListComponentUid;
@property(nonatomic) _Bool hasBehavior; // @dynamic hasBehavior;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasExchangeRate; // @dynamic hasExchangeRate;
@property(nonatomic) _Bool hasQueryTemplate; // @dynamic hasQueryTemplate;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTargetAmountInputComponentUid; // @dynamic hasTargetAmountInputComponentUid;
@property(nonatomic) _Bool hasTargetCurrencyItem; // @dynamic hasTargetCurrencyItem;
@property(nonatomic) _Bool hasTargetCurrencyListComponentUid; // @dynamic hasTargetCurrencyListComponentUid;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(retain, nonatomic) NSMutableArray *layoutConstraintsArray; // @dynamic layoutConstraintsArray;
@property(readonly, nonatomic) unsigned long long layoutConstraintsArray_Count; // @dynamic layoutConstraintsArray_Count;
@property(copy, nonatomic) NSString *queryTemplate; // @dynamic queryTemplate;
@property(retain, nonatomic) ICEPStyle *style; // @dynamic style;
@property(copy, nonatomic) NSString *targetAmountInputComponentUid; // @dynamic targetAmountInputComponentUid;
@property(retain, nonatomic) ICEPCurrencyItem *targetCurrencyItem; // @dynamic targetCurrencyItem;
@property(copy, nonatomic) NSString *targetCurrencyListComponentUid; // @dynamic targetCurrencyListComponentUid;
@property(copy, nonatomic) NSString *uid; // @dynamic uid;

@end

