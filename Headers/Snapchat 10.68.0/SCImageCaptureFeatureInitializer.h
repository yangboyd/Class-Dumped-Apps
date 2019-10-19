//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureInitializer.h"

@class SCObservable, SCUserSession;
@protocol SCCameraImageCaptureLogger, SCCapturer;

@interface SCImageCaptureFeatureInitializer : SCFeatureInitializer
{
    id <SCCapturer> _capturer;
    SCUserSession *_userSession;
    long long _cameraViewType;
    SCObservable *_applicationLifecycleEvents;
    id <SCCameraImageCaptureLogger> _imageCaptureLogger;
}

- (void).cxx_destruct;
- (id)createInstance;
- (_Bool)enabled;
- (id)initWithCapturer:(id)arg1 userSession:(id)arg2 cameraViewType:(long long)arg3 applicationLifecycleEvents:(id)arg4 imageCaptureLogger:(id)arg5;

@end

