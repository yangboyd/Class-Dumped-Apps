//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@interface CHRWatchCommunicationEvent_MessagePerformanceInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int clientLatency; // @dynamic clientLatency;
@property(nonatomic) _Bool hasClientLatency; // @dynamic hasClientLatency;
@property(nonatomic) _Bool hasInitiatingMessageLatency; // @dynamic hasInitiatingMessageLatency;
@property(nonatomic) _Bool hasInitiatingMessageSize; // @dynamic hasInitiatingMessageSize;
@property(nonatomic) _Bool hasResponseMessageLatency; // @dynamic hasResponseMessageLatency;
@property(nonatomic) _Bool hasResponseMessageSize; // @dynamic hasResponseMessageSize;
@property(nonatomic) int initiatingMessageLatency; // @dynamic initiatingMessageLatency;
@property(nonatomic) int initiatingMessageSize; // @dynamic initiatingMessageSize;
@property(nonatomic) int responseMessageLatency; // @dynamic responseMessageLatency;
@property(nonatomic) int responseMessageSize; // @dynamic responseMessageSize;

@end

