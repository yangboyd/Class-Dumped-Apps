//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, SCSnapAds;

@interface SCSnapAdsDiscoverAdResolver : NSObject
{
    NSMutableSet *_pendingAdRequests;
    SCSnapAds *_snapAds;
    NSMutableDictionary *_snapAdsAdlisteners;
    NSMutableDictionary *_adRequestClientIdToAdResponseMap;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)onAdRequestFailure:(id)arg1 adPlacement:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)onAdRequestSuccess:(id)arg1 adPlacement:(id)arg2 predownloadAdCount:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)getAdProductTypeForAdRequestClientId:(id)arg1;
- (long long)getAdTypeForAdRequestClientId:(id)arg1;
- (id)getAdToLensModelForAdRequestClientId:(id)arg1;
- (id)getPoliticalAdPayingAdvertiserNameForAdRequestClientId:(id)arg1;
- (id)getAdHeadlineForAdRequestClientId:(id)arg1;
- (id)getAdBrandNameForAdRequestClientId:(id)arg1;
- (id)adResponseForAdRequestClientId:(id)arg1;
- (void)clear:(id)arg1;
- (void)resolveAd:(id)arg1 listener:(id)arg2 predownloadAdCount:(long long)arg3 loggingContext:(id)arg4 isShow:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)resolveAds:(id)arg1 listenerList:(id)arg2 loggingContext:(id)arg3 isShow:(_Bool)arg4;
- (id)init;

@end

