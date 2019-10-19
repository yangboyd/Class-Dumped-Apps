//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACameraCapacity : SCAUserTrackedEvent
{
}

- (void)setVerticalViewAngle:(double)arg1;
- (void)setSupportedRecordingResolutions:(id)arg1;
- (void)setSupportedPreviewResolutions:(id)arg1;
- (void)setSupportedPreviewFpsRanges:(id)arg1;
- (void)setSupportedLightModes:(id)arg1;
- (void)setSupportedJpegPictureResolutions:(id)arg1;
- (void)setSupportedGpuPictureResolutions:(id)arg1;
- (void)setSupportedFocusModes:(id)arg1;
- (void)setSupportedFlashModes:(id)arg1;
- (void)setMaxZoomLevel:(double)arg1;
- (void)setMaxLocalizedFocusAreasCount:(long long)arg1;
- (void)setMaxExposureCompensation:(long long)arg1;
- (void)setMaxAeMeteringRegions:(long long)arg1;
- (void)setIsZoomSupported:(_Bool)arg1;
- (void)setIsVideoStabilizationSupported:(_Bool)arg1;
- (void)setIsOpticalStabilizationSupported:(_Bool)arg1;
- (void)setIsFrontFacing:(_Bool)arg1;
- (void)setHorizontalViewAngle:(double)arg1;
- (void)setExposureTimeRange:(id)arg1;
- (void)setCurrentCameraApi:(long long)arg1;
- (void)setCanDisableShutterSound:(_Bool)arg1;
- (void)setCameraIndex:(long long)arg1;
- (void)setCamera2ZslSupport:(long long)arg1;
- (void)setCamera2SensorRect:(id)arg1;
- (void)setCamera2Level:(long long)arg1;
- (void)setCamera2CvPerStep:(double)arg1;
- (void)setCamera2CompensationStepRange:(id)arg1;
- (void)setCamera2AvailableNoiseReductionModes:(id)arg1;
- (void)setCamera2AvailableCapacities:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

