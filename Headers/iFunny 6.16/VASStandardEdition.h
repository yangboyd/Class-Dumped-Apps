//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VASStandardEdition : NSObject
{
}

+ (int)mapVASLogLevelToFlurry;
+ (_Bool)dataSaleOptOutFromVASAds:(id)arg1;
+ (id)gdprConsentMapFromVASAds:(id)arg1;
+ (id)isGDPRScopeFromVASAds:(id)arg1;
+ (id)flurryAPIKeyFromVASAds:(id)arg1;
+ (_Bool)startFlurrySessionWithFlurryKey:(id)arg1 flurrySessionBuilder:(id)arg2;
+ (id)initializeFlurrySessionBuilderWithVASAds:(id)arg1;
+ (_Bool)isFlurrySessionActive;
+ (_Bool)isFlurryLibraryPresent;
+ (_Bool)initializeFlurryAnalyticsWithVASAds:(id)arg1;
+ (id)logger;
+ (void)setEditionInfo:(id)arg1;
+ (_Bool)initializeWithSiteId:(id)arg1 VASAds:(id)arg2;
+ (_Bool)initializeWithSiteId:(id)arg1;

@end

