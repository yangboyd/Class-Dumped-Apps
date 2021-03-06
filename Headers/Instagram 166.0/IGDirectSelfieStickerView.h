//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGFNFVideoPlayerDelegate-Protocol.h>

@class IGDirectSelfieStickerModel, IGFNFVideoPlayer, IGImageView, IGVideoPlayerManager, NSString;

@interface IGDirectSelfieStickerView : UIView <IGFNFVideoPlayerDelegate>
{
    IGVideoPlayerManager *_videoPlayerManager;
    IGFNFVideoPlayer *_videoPlayer;
    IGDirectSelfieStickerModel *_video;
    UIView *_videoView;
    double _selfieStickerDiameter;
    IGImageView *_imageView;
    _Bool _enableSizeAwareManager;
    _Bool _playing;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2;
- (void)pause;
- (void)play;
- (void)setVideo:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithVideoPlayerManager:(id)arg1 selfieStickerDiameter:(double)arg2 enableSizeAwareManager:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

