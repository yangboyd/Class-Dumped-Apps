//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGCoWatchClosedCaptionsViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCoWatchCoordinatorMediaPlaybackDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCoWatchOverlayViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCoWatchPlaybackControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCoWatchVideoControlsDelegate-Protocol.h>

@class IGActionSheetController, IGCoWatchOverlayView, IGCoWatchPlaybackController, IGCoWatchPlaybackUpdateDisplay, IGCoWatchPrivateMediaView, IGCoWatchUploadPendingView, IGUserSession, IGVideoCaptionController, NSString;
@protocol IGCoWatchViewControllerOverlayDelegate, IGCoWatchViewControllerVideoPlaybackDelegate, IGUserExperimentSetProviding, IGUserLauncherSetProviding;

@interface IGCoWatchViewController : UIViewController <IGCoWatchOverlayViewDelegate, IGCoWatchVideoControlsDelegate, IGCoWatchPlaybackControllerDelegate, IGCoWatchCoordinatorMediaPlaybackDelegate, IGCoWatchClosedCaptionsViewControllerDelegate>
{
    id <IGCoWatchViewControllerOverlayDelegate> _overlayDelegate;
    id <IGCoWatchViewControllerVideoPlaybackDelegate> _playbackDelegate;
    NSString *_module;
    IGCoWatchOverlayView *_overlayView;
    IGCoWatchPlaybackController *_playbackController;
    IGCoWatchPrivateMediaView *_privateMediaView;
    IGCoWatchUploadPendingView *_uploadPendingView;
    id <IGUserLauncherSetProviding> _launcherSet;
    id <IGUserExperimentSetProviding> _experimentSet;
    IGActionSheetController *_actionSheet;
    IGCoWatchPlaybackUpdateDisplay *_playbackUpdateDisplay;
    IGVideoCaptionController *_captionController;
    IGUserSession *_userSession;
    _Bool _captionEnabled;
}

- (void).cxx_destruct;
- (void)_loadCaptionsIfNecessary;
- (void)_configureCaptionControllerWithMedia:(id)arg1;
- (void)videoControlsViewDidToggleAudio:(id)arg1;
- (void)videoControlsViewProgressScrubbingEnded:(id)arg1;
- (void)videoControlsViewProgressScrubbingChanged:(id)arg1;
- (void)videoControlsViewProgressScrubbingBegan:(id)arg1;
- (void)videoControlsViewDidPressPlayPause:(id)arg1;
- (void)coWatchOverlayViewDidTapMoreButton:(id)arg1 withReportingOn:(_Bool)arg2 withCaptionsOn:(_Bool)arg3;
- (void)coWatchOverlayView:(id)arg1 didToggleAudio:(_Bool)arg2;
- (void)coWatchOverlayViewDidTapRemoveButton:(id)arg1;
- (void)coWatchOverlayViewDidTapOwnerButton:(id)arg1;
- (void)coWatchClosedCaptionsViewController:(id)arg1 didSelectLocale:(id)arg2;
- (void)coWatchCoordinator:(id)arg1 currentMediaDidRewindByActor:(id)arg2;
- (void)coWatchCoordinator:(id)arg1 currentMediaDidFastForwardByActor:(id)arg2;
- (void)coWatchCoordinator:(id)arg1 currentMediaDidResumeByActor:(id)arg2;
- (void)coWatchCoordinator:(id)arg1 currentMediaDidPauseByActor:(id)arg2;
- (void)coWatchPlaybackController:(id)arg1 didToggleAudio:(_Bool)arg2;
- (void)coWatchPlaybackController:(id)arg1 didUpdatePlaybackProgress:(double)arg2 duration:(double)arg3;
- (void)coWatchPlaybackControllerDidPause:(id)arg1;
- (void)coWatchPlaybackControllerDidBeginPlaying:(id)arg1;
- (void)coWatchPlaybackController:(id)arg1 didLoadImage:(id)arg2;
- (void)_removeUploadPendingView;
- (void)_removePrivateMediaView;
- (void)_setupUploadPendingViewWithImageThumbnail:(id)arg1 message:(id)arg2;
- (void)_setupPrivateMediaView;
- (void)_resizePlaybackContainerViewForSize:(struct CGSize)arg1;
- (_Bool)_areCaptionsAvailable:(id)arg1;
- (void)_resizePlaybackContainerViewForMedia:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)showChrome:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithMediaInfo:(id)arg1 actor:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithPlaybackController:(id)arg1 module:(id)arg2 launcherSet:(id)arg3 experimentSet:(id)arg4 overlayDelegate:(id)arg5 videoPlaybackDelegate:(id)arg6 userSession:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

