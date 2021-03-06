//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LiveStreamCapture, NSString, UIView;

@protocol HTSLiveCameraEffectProvider <NSObject>
- (UIView *)cameraPreview;
- (void)stopVideoEffectProcess;
- (void)startVideoEffectProcess;
- (LiveStreamCapture *)liveCapture;

@optional
- (void)openGesture:(_Bool)arg1;
- (void)applyStickerWithPath:(NSString *)arg1 identifier:(NSString *)arg2 enableFakeFace:(_Bool)arg3;
- (void)syncToRemote;
- (NSString *)stickerIdentifier;
- (NSString *)filterName;
- (void)setCheekValue:(long long)arg1;
- (long long)cheekValue;
- (void)setBigEyeValue:(long long)arg1;
- (long long)bigEyeValue;
- (void)setSmoothValue:(long long)arg1;
- (long long)smoothValue;
- (void)setWhiteValue:(long long)arg1;
- (long long)whiteValue;
@end

