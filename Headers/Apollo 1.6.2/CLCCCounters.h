//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSData, NSMutableArray, NSString;

@interface CLCCCounters : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *counterArray; // @dynamic counterArray;
@property(readonly, nonatomic) unsigned long long counterArray_Count; // @dynamic counterArray_Count;
@property(copy, nonatomic) NSData *dimensionsInstance; // @dynamic dimensionsInstance;
@property(copy, nonatomic) NSString *dimensionsInstanceJs; // @dynamic dimensionsInstanceJs;
@property(copy, nonatomic) NSString *dimensionsInstanceJson; // @dynamic dimensionsInstanceJson;
@property(nonatomic) _Bool hasDimensionsInstance; // @dynamic hasDimensionsInstance;
@property(nonatomic) _Bool hasDimensionsInstanceJs; // @dynamic hasDimensionsInstanceJs;
@property(nonatomic) _Bool hasDimensionsInstanceJson; // @dynamic hasDimensionsInstanceJson;
@property(nonatomic) _Bool hasTimestampMillis; // @dynamic hasTimestampMillis;
@property(nonatomic) _Bool hasUptimeMillis; // @dynamic hasUptimeMillis;
@property(nonatomic) long long timestampMillis; // @dynamic timestampMillis;
@property(nonatomic) long long uptimeMillis; // @dynamic uptimeMillis;

@end

