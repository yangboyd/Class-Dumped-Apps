//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGExploreNetworkerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGExploreTopicDataControllerDelegate-Protocol.h>

@class IGAnnouncer, IGDiscoveryGridDataValidationBehavior, IGExploreNetworkFetchState, IGExploreNetworker, IGExploreNetworkerSessionScopedObjects, IGExploreTopicStore, IGSessionTracker, NSMutableDictionary, NSString;

@interface IGExploreDataController : NSObject <IGExploreTopicDataControllerDelegate, IGExploreNetworkerDelegate>
{
    IGExploreNetworkerSessionScopedObjects *_sessionScopedObjects;
    IGExploreNetworker *_networker;
    IGSessionTracker *_sessionTracker;
    IGAnnouncer *_announcer;
    NSMutableDictionary *_topicIdToDataControllerMap;
    NSMutableDictionary *_topicIdToAnnouncerMap;
    CDStruct_3894cc73 _configuration;
    IGDiscoveryGridDataValidationBehavior *_validationBehavior;
    CDUnknownBlockType _dataTransform;
    _Bool _hasLoadedTopicsOnce;
    IGExploreTopicStore *_topicStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasLoadedTopicsOnce; // @synthesize hasLoadedTopicsOnce=_hasLoadedTopicsOnce;
@property(readonly, nonatomic) IGExploreTopicStore *topicStore; // @synthesize topicStore=_topicStore;
- (void)_ensureTopicStoreMembershipForTopic:(id)arg1;
- (void)exploreTopicDataController:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)exploreTopicDataController:(id)arg1 didUpdateDataStore:(id)arg2;
- (void)exploreNetworker:(id)arg1 didFailTopicsRequestWithError:(id)arg2;
- (void)exploreNetworker:(id)arg1 didCompleteRequestWithResponse:(id)arg2 config:(id)arg3;
- (void)_updateTopicStoreFromTopics:(id)arg1 firstTopicNetworkResponse:(id)arg2;
- (id)_announcerForTopicIfLoaded:(id)arg1;
- (id)_announcerForTopic:(id)arg1;
- (id)_dataControllerForTopic:(id)arg1;
- (void)removeListener:(id)arg1 forTopic:(id)arg2;
- (void)addListener:(id)arg1 forTopic:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)requestFeedForTopic:(id)arg1 withConfig:(id)arg2;
@property(readonly, nonatomic) _Bool isFetchingTopics;
@property(readonly, nonatomic) IGExploreNetworkFetchState *topicsFetchState;
- (_Bool)hasLoadedFeedOnceForTopic:(id)arg1;
- (_Bool)isFetchingFeedForTopic:(id)arg1;
- (id)fetchStateForTopic:(id)arg1;
- (void)updateDataStore:(id)arg1 forTopic:(id)arg2;
- (id)firstItemMatchingPredicate:(CDUnknownBlockType)arg1 forTopic:(id)arg2;
- (id)dataStoreForTopic:(id)arg1;
- (_Bool)requestTopicsWithConfig:(id)arg1;
- (id)initWithSessionScopedObjects:(id)arg1 configuration:(CDStruct_3d581f42)arg2 sessionTracker:(id)arg3 validationBehavior:(id)arg4 dataTransform:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

