//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStickerBundleContentViewType-Protocol.h>
#import <FBSharedFramework/IGStorySerializable-Protocol.h>

@class AVCaptureVideoPreviewLayer, IGFilteredImageView, IGImageView, NSArray, NSString, UIImageView;
@protocol IGStickerBundleContentViewLoadingDelegate;

@interface IGCameraStickerContentView : UIView <IGStickerBundleContentViewType, IGStorySerializable>
{
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    double _playbackTime;
    AVCaptureVideoPreviewLayer *_previewLayer;
    IGFilteredImageView *_captureImageView;
    IGImageView *_frameImageView;
    UIImageView *_maskImageView;
    UIView *_selfieContainerView;
    long long _currentIndex;
    NSArray *_frames;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) UIView *selfieContainerView; // @synthesize selfieContainerView=_selfieContainerView;
@property(readonly, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(readonly, nonatomic) IGImageView *frameImageView; // @synthesize frameImageView=_frameImageView;
@property(readonly, nonatomic) IGFilteredImageView *captureImageView; // @synthesize captureImageView=_captureImageView;
@property(readonly, nonatomic) __weak AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (id)metadataForResourceDirectory:(id)arg1;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (id)stickerView;
- (id)loggingId;
- (id)outlinePath;
- (void)_animateFlashWithDuration:(double)arg1;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (id)_currentFrame;
- (void)setCaptureImage:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPreviewLayer:(id)arg1 frames:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

