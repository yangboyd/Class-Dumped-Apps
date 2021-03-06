//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPrefetchedMpdCache, IGVideoProxy, NSMutableDictionary, NSMutableOrderedSet;
@protocol IGUserExperimentSet, IGUserLauncherSet;

@interface IGVideoLivePrefetcher : NSObject
{
    IGPrefetchedMpdCache *_prefetchedMpdCache;
    IGVideoProxy *_videoProxy;
    id <IGUserLauncherSet> _launcherSet;
    id <IGUserExperimentSet> _experimentSet;
    NSMutableOrderedSet *_ongoingRequests;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableOrderedSet *_completedRequests;
    NSMutableDictionary *_urlToInlinedPlaylist;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPrefetchedMpdCache *prefetchedMpdCache; // @synthesize prefetchedMpdCache=_prefetchedMpdCache;
- (void)_startRequestWithUrl:(id)arg1 ignoreCache:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_completedRequestForUrl:(id)arg1;
- (void)_prefetchForRepresentation:(id)arg1 maxSegmentsToFetch:(long long)arg2 mpdUrl:(id)arg3;
- (void)_prefetchSegmentsRefactoredForMpdUrl:(id)arg1 mpdData:(id)arg2;
- (void)_prefetchSegmentsForMpdUrl:(id)arg1 mpdData:(id)arg2;
- (void)_removeOngoingRequestForUrl:(id)arg1 error:(id)arg2;
- (void)_mpdFetchCompletedWithUrl:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)_startMPDRequestWithUrl:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_prefetchLiveMpdUrl:(id)arg1 inlinedPlaylist:(id)arg2;
- (void)prefetchLiveBroadcast:(id)arg1;
- (id)initWithVideoProxy:(id)arg1 launcherSet:(id)arg2 experimentSet:(id)arg3;

@end

