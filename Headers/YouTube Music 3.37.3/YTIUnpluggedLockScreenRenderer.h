//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnpluggedLockScreenRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *bylineText; // @dynamic bylineText;
@property(nonatomic) unsigned long long endTimeSeconds; // @dynamic endTimeSeconds;
@property(nonatomic) _Bool hasBylineText; // @dynamic hasBylineText;
@property(nonatomic) _Bool hasEndTimeSeconds; // @dynamic hasEndTimeSeconds;
@property(nonatomic) _Bool hasStartTimeSeconds; // @dynamic hasStartTimeSeconds;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) unsigned long long startTimeSeconds; // @dynamic startTimeSeconds;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

