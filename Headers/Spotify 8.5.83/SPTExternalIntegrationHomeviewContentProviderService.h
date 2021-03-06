//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTExternalIntegrationContentProvider-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTDataLoader, SPTExternalIntegrationHomeviewContentFactory, SPTPersistentCache;
@protocol SPTExternalIntegrationContentService, SPTExternalIntegrationPlaybackService, SPTExternalIntegrationTestManager, SPTExternalIntegrationTestManagerService, SPTGLUEService, SPTNetworkService, SPTOnDemandService, _TtP18CoreSessionFeature21SPTCoreSessionService_;

@interface SPTExternalIntegrationHomeviewContentProviderService : NSObject <SPTDataLoaderDelegate, SPTService, SPTExternalIntegrationContentProvider>
{
    SPTPersistentCache *_persistentCache;
    id <_TtP18CoreSessionFeature21SPTCoreSessionService_> _coreSessionService;
    id <SPTExternalIntegrationContentService> _contentService;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTNetworkService> _networkService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTGLUEService> _glueService;
    id <SPTExternalIntegrationTestManagerService> _testManagerService;
    SPTExternalIntegrationHomeviewContentFactory *_contentFactory;
    SPTDataLoader *_dataLoader;
    id <SPTExternalIntegrationTestManager> _testManager;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTExternalIntegrationTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTExternalIntegrationHomeviewContentFactory *contentFactory; // @synthesize contentFactory=_contentFactory;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationTestManagerService> testManagerService; // @synthesize testManagerService=_testManagerService;
@property(readonly, nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentService> contentService; // @synthesize contentService=_contentService;
@property(readonly, nonatomic) __weak id <_TtP18CoreSessionFeature21SPTCoreSessionService_> coreSessionService; // @synthesize coreSessionService=_coreSessionService;
- (id)cacheKey:(id)arg1;
- (id)remoteHomeviewContentURL;
- (void)handleErrorResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)handleSuccessfulResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)createPlaceholderContentItemForURI:(id)arg1;
- (void)resolveChildContentOfParentWithURI:(id)arg1 options:(id)arg2 requestOrigin:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (long long)priorityForChildContentOfParentWithURI:(id)arg1;
- (void)resolveContentWithURI:(id)arg1 options:(id)arg2 requestOrigin:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (long long)priorityForContentWithURI:(id)arg1;
- (id)persistentCacheOptions;
@property(readonly, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

