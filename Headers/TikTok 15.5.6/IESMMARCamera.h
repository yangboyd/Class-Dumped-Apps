//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMCaptureBase.h"

#import "ARSessionDelegate-Protocol.h"

@class ARFrame, ARSession, CADisplayLink, CIContext, EAGLContext, IESMMARCameraConfiguration, IESMMARModelAnchor, IESMMARPose, NSArray, NSError, NSObject, NSString;
@protocol IESMMARCameraDelegate, IESMMARCameraRenderer, OS_dispatch_queue;

@interface IESMMARCamera : IESMMCaptureBase <ARSessionDelegate>
{
    _Bool _isModelLoaded;
    _Bool _shouldOutputBufferTransformed;
    _Bool _isProcessingFrame;
    long long _state;
    struct __CVPixelBufferPool *_pixelBufferPool;
    CDUnknownBlockType _onWorldMapStatusDidChangeCallback;
    CDUnknownBlockType _onUpdateFrameCallback;
    CDUnknownBlockType _onAddedAnchorAction;
    CDUnknownBlockType _onRemovedAnchorAction;
    CDUnknownBlockType _onUpdatedAnchorAction;
    CDUnknownBlockType _broadcastingAnchorUpdatedAction;
    CDUnknownBlockType _onEventBroadcastingAction;
    CDUnknownBlockType _on3DModelLoaded;
    id <IESMMARCameraDelegate> _delegate;
    id <IESMMARCameraRenderer> _renderer;
    NSError *_error;
    long long _videoOrientation;
    EAGLContext *_glContext;
    IESMMARCameraConfiguration *_innerConfiguration;
    ARSession *_arSession;
    CIContext *_ciContext;
    CADisplayLink *_displayLink;
    ARFrame *_lastFrame;
    unsigned long long _minimumPixelBufferPoolBufferCount;
    NSObject<OS_dispatch_queue> *_videoOutputQueue;
    void *_videoOutputQueueContextKey;
    long long _lastWorldMappingStatus;
    IESMMARModelAnchor *_modelAnchor;
    struct CGSize _objectOperation;
}

+ (void)setActiveCamera:(id)arg1;
+ (id)activeCamera;
@property _Bool isProcessingFrame; // @synthesize isProcessingFrame=_isProcessingFrame;
@property(nonatomic) struct CGSize objectOperation; // @synthesize objectOperation=_objectOperation;
@property(retain, nonatomic) IESMMARModelAnchor *modelAnchor; // @synthesize modelAnchor=_modelAnchor;
@property(nonatomic) long long lastWorldMappingStatus; // @synthesize lastWorldMappingStatus=_lastWorldMappingStatus;
@property(nonatomic) void *videoOutputQueueContextKey; // @synthesize videoOutputQueueContextKey=_videoOutputQueueContextKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoOutputQueue; // @synthesize videoOutputQueue=_videoOutputQueue;
@property(nonatomic) unsigned long long minimumPixelBufferPoolBufferCount; // @synthesize minimumPixelBufferPoolBufferCount=_minimumPixelBufferPoolBufferCount;
@property(nonatomic) __weak ARFrame *lastFrame; // @synthesize lastFrame=_lastFrame;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(retain, nonatomic) ARSession *arSession; // @synthesize arSession=_arSession;
@property(retain, nonatomic) IESMMARCameraConfiguration *innerConfiguration; // @synthesize innerConfiguration=_innerConfiguration;
@property(nonatomic) _Bool shouldOutputBufferTransformed; // @synthesize shouldOutputBufferTransformed=_shouldOutputBufferTransformed;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) _Bool isModelLoaded; // @synthesize isModelLoaded=_isModelLoaded;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <IESMMARCameraRenderer> renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak id <IESMMARCameraDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType on3DModelLoaded; // @synthesize on3DModelLoaded=_on3DModelLoaded;
@property(copy, nonatomic) CDUnknownBlockType onEventBroadcastingAction; // @synthesize onEventBroadcastingAction=_onEventBroadcastingAction;
@property(copy, nonatomic) CDUnknownBlockType broadcastingAnchorUpdatedAction; // @synthesize broadcastingAnchorUpdatedAction=_broadcastingAnchorUpdatedAction;
@property(copy, nonatomic) CDUnknownBlockType onUpdatedAnchorAction; // @synthesize onUpdatedAnchorAction=_onUpdatedAnchorAction;
@property(copy, nonatomic) CDUnknownBlockType onRemovedAnchorAction; // @synthesize onRemovedAnchorAction=_onRemovedAnchorAction;
@property(copy, nonatomic) CDUnknownBlockType onAddedAnchorAction; // @synthesize onAddedAnchorAction=_onAddedAnchorAction;
@property(copy, nonatomic) CDUnknownBlockType onUpdateFrameCallback; // @synthesize onUpdateFrameCallback=_onUpdateFrameCallback;
@property(copy, nonatomic) CDUnknownBlockType onWorldMapStatusDidChangeCallback; // @synthesize onWorldMapStatusDidChangeCallback=_onWorldMapStatusDidChangeCallback;
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool; // @synthesize pixelBufferPool=_pixelBufferPool;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releasePixelBufferPool;
- (void)flushPixelBufferPool;
- (void)setupPixelBufferPoolWithPixelBufferAttributes:(id)arg1 error:(id *)arg2;
- (struct __CVBuffer *)transformedPixelBufferWithFrame:(id)arg1;
- (struct CGAffineTransform)displayTransformForOriginOutputRect:(struct CGRect)arg1;
- (struct CGAffineTransform)displayTransform;
- (void)outputWithARFrame:(id)arg1;
- (void)render;
- (void)removeAnchor:(id)arg1;
- (void)addAnchor:(id)arg1;
- (void)on3DModelModifiedWithName:(id)arg1 operation:(struct CGSize)arg2;
- (void)clearProperties;
- (void)runARSession;
- (void)restartARSession;
- (void)startCameraCapture;
- (void)resumeCameraCapture;
- (void)pauseCameraCapture;
- (void)stopCameraCaptureWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)stopCameraCapture;
- (void)delayForWaitingOperationForAVCaptureSession;
@property long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (void)notifyModelLoaded:(_Bool)arg1;
-     // Error parsing type: {?=[4]}24@0:8q16, name: viewMatrixForOrientation:
-     // Error parsing type: {?=[4]}56@0:8q16{CGSize=dd}24d40d48, name: projectionMatrixForOrientation:viewportSize:zNear:zFar:
- (void)getCurrentWorldMapWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct CGSize)imageResolution;
// Error parsing type for property projectionMatrix:
// Property attributes: T{?=[4]},R,N

// Error parsing type for property cameraIntrinsics:
// Property attributes: T{?=[3]},R,N

@property(readonly, nonatomic) long long trackingStateReason;
- (long long)IESMMARTrackingStateReasonConvert:(long long)arg1;
@property(readonly, nonatomic) long long worldMappingStatus;
@property(readonly, nonatomic) long long trackingState;
@property(readonly, copy, nonatomic) IESMMARPose *cameraPose;
@property(readonly, copy, nonatomic) NSArray *anchors;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (void)commitConfiguration:(id)arg1;
- (void)createARSessionIfNeeded;
- (id)arConfiguration;
@property(readonly, copy, nonatomic) IESMMARCameraConfiguration *configuration;
- (long long)currentCameraPosition;
- (void)setVideoOutputQueue:(id)arg1 key:(void *)arg2;
- (void)stopDisplayLink;
- (void)runAsyncOnVideoOutputQueue:(CDUnknownBlockType)arg1;
- (void)startDisplayLink;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

