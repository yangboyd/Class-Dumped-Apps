//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCContextGeoLocation;

@interface SCContextMap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCContextGeoLocation *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(retain, nonatomic) NSMutableArray *pinsArray; // @dynamic pinsArray;
@property(readonly, nonatomic) unsigned long long pinsArray_Count; // @dynamic pinsArray_Count;
@property(nonatomic) _Bool showAttribution; // @dynamic showAttribution;
@property(nonatomic) float zoomLevel; // @dynamic zoomLevel;

@end

