//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserSessionEndingObject-Protocol.h>

@class IGARAssetsStorageProvider, IGCameraLogger, NSString;
@protocol FBARAssetsManager, FBAREffectsManager, FBARModelManager, FBCancelable, OS_dispatch_queue;

@interface IGARDeliveryFacade : NSObject <IGUserSessionEndingObject>
{
    id <FBARModelManager> _arModelManager;
    IGARAssetsStorageProvider *_storageProvider;
    NSObject<OS_dispatch_queue> *_queue;
    id <FBCancelable> _cancelableForInflightAREffectFetch;
    NSString *_assetIDForInflightAREffectFetch;
    IGCameraLogger *_cameraLogger;
    id <FBAREffectsManager> _arEffectsManager;
    shared_ptr_614878a6 _rawEventLogger;
    id <FBARAssetsManager> _arAssetsManager;
}

@property(readonly, nonatomic) id <FBARAssetsManager> arAssetsManager; // @synthesize arAssetsManager=_arAssetsManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handleCompletionOfFetchForAREffectFromLoadState:(id)arg1 fileResource:(id)arg2 downloadError:(id)arg3 isPrefetch:(_Bool)arg4 competion:(CDUnknownBlockType)arg5;
- (void)_deprecated_handleCompletionOfPrefetch:(struct PrefetchRequest)arg1 completionPayload:(struct CompletionPayload)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchUserRequestedAREffectFromLoadState:(id)arg1 modelPaths:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prefetchAREffectFromLoadStates:(id)arg1 totalProgressBlock:(CDUnknownBlockType)arg2 assetProgressBlock:(CDUnknownBlockType)arg3 modelPaths:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_deprecated_prefetchModelAssets:(id)arg1 categoryType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)userSessionWillEnd;
@property(readonly, nonatomic) _Bool shouldUseEffectsManager;
- (void)clearCacheForCategory:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearCacheWithCompletion:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)fetchUserRequestedAREffectFromLoadState:(id)arg1 modelPaths:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prefetchAREffectFromLoadStates:(id)arg1 totalProgressBlock:(CDUnknownBlockType)arg2 assetProgressBlock:(CDUnknownBlockType)arg3 modelPaths:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchLatestModelsForCapabilities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deprecated_prefetchModelAssets:(id)arg1 category:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithStorageProvider:(id)arg1 assetsManager:(id)arg2 modelManager:(id)arg3 effectsManager:(id)arg4 cameraLogger:(id)arg5 rawEventLogger:(shared_ref_c47c2ea2)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

