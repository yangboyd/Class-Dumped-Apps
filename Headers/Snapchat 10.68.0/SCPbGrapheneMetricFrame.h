//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCPbGrapheneAppVersion;

@interface SCPbGrapheneMetricFrame : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPbGrapheneAppVersion *appVersion; // @dynamic appVersion;
@property(nonatomic) unsigned long long bufferEndTimestampMillis; // @dynamic bufferEndTimestampMillis;
@property(nonatomic) unsigned long long bufferStartTimestampMillis; // @dynamic bufferStartTimestampMillis;
@property(nonatomic) int clientOsType; // @dynamic clientOsType;
@property(retain, nonatomic) NSMutableArray *countersArray; // @dynamic countersArray;
@property(readonly, nonatomic) unsigned long long countersArray_Count; // @dynamic countersArray_Count;
@property(nonatomic) _Bool hasAppVersion; // @dynamic hasAppVersion;
@property(retain, nonatomic) NSMutableArray *levelsArray; // @dynamic levelsArray;
@property(readonly, nonatomic) unsigned long long levelsArray_Count; // @dynamic levelsArray_Count;
@property(nonatomic) unsigned int protocolVersion; // @dynamic protocolVersion;
@property(nonatomic) unsigned int samplingId; // @dynamic samplingId;
@property(retain, nonatomic) NSMutableArray *timersArray; // @dynamic timersArray;
@property(readonly, nonatomic) unsigned long long timersArray_Count; // @dynamic timersArray_Count;
@property(copy, nonatomic) NSString *userName; // @dynamic userName;

@end

