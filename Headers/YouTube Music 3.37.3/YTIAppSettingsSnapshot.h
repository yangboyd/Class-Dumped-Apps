//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAppSettingsSnapshot_AppSettings;

@interface YTIAppSettingsSnapshot : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAppSettingsSnapshot_AppSettings *currentValue; // @dynamic currentValue;
@property(nonatomic) _Bool hasCurrentValue; // @dynamic hasCurrentValue;
@property(nonatomic) _Bool hasPreviousValue; // @dynamic hasPreviousValue;
@property(nonatomic) _Bool hasTimeSinceLastSnapshotSecs; // @dynamic hasTimeSinceLastSnapshotSecs;
@property(retain, nonatomic) YTIAppSettingsSnapshot_AppSettings *previousValue; // @dynamic previousValue;
@property(nonatomic) int timeSinceLastSnapshotSecs; // @dynamic timeSinceLastSnapshotSecs;

@end

