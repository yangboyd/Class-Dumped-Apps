//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMLogsPrecallScreenEvent_ActivityHistory;

@interface GIMLogsPrecallScreenEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIMLogsPrecallScreenEvent_ActivityHistory *activityHistory; // @dynamic activityHistory;
@property(nonatomic) int activityState; // @dynamic activityState;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasActivityHistory; // @dynamic hasActivityHistory;
@property(nonatomic) int origin; // @dynamic origin;
@property(nonatomic) int screenType; // @dynamic screenType;

@end

