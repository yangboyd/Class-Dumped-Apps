//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GWCExposedPort : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool exposeTcp; // @dynamic exposeTcp;
@property(nonatomic) _Bool exposeUdp; // @dynamic exposeUdp;
@property(nonatomic) int ipVersion; // @dynamic ipVersion;
@property(nonatomic) int ipv4WanStartPort; // @dynamic ipv4WanStartPort;
@property(nonatomic) int stationEndPort; // @dynamic stationEndPort;
@property(copy, nonatomic) NSString *stationId; // @dynamic stationId;
@property(nonatomic) int stationStartPort; // @dynamic stationStartPort;

@end

