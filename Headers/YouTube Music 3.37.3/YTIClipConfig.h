//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand;

@interface YTIClipConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long endTimeMs; // @dynamic endTimeMs;
@property(nonatomic) _Bool hasEndTimeMs; // @dynamic hasEndTimeMs;
@property(nonatomic) _Bool hasOnScrubExitCommands; // @dynamic hasOnScrubExitCommands;
@property(nonatomic) _Bool hasPostId; // @dynamic hasPostId;
@property(nonatomic) _Bool hasStartTimeMs; // @dynamic hasStartTimeMs;
@property(retain, nonatomic) YTICommand *onScrubExitCommands; // @dynamic onScrubExitCommands;
@property(copy, nonatomic) NSString *postId; // @dynamic postId;
@property(nonatomic) long long startTimeMs; // @dynamic startTimeMs;

@end

