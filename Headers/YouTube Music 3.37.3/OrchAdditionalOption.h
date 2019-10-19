//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, OrchImageWithCaption, OrchInstrumentForm;

@interface OrchAdditionalOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool autoSubmit; // @dynamic autoSubmit;
@property(nonatomic) _Bool hasAutoSubmit; // @dynamic hasAutoSubmit;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasInstrumentForm; // @dynamic hasInstrumentForm;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchImageWithCaption *icon; // @dynamic icon;
@property(retain, nonatomic) OrchInstrumentForm *instrumentForm; // @dynamic instrumentForm;
@property(retain, nonatomic) NSMutableArray *instrumentFormsArray; // @dynamic instrumentFormsArray;
@property(readonly, nonatomic) unsigned long long instrumentFormsArray_Count; // @dynamic instrumentFormsArray_Count;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(copy, nonatomic) NSString *statusMessage; // @dynamic statusMessage;
@property(readonly, nonatomic) int sublabelOneOfCase; // @dynamic sublabelOneOfCase;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(copy, nonatomic) NSString *warningMessage; // @dynamic warningMessage;

@end

