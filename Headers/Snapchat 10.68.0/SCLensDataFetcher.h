//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataFetcher-Protocol.h"
#import "SCLensLoadingQueueDelegate-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"
#import "SCManagedDatastore-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, SCExperimentManager, SCFeatureSettingsManager, SCLensBlobDataFetcher, SCLensCacheClearTracker, SCLensDataFetcherListenerAnnouncer, SCLensDownloadOperationFactory, SCLensDownloadTracker, SCLensFetchingRanker, SCLensFetchingThrottler, SCLensLoadingQueue, SCLensURLDataFetcher, SCRequestManager;
@protocol SCLensUserProvider, SCPerforming;

@interface SCLensDataFetcher : NSObject <SCUserSessionScoped, SCLensLoadingQueueDelegate, SCLensDataFetcher, SCLensUIUpdateListener, SCManagedDatastore>
{
    id <SCPerforming> _performer;
    SCLensDownloadOperationFactory *_operationsFactory;
    SCLensDataFetcherListenerAnnouncer *_announcer;
    SCLensLoadingQueue *_contentQueue;
    SCLensLoadingQueue *_imageQueue;
    SCLensLoadingQueue *_assetsQueue;
    SCLensLoadingQueue *_filterOverlayImageQueue;
    SCLensLoadingQueue *_warmupQueue;
    NSArray *_allQueues;
    SCRequestManager *_requestManager;
    SCLensURLDataFetcher *_urlDataFetcher;
    SCLensBlobDataFetcher *_blobDataFetcher;
    SCFeatureSettingsManager *_featureSettingsManager;
    SCLensDownloadTracker *_downloadTracker;
    SCLensCacheClearTracker *_cacheClearTracker;
    SCExperimentManager *_experimentManager;
    NSString *_currentSelectedLensId;
    NSMutableDictionary *_visibleLenses;
    NSMutableSet *_explicitlySelectedLensIds;
    NSMutableDictionary *_lensIdsToVisibleIndexes;
    id <SCLensUserProvider> _lensUserProvider;
    SCLensFetchingThrottler *_throttler;
    SCLensFetchingRanker *_ranker;
    long long _freeDiskSpaceInMB;
}

