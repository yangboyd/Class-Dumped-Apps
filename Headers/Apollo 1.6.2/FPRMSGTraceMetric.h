//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GPBStringInt64Dictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface FPRMSGTraceMetric : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientStartTimeUs; // @dynamic clientStartTimeUs;
@property(retain, nonatomic) GPBStringInt64Dictionary *counters; // @dynamic counters;
@property(readonly, nonatomic) unsigned long long counters_Count; // @dynamic counters_Count;
@property(retain, nonatomic) NSMutableDictionary *customAttributes; // @dynamic customAttributes;
@property(readonly, nonatomic) unsigned long long customAttributes_Count; // @dynamic customAttributes_Count;
@property(nonatomic) long long durationUs; // @dynamic durationUs;
@property(nonatomic) _Bool hasClientStartTimeUs; // @dynamic hasClientStartTimeUs;
@property(nonatomic) _Bool hasDurationUs; // @dynamic hasDurationUs;
@property(nonatomic) _Bool hasIsAuto; // @dynamic hasIsAuto;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool isAuto; // @dynamic isAuto;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *perfSessionsArray; // @dynamic perfSessionsArray;
@property(readonly, nonatomic) unsigned long long perfSessionsArray_Count; // @dynamic perfSessionsArray_Count;
@property(retain, nonatomic) NSMutableArray *subtracesArray; // @dynamic subtracesArray;
@property(readonly, nonatomic) unsigned long long subtracesArray_Count; // @dynamic subtracesArray_Count;

@end

