//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTBridgeModule-Protocol.h"

@class NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RNBodyLabsMLCameraManager : RCTViewManager <RCTBridgeModule>
{
}

+ (const struct RCTMethodInfo *)__rct_export__4599;
+ (const struct RCTMethodInfo *)__rct_export__getAvailablePictureSizes4528;
+ (const struct RCTMethodInfo *)__rct_export__4317;
+ (const struct RCTMethodInfo *)__rct_export__4156;
+ (const struct RCTMethodInfo *)__rct_export__3975;
+ (const struct RCTMethodInfo *)__rct_export__stopRecording3804;
+ (const struct RCTMethodInfo *)__rct_export__3613;
+ (const struct RCTMethodInfo *)__rct_export__3422;
+ (const struct RCTMethodInfo *)__rct_export__record3221;
+ (const struct RCTMethodInfo *)__rct_export__takePicture2800;
+ (id)propConfig_defaultVideoQuality;
+ (id)propConfig_landmarkerConfig;
+ (id)propConfig_mlModelPath;
+ (id)propConfig_pictureSize;
+ (id)propConfig_whiteBalance;
+ (id)propConfig_zoom;
+ (id)propConfig_focusDepth;
+ (id)propConfig_autoFocusPointOfInterest;
+ (id)propConfig_autoFocus;
+ (id)propConfig_flashMode;
+ (id)propConfig_type;
+ (id)propConfig_onPrediction;
+ (id)propConfig_onPictureSaved;
+ (id)propConfig_onMountError;
+ (id)propConfig_onCameraReady;
+ (id)pictureSizes;
+ (id)validVideoStabilizationModes;
+ (id)validCodecTypes;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void)isRecording:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)ratio:(id)arg1 reactTag:(id)arg2 resolver:(CDUnknownBlockType)arg3 rejecter:(CDUnknownBlockType)arg4;
- (void)checkRecordAudioAuthorizationStatus:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)checkVideoAuthorizationStatus:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)checkDeviceAuthorizationStatus:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)reactTag:(id)arg1;
- (void)pausePreview:(id)arg1;
- (void)resumePreview:(id)arg1;
- (void)withOptions:(id)arg1 reactTag:(id)arg2 resolver:(CDUnknownBlockType)arg3 rejecter:(CDUnknownBlockType)arg4;
- (void)options:(id)arg1 reactTag:(id)arg2 resolver:(CDUnknownBlockType)arg3 rejecter:(CDUnknownBlockType)arg4;
- (void)set_defaultVideoQuality:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_landmarkerConfig:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_mlModelPath:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_pictureSize:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_whiteBalance:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_zoom:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_focusDepth:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_autoFocusPointOfInterest:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_autoFocus:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_flashMode:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_type:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (id)supportedEvents;
- (id)constantsToExport;
- (id)view;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

