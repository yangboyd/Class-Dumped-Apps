//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListWorkingRangeDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVAutoplayingVideoCoordinatorDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVFeedItemUpdateCoordinatorDelegate-Protocol.h>

@class IGListSectionController, IGMedia, IGPhoto, IGTVAutoplayingVideoCoordinator, IGTVFeedItemUpdateCoordinator, IGUserSession, NSString, UIView;
@protocol IGTVFeedItemAutoplayingSectionCoordinatorDelegate;

@interface IGTVFeedItemAutoplayingSectionCoordinator : NSObject <IGListWorkingRangeDelegate, IGTVAutoplayingVideoCoordinatorDelegate, IGTVFeedItemUpdateCoordinatorDelegate>
{
    IGUserSession *_userSession;
    IGListSectionController<IGTVFeedItemAutoplayingSectionCoordinatorDelegate> *_sectionController;
    NSString *_analyticsModule;
    _Bool _prefetchThumbnail;
    IGTVFeedItemUpdateCoordinator *_updateCoordinator;
    IGTVAutoplayingVideoCoordinator *_videoCoordinator;
    IGMedia *_media;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGMedia *media; // @synthesize media=_media;
- (void)feedItemUpdateCoordinator:(id)arg1 didUnhideFeedItem:(id)arg2;
- (void)feedItemUpdateCoordinator:(id)arg1 didHideFeedItem:(id)arg2;
- (void)feedItemUpdateCoordinator:(id)arg1 didUpdateFeedItem:(id)arg2 feedItemChange:(long long)arg3;
- (void)autoplayingVideoCoordinator:(id)arg1 didUpdateShowCaptionsView:(_Bool)arg2;
- (void)autoplayingVideoCoordinator:(id)arg1 didUpdateVideoBuffering:(_Bool)arg2;
- (void)autoplayingVideoCoordinator:(id)arg1 videoPlayerDidUpdateCurrentTime:(double)arg2 shouldFlushSeenStateImmediately:(_Bool)arg3;
- (void)autoplayingVideoCoordinator:(id)arg1 didUpdateAudioEnabled:(_Bool)arg2;
- (void)autoplayingVideoCoordinator:(id)arg1 didUpdateState:(id)arg2;
- (struct CGSize)viewSizeForAutoplayingVideoCoordinator:(id)arg1;
- (id)loggingExtrasForAutoplayingVideoCoordinator:(id)arg1;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)resetPlaybackSession;
- (void)setAudioVolume:(double)arg1;
- (void)toggleAudioEnabled;
- (void)togglePlaybackForView:(id)arg1;
- (void)configurePlaybackSessionForView:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowCaptionsView;
@property(readonly, nonatomic) UIView *captionView;
@property(readonly, nonatomic) _Bool videoBuffering;
@property(readonly, nonatomic) long long soundIndicatorType;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) _Bool videoViewHidden;
@property(readonly, nonatomic) UIView *videoView;
@property(readonly, nonatomic) long long coverPhotoType;
@property(readonly, nonatomic) IGPhoto *coverPhoto;
@property(readonly, nonatomic) long long videoPlaybackState;
@property(readonly, nonatomic) _Bool hidden;
- (id)initWithUserSession:(id)arg1 sectionController:(id)arg2 playbackCoordinator:(id)arg3 analyticsModule:(id)arg4 sessionID:(id)arg5 prefetchThumbnail:(_Bool)arg6 captionSupportEnabled:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

