//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRUserLocation_ApiBatch, GTLRUserLocation_ApiClientInfo, NSNumber;

@interface GTLRUserLocation_ReportApiBatchRequest : GTLRObject
{
}

+ (id)userDataRequestWithType:(id)arg1 data:(id)arg2 timestamp:(id)arg3 location:(id)arg4;

// Remaining properties
@property(retain, nonatomic) GTLRUserLocation_ApiBatch *batch; // @dynamic batch;
@property(retain, nonatomic) GTLRUserLocation_ApiClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) NSNumber *deviceTimeMs; // @dynamic deviceTimeMs;
@property(retain, nonatomic) NSNumber *settingsLastKnownTimestampMs; // @dynamic settingsLastKnownTimestampMs;

@end

