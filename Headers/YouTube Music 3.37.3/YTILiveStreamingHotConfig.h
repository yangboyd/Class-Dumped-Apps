//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSMutableArray, NSString;

@interface YTILiveStreamingHotConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *androidEncoderListArray; // @dynamic androidEncoderListArray;
@property(readonly, nonatomic) unsigned long long androidEncoderListArray_Count; // @dynamic androidEncoderListArray_Count;
@property(nonatomic) int androidMinBitrateKbpsHd; // @dynamic androidMinBitrateKbpsHd;
@property(nonatomic) int androidMinBitrateKbpsSd; // @dynamic androidMinBitrateKbpsSd;
@property(nonatomic) int androidSendBufferChunkCount; // @dynamic androidSendBufferChunkCount;
@property(nonatomic) int bitrateThreshold240PKbps; // @dynamic bitrateThreshold240PKbps;
@property(nonatomic) int bitrateThreshold360PKbps; // @dynamic bitrateThreshold360PKbps;
@property(nonatomic) int bitrateThreshold480PKbps; // @dynamic bitrateThreshold480PKbps;
@property(nonatomic) int bitrateThreshold720PKbps; // @dynamic bitrateThreshold720PKbps;
@property(nonatomic) int bitrateThresholdWarningKbps; // @dynamic bitrateThresholdWarningKbps;
@property(nonatomic) int captureMonitorSamplePeriodMs; // @dynamic captureMonitorSamplePeriodMs;
@property(nonatomic) int captureMonitorShutdownCount; // @dynamic captureMonitorShutdownCount;
@property(nonatomic) _Bool enableAndroid169AspectRatio; // @dynamic enableAndroid169AspectRatio;
@property(nonatomic) _Bool enableAndroid360Streaming; // @dynamic enableAndroid360Streaming;
@property(nonatomic) _Bool enableAndroidAbrForCamera; // @dynamic enableAndroidAbrForCamera;
@property(nonatomic) _Bool enableAndroidAbrForScreencast; // @dynamic enableAndroidAbrForScreencast;
@property(nonatomic) _Bool enableAndroidCaptureRefactor; // @dynamic enableAndroidCaptureRefactor;
@property(nonatomic) _Bool enableAndroidEncoderBitrateBounce; // @dynamic enableAndroidEncoderBitrateBounce;
@property(nonatomic) _Bool enableAndroidEncoderConstantBitrate; // @dynamic enableAndroidEncoderConstantBitrate;
@property(nonatomic) _Bool enableAndroidExperimentalAbr; // @dynamic enableAndroidExperimentalAbr;
@property(nonatomic) _Bool enableAndroidMetadataUpdate; // @dynamic enableAndroidMetadataUpdate;
@property(nonatomic) _Bool enableAndroidPausedFragmentIsActive; // @dynamic enableAndroidPausedFragmentIsActive;
@property(nonatomic) _Bool enableAndroidPreviewPictureSizeAspectRatio; // @dynamic enableAndroidPreviewPictureSizeAspectRatio;
@property(nonatomic) _Bool enableAndroidScreencast; // @dynamic enableAndroidScreencast;
@property(nonatomic) _Bool enableAndroidScreencastDynamicAspectRatio; // @dynamic enableAndroidScreencastDynamicAspectRatio;
@property(nonatomic) _Bool enableAndroidSpeedTest; // @dynamic enableAndroidSpeedTest;
@property(nonatomic) _Bool enableCreatorHighlight; // @dynamic enableCreatorHighlight;
@property(nonatomic) _Bool enableDynamicKazoo; // @dynamic enableDynamicKazoo;
@property(nonatomic) _Bool enableEditModuleCamera; // @dynamic enableEditModuleCamera;
@property(nonatomic) _Bool enableEventMetricsLogging; // @dynamic enableEventMetricsLogging;
@property(nonatomic) _Bool enableHdUploadChatReplayTimeline; // @dynamic enableHdUploadChatReplayTimeline;
@property(nonatomic) _Bool enableHdUploadFlexibleVideoQuality; // @dynamic enableHdUploadFlexibleVideoQuality;
@property(nonatomic) _Bool enableIngestionResolutionChanges; // @dynamic enableIngestionResolutionChanges;
@property(nonatomic) _Bool enableIosCameraPreviewRefactor; // @dynamic enableIosCameraPreviewRefactor;
@property(nonatomic) _Bool enableIosFreezeFrameOnShutdown; // @dynamic enableIosFreezeFrameOnShutdown;
@property(nonatomic) _Bool enableLiveCreationFullscreenChat; // @dynamic enableLiveCreationFullscreenChat;
@property(nonatomic) _Bool enableMobile240PStreaming; // @dynamic enableMobile240PStreaming;
@property(nonatomic) _Bool enableMobile360PStreaming; // @dynamic enableMobile360PStreaming;
@property(nonatomic) _Bool enableMobileBackstagePostOnCreateIngestion; // @dynamic enableMobileBackstagePostOnCreateIngestion;
@property(nonatomic) _Bool enableMobileDrishtiFpsMonitoring; // @dynamic enableMobileDrishtiFpsMonitoring;
@property(nonatomic) _Bool enableMobileForceCameoLandscape; // @dynamic enableMobileForceCameoLandscape;
@property(nonatomic) _Bool enableMobileFrontCameraMirroring; // @dynamic enableMobileFrontCameraMirroring;
@property(nonatomic) _Bool enableMobileHdUploadReplaceArchive; // @dynamic enableMobileHdUploadReplaceArchive;
@property(nonatomic) _Bool enableMobileInnertubeThumbnailUpload; // @dynamic enableMobileInnertubeThumbnailUpload;
@property(nonatomic) _Bool enableMobileRtmpSpeedTest; // @dynamic enableMobileRtmpSpeedTest;
@property(nonatomic) _Bool enableMobileTapToFocus; // @dynamic enableMobileTapToFocus;
@property(nonatomic) _Bool enableMobileViewersWaitingCounter; // @dynamic enableMobileViewersWaitingCounter;
@property(nonatomic) _Bool enableMobileWebrtc1080; // @dynamic enableMobileWebrtc1080;
@property(nonatomic) _Bool enableMobileWebrtcAudioInjector; // @dynamic enableMobileWebrtcAudioInjector;
@property(nonatomic) _Bool enableMobileWebrtcBroadcastTrial; // @dynamic enableMobileWebrtcBroadcastTrial;
@property(nonatomic) _Bool enableMobileWebrtcH264HighTrial; // @dynamic enableMobileWebrtcH264HighTrial;
@property(nonatomic) _Bool enableMobileWebrtcScreencastEncodingProfile; // @dynamic enableMobileWebrtcScreencastEncodingProfile;
@property(nonatomic) _Bool enableMobileWebrtcStereoAudio; // @dynamic enableMobileWebrtcStereoAudio;
@property(nonatomic) _Bool enableMobileWebrtcStreaming; // @dynamic enableMobileWebrtcStreaming;
@property(nonatomic) _Bool enableQuickstartOnCameo; // @dynamic enableQuickstartOnCameo;
@property(nonatomic) _Bool enableRefactoredLivestreamFragmentPath; // @dynamic enableRefactoredLivestreamFragmentPath;
@property(nonatomic) _Bool enableRequestLocationPermission; // @dynamic enableRequestLocationPermission;
@property(nonatomic) _Bool enableSwipeToShowChat; // @dynamic enableSwipeToShowChat;
@property(nonatomic) _Bool enableTapToFocus; // @dynamic enableTapToFocus;
@property(nonatomic) _Bool enableWebrtcForcePipelineResetOnReconnect; // @dynamic enableWebrtcForcePipelineResetOnReconnect;
@property(nonatomic) _Bool enableWebrtcInjectableAudioDeviceModule; // @dynamic enableWebrtcInjectableAudioDeviceModule;
@property(nonatomic) _Bool enableZoomFeedback; // @dynamic enableZoomFeedback;
@property(nonatomic) _Bool hasAndroidMinBitrateKbpsHd; // @dynamic hasAndroidMinBitrateKbpsHd;
@property(nonatomic) _Bool hasAndroidMinBitrateKbpsSd; // @dynamic hasAndroidMinBitrateKbpsSd;
@property(nonatomic) _Bool hasAndroidSendBufferChunkCount; // @dynamic hasAndroidSendBufferChunkCount;
@property(nonatomic) _Bool hasBitrateThreshold240PKbps; // @dynamic hasBitrateThreshold240PKbps;
@property(nonatomic) _Bool hasBitrateThreshold360PKbps; // @dynamic hasBitrateThreshold360PKbps;
@property(nonatomic) _Bool hasBitrateThreshold480PKbps; // @dynamic hasBitrateThreshold480PKbps;
@property(nonatomic) _Bool hasBitrateThreshold720PKbps; // @dynamic hasBitrateThreshold720PKbps;
@property(nonatomic) _Bool hasBitrateThresholdWarningKbps; // @dynamic hasBitrateThresholdWarningKbps;
@property(nonatomic) _Bool hasCaptureMonitorSamplePeriodMs; // @dynamic hasCaptureMonitorSamplePeriodMs;
@property(nonatomic) _Bool hasCaptureMonitorShutdownCount; // @dynamic hasCaptureMonitorShutdownCount;
@property(nonatomic) _Bool hasEnableAndroid169AspectRatio; // @dynamic hasEnableAndroid169AspectRatio;
@property(nonatomic) _Bool hasEnableAndroid360Streaming; // @dynamic hasEnableAndroid360Streaming;
@property(nonatomic) _Bool hasEnableAndroidAbrForCamera; // @dynamic hasEnableAndroidAbrForCamera;
@property(nonatomic) _Bool hasEnableAndroidAbrForScreencast; // @dynamic hasEnableAndroidAbrForScreencast;
@property(nonatomic) _Bool hasEnableAndroidCaptureRefactor; // @dynamic hasEnableAndroidCaptureRefactor;
@property(nonatomic) _Bool hasEnableAndroidEncoderBitrateBounce; // @dynamic hasEnableAndroidEncoderBitrateBounce;
@property(nonatomic) _Bool hasEnableAndroidEncoderConstantBitrate; // @dynamic hasEnableAndroidEncoderConstantBitrate;
@property(nonatomic) _Bool hasEnableAndroidExperimentalAbr; // @dynamic hasEnableAndroidExperimentalAbr;
@property(nonatomic) _Bool hasEnableAndroidMetadataUpdate; // @dynamic hasEnableAndroidMetadataUpdate;
@property(nonatomic) _Bool hasEnableAndroidPausedFragmentIsActive; // @dynamic hasEnableAndroidPausedFragmentIsActive;
@property(nonatomic) _Bool hasEnableAndroidPreviewPictureSizeAspectRatio; // @dynamic hasEnableAndroidPreviewPictureSizeAspectRatio;
@property(nonatomic) _Bool hasEnableAndroidScreencast; // @dynamic hasEnableAndroidScreencast;
@property(nonatomic) _Bool hasEnableAndroidScreencastDynamicAspectRatio; // @dynamic hasEnableAndroidScreencastDynamicAspectRatio;
@property(nonatomic) _Bool hasEnableAndroidSpeedTest; // @dynamic hasEnableAndroidSpeedTest;
@property(nonatomic) _Bool hasEnableCreatorHighlight; // @dynamic hasEnableCreatorHighlight;
@property(nonatomic) _Bool hasEnableDynamicKazoo; // @dynamic hasEnableDynamicKazoo;
@property(nonatomic) _Bool hasEnableEditModuleCamera; // @dynamic hasEnableEditModuleCamera;
@property(nonatomic) _Bool hasEnableEventMetricsLogging; // @dynamic hasEnableEventMetricsLogging;
@property(nonatomic) _Bool hasEnableHdUploadChatReplayTimeline; // @dynamic hasEnableHdUploadChatReplayTimeline;
@property(nonatomic) _Bool hasEnableHdUploadFlexibleVideoQuality; // @dynamic hasEnableHdUploadFlexibleVideoQuality;
@property(nonatomic) _Bool hasEnableIngestionResolutionChanges; // @dynamic hasEnableIngestionResolutionChanges;
@property(nonatomic) _Bool hasEnableIosCameraPreviewRefactor; // @dynamic hasEnableIosCameraPreviewRefactor;
@property(nonatomic) _Bool hasEnableIosFreezeFrameOnShutdown; // @dynamic hasEnableIosFreezeFrameOnShutdown;
@property(nonatomic) _Bool hasEnableLiveCreationFullscreenChat; // @dynamic hasEnableLiveCreationFullscreenChat;
@property(nonatomic) _Bool hasEnableMobile240PStreaming; // @dynamic hasEnableMobile240PStreaming;
@property(nonatomic) _Bool hasEnableMobile360PStreaming; // @dynamic hasEnableMobile360PStreaming;
@property(nonatomic) _Bool hasEnableMobileBackstagePostOnCreateIngestion; // @dynamic hasEnableMobileBackstagePostOnCreateIngestion;
@property(nonatomic) _Bool hasEnableMobileDrishtiFpsMonitoring; // @dynamic hasEnableMobileDrishtiFpsMonitoring;
@property(nonatomic) _Bool hasEnableMobileForceCameoLandscape; // @dynamic hasEnableMobileForceCameoLandscape;
@property(nonatomic) _Bool hasEnableMobileFrontCameraMirroring; // @dynamic hasEnableMobileFrontCameraMirroring;
@property(nonatomic) _Bool hasEnableMobileHdUploadReplaceArchive; // @dynamic hasEnableMobileHdUploadReplaceArchive;
@property(nonatomic) _Bool hasEnableMobileInnertubeThumbnailUpload; // @dynamic hasEnableMobileInnertubeThumbnailUpload;
@property(nonatomic) _Bool hasEnableMobileRtmpSpeedTest; // @dynamic hasEnableMobileRtmpSpeedTest;
@property(nonatomic) _Bool hasEnableMobileTapToFocus; // @dynamic hasEnableMobileTapToFocus;
@property(nonatomic) _Bool hasEnableMobileViewersWaitingCounter; // @dynamic hasEnableMobileViewersWaitingCounter;
@property(nonatomic) _Bool hasEnableMobileWebrtc1080; // @dynamic hasEnableMobileWebrtc1080;
@property(nonatomic) _Bool hasEnableMobileWebrtcAudioInjector; // @dynamic hasEnableMobileWebrtcAudioInjector;
@property(nonatomic) _Bool hasEnableMobileWebrtcBroadcastTrial; // @dynamic hasEnableMobileWebrtcBroadcastTrial;
@property(nonatomic) _Bool hasEnableMobileWebrtcH264HighTrial; // @dynamic hasEnableMobileWebrtcH264HighTrial;
@property(nonatomic) _Bool hasEnableMobileWebrtcScreencastEncodingProfile; // @dynamic hasEnableMobileWebrtcScreencastEncodingProfile;
@property(nonatomic) _Bool hasEnableMobileWebrtcStereoAudio; // @dynamic hasEnableMobileWebrtcStereoAudio;
@property(nonatomic) _Bool hasEnableMobileWebrtcStreaming; // @dynamic hasEnableMobileWebrtcStreaming;
@property(nonatomic) _Bool hasEnableQuickstartOnCameo; // @dynamic hasEnableQuickstartOnCameo;
@property(nonatomic) _Bool hasEnableRefactoredLivestreamFragmentPath; // @dynamic hasEnableRefactoredLivestreamFragmentPath;
@property(nonatomic) _Bool hasEnableRequestLocationPermission; // @dynamic hasEnableRequestLocationPermission;
@property(nonatomic) _Bool hasEnableSwipeToShowChat; // @dynamic hasEnableSwipeToShowChat;
@property(nonatomic) _Bool hasEnableTapToFocus; // @dynamic hasEnableTapToFocus;
@property(nonatomic) _Bool hasEnableWebrtcForcePipelineResetOnReconnect; // @dynamic hasEnableWebrtcForcePipelineResetOnReconnect;
@property(nonatomic) _Bool hasEnableWebrtcInjectableAudioDeviceModule; // @dynamic hasEnableWebrtcInjectableAudioDeviceModule;
@property(nonatomic) _Bool hasEnableZoomFeedback; // @dynamic hasEnableZoomFeedback;
@property(nonatomic) _Bool hasHdAdjustQualityForVideoDurationMinutes; // @dynamic hasHdAdjustQualityForVideoDurationMinutes;
@property(nonatomic) _Bool hasHdMaxVideoDurationMinutes; // @dynamic hasHdMaxVideoDurationMinutes;
@property(nonatomic) _Bool hasHdMinQualityIncreaseFactor; // @dynamic hasHdMinQualityIncreaseFactor;
@property(nonatomic) _Bool hasHdUploadDurationToleranceMillis; // @dynamic hasHdUploadDurationToleranceMillis;
@property(nonatomic) _Bool hasHdUploadDurationTolerancePercent; // @dynamic hasHdUploadDurationTolerancePercent;
@property(nonatomic) _Bool hasHdUploadMaxContinuousSegments; // @dynamic hasHdUploadMaxContinuousSegments;
@property(nonatomic) _Bool hasHdUploadMinDiskSpaceMbs; // @dynamic hasHdUploadMinDiskSpaceMbs;
@property(nonatomic) _Bool hasMobileForceCameoLandscapeLimit; // @dynamic hasMobileForceCameoLandscapeLimit;
@property(nonatomic) _Bool hasMobileWebrtcAudioBitsPerChannel; // @dynamic hasMobileWebrtcAudioBitsPerChannel;
@property(nonatomic) _Bool hasMobileWebrtcBbrSetting; // @dynamic hasMobileWebrtcBbrSetting;
@property(nonatomic) _Bool hasMobileWebrtcBweBackoffFactor; // @dynamic hasMobileWebrtcBweBackoffFactor;
@property(nonatomic) _Bool hasMobileWebrtcBweWindowSizeInPackets; // @dynamic hasMobileWebrtcBweWindowSizeInPackets;
@property(nonatomic) _Bool hasMobileWebrtcDisableFrameDropper; // @dynamic hasMobileWebrtcDisableFrameDropper;
@property(nonatomic) _Bool hasMobileWebrtcInitialBandwidth; // @dynamic hasMobileWebrtcInitialBandwidth;
@property(nonatomic) _Bool hasMobileWebrtcUseBitrateAdjuster; // @dynamic hasMobileWebrtcUseBitrateAdjuster;
@property(nonatomic) _Bool hasPreferMobileWebrtcH264High; // @dynamic hasPreferMobileWebrtcH264High;
@property(nonatomic) _Bool hasSpeedTestHdThresholdKbps; // @dynamic hasSpeedTestHdThresholdKbps;
@property(nonatomic) _Bool hasStopStreamDeadMansSwitchDelayMs; // @dynamic hasStopStreamDeadMansSwitchDelayMs;
@property(nonatomic) _Bool hasWebrtcForcePipelineResetDelayMs; // @dynamic hasWebrtcForcePipelineResetDelayMs;
@property(nonatomic) int hdAdjustQualityForVideoDurationMinutes; // @dynamic hdAdjustQualityForVideoDurationMinutes;
@property(nonatomic) int hdMaxVideoDurationMinutes; // @dynamic hdMaxVideoDurationMinutes;
@property(nonatomic) float hdMinQualityIncreaseFactor; // @dynamic hdMinQualityIncreaseFactor;
@property(nonatomic) int hdUploadDurationToleranceMillis; // @dynamic hdUploadDurationToleranceMillis;
@property(nonatomic) float hdUploadDurationTolerancePercent; // @dynamic hdUploadDurationTolerancePercent;
@property(nonatomic) int hdUploadMaxContinuousSegments; // @dynamic hdUploadMaxContinuousSegments;
@property(nonatomic) int hdUploadMinDiskSpaceMbs; // @dynamic hdUploadMinDiskSpaceMbs;
@property(nonatomic) int mobileForceCameoLandscapeLimit; // @dynamic mobileForceCameoLandscapeLimit;
@property(nonatomic) int mobileWebrtcAudioBitsPerChannel; // @dynamic mobileWebrtcAudioBitsPerChannel;
@property(copy, nonatomic) NSString *mobileWebrtcBbrSetting; // @dynamic mobileWebrtcBbrSetting;
@property(retain, nonatomic) NSMutableArray *mobileWebrtcBbrSettingTrialValuesArray; // @dynamic mobileWebrtcBbrSettingTrialValuesArray;
@property(readonly, nonatomic) unsigned long long mobileWebrtcBbrSettingTrialValuesArray_Count; // @dynamic mobileWebrtcBbrSettingTrialValuesArray_Count;
@property(nonatomic) float mobileWebrtcBweBackoffFactor; // @dynamic mobileWebrtcBweBackoffFactor;
@property(nonatomic) int mobileWebrtcBweWindowSizeInPackets; // @dynamic mobileWebrtcBweWindowSizeInPackets;
@property(nonatomic) _Bool mobileWebrtcDisableFrameDropper; // @dynamic mobileWebrtcDisableFrameDropper;
@property(retain, nonatomic) NSMutableArray *mobileWebrtcH264DataRateLimitValuesArray; // @dynamic mobileWebrtcH264DataRateLimitValuesArray;
@property(readonly, nonatomic) unsigned long long mobileWebrtcH264DataRateLimitValuesArray_Count; // @dynamic mobileWebrtcH264DataRateLimitValuesArray_Count;
@property(nonatomic) int mobileWebrtcInitialBandwidth; // @dynamic mobileWebrtcInitialBandwidth;
@property(retain, nonatomic) GPBInt32Array *mobileWebrtcInitialBandwidthValuesArray; // @dynamic mobileWebrtcInitialBandwidthValuesArray;
@property(readonly, nonatomic) unsigned long long mobileWebrtcInitialBandwidthValuesArray_Count; // @dynamic mobileWebrtcInitialBandwidthValuesArray_Count;
@property(nonatomic) _Bool mobileWebrtcUseBitrateAdjuster; // @dynamic mobileWebrtcUseBitrateAdjuster;
@property(retain, nonatomic) NSMutableArray *mobileWebrtcVideoCodecPreferenceListArray; // @dynamic mobileWebrtcVideoCodecPreferenceListArray;
@property(readonly, nonatomic) unsigned long long mobileWebrtcVideoCodecPreferenceListArray_Count; // @dynamic mobileWebrtcVideoCodecPreferenceListArray_Count;
@property(nonatomic) _Bool preferMobileWebrtcH264High; // @dynamic preferMobileWebrtcH264High;
@property(nonatomic) int speedTestHdThresholdKbps; // @dynamic speedTestHdThresholdKbps;
@property(nonatomic) int stopStreamDeadMansSwitchDelayMs; // @dynamic stopStreamDeadMansSwitchDelayMs;
@property(nonatomic) int webrtcForcePipelineResetDelayMs; // @dynamic webrtcForcePipelineResetDelayMs;

@end

