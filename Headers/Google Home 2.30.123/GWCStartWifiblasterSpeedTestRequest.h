//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GWCStartWifiblasterSpeedTestRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *apId; // @dynamic apId;
@property(retain, nonatomic) NSMutableArray *stationIdsArray; // @dynamic stationIdsArray;
@property(readonly, nonatomic) unsigned long long stationIdsArray_Count; // @dynamic stationIdsArray_Count;

@end

