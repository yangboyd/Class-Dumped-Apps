//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILiveCreationContext;

@interface YTILiveCreationBroadcastSchedule : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int creationTimeSecs; // @dynamic creationTimeSecs;
@property(nonatomic) _Bool hasCreationTimeSecs; // @dynamic hasCreationTimeSecs;
@property(nonatomic) _Bool hasLiveCreationContext; // @dynamic hasLiveCreationContext;
@property(nonatomic) _Bool hasStartTimeSecs; // @dynamic hasStartTimeSecs;
@property(retain, nonatomic) YTILiveCreationContext *liveCreationContext; // @dynamic liveCreationContext;
@property(nonatomic) int startTimeSecs; // @dynamic startTimeSecs;

@end

