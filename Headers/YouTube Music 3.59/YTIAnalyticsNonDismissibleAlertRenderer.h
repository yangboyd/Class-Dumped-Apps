//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIIcon;

@interface YTIAnalyticsNonDismissibleAlertRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *alertMessage; // @dynamic alertMessage;
@property(nonatomic) _Bool hasAlertMessage; // @dynamic hasAlertMessage;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasNavigationButton; // @dynamic hasNavigationButton;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasNavigationText; // @dynamic hasNavigationText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIButtonSupportedRenderers *navigationButton; // @dynamic navigationButton;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *navigationText; // @dynamic navigationText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

