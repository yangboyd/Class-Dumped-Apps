//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIEmergencyOneboxSupportedRenderers, YTIFormattedString;

@interface YTIEmergencyOneboxRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIEmergencyOneboxSupportedRenderers *firstOption; // @dynamic firstOption;
@property(nonatomic) _Bool hasFirstOption; // @dynamic hasFirstOption;
@property(nonatomic) _Bool hasSecondOption; // @dynamic hasSecondOption;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIEmergencyOneboxSupportedRenderers *secondOption; // @dynamic secondOption;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

