//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAdsPlaybackCoordinator-Protocol.h"
#import "YTAdsPlaybackProtocol-Protocol.h"
#import "YTSingleVideoCurrentTimeObserver-Protocol.h"
#import "YTSingleVideoErrorObserver-Protocol.h"
#import "YTSingleVideoLifecycleStateObserver-Protocol.h"
#import "YTSingleVideoMediaStateObserver-Protocol.h"
#import "YTSingleVideoMediaStateSideEffectfulObserver-Protocol.h"

@class GIMMe, NSString, YTAdFulfillmentCore, YTGlobalConfig, YTInstreamAdSingleVideoObserver, YTInstreamAdTrackingController, YTInstreamAdsCoordinator, YTPlayerCurrentAdsState, YTPlayerResponse, YTUserDefaults, YTVideoAdsOverlayCoordinator;
@protocol MLCuepointObserver, YTAdsPlaybackCoordinatorDelegate, YTResponder;

@interface YTInstreamAdsPlaybackCoordinator : NSObject <YTSingleVideoCurrentTimeObserver, YTSingleVideoErrorObserver, YTSingleVideoLifecycleStateObserver, YTSingleVideoMediaStateObserver, YTSingleVideoMediaStateSideEffectfulObserver, YTAdsPlaybackCoordinator, YTAdsPlaybackProtocol>
{
    YTVideoAdsOverlayCoordinator *_currentOverlayCoordinator;
    unsigned long long _adRequestID;
    YTUserDefaults *_userDefaults;
    YTGlobalConfig *_globalConfig;
    YTInstreamAdTrackingController *_adBreakEventReporter;
    YTInstreamAdTrackingController *_adEventReporter;
    YTPlayerResponse *_contentPlayerResponse;
    _Bool _hasAdIntro;
    id <YTResponder> _parentResponder;
    _Bool _isLastAdSkipped;
    int _playerViewLayout;
    _Bool _enableSlotFulfillmentReroute;
    YTAdFulfillmentCore *_fulfillmentCore;
    id <YTAdsPlaybackCoordinatorDelegate> _delegate;
    YTPlayerCurrentAdsState *_currentAdsState;
    YTPlayerCurrentAdsState *_lastAdsState;
    YTInstreamAdSingleVideoObserver *_adVideoPlayerObserver;
    GIMMe *_gimme;
    YTVideoAdsOverlayCoordinator *_videoAdsOverlayCoordinator;
    YTInstreamAdsCoordinator *_instreamAdsCoordinator;
}

@property(readonly, nonatomic) YTInstreamAdsCoordinator *instreamAdsCoordinator; // @synthesize instreamAdsCoordinator=_instreamAdsCoordinator;
@property(readonly, nonatomic) YTVideoAdsOverlayCoordinator *videoAdsOverlayCoordinator; // @synthesize videoAdsOverlayCoordinator=_videoAdsOverlayCoordinator;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) YTInstreamAdSingleVideoObserver *adVideoPlayerObserver; // @synthesize adVideoPlayerObserver=_adVideoPlayerObserver;
@property(readonly, nonatomic) YTPlayerCurrentAdsState *lastAdsState; // @synthesize lastAdsState=_lastAdsState;
@property(readonly, nonatomic) YTPlayerCurrentAdsState *currentAdsState; // @synthesize currentAdsState=_currentAdsState;
@property(nonatomic) __weak id <YTAdsPlaybackCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)activateOverlayCoordinator;
- (_Bool)shouldSkipRemainingAdsInAdPod;
- (void)loadPlayerResponseAndPlayAdInterrupt:(id)arg1;
- (void)prepareAdInterrupt:(id)arg1;
- (void)updateStateForNewActiveAdSingleVideo:(id)arg1;
- (void)startObservingAdSingleVideo:(id)arg1;
- (void)playAdInterrupt:(id)arg1;
- (id)newActiveViewVideoMonitor;
- (id)newAdBreakTrackerWithAdBreak:(id)arg1;
- (id)newAdEventReporter;
- (id)currentAdRequestConfig;
- (double)currentSystemTime;
- (_Bool)isCurrentAdBreakPreroll;
- (void)clearCurrentAdsState;
- (void)willPlayAd:(id)arg1;
- (void)deactivateOverlayCoordinator;
- (void)activeAdSingleVideo:(id)arg1 mediaStateDidChangeToState:(long long)arg2;
- (void)activeContentSingleVideo:(id)arg1 mediaStateDidChangeToState:(long long)arg2;
- (void)singleVideo:(id)arg1 currentTimeDidChange:(CDStruct_d60ef703)arg2;
- (void)singleVideo:(id)arg1 didFailWithError:(id)arg2;
- (void)singleVideo:(id)arg1 lifecycleStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)potentiallyMutatedSingleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)singleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (id)instreamForcedAdParameters;
- (void)externalPlaybackActiveDidChange:(_Bool)arg1;
- (id)lastAdVideoID;
- (double)lastAdTotalMediaTime;
- (id)currentAd;
- (void)doneWithCurrentAdWithBreakType:(long long)arg1;
- (void)doneWithCurrentAd;
- (void)setPlayerViewLayout:(int)arg1;
- (id)debugParameters;
- (void)reset;
- (void)didPressSkipAdWithTouchPoint:(struct CGPoint)arg1;
- (void)willPlayNewVideoWithAutoplay:(_Bool)arg1;
- (void)didTapCompanionAd;
- (void)didFailToPlayAdWithPlaybackError:(id)arg1;
- (void)didSkipOrCompleteAd:(id)arg1;
- (void)didStopPlayingAd;
- (void)setContentPlaybackData:(id)arg1 contentSingleVideo:(id)arg2 playbackTimeline:(id)arg3;
- (void)setContentPlaybackData:(id)arg1 contentSingleVideo:(id)arg2;
- (void)startPostrollAdBreak;
- (void)startPrerollAdBreak;
- (id)coordinatorState;
- (void)setOverlayFactory:(id)arg1;
- (void)prepareOverlays;
- (void)startOverlay;
- (id)acquireOverlay;
- (void)playbackControllerWillActivatePrebufferingAdTransitionWithBufferedMediaTime:(double)arg1;
@property(readonly, nonatomic) id <MLCuepointObserver> adsCuepointObserver;
- (id)adsDAITimeline;
- (_Bool)supportsPlaybackForContentPlayerResponse:(id)arg1;
- (void)adBreakWithType:(long long)arg1 failedToLoadWithError:(id)arg2;
- (void)playFirstAdInterrupt:(id)arg1 inBreakWithType:(long long)arg2;
- (id)contentVideoThumbnails;
- (void)adSlotDidComplete;
- (void)adRequestDidFailWithError:(id)arg1;
- (void)adDidTapthroughWithTouchPoint:(struct CGPoint)arg1;
- (void)adDidSkipWithTouchPoint:(struct CGPoint)arg1;
- (void)adDidShowSkip;
- (void)adBreakDidStart:(id)arg1;
- (id)contentVideoTitle;
- (id)newActiveViewVideoMonitorWithContentPlayerResponse:(id)arg1;
- (id)videoAdTrackingControllerWithAd:(id)arg1 adBreak:(id)arg2 activeViewVideoMonitor:(id)arg3;
- (id)initWithOfflineAdProvider:(id)arg1 offlineAdErrorProvider:(id)arg2 overlayFactory:(id)arg3 delegate:(id)arg4 parentResponder:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

