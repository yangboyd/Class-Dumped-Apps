//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString, YTIRenderer;

@interface YTIMobileBroadcastSetupScheduleScreenRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *closeButton; // @dynamic closeButton;
@property(retain, nonatomic) NSMutableArray *eventButtonsArray; // @dynamic eventButtonsArray;
@property(readonly, nonatomic) unsigned long long eventButtonsArray_Count; // @dynamic eventButtonsArray_Count;
@property(nonatomic) _Bool hasCloseButton; // @dynamic hasCloseButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTotalBroadcastCount; // @dynamic hasTotalBroadcastCount;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(nonatomic) int totalBroadcastCount; // @dynamic totalBroadcastCount;

@end

