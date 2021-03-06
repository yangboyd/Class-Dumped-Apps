//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGVideoPlaybackListener-Protocol.h>
#import <FBSharedFramework/IGVideoPlayerOverlayContainerViewDelegate-Protocol.h>
#import <FBSharedFramework/IGVideoPlayerOverlayContext-Protocol.h>
#import <FBSharedFramework/IGVideoPlayerOverlayVisibilityHelperDelegate-Protocol.h>

@class IGUserSession, IGVideo, IGVideoPlaybackController, IGVideoPlaybackLoggingConfig, IGVideoPlayerOverlay, IGVideoPlayerOverlayConfiguration, IGVideoPlayerOverlayContainerView, IGVideoPlayerOverlayVisibilityHelper, NSString, UIView;
@protocol IGVideoPlayerOverlayControllerDelegate;

@interface IGVideoPlayerOverlayController : NSObject <IGVideoPlayerOverlayContainerViewDelegate, IGVideoPlayerOverlayContext, IGVideoPlayerOverlayVisibilityHelperDelegate, IGVideoPlaybackListener>
{
    IGVideoPlayerOverlayConfiguration *_overlayConfiguration;
    IGVideoPlayerOverlay *_exclusivelyDisplayedOverlay;
    IGVideoPlayerOverlayVisibilityHelper *_visibilityHelper;
    IGUserSession *_userSession;
    IGVideoPlaybackLoggingConfig *_loggingConfig;
    IGVideoPlaybackController *_playbackController;
    IGVideoPlayerOverlayContainerView *_overlayView;
    IGVideo *_video;
    unsigned long long _videoPosterImageLoadStatus;
    id <IGVideoPlayerOverlayControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoPlayerOverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long videoPosterImageLoadStatus; // @synthesize videoPosterImageLoadStatus=_videoPosterImageLoadStatus;
@property(readonly, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) IGVideoPlayerOverlayContainerView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak IGVideoPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) IGVideoPlaybackLoggingConfig *loggingConfig; // @synthesize loggingConfig=_loggingConfig;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)videoPlaybackController:(id)arg1 didLoopItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didToggleAudioWithReason:(long long)arg2;
- (void)videoPlaybackControllerDidFinishSeeking:(id)arg1;
- (void)videoPlaybackControllerDidEmptyPlaybackBuffer:(id)arg1;
- (void)videoPlaybackControllerDidStopPlayback:(id)arg1;
- (void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;
- (void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didUpdateLoadingProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didStartLoadingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didLoadVideoForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didRequestItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didApplySettingsForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(long long)arg3;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)videoPlayerOverlayContainerViewDidDoubleTap:(id)arg1;
- (void)videoPlayerOverlayContainerViewDidSingleTap:(id)arg1;
- (void)videoPlayerOverlayVisibilityHelper:(id)arg1 didUpdateOverlayVisibility:(_Bool)arg2;
@property(readonly, nonatomic) _Bool overlaysVisible;
- (void)animateAlongsideOverlayVisibilityChange:(CDUnknownBlockType)arg1;
- (void)relinquishOverlayVisibilityLock:(id)arg1;
- (id)acquireLockOnOverlayVisibility;
- (void)makeOverlaysVisible;
- (void)stopExclusivelyDisplayingOverlay:(id)arg1;
- (_Bool)startExclusivelyDisplayingOverlay:(id)arg1;
- (void)setOverlayNeedsLayout:(id)arg1;
@property(readonly, nonatomic) UIView *tooltipContainerView;
- (id)_allOverlays;
- (void)_deregisterAllOverlays;
- (void)_registerOverlays:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithOverlayConfiguration:(id)arg1 video:(id)arg2 userSession:(id)arg3 loggingConfig:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

