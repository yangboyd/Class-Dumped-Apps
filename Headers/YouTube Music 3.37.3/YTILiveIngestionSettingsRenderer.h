//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIAccessibilityData;

@interface YTILiveIngestionSettingsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasCompleted; // @dynamic hasCompleted;
@property(nonatomic) _Bool hasHasCompleted; // @dynamic hasHasCompleted;
@property(nonatomic) _Bool hasHeightPx; // @dynamic hasHeightPx;
@property(nonatomic) _Bool hasPrimaryServerURL; // @dynamic hasPrimaryServerURL;
@property(nonatomic) _Bool hasPrimaryServerURLAccessibility; // @dynamic hasPrimaryServerURLAccessibility;
@property(nonatomic) _Bool hasPrimaryServerURLLabel; // @dynamic hasPrimaryServerURLLabel;
@property(nonatomic) _Bool hasSecondaryServerURL; // @dynamic hasSecondaryServerURL;
@property(nonatomic) _Bool hasSecondaryServerURLAccessibility; // @dynamic hasSecondaryServerURLAccessibility;
@property(nonatomic) _Bool hasSecondaryServerURLLabel; // @dynamic hasSecondaryServerURLLabel;
@property(nonatomic) _Bool hasStreamName; // @dynamic hasStreamName;
@property(nonatomic) _Bool hasStreamNameAccessibility; // @dynamic hasStreamNameAccessibility;
@property(nonatomic) _Bool hasStreamNameLabel; // @dynamic hasStreamNameLabel;
@property(nonatomic) _Bool hasWidthPx; // @dynamic hasWidthPx;
@property(nonatomic) int heightPx; // @dynamic heightPx;
@property(copy, nonatomic) NSString *primaryServerURL; // @dynamic primaryServerURL;
@property(retain, nonatomic) YTIAccessibilityData *primaryServerURLAccessibility; // @dynamic primaryServerURLAccessibility;
@property(copy, nonatomic) NSString *primaryServerURLLabel; // @dynamic primaryServerURLLabel;
@property(retain, nonatomic) NSMutableArray *primaryStreamButtonsArray; // @dynamic primaryStreamButtonsArray;
@property(readonly, nonatomic) unsigned long long primaryStreamButtonsArray_Count; // @dynamic primaryStreamButtonsArray_Count;
@property(copy, nonatomic) NSString *secondaryServerURL; // @dynamic secondaryServerURL;
@property(retain, nonatomic) YTIAccessibilityData *secondaryServerURLAccessibility; // @dynamic secondaryServerURLAccessibility;
@property(copy, nonatomic) NSString *secondaryServerURLLabel; // @dynamic secondaryServerURLLabel;
@property(copy, nonatomic) NSString *streamName; // @dynamic streamName;
@property(retain, nonatomic) YTIAccessibilityData *streamNameAccessibility; // @dynamic streamNameAccessibility;
@property(copy, nonatomic) NSString *streamNameLabel; // @dynamic streamNameLabel;
@property(nonatomic) int widthPx; // @dynamic widthPx;

@end

