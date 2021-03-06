//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCAction.h"

@class NSString;

@interface ACCCameraAction : ACCAction
{
    NSString *_preferPreset;
    id _payload;
}

+ (id)resetPreviewView:(id)arg1;
+ (id)setMaxZoomFactor:(double)arg1;
+ (id)changeZoomScale:(double)arg1;
+ (id)tapExposureAtPoint:(struct CGPoint)arg1;
+ (id)tapFocusAtPoint:(struct CGPoint)arg1;
+ (id)changeTorchEnable:(_Bool)arg1;
+ (id)switchTorch:(unsigned long long)arg1;
+ (id)changeFlashEnable:(_Bool)arg1;
+ (id)switchFlash:(unsigned long long)arg1;
+ (id)switchRatio:(long long)arg1 preferPreset:(id)arg2;
+ (id)switchRatio:(long long)arg1;
+ (id)switchCameraToPosition:(long long)arg1;
+ (id)switchAction;
+ (id)_cameraSesstionActionWithState:(unsigned long long)arg1;
+ (id)resumeCameraAction;
+ (id)pauseCameraAction;
+ (id)stopAudioAction;
+ (id)stopVideoAction;
+ (id)startAudioAction;
+ (id)startVideoAction;
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *preferPreset; // @synthesize preferPreset=_preferPreset;
- (void).cxx_destruct;

@end

