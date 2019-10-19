//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "MLInnerTubePlayerConfigDataSource-Protocol.h"
#import "YTCacheableInnerTubeResponse-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIAdSafetyExperienceReason, YTIAttestationSupportedRenderers, YTIAuxiliaryUi, YTICaptionsSupportedRenderers, YTIClipConfig, YTIEndscreenSupportedRenderers, YTIFrameworkUpdateTransport, YTIHeartbeatParams, YTIInStreamPlayerCtaAdsSupportedRenderers, YTIInfoCardsSupportedRenderers, YTIOfflineState, YTIPaidContentOverlaySupportedRenderers, YTIPlayabilityStatus, YTIPlaybackTracking, YTIPlayerCompanionAdsSupportedRenderers, YTIPlayerConfig, YTIPlayerControlsOverlaySupportedRenderers, YTIRenderer, YTIResponseContext, YTIStoryboardsSupportedRenderers, YTIStreamingData, YTISurveySupportedRenderers, YTIVideoDetails, YTIVideoInteractions, YTIVideoQualityPromoSupportedRenderers;

@interface YTIPlayerResponse : GPBMessage <MLInnerTubePlayerConfigDataSource, YTCacheableInnerTubeResponse>
{
}

+ (id)descriptor;
- (_Bool)ytm_hasLiveStreamOfflineSlate;
- (id)ytm_audioOnlyPlayabilityRenderer;
- (id)ytm_audioOnlyUpsell;
- (_Bool)ytm_isAudioOnlyPlayable;
- (_Bool)adsAllowReuse;
- (_Bool)shouldCacheResponse;
- (_Bool)isWindowedLive;
- (void)fillHostVideoID:(id)arg1 inVMAPAdBreaks:(id)arg2;
- (_Bool)isDAIEnabledPlayback;
- (double)fadeRewindOffset;
- (id)midrollFadeConfig;
- (_Bool)shouldFadeMidroll;
- (_Bool)isPlayableByGaplessSequencer;
- (_Bool)isPlayableInBackground;
- (id)adIntroRenderer;
- (id)VMAPXMLString;
- (_Bool)hasTracklistCaptionTracks;
- (id)liveStoryboardSpec;
- (id)storyboardSpec;
- (id)captionURL;
- (_Bool)shouldFetchCaptions;
- (_Bool)isMonetized;
- (id)remoteAdURLsWithVMAPParser:(id)arg1 error:(id *)arg2;
- (id)adBreaksWithVMAPParser:(id)arg1 VMAPXMLString:(id)arg2 error:(id *)arg3;
- (id)adBreaksWithVMAPParser:(id)arg1 error:(id *)arg2;
- (id)backgroundUpsell;
- (id)offlineUpsell;

