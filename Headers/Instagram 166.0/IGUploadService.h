//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUploadTaskListener-Protocol.h>

@class IGUploadTaskQueue, IGUserSession, NSMutableDictionary, NSString;
@protocol IGAPIClient, IGUserFeatureSets, OS_dispatch_queue;

@interface IGUploadService : NSObject <IGUploadTaskListener>
{
    id <IGAPIClient> _networker;
    IGUserSession *_userSession;
    id <IGUserFeatureSets> _featureSets;
    NSMutableDictionary *_taskIdToUploadTask;
    NSObject<OS_dispatch_queue> *_underlyingImageQueue;
    NSObject<OS_dispatch_queue> *_underlyingVideoQueue;
    NSObject<OS_dispatch_queue> *_underlyingAudioQueue;
    IGUploadTaskQueue *_imageTaskQueue;
    IGUploadTaskQueue *_videoTaskQueue;
    IGUploadTaskQueue *_audioTaskQueue;
}

- (void).cxx_destruct;
- (void)_removeTask:(id)arg1;
- (void)videoUploadTask:(id)arg1 didUpdateWithRenderedVideoUrl:(id)arg2;
- (void)videoUploadTask:(id)arg1 didUpdateWithVideoCoverImageEncoding:(id)arg2;
- (void)imageUploadTask:(id)arg1 didUpdateWithRenderedImageEncoding:(id)arg2;
- (void)uploadTask:(id)arg1 didUpdateToProgress:(double)arg2;
- (void)uploadTaskDidCancel:(id)arg1;
- (void)uploadTask:(id)arg1 didCompleteWithResponse:(id)arg2 error:(id)arg3;
- (id)uploadTaskForTaskId:(id)arg1;
- (id)uploadAudioWithAudioFileUrl:(id)arg1 audioUploadConfig:(id)arg2 uploadParams:(id)arg3 analyticsProvider:(id)arg4;
- (void)commitVideoUploadWithCoverImageEncoding:(id)arg1 taskId:(id)arg2;
- (id)uploadVideoWithPendingCoverImageForVideoSource:(id)arg1 videoUploadConfig:(id)arg2 uploadParams:(id)arg3 analyticsProvider:(id)arg4;
- (id)uploadImageWithImageUploadModel:(id)arg1 imageUploadConfig:(id)arg2 uploadParams:(id)arg3 taskId:(id)arg4 analyticsProvider:(id)arg5;
- (id)initWithNetworker:(id)arg1 userSession:(id)arg2 featureSets:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

