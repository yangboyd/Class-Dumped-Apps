//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectCacheListener-Protocol.h>

@class IGDirectCache, IGImagePreparer, IGUser, IGVideoLoader, IGVideoProxy, NSMutableDictionary, NSMutableSet, NSString;
@protocol IGUserFeatureSets;

@interface IGDirectVisualMessageViewerPreloader : NSObject <IGDirectCacheListener>
{
    double _viewerWidth;
    long long _initialPrefetchLimit;
    long long _advancePrefetchLimit;
    long long _strongNetworkPrefetchLimitIncrease;
    IGImagePreparer *_imagePreparer;
    IGUser *_user;
    id <IGUserFeatureSets> _featureSets;
    IGVideoProxy *_videoProxy;
    NSMutableSet *_inProgressURLs;
    NSMutableDictionary *_decodedImages;
    IGVideoLoader *_videoLoader;
    NSMutableSet *_inProgressVideos;
    IGDirectCache *_cache;
}

- (void).cxx_destruct;
- (void)directCacheDidUpdateThread:(id)arg1 withAppliedUpdates:(id)arg2;
- (void)directCacheDidRemoveThreadsWithIds:(id)arg1;
- (void)directCacheDidUpdateThreads:(id)arg1;
- (void)_prefetchInboxThreads:(id)arg1 module:(id)arg2;
- (void)_didFinishLoadingURL:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleImageDecoded:(id)arg1 forURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleImageLoadCompletedWithError:(id)arg1 forURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadImageWithURL:(id)arg1 isPrefetch:(_Bool)arg2 cacheFetchType:(long long)arg3 module:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_loadVideo:(id)arg1 module:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prefetchMediaForVisualMessages:(id)arg1 focusedIndex:(long long)arg2 module:(id)arg3;
- (void)beginPrefetchingForCache:(id)arg1 module:(id)arg2;
- (void)loadMediaForVisualMessage:(id)arg1 shouldPrefetchIfPossible:(_Bool)arg2 module:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithViewerWidth:(double)arg1 initialPrefetchLimit:(long long)arg2 advancePrefetchLimit:(long long)arg3 strongNetworkPrefetchLimitIncrease:(long long)arg4 user:(id)arg5 featureSets:(id)arg6 videoProxy:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

