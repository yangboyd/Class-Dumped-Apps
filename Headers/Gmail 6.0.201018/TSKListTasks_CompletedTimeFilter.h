//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBTimestamp;

@interface TSKListTasks_CompletedTimeFilter : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLowerBound; // @dynamic hasLowerBound;
@property(nonatomic) _Bool hasUpperBound; // @dynamic hasUpperBound;
@property(retain, nonatomic) GPBTimestamp *lowerBound; // @dynamic lowerBound;
@property(retain, nonatomic) GPBTimestamp *upperBound; // @dynamic upperBound;

@end