// Remaining properties
@property(copy, nonatomic) NSString *adBreakParams; // @dynamic adBreakParams;
@property(copy, nonatomic) NSString *adNextParams; // @dynamic adNextParams;
@property(copy, nonatomic) NSString *adParams; // @dynamic adParams;
@property(retain, nonatomic) NSMutableArray *adPlacementsArray; // @dynamic adPlacementsArray;
@property(readonly, nonatomic) unsigned long long adPlacementsArray_Count; // @dynamic adPlacementsArray_Count;
@property(retain, nonatomic) YTIAdSafetyExperienceReason *adSafetyReason; // @dynamic adSafetyReason;
@property(retain, nonatomic) NSMutableArray *annotationsArray; // @dynamic annotationsArray;
@property(readonly, nonatomic) unsigned long long annotationsArray_Count; // @dynamic annotationsArray_Count;
@property(retain, nonatomic) YTIAttestationSupportedRenderers *attestation; // @dynamic attestation;
@property(retain, nonatomic) YTIAuxiliaryUi *auxiliaryUi; // @dynamic auxiliaryUi;
@property(retain, nonatomic) YTICaptionsSupportedRenderers *captions; // @dynamic captions;
@property(retain, nonatomic) YTIInfoCardsSupportedRenderers *cards; // @dynamic cards;
@property(retain, nonatomic) NSMutableArray *chapterMarkersArray; // @dynamic chapterMarkersArray;
@property(readonly, nonatomic) unsigned long long chapterMarkersArray_Count; // @dynamic chapterMarkersArray_Count;
@property(retain, nonatomic) YTIClipConfig *clipConfig; // @dynamic clipConfig;
@property(retain, nonatomic) YTIRenderer *ctaOverlay; // @dynamic ctaOverlay;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIEndscreenSupportedRenderers *endscreen; // @dynamic endscreen;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasAdBreakParams; // @dynamic hasAdBreakParams;
@property(nonatomic) _Bool hasAdNextParams; // @dynamic hasAdNextParams;
@property(nonatomic) _Bool hasAdParams; // @dynamic hasAdParams;
@property(nonatomic) _Bool hasAdSafetyReason; // @dynamic hasAdSafetyReason;
@property(nonatomic) _Bool hasAttestation; // @dynamic hasAttestation;
@property(nonatomic) _Bool hasAuxiliaryUi; // @dynamic hasAuxiliaryUi;
@property(nonatomic) _Bool hasCaptions; // @dynamic hasCaptions;
@property(nonatomic) _Bool hasCards; // @dynamic hasCards;
@property(nonatomic) _Bool hasClipConfig; // @dynamic hasClipConfig;
@property(nonatomic) _Bool hasCtaOverlay; // @dynamic hasCtaOverlay;
@property(nonatomic) _Bool hasEndscreen; // @dynamic hasEndscreen;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasHeartbeatParams; // @dynamic hasHeartbeatParams;
@property(nonatomic) _Bool hasHideAddtoButtonSmallScreen; // @dynamic hasHideAddtoButtonSmallScreen;
@property(nonatomic) _Bool hasHideShareButtonSmallScreen; // @dynamic hasHideShareButtonSmallScreen;
@property(nonatomic) _Bool hasIbaDebugInfo; // @dynamic hasIbaDebugInfo;
@property(nonatomic) _Bool hasInstreamPlayerCtaAd; // @dynamic hasInstreamPlayerCtaAd;
@property(nonatomic) _Bool hasOfflineState; // @dynamic hasOfflineState;
@property(nonatomic) _Bool hasOnesiePlayerServiceInfo; // @dynamic hasOnesiePlayerServiceInfo;
@property(nonatomic) _Bool hasOverlay; // @dynamic hasOverlay;
@property(nonatomic) _Bool hasPaidContentOverlay; // @dynamic hasPaidContentOverlay;
@property(nonatomic) _Bool hasPlayabilityStatus; // @dynamic hasPlayabilityStatus;
@property(nonatomic) _Bool hasPlaybackTracking; // @dynamic hasPlaybackTracking;
@property(nonatomic) _Bool hasPlayerCompanionAd; // @dynamic hasPlayerCompanionAd;
@property(nonatomic) _Bool hasPlayerConfig; // @dynamic hasPlayerConfig;
@property(nonatomic) _Bool hasPrefetchedPrerollAdBreakResponse; // @dynamic hasPrefetchedPrerollAdBreakResponse;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasStoryboards; // @dynamic hasStoryboards;
@property(nonatomic) _Bool hasStreamingData; // @dynamic hasStreamingData;
@property(nonatomic) _Bool hasSurvey; // @dynamic hasSurvey;
@property(nonatomic) _Bool hasThreed; // @dynamic hasThreed;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoDetails; // @dynamic hasVideoDetails;
@property(nonatomic) _Bool hasVideoInteractions; // @dynamic hasVideoInteractions;
@property(nonatomic) _Bool hasVideoQualityPromoSupportedRenderers; // @dynamic hasVideoQualityPromoSupportedRenderers;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIHeartbeatParams *heartbeatParams; // @dynamic heartbeatParams;
@property(nonatomic) _Bool hideAddtoButtonSmallScreen; // @dynamic hideAddtoButtonSmallScreen;
@property(nonatomic) _Bool hideShareButtonSmallScreen; // @dynamic hideShareButtonSmallScreen;
@property(copy, nonatomic) NSString *ibaDebugInfo; // @dynamic ibaDebugInfo;
@property(retain, nonatomic) YTIInStreamPlayerCtaAdsSupportedRenderers *instreamPlayerCtaAd; // @dynamic instreamPlayerCtaAd;
@property(retain, nonatomic) NSMutableArray *interstitialPodsArray; // @dynamic interstitialPodsArray;
@property(readonly, nonatomic) unsigned long long interstitialPodsArray_Count; // @dynamic interstitialPodsArray_Count;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @dynamic messagesArray;
@property(readonly, nonatomic) unsigned long long messagesArray_Count; // @dynamic messagesArray_Count;
@property(retain, nonatomic) YTIOfflineState *offlineState; // @dynamic offlineState;
@property(retain, nonatomic) NSMutableArray *onResponseReceivedActionsArray; // @dynamic onResponseReceivedActionsArray;
@property(readonly, nonatomic) unsigned long long onResponseReceivedActionsArray_Count; // @dynamic onResponseReceivedActionsArray_Count;
@property(retain, nonatomic) NSMutableArray *onResponseReceivedEndpointsArray; // @dynamic onResponseReceivedEndpointsArray;
@property(readonly, nonatomic) unsigned long long onResponseReceivedEndpointsArray_Count; // @dynamic onResponseReceivedEndpointsArray_Count;
@property(copy, nonatomic) NSData *onesiePlayerServiceInfo; // @dynamic onesiePlayerServiceInfo;
@property(retain, nonatomic) YTIPlayerControlsOverlaySupportedRenderers *overlay; // @dynamic overlay;
@property(retain, nonatomic) YTIPaidContentOverlaySupportedRenderers *paidContentOverlay; // @dynamic paidContentOverlay;
@property(retain, nonatomic) YTIPlayabilityStatus *playabilityStatus; // @dynamic playabilityStatus;
@property(retain, nonatomic) YTIPlaybackTracking *playbackTracking; // @dynamic playbackTracking;
@property(retain, nonatomic) NSMutableArray *playerAdsArray; // @dynamic playerAdsArray;
@property(readonly, nonatomic) unsigned long long playerAdsArray_Count; // @dynamic playerAdsArray_Count;
@property(retain, nonatomic) YTIPlayerCompanionAdsSupportedRenderers *playerCompanionAd; // @dynamic playerCompanionAd;
@property(retain, nonatomic) YTIPlayerConfig *playerConfig; // @dynamic playerConfig;
@property(copy, nonatomic) NSData *prefetchedPrerollAdBreakResponse; // @dynamic prefetchedPrerollAdBreakResponse;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) YTIStoryboardsSupportedRenderers *storyboards; // @dynamic storyboards;
@property(retain, nonatomic) YTIStreamingData *streamingData; // @dynamic streamingData;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTISurveySupportedRenderers *survey; // @dynamic survey;
@property(retain, nonatomic) YTIRenderer *threed; // @dynamic threed;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIVideoDetails *videoDetails; // @dynamic videoDetails;
@property(retain, nonatomic) YTIVideoInteractions *videoInteractions; // @dynamic videoInteractions;
@property(retain, nonatomic) YTIVideoQualityPromoSupportedRenderers *videoQualityPromoSupportedRenderers; // @dynamic videoQualityPromoSupportedRenderers;

@end

