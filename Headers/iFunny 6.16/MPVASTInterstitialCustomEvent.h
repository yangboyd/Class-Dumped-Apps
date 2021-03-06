//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPInterstitialCustomEvent.h>

#import <Funny/MPAdDestinationDisplayAgentDelegate-Protocol.h>
#import <Funny/MPRewardedVideoCustomEvent-Protocol.h>
#import <Funny/MPVideoPlayerViewControllerDelegate-Protocol.h>

@class MPVASTMediaFile, MPVideoConfig, MPVideoPlayerViewController, NSDictionary, NSString;
@protocol MPAdDestinationDisplayAgent, MPMediaFileCache, MPPrivateInterstitialCustomEventDelegate><MPPrivateRewardedVideoCustomEventDelegate, MPVASTTracking;

@interface MPVASTInterstitialCustomEvent : MPInterstitialCustomEvent <MPRewardedVideoCustomEvent, MPAdDestinationDisplayAgentDelegate, MPVideoPlayerViewControllerDelegate>
{
    _Bool _hasAdAvailable;
    id <MPPrivateInterstitialCustomEventDelegate><MPPrivateRewardedVideoCustomEventDelegate> delegate;
    id <MPAdDestinationDisplayAgent> _adDestinationDisplayAgent;
    id <MPVASTTracking> _vastTracking;
    id <MPMediaFileCache> _mediaFileCache;
    MPVASTMediaFile *_remoteMediaFileToPlay;
    MPVideoConfig *_videoConfig;
    MPVideoPlayerViewController *_playerViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAdAvailable; // @synthesize hasAdAvailable=_hasAdAvailable;
@property(retain, nonatomic) MPVideoPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) MPVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(retain, nonatomic) MPVASTMediaFile *remoteMediaFileToPlay; // @synthesize remoteMediaFileToPlay=_remoteMediaFileToPlay;
@property(retain, nonatomic) id <MPMediaFileCache> mediaFileCache; // @synthesize mediaFileCache=_mediaFileCache;
@property(retain, nonatomic) id <MPVASTTracking> vastTracking; // @synthesize vastTracking=_vastTracking;
@property(retain, nonatomic) id <MPAdDestinationDisplayAgent> adDestinationDisplayAgent; // @synthesize adDestinationDisplayAgent=_adDestinationDisplayAgent;
@property(nonatomic) __weak id <MPPrivateInterstitialCustomEventDelegate><MPPrivateRewardedVideoCustomEventDelegate> delegate; // @synthesize delegate;
- (void)dismissPlayerViewController;
- (void)fetchAndLoadAdWithConfiguration:(id)arg1 fetchAdCompletion:(CDUnknownBlockType)arg2;
- (void)loadAd;
- (void)showInterstitialFromRootViewController:(id)arg1;
- (void)requestInterstitialWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2;
- (id)adConfig;
- (void)dealloc;
- (id)init;
- (void)requestRewardedVideoWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2;
- (void)presentRewardedVideoFromViewController:(id)arg1;
- (void)handleCustomEventInvalidated;
- (void)handleAdPlayedForCustomEventNetwork;
- (_Bool)enableAutomaticImpressionAndClickTracking;
- (id)viewControllerForPresentingModalView;
- (void)displayAgentWillPresentModal;
- (void)displayAgentWillLeaveApplication;
- (void)displayAgentDidDismissModal;
- (void)videoPlayerContainerView:(id)arg1 companionAdViewRequestDismiss:(id)arg2;
- (void)videoPlayerContainerView:(id)arg1 didFailToLoadCompanionAdView:(id)arg2;
- (void)videoPlayerContainerView:(id)arg1 didClickCompanionAdView:(id)arg2 overridingClickThroughURL:(id)arg3;
- (void)videoPlayerContainerView:(id)arg1 didShowCompanionAdView:(id)arg2;
- (void)videoPlayerContainerView:(id)arg1 didClickIndustryIconView:(id)arg2 overridingClickThroughURL:(id)arg3;
- (void)videoPlayerContainerView:(id)arg1 didShowIndustryIconView:(id)arg2;
- (void)videoPlayerContainerView:(id)arg1 didTriggerEvent:(long long)arg2 videoProgress:(double)arg3;
- (void)videoPlayerContainerView:(id)arg1 videoDidReachProgressTime:(double)arg2 duration:(double)arg3;
- (void)videoPlayerContainerViewDidCompleteVideo:(id)arg1 duration:(double)arg2;
- (void)videoPlayerContainerViewDidStartVideo:(id)arg1 duration:(double)arg2;
- (void)videoPlayerContainerViewDidFailToLoadVideo:(id)arg1 error:(id)arg2;
- (void)videoPlayerContainerViewDidLoadVideo:(id)arg1;
- (id)viewControllerForPresentingModalMRAIDExpandedView;
- (void)interstitialDidDisappear:(id)arg1;
- (void)interstitialWillDisappear:(id)arg1;
- (void)interstitialDidAppear:(id)arg1;
- (void)interstitialWillAppear:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDictionary *localExtras;
@property(readonly) Class superclass;

@end

