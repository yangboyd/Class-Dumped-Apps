//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCVSDeviceData;

@interface SCVSBatchLocationUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCVSDeviceData *deviceDataUpdate; // @dynamic deviceDataUpdate;
@property(nonatomic) _Bool hasDeviceDataUpdate; // @dynamic hasDeviceDataUpdate;
@property(retain, nonatomic) NSMutableArray *locationUpdateArray; // @dynamic locationUpdateArray;
@property(readonly, nonatomic) unsigned long long locationUpdateArray_Count; // @dynamic locationUpdateArray_Count;

@end

