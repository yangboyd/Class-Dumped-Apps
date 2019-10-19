//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCImageFetcherJobDelegate-Protocol.h"

@class GSCImageFetcherHTTPFetcherSession, GSCImageFetcherJobList, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol GTMFetcherAuthorizationProtocol, OS_dispatch_queue;

@interface GSCImageFetcher : NSObject <GSCImageFetcherJobDelegate>
{
    GSCImageFetcherJobList *_runningHighPriorityJobs;
    GSCImageFetcherJobList *_lowPriorityJobs;
    GSCImageFetcherJobList *_waitingPrefetchPriorityJobs;
    GSCImageFetcherJobList *_runningPrefetchPriorityNetworkJobs;
    GSCImageFetcherJobList *_runningPrefetchPriorityDiskJobs;
    GSCImageFetcherJobList *_runningDiskJobs;
    GSCImageFetcherJobList *_waitingDiskJobs;
    GSCImageFetcherJobList *_runningNetworkJobs;
    GSCImageFetcherJobList *_waitingNetworkJobs;
    GSCImageFetcherJobList *_runningDecodeJobs;
    GSCImageFetcherJobList *_waitingDecodeJobs;
    GSCImageFetcherHTTPFetcherSession *_session;
    NSObject<OS_dispatch_queue> *_customLoadBlockSerialQueue;
    NSMutableArray *_mainQueueBlocks;
    NSMutableDictionary *_gaiaIdToAuthorizer;
    id <GTMFetcherAuthorizationProtocol> _defaultAuthorizer;
    NSString *_defaultGaiaId;
    NSArray *_authorizerHostList;
    NSMutableDictionary *_debugTimingMap;
    _Bool _pauseJobProcessing;
    _Bool _enforceRequiredAuth;
    _Bool _allowInsecureUrl;
    unsigned long long _maxConcurrentNetworkJobs;
    unsigned long long _maxConcurrentDiskJobs;
    NSObject<OS_dispatch_queue> *_jobSerialQueue;
    NSMapTable *_jobMap;
}

+ (void)resetSharedPHCachingImageManager;
+ (void)setSharedPHCachingImageManager:(id)arg1;
+ (id)sharedPHCachingImageManager;
+ (void)resetSharedImageFetcher;
+ (void)setSharedImageFetcher:(id)arg1;
+ (id)sharedImageFetcher;
+ (void)attachDebugLeakCheckToObject:(id)arg1;
+ (id)testImage:(struct CGSize)arg1;
+ (id)createLoadTimeLabelForView:(id)arg1 loadTimeLabel:(id)arg2 resultType:(unsigned short)arg3 imageUrl:(id)arg4;
+ (void)setBorderOnView:(id)arg1 forResultType:(unsigned short)arg2 offscreen:(_Bool)arg3;
+ (void)deleteCacheDirectory:(id)arg1;
@property(readonly, nonatomic) NSMapTable *jobMap; // @synthesize jobMap=_jobMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *jobSerialQueue; // @synthesize jobSerialQueue=_jobSerialQueue;
@property(nonatomic) _Bool allowInsecureUrl; // @synthesize allowInsecureUrl=_allowInsecureUrl;
@property(nonatomic) _Bool enforceRequiredAuth; // @synthesize enforceRequiredAuth=_enforceRequiredAuth;
@property(nonatomic) unsigned long long maxConcurrentDiskJobs; // @synthesize maxConcurrentDiskJobs=_maxConcurrentDiskJobs;
@property(nonatomic) unsigned long long maxConcurrentNetworkJobs; // @synthesize maxConcurrentNetworkJobs=_maxConcurrentNetworkJobs;
@property(nonatomic) _Bool pauseJobProcessing; // @synthesize pauseJobProcessing=_pauseJobProcessing;
- (void).cxx_destruct;
- (void)scheduleJob:(id)arg1;
- (void)startJob:(id)arg1;
- (void)processJobForRequest:(id)arg1 imageUrl:(id)arg2 urlString:(id)arg3 cache:(id)arg4 requestFlags:(unsigned short)arg5;
- (_Bool)checkForExistingJobForRequest:(id)arg1 forUrlString:(id)arg2 requestFlags:(unsigned short)arg3;
- (void)processJobs;
- (id)syncLoadForImageUrl:(id)arg1 requestFlags:(unsigned short)arg2 cache:(id)arg3;
- (id)loadFromPhotoLibraryForLocalAssetURL:(id)arg1 imageCache:(id)arg2;
- (void)loadProxyForLocalAssetUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createDebugTimingForImageUrl:(id)arg1;
- (id)customLoadBlockSerialQueue;
- (id)fetcherWithURLString:(id)arg1 cacheKey:(id)arg2 imageUrl:(id)arg3 cache:(id)arg4;
- (void)scheduleForDeliveryOnMainQueue:(CDUnknownBlockType)arg1;
- (void)jobCompleted:(id)arg1;
- (void)rescheduleJob:(id)arg1 type:(unsigned short)arg2;
- (void)cancelAllJobs;
- (id)debugTimingForImageUrl:(id)arg1;
- (id)fetchImageForUrl:(id)arg1 cache:(id)arg2 requestFlags:(unsigned short)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setAuthorizerHostList:(id)arg1;
- (void)removeAuthorizerForGaiaId:(id)arg1;
- (void)addAuthorizer:(id)arg1 forGaiaId:(id)arg2;
- (void)setDefaultAuthorizer:(id)arg1 withGaiaId:(id)arg2;
- (void)setDefaultAuthorizer:(id)arg1;
- (id)initWithHTTPFetcherSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

