//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIVSS3SchedulingConfig;

@interface YTIVSS3Config : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSerializedWatchTimeContextData; // @dynamic hasSerializedWatchTimeContextData;
@property(nonatomic) _Bool hasUseDoubleLogging; // @dynamic hasUseDoubleLogging;
@property(nonatomic) _Bool hasVss3SchedulingConfig; // @dynamic hasVss3SchedulingConfig;
@property(copy, nonatomic) NSData *serializedWatchTimeContextData; // @dynamic serializedWatchTimeContextData;
@property(nonatomic) _Bool useDoubleLogging; // @dynamic useDoubleLogging;
@property(retain, nonatomic) YTIVSS3SchedulingConfig *vss3SchedulingConfig; // @dynamic vss3SchedulingConfig;

@end

