//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXDataModelWithOfflineCache.h"

#import "XBXSLSActivityFeedRequestCallback-Protocol.h"

@class NSArray, NSNumber, NSString;
@protocol SGIUserDataModel, XBXISLSServiceManager;

@interface SGCurrentUserActivityFeedDataModel : XBXDataModelWithOfflineCache <XBXSLSActivityFeedRequestCallback>
{
    _Bool _didLastRequestFail;
    _Bool _isIgnoringCache;
    _Bool _shouldLoadPromotions;
    NSString *_continuationToken;
    NSNumber *_requestSequencdId;
}

@property(retain, nonatomic) NSNumber *requestSequencdId; // @synthesize requestSequencdId=_requestSequencdId;
@property(retain, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(nonatomic) _Bool shouldLoadPromotions; // @synthesize shouldLoadPromotions=_shouldLoadPromotions;
@property(nonatomic) _Bool isIgnoringCache; // @synthesize isIgnoringCache=_isIgnoringCache;
@property(nonatomic) _Bool didLastRequestFail; // @synthesize didLastRequestFail=_didLastRequestFail;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)refresh:(_Bool)arg1 includePromotions:(_Bool)arg2;
- (id)getIdForBroadcastActivity:(id)arg1 forType:(int)arg2;
- (_Bool)hasLocaleChanged;
- (_Bool)currentUserHasGamePass;
- (_Bool)currentUserHasGold;
@property(readonly, nonatomic) __weak id <SGIUserDataModel> currentUserDataModel;
@property(readonly, nonatomic) __weak id <XBXISLSServiceManager> slsServiceManager;
@property(readonly, nonatomic) __weak NSArray *cachedData;
- (void)getFriendsFeedWithContinuationToken:(id)arg1;
- (void)reset;
- (id)failureUpdateNotificationName;
- (id)successUpdateNotificationName;
- (unsigned long long)cacheVersion;
- (id)lastCacheVersionKey;
- (id)getOfflineCacheFileName;
- (unsigned int)cacheValidityInSeconds;
- (void)loadDataFromServer;
- (_Bool)refresh:(_Bool)arg1;
- (void)tryFetchMoreData;
@property(readonly, nonatomic) __weak NSString *activityFeedUpdateFailedNotificationName;
@property(readonly, nonatomic) __weak NSString *activityFeedUpdatedNotificationName;
@property(readonly, nonatomic) __weak NSArray *activityFeedListData;
- (void)filterCachedUserActivityItemsWithPredicate:(id)arg1;
- (id)filterRecommendationFeedItemIfNecessary:(id)arg1;
- (void)removeActivity:(id)arg1;
- (void)onActivityFeedRequestFailed:(id)arg1 withRequestContext:(id)arg2;
- (void)handleActivityFeedResults:(id)arg1 andPromotionsResults:(id)arg2;
- (void)onActivityFeedRequestSucceeded:(id)arg1 withRequestContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

