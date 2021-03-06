//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ObjcCameraWrapper-Protocol.h>
#import <Module_Framework/YTCameraCaptureManagerDelegate-Protocol.h>

@class NSString;
@protocol ObjcCameraSampleBufferReceiver, YTCameraCaptureManager;

@interface YTLCCameraWrapper : NSObject <YTCameraCaptureManagerDelegate, ObjcCameraWrapper>
{
    id <YTCameraCaptureManager> _cameraCaptureManager;
    id <ObjcCameraSampleBufferReceiver> _sampleBufferReceiver;
}

@property(retain, nonatomic) id <ObjcCameraSampleBufferReceiver> sampleBufferReceiver; // @synthesize sampleBufferReceiver=_sampleBufferReceiver;
@property(retain, nonatomic) id <YTCameraCaptureManager> cameraCaptureManager; // @synthesize cameraCaptureManager=_cameraCaptureManager;
- (void).cxx_destruct;
- (void)captureManager:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2 withPresentationTimestamp:(CDStruct_1b6d18a9)arg3;
- (void)setCameraSampleBufferReceiver:(id)arg1;
- (void)setFramerate:(int)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (_Bool)setFlashOn:(_Bool)arg1;
- (_Bool)isFlashSupported;
- (void)toggleCamera;
- (id)initWithCameraCaptureManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

