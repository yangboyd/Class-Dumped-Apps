//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@interface SLESSendKitMetricsLatency : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cacheStatus; // @dynamic cacheStatus;
@property(nonatomic) _Bool hasCacheStatus; // @dynamic hasCacheStatus;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasLatencyUsec; // @dynamic hasLatencyUsec;
@property(nonatomic) int label; // @dynamic label;
@property(nonatomic) long long latencyUsec; // @dynamic latencyUsec;

@end

