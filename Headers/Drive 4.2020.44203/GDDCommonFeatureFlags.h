//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMUpdatableResource.h"

@interface GDDCommonFeatureFlags : GMUpdatableResource
{
}

+ (id)featureFlags;
@property(readonly, nonatomic) _Bool disableMemoryStatistics;
@property(readonly, nonatomic) _Bool disableSignalCrashReporting;
@property(readonly, nonatomic) _Bool disableUnicorn;
@property(readonly, nonatomic) _Bool disablePrimes;
@property(readonly, nonatomic) _Bool disableMDM;
@property(readonly, nonatomic) long long cacheMaxSizeThumbnailCacheMb;
@property(readonly, nonatomic) double maximumBackgroundFetchTimeMobile;
@property(readonly, nonatomic) double maximumBackgroundFetchTimeWifi;
- (id)init;

@end

