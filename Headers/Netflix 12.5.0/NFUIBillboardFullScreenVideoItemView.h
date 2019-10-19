//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NFUINetworkErrorViewControllerDelegate-Protocol.h"
#import "NFUIPlayerDelegate-Protocol.h"
#import "NFUIReusableVideoViewProtocol-Protocol.h"

@class NFUIBillboardVideoViewModel, NFUINetworkErrorViewController, NFUIPreviewsLoadingView, NSString, UILabel;
@protocol NFUIVideoViewDelegate;

@interface NFUIBillboardFullScreenVideoItemView : UIView <NFUIPlayerDelegate, NFUINetworkErrorViewControllerDelegate, NFUIReusableVideoViewProtocol>
{
    _Bool overriddenSubsDubs;
    _Bool _pendingPlay;
    id <NFUIVideoViewDelegate> delegate;
    long long index;
    UIView *_playerViewContainer;
    UIView *_playerView;
    NFUIBillboardVideoViewModel *_viewModel;
    NFUIPreviewsLoadingView *_loadingView;
    NSString *_playerId;
    NFUINetworkErrorViewController *_playbackErrorController;
    UILabel *_activityLabel;
    double _bufferingStartTime;
    double _currentTime;
}

@property(nonatomic) _Bool pendingPlay; // @synthesize pendingPlay=_pendingPlay;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double bufferingStartTime; // @synthesize bufferingStartTime=_bufferingStartTime;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) NFUINetworkErrorViewController *playbackErrorController; // @synthesize playbackErrorController=_playbackErrorController;
@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) NFUIPreviewsLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NFUIBillboardVideoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(nonatomic) long long index; // @synthesize index;
@property(nonatomic) __weak id <NFUIVideoViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool overriddenSubsDubs; // @synthesize overriddenSubsDubs;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)player:(id)arg1 timeUpdate:(double)arg2;
- (void)showLoadingView;
- (void)player:(id)arg1 stateChange:(unsigned long long)arg2 previous:(unsigned long long)arg3;
- (void)retryAfterError;
- (void)player:(id)arg1 error:(id)arg2;
- (void)player:(id)arg1 videoWillAppear:(_Bool)arg2;
- (void)player:(id)arg1 videoDidAppear:(_Bool)arg2;
- (void)player:(id)arg1 videoReadyForDisplay:(_Bool)arg2;
- (void)setSubtitleRelativeFontScale:(double)arg1 imageSafeAreaInsets:(struct UIEdgeInsets)arg2;
- (void)disableSubtitles;
- (void)enableSubtitles;
- (id)currentPlayer;
- (void)toggleMute;
- (void)unMute;
- (void)mute;
- (double)playerVolume;
- (void)stop;
- (void)pause;
- (void)play;
- (void)handleStartPlayEvent:(id)arg1;
- (void)initializePlayer;
- (void)configureWithModel:(id)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

