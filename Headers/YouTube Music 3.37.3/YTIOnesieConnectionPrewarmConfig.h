//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIOnesieConnectionPrewarmConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int connectionKeepaliveSeconds; // @dynamic connectionKeepaliveSeconds;
@property(nonatomic) _Bool hasConnectionKeepaliveSeconds; // @dynamic hasConnectionKeepaliveSeconds;
@property(nonatomic) _Bool hasHostnameTtlSeconds; // @dynamic hasHostnameTtlSeconds;
@property(nonatomic) _Bool hasMaxTimeSinceNetworkUseSeconds; // @dynamic hasMaxTimeSinceNetworkUseSeconds;
@property(nonatomic) _Bool hasPingIntervalSeconds; // @dynamic hasPingIntervalSeconds;
@property(nonatomic) _Bool hasRandomizeRedirectorURLSeconds; // @dynamic hasRandomizeRedirectorURLSeconds;
@property(nonatomic) _Bool hasRedirectorURL; // @dynamic hasRedirectorURL;
@property(nonatomic) _Bool hasRemapOnNetworkChange; // @dynamic hasRemapOnNetworkChange;
@property(nonatomic) _Bool hasStartDelayMs; // @dynamic hasStartDelayMs;
@property(nonatomic) int hostnameTtlSeconds; // @dynamic hostnameTtlSeconds;
@property(retain, nonatomic) NSMutableArray *mappingParamsToCopyArray; // @dynamic mappingParamsToCopyArray;
@property(readonly, nonatomic) unsigned long long mappingParamsToCopyArray_Count; // @dynamic mappingParamsToCopyArray_Count;
@property(nonatomic) int maxTimeSinceNetworkUseSeconds; // @dynamic maxTimeSinceNetworkUseSeconds;
@property(nonatomic) int pingIntervalSeconds; // @dynamic pingIntervalSeconds;
@property(nonatomic) int randomizeRedirectorURLSeconds; // @dynamic randomizeRedirectorURLSeconds;
@property(copy, nonatomic) NSString *redirectorURL; // @dynamic redirectorURL;
@property(nonatomic) _Bool remapOnNetworkChange; // @dynamic remapOnNetworkChange;
@property(nonatomic) int startDelayMs; // @dynamic startDelayMs;

@end

