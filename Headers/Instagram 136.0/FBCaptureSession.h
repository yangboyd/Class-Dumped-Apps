//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureSession, AVCaptureVideoPreviewLayer, NSArray, NSMutableDictionary, NSString;
@protocol FBCaptureSessionRuntimeErrorDelegate, FBCaptureSessionStateDelegate, OS_dispatch_queue;

@interface FBCaptureSession : NSObject
{
    AVCaptureSession *_captureSession;
    struct recursive_mutex _captureSessionLock;
    NSString *_sessionName;
    unsigned long long _retryCounter;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    NSMutableDictionary *_videoPreviewLayers;
    id <FBCaptureSessionStateDelegate> _stateDelegate;
    id <FBCaptureSessionRuntimeErrorDelegate> _runtimeErrorDelegate;
    NSObject<OS_dispatch_queue> *_restartSessionQueue;
}

+ (_Bool)isMultiCamSupported;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *restartSessionQueue; // @synthesize restartSessionQueue=_restartSessionQueue;
@property(nonatomic) __weak id <FBCaptureSessionRuntimeErrorDelegate> runtimeErrorDelegate; // @synthesize runtimeErrorDelegate=_runtimeErrorDelegate;
@property(nonatomic) __weak id <FBCaptureSessionStateDelegate> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handleCaptureSessionRuntimeErrorNotification:(id)arg1;
- (void)_handleCaptureSessionRuntimeErrorNotificationSafe:(id)arg1;
- (void)_handleCaptureSessionDidResignInterruptedNotification:(id)arg1;
- (void)_handleCaptureSessionDidBecomeInterruptedNotification:(id)arg1;
- (void)_handleCaptureSessionNotification:(id)arg1;
- (void)_handleCaptureDidStopRunningNotification:(id)arg1;
- (void)_handleCaptureDidStartRunningNotification:(id)arg1;
- (void)_setupNotifications;
- (id)videoPreviewLayer;
- (id)videoPreviewLayerForCaptureDevice:(id)arg1;
- (_Bool)switchCaptureSession:(id)arg1 withRestartSessionQueue:(id)arg2 config:(struct FBCaptureSessionConfig)arg3;
- (_Bool)updateSessionPreset:(id)arg1;
- (void)updateCaptureSessionWithBlock:(CDUnknownBlockType)arg1;
- (void)restartSession;
- (void)stopSession;
- (void)pauseSession;
- (void)startSession;
@property(readonly, copy, nonatomic) NSString *sessionPreset;
@property(readonly, nonatomic) struct OpaqueCMClock *clock;
@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) unsigned long long mediaType;
- (void)removeConnections:(id)arg1;
- (void)removeOutputs:(id)arg1;
- (void)addOutputs:(id)arg1;
@property(readonly, nonatomic) _Bool isMulticamCaptureSession;
@property(readonly, copy, nonatomic) NSArray *outputs;
- (void)removeInputs:(id)arg1;
- (void)addInputs:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *inputs;
- (_Bool)connectCaptureDeviceInput:(id)arg1 toVideoCaptureOutput:(id)arg2 videoCaptureConnection:(id)arg3 toPhotoCaptureOutput:(id)arg4 photoCaptureConnection:(id)arg5;
- (void)dealloc;
- (id)initWithSessionName:(id)arg1 withRestartSessionQueue:(id)arg2 config:(struct FBCaptureSessionConfig)arg3;
- (id)initWithSessionName:(id)arg1 withRestartSessionQueue:(id)arg2;

@end

