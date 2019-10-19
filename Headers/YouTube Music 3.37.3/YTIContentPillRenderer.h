//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIContentPillBehavior, YTIContentPillPosition, YTIContentPillRenderer_ContentPillCap, YTIFormattedString, YTIIcon;

@interface YTIContentPillRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIContentPillBehavior *behavior; // @dynamic behavior;
@property(retain, nonatomic) YTIContentPillRenderer_ContentPillCap *cap; // @dynamic cap;
@property(nonatomic) _Bool hasBehavior; // @dynamic hasBehavior;
@property(nonatomic) _Bool hasCap; // @dynamic hasCap;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIsVisible; // @dynamic hasIsVisible;
@property(nonatomic) _Bool hasOnClicked; // @dynamic hasOnClicked;
@property(nonatomic) _Bool hasPosition; // @dynamic hasPosition;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(nonatomic) _Bool isVisible; // @dynamic isVisible;
@property(retain, nonatomic) YTICommand *onClicked; // @dynamic onClicked;
@property(retain, nonatomic) YTIContentPillPosition *position; // @dynamic position;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

