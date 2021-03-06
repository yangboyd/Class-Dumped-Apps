//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable;

@interface YTUploadProgressProvider : NSObject
{
    NSHashTable *_observers;
    _Bool _pausedForPlayback;
    long long _waitingForNetwork;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic, getter=isPausedForPlayback) _Bool pausedForPlayback; // @synthesize pausedForPlayback=_pausedForPlayback;
@property(nonatomic) long long waitingForNetwork; // @synthesize waitingForNetwork=_waitingForNetwork;
- (void)forEachObserver:(CDUnknownBlockType)arg1;
- (void)notifyDidProgressTransferForFrontendUploadID:(id)arg1 progress:(id)arg2;
- (void)notifyDidProgressTranscodeForFrontendUploadID:(id)arg1 progress:(float)arg2;
- (void)notifyDidChangeUploadStatusWithFrontendUploadID:(id)arg1 state:(long long)arg2;
- (void)notifyPausedDidChange;
- (void)notifyDidCompleteUploadForFrontendUploadID:(id)arg1;
- (void)notifyUploadProcessingDidErrorWithFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)notifyUploadProcessingDidRejectWithFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)notifyUploadProcessingDidCompleteWithFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)notifyUploadProcessingDidProgressWithFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)notifyDidBeginCancellationWithFrontendUploadID:(id)arg1;
- (void)notifyDidDeleteUploadForTaskWithFrontendUploadID:(id)arg1;
- (void)notifyDidConfirmUploadForTaskWithFrontendUploadID:(id)arg1;
- (void)notifyDidEnterMetadataForTaskWithFrontendUploadID:(id)arg1;
- (void)notifyDidUpdateAssetForTaskWithFrontendUploadID:(id)arg1;
- (void)notifyDidCreateTaskWithFrontendUploadID:(id)arg1;
- (void)notifyDidFailTranscodeWithFrontendUploadID:(id)arg1;
- (void)notifyDidProgressTranscodeWithFrontendUploadID:(id)arg1 progress:(float)arg2;
- (void)notifyDidCompleteTranscodeWithFrontendUploadID:(id)arg1;
- (void)notifyDidBeginTranscodeWithFrontendUploadID:(id)arg1;
- (void)notifyDidFinishTransferForFrontendUploadID:(id)arg1;
- (void)notifyDidBeginTransferWithFrontendUploadID:(id)arg1;
- (void)notifyUploadingPausedDidChange;
- (void)notifyDidFailFrontendUploadID:(id)arg1;
- (void)removeUploadProgressObserver:(id)arg1;
- (void)addUploadProgressObserver:(id)arg1;
- (id)init;

@end

