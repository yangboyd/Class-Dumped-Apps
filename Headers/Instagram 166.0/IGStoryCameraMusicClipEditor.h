//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGMusicStickerEditorScrubberViewDelegate-Protocol.h>
#import <FBSharedFramework/IGMusicStickerLyricsScrubberViewDelegate-Protocol.h>
#import <FBSharedFramework/IGMusicStickerQuickSliderViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMusicClipsEditorLyricsCaptureToggleViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMusicTrackPlaybackEventListener-Protocol.h>
#import <FBSharedFramework/IGStoryPrecaptureMusicBrowserViewControllerDelegate-Protocol.h>

@class IGStoryCameraMusicClipEditorHeaderView, IGStoryMusicEditorScrubberView, IGStoryMusicLoggingMetadata, IGStoryMusicLyricsScrubberView, IGStoryMusicLyricsSongModel, IGStoryMusicPlaybackTimePill, IGStoryMusicQuickSliderView, IGStoryMusicTrack, IGStoryMusicTrackClip, IGStoryMusicTrackPlayer, IGStoryPrecaptureMusicBrowserViewController, IGUserSession, NSString, UILabel, UISelectionFeedbackGenerator, UIView;
@protocol IGStoryCameraMusicClipEditorDelegate;

@interface IGStoryCameraMusicClipEditor : UIViewController <IGStoryPrecaptureMusicBrowserViewControllerDelegate, IGMusicStickerLyricsScrubberViewDelegate, IGMusicStickerQuickSliderViewDelegate, IGMusicStickerEditorScrubberViewDelegate, IGStoryMusicClipsEditorLyricsCaptureToggleViewDelegate, IGStoryMusicTrackPlaybackEventListener, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGStoryMusicLoggingMetadata *_loggingMetadata;
    UIView *_dimmingView;
    IGStoryCameraMusicClipEditorHeaderView *_headerView;
    IGStoryMusicLyricsScrubberView *_lyricsScrubberView;
    IGStoryMusicQuickSliderView *_quickSliderView;
    IGStoryMusicEditorScrubberView *_mainScrubberView;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    IGStoryMusicPlaybackTimePill *_playbackTimePill;
    IGStoryMusicTrack *_musicTrack;
    IGStoryMusicTrackPlayer *_musicPlayer;
    IGStoryPrecaptureMusicBrowserViewController *_musicBrowserViewController;
    UILabel *_musicPickerLabel;
    _Bool _scrubbing;
    id <IGStoryCameraMusicClipEditorDelegate> _delegate;
    IGStoryMusicLyricsSongModel *_lyrics;
    double _clipStartTime;
    double _totalDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double clipStartTime; // @synthesize clipStartTime=_clipStartTime;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain, nonatomic) IGStoryMusicLyricsSongModel *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) __weak id <IGStoryCameraMusicClipEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_didTapDoneButton:(id)arg1;
- (void)_didTapSongDetailsButton:(id)arg1;
- (void)_didTapDismissButton:(id)arg1;
- (void)precaptureMusicBrowserViewController:(id)arg1 didSelectOriginalAudio:(id)arg2;
- (void)precaptureMusicBrowserViewController:(id)arg1 didSelectMusicTrack:(id)arg2;
- (void)precaptureMusicBrowserViewControllerDidCancel:(id)arg1;
- (void)musicClipsEditorLyricsCaptureToggleView:(id)arg1 didToggleLyricsSwitchViewOn:(_Bool)arg2;
- (void)musicScrubberView:(id)arg1 didEndScrollingToTime:(double)arg2;
- (void)musicScrubberView:(id)arg1 didScrollToTime:(double)arg2;
- (void)musicScrubberView:(id)arg1 didBeginScrollingAtTime:(double)arg2;
- (void)musicStickerQuickSliderViewDidEndSliding:(id)arg1;
- (void)musicStickerQuickSliderView:(id)arg1 didSlideToTime:(double)arg2;
- (void)musicStickerQuickSliderViewDidBeginSliding:(id)arg1;
- (void)musicStickerLyricsScrubberViewDidUpdateActiveCell:(id)arg1;
- (void)musicStickerLyricsScrubberViewDidEndScrubbing:(id)arg1;
- (void)musicStickerLyricsScrubberView:(id)arg1 didScrollToTime:(double)arg2;
- (void)musicStickerLyricsScrubberViewDidBeginScrubbing:(id)arg1;
- (void)musicTrackPlayer:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)musicTrackPlayerDidPlayToEnd:(id)arg1;
- (void)musicTrackPlayer:(id)arg1 didUpdateStallState:(_Bool)arg2;
- (void)musicTrackPlayer:(id)arg1 didUpdatePlaybackState:(_Bool)arg2;
- (void)musicTrackPlayer:(id)arg1 didDetermineDuration:(double)arg2 ofAudioURL:(id)arg3;
- (void)musicTrackPlayer:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)_pauseFadingVolumeOut;
- (void)_playFadingVolumeIn;
@property(nonatomic) _Bool deleteButtonVisible;
@property(retain, nonatomic) IGStoryMusicTrackClip *musicTrackClip;
- (void)_setClipStartTime:(double)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)_applicationDidEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMusicTrackClip:(id)arg1 musicBrowserViewController:(id)arg2 userSession:(id)arg3;
- (id)initWithMusicTrackClip:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

