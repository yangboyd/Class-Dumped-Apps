//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIInnerTubeContext, YTISerializedClientEventId;

@interface YTIEventLoggingRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool enforceShouldCallDistribute; // @dynamic enforceShouldCallDistribute;
@property(nonatomic) _Bool enforceShouldDiffValue; // @dynamic enforceShouldDiffValue;
@property(retain, nonatomic) NSMutableArray *eventsArray; // @dynamic eventsArray;
@property(readonly, nonatomic) unsigned long long eventsArray_Count; // @dynamic eventsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasEnforceShouldCallDistribute; // @dynamic hasEnforceShouldCallDistribute;
@property(nonatomic) _Bool hasEnforceShouldDiffValue; // @dynamic hasEnforceShouldDiffValue;
@property(nonatomic) _Bool hasRequestTimeMs; // @dynamic hasRequestTimeMs;
@property(nonatomic) _Bool hasSerializedClientEventId; // @dynamic hasSerializedClientEventId;
@property(nonatomic) _Bool hasTier; // @dynamic hasTier;
@property(nonatomic) long long requestTimeMs; // @dynamic requestTimeMs;
@property(retain, nonatomic) YTISerializedClientEventId *serializedClientEventId; // @dynamic serializedClientEventId;
@property(nonatomic) int tier; // @dynamic tier;

@end

