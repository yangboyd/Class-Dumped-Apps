//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedCapturerListener-Protocol.h"
#import "SCManagedVideoDataSourceListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCBlackCameraReporter, SCQueuePerformer;
@protocol SCBlackCameraDetectorDelegate;

@interface SCBlackCameraNoOutputDetector : NSObject <SCTraceEnabled, SCManagedVideoDataSourceListener, SCManagedCapturerListener>
{
    _Bool _sampleBufferReceived;
    _Bool _blackCameraDetected;
    _Bool _blackCameraRecovered;
    CDUnknownBlockType _checkBlock;
    id <SCBlackCameraDetectorDelegate> _delegate;
    SCQueuePerformer *_queuePerformer;
    SCBlackCameraReporter *_reporter;
}

@property(retain, nonatomic) SCBlackCameraReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) SCQueuePerformer *queuePerformer; // @synthesize queuePerformer=_queuePerformer;
@property(nonatomic) __weak id <SCBlackCameraDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sessionRuntimeError;
- (void)_checkStateWithCapture:(id)arg1;
- (void)_scheduleCheckWithCapture:(id)arg1;
- (void)_cancelCheck;
- (void)managedCapturer:(id)arg1 didStopRunning:(id)arg2;
- (void)managedCapturer:(id)arg1 didStartRunning:(id)arg2;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 devicePosition:(long long)arg3;
- (id)initWithReporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

