//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GHCGetActivityZoneRenderDataResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int activityZoneColor; // @dynamic activityZoneColor;
@property(copy, nonatomic) NSString *activityZoneLabel; // @dynamic activityZoneLabel;
@property(retain, nonatomic) NSMutableArray *activityZonePointCoordinatesArray; // @dynamic activityZonePointCoordinatesArray;
@property(readonly, nonatomic) unsigned long long activityZonePointCoordinatesArray_Count; // @dynamic activityZonePointCoordinatesArray_Count;

@end