+ (id)_unableToCreateOperationError;
@property(nonatomic) long long freeDiskSpaceInMB; // @synthesize freeDiskSpaceInMB=_freeDiskSpaceInMB;
@property(retain, nonatomic) SCLensFetchingRanker *ranker; // @synthesize ranker=_ranker;
@property(retain, nonatomic) SCLensFetchingThrottler *throttler; // @synthesize throttler=_throttler;
@property(readonly, nonatomic) id <SCLensUserProvider> lensUserProvider; // @synthesize lensUserProvider=_lensUserProvider;
@property(retain, nonatomic) NSMutableDictionary *lensIdsToVisibleIndexes; // @synthesize lensIdsToVisibleIndexes=_lensIdsToVisibleIndexes;
@property(retain, nonatomic) NSMutableSet *explicitlySelectedLensIds; // @synthesize explicitlySelectedLensIds=_explicitlySelectedLensIds;
@property(retain, nonatomic) NSMutableDictionary *visibleLenses; // @synthesize visibleLenses=_visibleLenses;
@property(retain, nonatomic) NSString *currentSelectedLensId; // @synthesize currentSelectedLensId=_currentSelectedLensId;
@property(retain, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(retain, nonatomic) SCLensCacheClearTracker *cacheClearTracker; // @synthesize cacheClearTracker=_cacheClearTracker;
@property(retain, nonatomic) SCLensDownloadTracker *downloadTracker; // @synthesize downloadTracker=_downloadTracker;
@property(retain, nonatomic) SCFeatureSettingsManager *featureSettingsManager; // @synthesize featureSettingsManager=_featureSettingsManager;
@property(retain, nonatomic) SCLensBlobDataFetcher *blobDataFetcher; // @synthesize blobDataFetcher=_blobDataFetcher;
@property(retain, nonatomic) SCLensURLDataFetcher *urlDataFetcher; // @synthesize urlDataFetcher=_urlDataFetcher;
@property(retain, nonatomic) SCRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) NSArray *allQueues; // @synthesize allQueues=_allQueues;
@property(retain, nonatomic) SCLensLoadingQueue *warmupQueue; // @synthesize warmupQueue=_warmupQueue;
@property(retain, nonatomic) SCLensLoadingQueue *filterOverlayImageQueue; // @synthesize filterOverlayImageQueue=_filterOverlayImageQueue;
@property(retain, nonatomic) SCLensLoadingQueue *assetsQueue; // @synthesize assetsQueue=_assetsQueue;
@property(retain, nonatomic) SCLensLoadingQueue *imageQueue; // @synthesize imageQueue=_imageQueue;
@property(retain, nonatomic) SCLensLoadingQueue *contentQueue; // @synthesize contentQueue=_contentQueue;
@property(retain, nonatomic) SCLensDataFetcherListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) SCLensDownloadOperationFactory *operationsFactory; // @synthesize operationsFactory=_operationsFactory;
@property(readonly, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void).cxx_destruct;
- (id)_scheduleFilterOverlayDownloadingForLens:(id)arg1 requestTiming:(long long)arg2;
- (id)_scheduleIconDownloadingForLens:(id)arg1 requestTiming:(long long)arg2;
- (id)_scheduleContentDownloadingForLens:(id)arg1 requestTiming:(long long)arg2;
- (void)_logCacheSize;
- (void)_fetchVisibleLensesIfNeeded;
- (id)checkCacheAndScheduleOperationIfNeeded:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (id)reportMetrics;
- (void)removeAllUserSessionDataAsync:(id)arg1;
- (void)removeExpiredContentAsync:(id)arg1 reason:(unsigned long long)arg2 dispatchGroup:(id)arg3;
- (void)handleEmergencyDiskConditionWithDispatchGroup:(id)arg1;
- (id)kindName;
- (void)clear;
- (void)_didFinishUpdatingVisibleLens;
- (void)_notifyVisibleLensUpdatedEvent;
- (void)willShowLenses;
- (void)didHideLenses;
- (void)didSelectLens:(id)arg1;
- (void)didEndDisplayingLens:(id)arg1;
- (void)willDisplayLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)queue:(id)arg1 didFinishOperation:(id)arg2 result:(id)arg3;
- (void)queue:(id)arg1 willStartOperation:(id)arg2;
- (void)clearCacheWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)clearCacheFromTweaks;
- (void)clearInMemoryCache;
- (void)removeExpiredData:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeDownloads;
- (void)pauseDownloads;
- (void)cancelDownloads;
- (void)fetchLenses:(id)arg1;
- (void)fetchAsset:(id)arg1 lens:(id)arg2 completionPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchContentForLens:(id)arg1 requestTiming:(long long)arg2;
- (void)fetchLenses:(id)arg1 requestTiming:(long long)arg2;
- (id)initWithFeatureSettingsManager:(id)arg1 downloadTracker:(id)arg2 cacheClearTracker:(id)arg3 urlDataFetcher:(id)arg4 blobDataFetcher:(id)arg5 operationsFactory:(id)arg6 performer:(id)arg7 lensUserProvider:(id)arg8 experimentManager:(id)arg9;
- (void)invalidate;
- (long long)lensContentFetchPolicyForOperation:(id)arg1 requestTiming:(long long)arg2;
- (long long)lensDataFetchPolicy:(id)arg1 requestTiming:(long long)arg2;
- (long long)lensFetchPolicyForOperation:(id)arg1 requestTiming:(long long)arg2;
- (long long)fallbackPriorityForLens:(id)arg1 requestTiming:(long long)arg2;
- (long long)requestPriorityForLens:(id)arg1 requestTiming:(long long)arg2;
- (CDUnknownBlockType)warmupOperationsSettingsBlock;
- (CDUnknownBlockType)assetDownloadOperationsSettingsBlock;
- (CDUnknownBlockType)lensOverlayDownloadOperationsSettingsBlock;
- (CDUnknownBlockType)lensIconDownloadOperationsSettingsBlock;
- (CDUnknownBlockType)lensContentDownloadOperationsSettingsBlock;
- (CDUnknownBlockType)warmupOrderingComparator;
- (CDUnknownBlockType)orderingComparatorV2;
- (CDUnknownBlockType)orderingComparator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

