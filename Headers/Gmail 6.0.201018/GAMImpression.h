//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GAMClientTimingInfo, GAMDImpressionDetails, NSString;

@interface GAMImpression : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientTimeUsec; // @dynamic clientTimeUsec;
@property(retain, nonatomic) GAMClientTimingInfo *clientTimingInfo; // @dynamic clientTimingInfo;
@property(nonatomic) long long endSequenceNumber; // @dynamic endSequenceNumber;
@property(nonatomic) int entryPoint; // @dynamic entryPoint;
@property(nonatomic) long long eventCode; // @dynamic eventCode;
@property(retain, nonatomic) GAMDImpressionDetails *eventDetails; // @dynamic eventDetails;
@property(copy, nonatomic) NSString *eventName; // @dynamic eventName;
@property(nonatomic) _Bool hasClientTimeUsec; // @dynamic hasClientTimeUsec;
@property(nonatomic) _Bool hasClientTimingInfo; // @dynamic hasClientTimingInfo;
@property(nonatomic) _Bool hasEndSequenceNumber; // @dynamic hasEndSequenceNumber;
@property(nonatomic) _Bool hasEntryPoint; // @dynamic hasEntryPoint;
@property(nonatomic) _Bool hasEventCode; // @dynamic hasEventCode;
@property(nonatomic) _Bool hasEventDetails; // @dynamic hasEventDetails;
@property(nonatomic) _Bool hasEventName; // @dynamic hasEventName;
@property(nonatomic) _Bool hasImpressionCode; // @dynamic hasImpressionCode;
@property(nonatomic) _Bool hasLastHeartbeatSequenceNumber; // @dynamic hasLastHeartbeatSequenceNumber;
@property(nonatomic) _Bool hasSequenceNumber; // @dynamic hasSequenceNumber;
@property(nonatomic) _Bool hasStartSequenceNumber; // @dynamic hasStartSequenceNumber;
@property(nonatomic) int impressionCode; // @dynamic impressionCode;
@property(nonatomic) long long lastHeartbeatSequenceNumber; // @dynamic lastHeartbeatSequenceNumber;
@property(nonatomic) long long sequenceNumber; // @dynamic sequenceNumber;
@property(nonatomic) long long startSequenceNumber; // @dynamic startSequenceNumber;

@end

