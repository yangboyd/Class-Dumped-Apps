//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSData, NSString;

@interface GMSx_GMTTTodoListOptions : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *continuationToken; // @dynamic continuationToken;
@property(copy, nonatomic) NSData *filterToken; // @dynamic filterToken;
@property(nonatomic) _Bool hasContinuationToken; // @dynamic hasContinuationToken;
@property(nonatomic) _Bool hasFilterToken; // @dynamic hasFilterToken;
@property(nonatomic) _Bool hasIncludePlacePhotos; // @dynamic hasIncludePlacePhotos;
@property(nonatomic) _Bool hasNum; // @dynamic hasNum;
@property(nonatomic) _Bool hasNumRecentVisits; // @dynamic hasNumRecentVisits;
@property(nonatomic) _Bool hasNumUserPlacePhotos; // @dynamic hasNumUserPlacePhotos;
@property(nonatomic) _Bool hasRelatedFeatureId; // @dynamic hasRelatedFeatureId;
@property(nonatomic) _Bool includePlacePhotos; // @dynamic includePlacePhotos;
@property(nonatomic) int num; // @dynamic num;
@property(nonatomic) int numRecentVisits; // @dynamic numRecentVisits;
@property(nonatomic) int numUserPlacePhotos; // @dynamic numUserPlacePhotos;
@property(copy, nonatomic) NSString *relatedFeatureId; // @dynamic relatedFeatureId;

@end

