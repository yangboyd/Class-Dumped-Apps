//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEPOIUtils : NSObject
{
}

+ (long long)locationAccuracyForLocation:(id)arg1;
+ (_Bool)hasValidVisitCountForPOIInfo:(id)arg1;
+ (id)displayedCountForPOIInfo:(id)arg1 needTranslation:(_Bool)arg2 shouldDistanceTextWithThere:(_Bool)arg3;
+ (id)displayedCountForPOIInfo:(id)arg1 needTranslation:(_Bool)arg2;
+ (id)displayedCountForPOIInfo:(id)arg1;
+ (id)formattedPriceFrom:(id)arg1;
+ (double)distanceFromCurrentLocationToLocation:(id)arg1;
+ (id)distanceKmForAweme:(id)arg1;
+ (_Bool)isCurrentLocationShouldShowCouponWithReleaseAreas:(id)arg1;
+ (_Bool)isForceInTheSameCity;
+ (void)disableForceInTheSameCity;
+ (void)enableForceInTheSameCity;
+ (_Bool)isCurrentLocationInTheSameCityWithPOICityCode:(id)arg1 poiLatitude:(double)arg2 poiLongitude:(double)arg3;
+ (_Bool)isCurrentLocationInTheSameCityWithPOI:(id)arg1;
+ (_Bool)isCurrentLocationInTheSameCityWithTargetCity:(id)arg1 targetLocation:(id)arg2;
+ (_Bool)shouldShowSubtitleForPOI:(id)arg1;
+ (_Bool)shouldShowSubtitleForLocation:(id)arg1 subtitle:(id)arg2 subtitleType:(unsigned long long)arg3 isCurrentLocationShouldShowCoupon:(_Bool)arg4;
+ (double)maxZoomLevel;
+ (id)entryDistanceDescriptionForLabelWithPOIInfo:(id)arg1 useDistance:(_Bool)arg2;
+ (id)entryDistanceDescriptionForPOIInfo:(id)arg1;
+ (id)entryDistanceDescriptionForTargetCity:(id)arg1 targetLocation:(id)arg2;
+ (id)cityInfo;
+ (void)saveCurrentCity:(id)arg1;
+ (id)currentLocationCityCode;
+ (id)currentLocationCity;
+ (id)etaStringForTime:(double)arg1;
+ (void)handleCallActionForPhoneNumbers:(id)arg1 inViewController:(id)arg2;
+ (_Bool)hasValidPhoneNumber:(id)arg1;
+ (void)judgeIsCurrentPositionInTheSameCityWithPOICityCode:(id)arg1 longitude:(long long)arg2 latitude:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)judgeIsCurrentPositionInTheSameCityWithPOI:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateMapRatioForCoordinate:(struct CLLocationCoordinate2D)arg1 isLocal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateMapRatioForPOICityCode:(id)arg1 longitude:(long long)arg2 latitude:(long long)arg3 isLocal:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)getLocationDescriptionFromCurrentLocationToPOI:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)distanceFromLocation:(id)arg1 toLocation:(id)arg2;
+ (id)distanceTagFromCurrentLocationToLatitude:(double)arg1 longitude:(double)arg2;
+ (void)calculateDistanceFromCurrentLocationToPOI:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)distanceFromCurrentLocationToLatitude:(double)arg1 longitude:(double)arg2;
+ (id)workDays;
+ (id)businessDaysDescriptionFromBusinessDays:(id)arg1;
+ (_Bool)isReferFromPOI:(id)arg1;
+ (void)goToMapWithPOIInfo:(id)arg1 isLocal:(_Bool)arg2 trackInfo:(id)arg3 aroundHotPoiCount:(int)arg4 refer:(id)arg5;

@end

