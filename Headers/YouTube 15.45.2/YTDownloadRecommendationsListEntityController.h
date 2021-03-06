//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMainVideoEntityShimControllerObserver-Protocol.h"
#import "YTOfflineEntityController-Protocol.h"
#import "YTOfflineVideoControllerObserver-Protocol.h"

@class GIMMe, NSString, YTDownloadRecommendationsInStore, YTDownloadRecommendationsReceived, YTDownloadRecommendationsService, YTOfflineVideoController, YTOfflineVideoListController, YTUserDefaults;
@protocol OS_dispatch_queue, YTIdentityScopedPersistentEntityStoreProvider;

@interface YTDownloadRecommendationsListEntityController : NSObject <YTMainVideoEntityShimControllerObserver, YTOfflineVideoControllerObserver, YTOfflineEntityController>
{
    YTDownloadRecommendationsService *_recommendationsService;
    YTUserDefaults *_userDefaults;
    YTOfflineVideoController *_offlineVideoController;
    YTOfflineVideoListController *_offlineVideoListController;
    id <YTIdentityScopedPersistentEntityStoreProvider> _identityScopedPersistentEntityStoreProvider;
    YTDownloadRecommendationsReceived *_recsReceivedStreamz;
    YTDownloadRecommendationsInStore *_recsInStoreStreamz;
    NSObject<OS_dispatch_queue> *_queue;
    GIMMe *_gimme;
}

+ (id)offlineVideoDataFromRecVideoModel:(id)arg1;
+ (long long)entityType;
+ (id)listEntityKey;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)logRecommendationCountsFromResponseCount:(unsigned long long)arg1 updatedVideoList:(id)arg2;
- (id)getEntityKeysOfType:(unsigned int)arg1 forIdentity:(id)arg2;
- (void)removeRecommendedVideoEntityWithID:(id)arg1 forIdentity:(id)arg2;
- (void)clearRecommendationsForIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeRecsEntitiesUnreferencedInListProto:(id)arg1 updateListEntity:(_Bool)arg2 identity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeRecsEntitiesUnreferencedInList:(id)arg1 orStartedInOfflineVideoList:(id)arg2 fromListDeletion:(_Bool)arg3 identity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateOfflineStoreAndGCEntitiesFromListDeletion:(_Bool)arg1 identity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateRecsListRefreshInterval:(unsigned int)arg1;
- (void)didSaveVideoFromRecommendedDownloadWithID:(id)arg1;
- (void)didDeleteAllOfflineVideosWithIDs:(id)arg1;
- (void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideoWithID:(id)arg3;
- (id)handleAction:(id)arg1 actionID:(id)arg2 forIdentity:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

