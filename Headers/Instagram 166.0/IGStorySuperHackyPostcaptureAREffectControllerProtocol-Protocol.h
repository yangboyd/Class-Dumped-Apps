//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAREffectModel, IGVideoComposition, UIImage;
@protocol FBCCPlaybackControlling, FBVideoPostCaptureModeListener;

@protocol IGStorySuperHackyPostcaptureAREffectControllerProtocol <NSObject>
@property(readonly, nonatomic) id <FBCCPlaybackControlling> playbackController;
@property(retain, nonatomic) IGAREffectModel *currentAREffect;
- (void)setVideo:(IGVideoComposition *)arg1 previewOutput:(id <FBVideoPostCaptureModeListener>)arg2;
- (void)setAnimatedImage:(UIImage *)arg1 previewOutput:(id <FBVideoPostCaptureModeListener>)arg2;
- (void)stopRenderingAnimatedMedia;
@end

