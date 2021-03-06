//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTCameraControllerAnalyticsReporter-Protocol.h"
#import "ASTCameraPlayerAnalyticsReporter-Protocol.h"

@class ASTHomeAutomationDevice, CameraPlayerSessionInfo, NSDate, NSString;
@protocol AnalyticsLogger;

@interface ASTCameraAnalyticsReporter : NSObject <ASTCameraPlayerAnalyticsReporter, ASTCameraControllerAnalyticsReporter>
{
    id <AnalyticsLogger> _analyticsLogger;
    ASTHomeAutomationDevice *_device;
    NSDate *_lastLaunchedTime;
    NSDate *_lastInitializedTime;
    NSDate *_lastConnectedTime;
    NSDate *_lastRenderedTime;
    NSDate *_lastStoppedTime;
    CameraPlayerSessionInfo *_cameraPlayerSessionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CameraPlayerSessionInfo *cameraPlayerSessionInfo; // @synthesize cameraPlayerSessionInfo=_cameraPlayerSessionInfo;
@property(retain, nonatomic) NSDate *lastStoppedTime; // @synthesize lastStoppedTime=_lastStoppedTime;
@property(retain, nonatomic) NSDate *lastRenderedTime; // @synthesize lastRenderedTime=_lastRenderedTime;
@property(retain, nonatomic) NSDate *lastConnectedTime; // @synthesize lastConnectedTime=_lastConnectedTime;
@property(retain, nonatomic) NSDate *lastInitializedTime; // @synthesize lastInitializedTime=_lastInitializedTime;
@property(retain, nonatomic) NSDate *lastLaunchedTime; // @synthesize lastLaunchedTime=_lastLaunchedTime;
@property(retain, nonatomic) ASTHomeAutomationDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
- (_Bool)trackingIsValidForNewEvent:(id)arg1 oldEvent:(id)arg2 fromPastEvent:(id)arg3;
- (void)trackCameraPlayerStopped:(id)arg1 reason:(long long)arg2;
- (void)trackCameraPlayerFrameRendered:(id)arg1;
- (void)trackCameraPlayerConnectionEstablished:(id)arg1 withError:(id)arg2;
- (void)trackCameraPlayerInitialized:(id)arg1;
- (void)trackCameraPageLaunched:(id)arg1;
- (void)updateLiveStatus:(_Bool)arg1;
- (void)startSessionWithCamera:(id)arg1;
- (id)initWithAnalyticsLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

