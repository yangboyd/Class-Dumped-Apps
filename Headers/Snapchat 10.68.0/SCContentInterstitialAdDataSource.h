//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAdDataSource.h"

#import "SCOperaPlaylistAdInsertionProtocol-Protocol.h"

@class NSMutableSet, NSString, SCContentInterstitialAdConfiguration, SCOperaPlaylistItem, SCWeakTimer;

@interface SCContentInterstitialAdDataSource : SCAdDataSource <SCOperaPlaylistAdInsertionProtocol>
{
    NSMutableSet *_disallowAdAfterGroupIds;
    NSMutableSet *_insertedAdAfterGroupIds;
    NSMutableSet *_viewedSessionAdGroupIds;
    NSMutableSet *_viewedNonAdGroupIds;
    NSMutableSet *_viewedNonAdItemIds;
    NSMutableSet *_viewedAdItemIds;
    SCContentInterstitialAdConfiguration *_adConfiguration;
    SCOperaPlaylistItem *_previousViewedItem;
    SCWeakTimer *_insertionRetryTimer;
}

- (void).cxx_destruct;
- (void)_retryInsertion:(id)arg1;
- (void)_scheduleRetryInsertionAfterItem:(id)arg1 delaySec:(double)arg2;
- (void)_handleMediaFetchComplete;
- (void)_makeAdRequestIfNecessary;
- (void)_insertAdIfNecessaryAfterItem:(id)arg1;
- (void)_setAdRules;
- (id)unviewedAdData;
- (id)adSkipEvent;
- (id)adViewContextForGroup:(id)arg1;
- (_Bool)isAdContentLoopingForDataModel:(id)arg1;
- (id)extraPagePropertiesForDataModel:(id)arg1;
- (_Bool)shouldInsertPlaylistItemGroup;
- (_Bool)shouldInsertPlaylistItem;
- (void)resetInsertionData;
- (id)mediaLoadContexts;
- (unsigned long long)adProductType;
- (id)targetingParameters;
- (_Bool)isRetryInsertionEnabled;
- (void)stopViewingOptOutInterstitialForPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (void)startViewingPlaylistItem:(id)arg1 context:(id)arg2;
- (void)startViewingPlaylistItemGroup:(id)arg1 previousItemGroup:(id)arg2 currentItem:(id)arg3;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 adTrackerHelper:(id)arg3 adConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

