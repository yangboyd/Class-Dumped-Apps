//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGFNFVideoPlayerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGImageProgressViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGFNFVideoPlayer, IGImageProgressView, IGPhoto, IGVideo, IGVideoIndicatorView, NSString;
@protocol IGDirectVideoViewDelegate;

@interface IGDirectVideoView : UIView <IGFNFVideoPlayerDelegate, UIGestureRecognizerDelegate, IGImageProgressViewDelegate>
{
    _Bool _loading;
    id <IGDirectVideoViewDelegate> _delegate;
    IGImageProgressView *_photoImageView;
    IGVideo *_video;
    IGPhoto *_photo;
    IGVideoIndicatorView *_indicatorView;
    UIView *_videoView;
    IGFNFVideoPlayer *_player;
}

@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) IGFNFVideoPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) IGVideoIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) IGImageProgressView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(nonatomic) __weak id <IGDirectVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didLoadPreviewImage:(id)arg2 progressiveJPEGScanNumber:(id)arg3;
- (void)hideVideoIndicator;
@property(readonly, nonatomic) _Bool posterFrameLoaded;
- (void)_showVideo:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showVideoIndication:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_showIndicatorStyle:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hasPlayer;
- (void)setVideo:(id)arg1 withImage:(id)arg2 module:(id)arg3;
- (void)setVideo:(id)arg1 withPhoto:(id)arg2 module:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

