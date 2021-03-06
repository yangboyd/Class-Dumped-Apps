//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTUserSpecificDataStore.h>

@class GIMMe;

@interface YTUploadTaskStore : YTUserSpecificDataStore
{
    GIMMe *_gimme;
}

+ (id)uploadTasksForEntities:(id)arg1;
+ (id)insertUploadTaskEntityWithAssetURL:(id)arg1 phLocalIdentifier:(id)arg2 uploadType:(int)arg3 videoID:(id)arg4 photoUpload:(_Bool)arg5 streamingUpload:(_Bool)arg6 skipTranscode:(_Bool)arg7 transcodeURL:(id)arg8 frontendID:(id)arg9 thumbnailURL:(id)arg10 duration:(double)arg11 metadata:(id)arg12 assetSegmentURLs:(id)arg13 editInstructions:(id)arg14 interactiveStickers:(id)arg15 videoShortsCreation:(id)arg16 userID:(id)arg17 context:(id)arg18;
+ (id)fetchRequestForPredicate:(id)arg1 context:(id)arg2;
+ (id)fetchRequestWithPredicates:(id)arg1 userID:(id)arg2 inContext:(id)arg3;
+ (id)uploadTaskEntityWithVideoID:(id)arg1 userID:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)uploadTaskEntityWithFrontendID:(id)arg1 userID:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)fetchUploadTasksWithPredicates:(id)arg1 fetchLimit:(unsigned long long)arg2 sortDescriptors:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setVideoAssetProperties:(id)arg1 forFrontendID:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setUploadType:(int)arg1 forFrontendID:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveVideoID:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveFrontendID:(id)arg1 userID:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)saveFrontendID:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchUploadTasksWithPredicates:(id)arg1 callabackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchUploadTasksWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteUploadTaskWithFrontendID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)markStreamingRecordingCompleteForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markCancellingForFrontendID:(id)arg1 reason:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)markUserConfirmedUploadForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)saveDuration:(double)arg1 thumbnailURL:(id)arg2 editInstructions:(id)arg3 forFrontendID:(id)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)saveMetadataUpdateRequest:(id)arg1 videoTitle:(id)arg2 privacy:(int)arg3 forVideoID:(id)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)saveMetadataUpdateRequest:(id)arg1 videoTitle:(id)arg2 privacy:(int)arg3 forFrontendID:(id)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)saveVideoStatus:(int)arg1 uploadStatusRenderer:(id)arg2 forFrontendID:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)saveUserID:(id)arg1 forFrontendID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)fetchUploadTaskWithFrontendID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchPendingUploadTasksWithOption:(long long)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createFeedbackOnlyUploadTaskWithFrontendID:(id)arg1 videoID:(id)arg2 videoTitle:(id)arg3 thumbnailURL:(id)arg4 duration:(double)arg5 privacy:(int)arg6 callbackQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)createUploadTaskWithFrontendID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createUploadTaskWithAssetURL:(id)arg1 phLocalIdentifier:(id)arg2 uploadType:(int)arg3 videoID:(id)arg4 photoUpload:(_Bool)arg5 streamingUpload:(_Bool)arg6 skipTranscode:(_Bool)arg7 transcodeURL:(id)arg8 frontendID:(id)arg9 thumbnailURL:(id)arg10 duration:(double)arg11 metadata:(id)arg12 assetSegmentURLs:(id)arg13 editInstructions:(id)arg14 interactiveStickers:(id)arg15 videoShortsCreation:(id)arg16 responseBlock:(CDUnknownBlockType)arg17 errorBlock:(CDUnknownBlockType)arg18;
- (void)updateUploadTaskForRetryWithFrontendID:(id)arg1 processor:(int)arg2 retryConfig:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateUploadTaskWithFrontendID:(id)arg1 updater:(id)arg2 processor:(int)arg3 state:(id)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateUploadTaskWithFrontendID:(id)arg1 updater:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

