//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface YTIStartupTelemetryEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasJobDurationUsec; // @dynamic hasJobDurationUsec;
@property(nonatomic) _Bool hasNoncriticalStartupWhitelistLabel; // @dynamic hasNoncriticalStartupWhitelistLabel;
@property(nonatomic) long long jobDurationUsec; // @dynamic jobDurationUsec;
@property(nonatomic) int noncriticalStartupWhitelistLabel; // @dynamic noncriticalStartupWhitelistLabel;

@end

