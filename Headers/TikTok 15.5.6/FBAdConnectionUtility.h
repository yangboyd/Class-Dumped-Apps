//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdConnectionUtility : NSObject
{
}

+ (void)setCachedResponse:(id)arg1 forEnvironmentData:(id)arg2;
+ (id)cachedResponseForEnvironmentData:(id)arg1;
+ (long long)getLastRefreshThresholdForEnvironmentData:(id)arg1;
+ (void)setLastRefreshThreshold:(long long)arg1 forEnvironmentData:(id)arg2;
+ (id)sharedLastRefreshThresholdMap;
+ (id)getLastLoadTimeForEnvironmentData:(id)arg1;
+ (void)setLastLoadTime:(id)arg1 forEnvironmentData:(id)arg2;
+ (id)sharedLastLoadTimeMap;
+ (_Bool)shouldThrottleFrequentLoadForEnvironmentData:(id)arg1;
+ (void)setForceThrottle:(id)arg1;
+ (id)forceThrottle;
+ (id)sharedLock;

@end

