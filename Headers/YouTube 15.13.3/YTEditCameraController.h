//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTCameraCaptureManagerDelegate-Protocol.h>
#import <Module_Framework/YTEditVolumeShutterListenerDelegate-Protocol.h>

@class GIMMe, NSString, UIImage, YTEditCameraCaptureManager, YTEditVolumeShutterListener, YTTimedAction;
@protocol YTCameraProfile, YTEditCameraControllerDelegate;

@interface YTEditCameraController : NSObject <YTCameraCaptureManagerDelegate, YTEditVolumeShutterListenerDelegate>
{
    unsigned long long _pendingCameraOperationCount;
    unsigned long long _retryCount;
    YTTimedAction *_diskSpaceTimer;
    YTTimedAction *_timeLimitTimer;
    YTEditVolumeShutterListener *_volumeShutterListener;
    id <YTEditCameraControllerDelegate> _delegate;
    id <YTCameraProfile> _profile;
    _Bool _isSwitchingCamera;
    _Bool _active;
    _Bool _finishingRecording;
    _Bool _disableAudioRecording;
    unsigned int _audioFadeInMillis;
    GIMMe *_gimme;
    YTEditCameraCaptureManager *_captureManager;
    long long _deviceOrientation;
    UIImage *_lastPreviewImage;
    double _timeLimit;
    NSString *_frontendUploadID;
    long long _recordingAnalysis;
}

@property(nonatomic) unsigned int audioFadeInMillis; // @synthesize audioFadeInMillis=_audioFadeInMillis;
@property(nonatomic) long long recordingAnalysis; // @synthesize recordingAnalysis=_recordingAnalysis;
@property(nonatomic) _Bool disableAudioRecording; // @synthesize disableAudioRecording=_disableAudioRecording;
@property(copy, nonatomic) NSString *frontendUploadID; // @synthesize frontendUploadID=_frontendUploadID;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(retain, nonatomic) UIImage *lastPreviewImage; // @synthesize lastPreviewImage=_lastPreviewImage;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic, getter=isFinishingRecording) _Bool finishingRecording; // @synthesize finishingRecording=_finishingRecording;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) YTEditCameraCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)captureManager:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2 withPresentationTimestamp:(CDStruct_1b6d18a9)arg3;
- (void)captureManagerSubjectAreaDidChange:(id)arg1;
- (void)captureManagerCaptureFinished:(id)arg1;
- (void)captureManagerCaptureBegan:(id)arg1;
- (void)captureManagerCaptureInterrupted:(id)arg1;
- (void)captureManager:(id)arg1 didFailWithError:(id)arg2;
- (void)captureManagerCaptureError:(id)arg1;
- (void)captureManagerRecordingFinished:(id)arg1 cameraAsset:(id)arg2;
- (void)captureManagerRecordingBegan:(id)arg1 outputURL:(id)arg2;
- (void)volumeShutterListenerDidReceiveShutter:(id)arg1;
- (void)checkDiskSpaceWhileRecording;
- (_Bool)hasRecordingSpace;
- (void)notifyDelegateErrorForIdentifier:(id)arg1;
- (void)invalidateTimers;
- (void)setUpTimers;
- (double)timeLeftToRecord;
- (void)capturePreviewImageAsynchronously:(CDUnknownBlockType)arg1;
- (void)setVideoZoomFactor:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)continuousFocusAtPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)autoFocusAtPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)toggleFlashWithCompletion:(CDUnknownBlockType)arg1;
- (void)setFlashOn:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentRecordingSettings;
- (void)toggleRecording;
- (void)stopRecording;
- (void)startRecording;
- (void)setUpCamera;
- (long long)videoOrientation;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 cameraProfile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

