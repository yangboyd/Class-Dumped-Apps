//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASwipeBase.h"

@interface SCALensSwipeBase : SCASwipeBase
{
}

- (void)setTriggerAction:(id)arg1;
- (void)setTimeSinceLastFlipSec:(double)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setProductMediaType:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setLensType:(long long)arg1;
- (void)setLensSessionId:(id)arg1;
- (void)setLensFrameProcessingTimeMsStd:(double)arg1;
- (void)setLensFrameProcessingTimeMsAvg:(double)arg1;
- (void)setLensCategoryId:(id)arg1;
- (void)setLensBundleUrl:(id)arg1;
- (void)setInfoCardAvailable:(_Bool)arg1;
- (void)setFirstTriggerTimestamp:(long long)arg1;
- (void)setFirstFaceRenderTimestamp:(long long)arg1;
- (void)setFaceFrontCameraCount:(long long)arg1;
- (void)setFaceBackCameraCount:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

