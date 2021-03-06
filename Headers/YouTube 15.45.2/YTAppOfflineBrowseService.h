//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTOfflineBrowseService.h>

@class YTUserDefaults;

@interface YTAppOfflineBrowseService : YTOfflineBrowseService
{
    _Bool _offlineResumeEnabled;
    _Bool _offlineTravelMessagingEnabled;
    _Bool _offlineTexitBannerEnabled;
    _Bool _offlineVideoEndpointOverrideEnabled;
    YTUserDefaults *_userDefaults;
}

+ (id)playlistIDFromReloadContinuationToken:(id)arg1;
+ (_Bool)isBlendedOfflinePlaylistEndpoint:(id)arg1;
+ (_Bool)isBlendedOfflineWatchEndpoint:(id)arg1;
+ (void)decorateOfflineEndpointWithBlendedOfflineParams:(id)arg1;
- (void).cxx_destruct;
- (void)resolvePlaylistPromise:(id)arg1 andVideosPromise:(id)arg2 forPlaylistID:(id)arg3;
- (id)responsePromiseForBrowseID:(id)arg1 playlistID:(id)arg2 isBlendedOfflineRequest:(_Bool)arg3 isVideoListReloadRequest:(_Bool)arg4;
- (void)makeOfflineBrowseRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)requestHaTS;
- (void)maybeShowHaTS;
- (id)continuationRequestWithToken:(id)arg1 clickTrackingParams:(id)arg2;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)maybeShowDialogToRedownloadVideosWithFirstResponder:(id)arg1;
- (id)requestForCommand:(id)arg1;
- (id)init;

@end

