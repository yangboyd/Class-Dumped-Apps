//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, QTMButton, UILabel, UITapGestureRecognizer, YTMPlayerControlsView, YTMQueuePanelHeaderView, YTMScrollingLabel, YTMStoryboardScrubber;
@protocol YTMNowPlayingViewDelegate;

@interface YTMNowPlayingView : UIView <UIGestureRecognizerDelegate>
{
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    YTMScrollingLabel *_titleLabel;
    UILabel *_bylineLabel;
    UILabel *_secondaryBylineLabel;
    UIView *_playerControlsContainerView;
    UIView *_containerView;
    UIView *_headerContainerView;
    UIView *_headerView;
    UIView *_scrubberView;
    UIView *_playlistPanelContainerView;
    UIView *_safeAreaMaskView;
    UIView *_songInfoContainerView;
    NSString *_videoArtist;
    NSString *_videoArtistWithMetadata;
    NSString *_secondaryText;
    UITapGestureRecognizer *_playlistPanelHeaderTapGestureRecognizer;
    double _playlistPanelExpansionCoefficient;
    double _playlistPanelPanCoefficient;
    _Bool _live;
    _Bool _DVREnabled;
    _Bool _isSyncedToPlayhead;
    _Bool _songInfoViewExpanded;
    QTMButton *_actionButton;
    QTMButton *_infoButton;
    YTMStoryboardScrubber *_scrubber;
    UILabel *_timeRemainingLabel;
    YTMPlayerControlsView *_playerControlsView;
    id <YTMNowPlayingViewDelegate> _delegate;
    UIView *_playlistPanelView;
    YTMQueuePanelHeaderView *_playlistPanelHeaderView;
    UIView *_songInfoView;
    double _totalTime;
    double _downloadedTime;
    double _mediaTime;
    double _timeFromPlayhead;
    double _watchViewExpansionCoefficient;
    double _headerOffset;
    struct CGRect _playerFrame;
}

@property(nonatomic) double headerOffset; // @synthesize headerOffset=_headerOffset;
@property(nonatomic) double playlistPanelPanCoefficient; // @synthesize playlistPanelPanCoefficient=_playlistPanelPanCoefficient;
@property(nonatomic) double playlistPanelExpansionCoefficient; // @synthesize playlistPanelExpansionCoefficient=_playlistPanelExpansionCoefficient;
@property(nonatomic) double watchViewExpansionCoefficient; // @synthesize watchViewExpansionCoefficient=_watchViewExpansionCoefficient;
@property(nonatomic) struct CGRect playerFrame; // @synthesize playerFrame=_playerFrame;
@property(nonatomic) double timeFromPlayhead; // @synthesize timeFromPlayhead=_timeFromPlayhead;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(nonatomic) double downloadedTime; // @synthesize downloadedTime=_downloadedTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic, getter=isSongInfoViewExpanded) _Bool songInfoViewExpanded; // @synthesize songInfoViewExpanded=_songInfoViewExpanded;
@property(retain, nonatomic) UIView *songInfoView; // @synthesize songInfoView=_songInfoView;
@property(retain, nonatomic) YTMQueuePanelHeaderView *playlistPanelHeaderView; // @synthesize playlistPanelHeaderView=_playlistPanelHeaderView;
@property(retain, nonatomic) UIView *playlistPanelView; // @synthesize playlistPanelView=_playlistPanelView;
@property(nonatomic) __weak id <YTMNowPlayingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) YTMPlayerControlsView *playerControlsView; // @synthesize playerControlsView=_playerControlsView;
@property(readonly, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(readonly, nonatomic) YTMStoryboardScrubber *scrubber; // @synthesize scrubber=_scrubber;
@property(readonly, nonatomic) QTMButton *infoButton; // @synthesize infoButton=_infoButton;
@property(readonly, nonatomic) QTMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) YTMScrollingLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateSubviewsVisibility;
- (void)updateScrubberAccessibility;
- (void)setExpansionCoefficient:(double)arg1 animated:(_Bool)arg2;
- (void)translateSubviews;
- (void)handlePlaylistPanelPanWithTranslation:(struct CGPoint)arg1;
- (void)handlePlaylistPanelPanWithVelocity:(struct CGPoint)arg1;
- (void)expandOrCollapsePlaylistPanel;
- (void)didTapPlaylistPanelHeader:(id)arg1;
- (double)scrubberWidth;
- (void)layoutPlayerControlsAndLabels;
- (void)layoutCollapsedWatchViewScrubber;
- (void)updateByLineText;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setSafeAreaMaskColor:(id)arg1;
- (_Bool)playlistPanelExpanded;
- (void)setHeaderVisible:(_Bool)arg1;
@property(nonatomic, getter=isScrubberEnabled) _Bool scrubberEnabled;
- (void)setLive:(_Bool)arg1 DVREnabled:(_Bool)arg2;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)layoutSubviews_compact;
- (void)layoutSubviews_regular;
- (void)layoutSubviews;
- (id)accessibilityElements;
@property(readonly, nonatomic) _Bool arePlayerControlsHidden;
- (void)setVideoArtistWithMetadata:(id)arg1 secondaryText:(id)arg2;
- (void)setVideoTitle:(id)arg1 videoArtist:(id)arg2;
- (void)collapseExpandedViews;
- (double)minimumPreferredHeight;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

