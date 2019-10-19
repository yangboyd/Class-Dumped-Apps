//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, OrchImageWithCaption, OrchTooltip;

@interface OrchFormHeader : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *componentGroupArray; // @dynamic componentGroupArray;
@property(readonly, nonatomic) unsigned long long componentGroupArray_Count; // @dynamic componentGroupArray_Count;
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(retain, nonatomic) NSMutableArray *descriptionArray; // @dynamic descriptionArray;
@property(readonly, nonatomic) unsigned long long descriptionArray_Count; // @dynamic descriptionArray_Count;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasHideOptionalText; // @dynamic hasHideOptionalText;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasIsOptional; // @dynamic hasIsOptional;
@property(nonatomic) _Bool hasLogKey; // @dynamic hasLogKey;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) _Bool hasViewMode; // @dynamic hasViewMode;
@property(nonatomic) _Bool hideOptionalText; // @dynamic hideOptionalText;
@property(retain, nonatomic) OrchImageWithCaption *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isOptional; // @dynamic isOptional;
@property(copy, nonatomic) NSString *logKey; // @dynamic logKey;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) OrchTooltip *tooltip; // @dynamic tooltip;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(nonatomic) int viewMode; // @dynamic viewMode;

@end

