//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIIosPlayerAttestationConfig, YTIIosPlayerWatchNextOrderingConfig, YTIPlayerServiceRetryConfig, YTIVarispeedConfig;

@interface YTIPlayerHotConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool androidBackgroundUseStartForegroundService; // @dynamic androidBackgroundUseStartForegroundService;
@property(nonatomic) _Bool androidCleanMediaSessionLifecycle; // @dynamic androidCleanMediaSessionLifecycle;
@property(nonatomic) _Bool androidCreateVssClientOnPlaybackStarted; // @dynamic androidCreateVssClientOnPlaybackStarted;
@property(nonatomic) _Bool androidDisableBackgroundExceptionIntercept; // @dynamic androidDisableBackgroundExceptionIntercept;
@property(nonatomic) _Bool androidDisableBackgroundIntercept; // @dynamic androidDisableBackgroundIntercept;
@property(nonatomic) _Bool androidDisableInnertubePlayerCache; // @dynamic androidDisableInnertubePlayerCache;
@property(nonatomic) _Bool androidDisableLegacySequencerNavigationEvent; // @dynamic androidDisableLegacySequencerNavigationEvent;
@property(nonatomic) _Bool androidDisableOmegasequencerAppendedRunnable; // @dynamic androidDisableOmegasequencerAppendedRunnable;
@property(nonatomic) _Bool androidEarlyFetchForAutoplay; // @dynamic androidEarlyFetchForAutoplay;
@property(nonatomic) _Bool androidEarlyPlaybackClientManagerPlay; // @dynamic androidEarlyPlaybackClientManagerPlay;
@property(nonatomic) _Bool androidEarlyPlayerFetchEarlyExitOnNoOnesie; // @dynamic androidEarlyPlayerFetchEarlyExitOnNoOnesie;
@property(nonatomic) _Bool androidEarlyPlayerFetchJoin; // @dynamic androidEarlyPlayerFetchJoin;
@property(nonatomic) int androidEarlyRequestBlockMs; // @dynamic androidEarlyRequestBlockMs;
@property(nonatomic) _Bool androidEarlyRequestPreparation; // @dynamic androidEarlyRequestPreparation;
@property(nonatomic) _Bool androidEmptySavedState; // @dynamic androidEmptySavedState;
@property(nonatomic) _Bool androidEnableEmbeddedPlayerInteractionLogging; // @dynamic androidEnableEmbeddedPlayerInteractionLogging;
@property(nonatomic) _Bool androidEnablePremiereTrailers; // @dynamic androidEnablePremiereTrailers;
@property(nonatomic) _Bool androidEnableVideoTransitionResponseHandler; // @dynamic androidEnableVideoTransitionResponseHandler;
@property(nonatomic) _Bool androidEnableVss3Controller; // @dynamic androidEnableVss3Controller;
@property(nonatomic) _Bool androidForceDisableVss3Controller; // @dynamic androidForceDisableVss3Controller;
@property(nonatomic) _Bool androidInferVssSegmentFromVideoTimeEvent; // @dynamic androidInferVssSegmentFromVideoTimeEvent;
@property(nonatomic) _Bool androidLiveStoryboard; // @dynamic androidLiveStoryboard;
@property(nonatomic) _Bool androidManifestlessLiveCaptions; // @dynamic androidManifestlessLiveCaptions;
@property(nonatomic) int androidMaxReloadsOnExpiredStreamLoad; // @dynamic androidMaxReloadsOnExpiredStreamLoad;
@property(nonatomic) _Bool androidPlaybackListenerVideoTimeEventInterval100Ms; // @dynamic androidPlaybackListenerVideoTimeEventInterval100Ms;
@property(nonatomic) _Bool androidPlaybackProgressOnlyOnPrepared; // @dynamic androidPlaybackProgressOnlyOnPrepared;
@property(nonatomic) _Bool androidReorderPlaybackRequestFlow; // @dynamic androidReorderPlaybackRequestFlow;
@property(nonatomic) _Bool androidReplaceBlockingStop; // @dynamic androidReplaceBlockingStop;
@property(nonatomic) _Bool androidRespectOfflinePlayerRequestBehavior; // @dynamic androidRespectOfflinePlayerRequestBehavior;
@property(nonatomic) _Bool androidResumeLivePlaybackAtLiveHead; // @dynamic androidResumeLivePlaybackAtLiveHead;
@property(nonatomic) _Bool androidResumeTrackingOnPlaying; // @dynamic androidResumeTrackingOnPlaying;
@property(nonatomic) _Bool androidRewriteNavigationCrawler; // @dynamic androidRewriteNavigationCrawler;
@property(nonatomic) _Bool androidScopedPlaybackClientManager; // @dynamic androidScopedPlaybackClientManager;
@property(nonatomic) _Bool androidStreamingFmt3Captions; // @dynamic androidStreamingFmt3Captions;
@property(nonatomic) _Bool androidSuppressEarlyLiveTimeEvents; // @dynamic androidSuppressEarlyLiveTimeEvents;
@property(nonatomic) _Bool androidSyncronousMediaEvents; // @dynamic androidSyncronousMediaEvents;
@property(nonatomic) _Bool androidUpdateVideoTimeEventOnStateChange; // @dynamic androidUpdateVideoTimeEventOnStateChange;
@property(nonatomic) _Bool androidUseCsiGelForWatch; // @dynamic androidUseCsiGelForWatch;
@property(nonatomic) _Bool androidUseFirstSegmentInTimeline; // @dynamic androidUseFirstSegmentInTimeline;
@property(nonatomic) _Bool androidUseLazyVideoStatsClient; // @dynamic androidUseLazyVideoStatsClient;
@property(nonatomic) _Bool androidUseMediaPlayerGetCpn; // @dynamic androidUseMediaPlayerGetCpn;
@property(nonatomic) _Bool androidUseNewVideoQualitySelectionUi; // @dynamic androidUseNewVideoQualitySelectionUi;
@property(nonatomic) _Bool androidUseOnesieForAutonav; // @dynamic androidUseOnesieForAutonav;
@property(nonatomic) _Bool androidUseOnesieForAutoplay; // @dynamic androidUseOnesieForAutoplay;
@property(nonatomic) _Bool androidUsePlaybackRequestFirstRunnable; // @dynamic androidUsePlaybackRequestFirstRunnable;
@property(nonatomic) _Bool androidUsePlaybackRequesterForQueuing; // @dynamic androidUsePlaybackRequesterForQueuing;
@property(nonatomic) _Bool androidUseQueueVideoForAutoplay; // @dynamic androidUseQueueVideoForAutoplay;
@property(nonatomic) _Bool androidUseStartValuesFromPsd; // @dynamic androidUseStartValuesFromPsd;
@property(nonatomic) _Bool androidUseTimelineForVod; // @dynamic androidUseTimelineForVod;
@property(nonatomic) _Bool androidUseTimelineForVodMediaAds; // @dynamic androidUseTimelineForVodMediaAds;
@property(nonatomic) _Bool androidUseWatchnextRequestFirstRunnable; // @dynamic androidUseWatchnextRequestFirstRunnable;
@property(nonatomic) _Bool blockAllPlayerPrefetchRequests; // @dynamic blockAllPlayerPrefetchRequests;
@property(nonatomic) _Bool buildPsdUsingCurrentWatchEndpointFromWatchNext; // @dynamic buildPsdUsingCurrentWatchEndpointFromWatchNext;
@property(nonatomic) _Bool createNewDirectorOnReloadOrError; // @dynamic createNewDirectorOnReloadOrError;
@property(nonatomic) _Bool disableVss2DelaypingOnZeroWatchtime; // @dynamic disableVss2DelaypingOnZeroWatchtime;
@property(nonatomic) _Bool disableVss2LivePositionTruncation; // @dynamic disableVss2LivePositionTruncation;
@property(nonatomic) _Bool enableIosPrepareAdsOverlayForOnlineWatchEndpointsOnly; // @dynamic enableIosPrepareAdsOverlayForOnlineWatchEndpointsOnly;
@property(nonatomic) _Bool enablePlayerRequestCompletionLogging; // @dynamic enablePlayerRequestCompletionLogging;
@property(nonatomic) _Bool enableStoryboardThumbnailLogging; // @dynamic enableStoryboardThumbnailLogging;
@property(nonatomic) _Bool fix30SUpcomingStreamStart; // @dynamic fix30SUpcomingStreamStart;
@property(nonatomic) _Bool fixVssWatchTimePingIntervalScheduling; // @dynamic fixVssWatchTimePingIntervalScheduling;
@property(nonatomic) _Bool hasAndroidBackgroundUseStartForegroundService; // @dynamic hasAndroidBackgroundUseStartForegroundService;
@property(nonatomic) _Bool hasAndroidCleanMediaSessionLifecycle; // @dynamic hasAndroidCleanMediaSessionLifecycle;
@property(nonatomic) _Bool hasAndroidCreateVssClientOnPlaybackStarted; // @dynamic hasAndroidCreateVssClientOnPlaybackStarted;
@property(nonatomic) _Bool hasAndroidDisableBackgroundExceptionIntercept; // @dynamic hasAndroidDisableBackgroundExceptionIntercept;
@property(nonatomic) _Bool hasAndroidDisableBackgroundIntercept; // @dynamic hasAndroidDisableBackgroundIntercept;
@property(nonatomic) _Bool hasAndroidDisableInnertubePlayerCache; // @dynamic hasAndroidDisableInnertubePlayerCache;
@property(nonatomic) _Bool hasAndroidDisableLegacySequencerNavigationEvent; // @dynamic hasAndroidDisableLegacySequencerNavigationEvent;
@property(nonatomic) _Bool hasAndroidDisableOmegasequencerAppendedRunnable; // @dynamic hasAndroidDisableOmegasequencerAppendedRunnable;
@property(nonatomic) _Bool hasAndroidEarlyFetchForAutoplay; // @dynamic hasAndroidEarlyFetchForAutoplay;
@property(nonatomic) _Bool hasAndroidEarlyPlaybackClientManagerPlay; // @dynamic hasAndroidEarlyPlaybackClientManagerPlay;
@property(nonatomic) _Bool hasAndroidEarlyPlayerFetchEarlyExitOnNoOnesie; // @dynamic hasAndroidEarlyPlayerFetchEarlyExitOnNoOnesie;
@property(nonatomic) _Bool hasAndroidEarlyPlayerFetchJoin; // @dynamic hasAndroidEarlyPlayerFetchJoin;
@property(nonatomic) _Bool hasAndroidEarlyRequestBlockMs; // @dynamic hasAndroidEarlyRequestBlockMs;
@property(nonatomic) _Bool hasAndroidEarlyRequestPreparation; // @dynamic hasAndroidEarlyRequestPreparation;
@property(nonatomic) _Bool hasAndroidEmptySavedState; // @dynamic hasAndroidEmptySavedState;
@property(nonatomic) _Bool hasAndroidEnableEmbeddedPlayerInteractionLogging; // @dynamic hasAndroidEnableEmbeddedPlayerInteractionLogging;
@property(nonatomic) _Bool hasAndroidEnablePremiereTrailers; // @dynamic hasAndroidEnablePremiereTrailers;
@property(nonatomic) _Bool hasAndroidEnableVideoTransitionResponseHandler; // @dynamic hasAndroidEnableVideoTransitionResponseHandler;
@property(nonatomic) _Bool hasAndroidEnableVss3Controller; // @dynamic hasAndroidEnableVss3Controller;
@property(nonatomic) _Bool hasAndroidForceDisableVss3Controller; // @dynamic hasAndroidForceDisableVss3Controller;
@property(nonatomic) _Bool hasAndroidInferVssSegmentFromVideoTimeEvent; // @dynamic hasAndroidInferVssSegmentFromVideoTimeEvent;
@property(nonatomic) _Bool hasAndroidLiveStoryboard; // @dynamic hasAndroidLiveStoryboard;
@property(nonatomic) _Bool hasAndroidManifestlessLiveCaptions; // @dynamic hasAndroidManifestlessLiveCaptions;
@property(nonatomic) _Bool hasAndroidMaxReloadsOnExpiredStreamLoad; // @dynamic hasAndroidMaxReloadsOnExpiredStreamLoad;
@property(nonatomic) _Bool hasAndroidPlaybackListenerVideoTimeEventInterval100Ms; // @dynamic hasAndroidPlaybackListenerVideoTimeEventInterval100Ms;
@property(nonatomic) _Bool hasAndroidPlaybackProgressOnlyOnPrepared; // @dynamic hasAndroidPlaybackProgressOnlyOnPrepared;
@property(nonatomic) _Bool hasAndroidReorderPlaybackRequestFlow; // @dynamic hasAndroidReorderPlaybackRequestFlow;
@property(nonatomic) _Bool hasAndroidReplaceBlockingStop; // @dynamic hasAndroidReplaceBlockingStop;
@property(nonatomic) _Bool hasAndroidRespectOfflinePlayerRequestBehavior; // @dynamic hasAndroidRespectOfflinePlayerRequestBehavior;
@property(nonatomic) _Bool hasAndroidResumeLivePlaybackAtLiveHead; // @dynamic hasAndroidResumeLivePlaybackAtLiveHead;
@property(nonatomic) _Bool hasAndroidResumeTrackingOnPlaying; // @dynamic hasAndroidResumeTrackingOnPlaying;
@property(nonatomic) _Bool hasAndroidRewriteNavigationCrawler; // @dynamic hasAndroidRewriteNavigationCrawler;
@property(nonatomic) _Bool hasAndroidScopedPlaybackClientManager; // @dynamic hasAndroidScopedPlaybackClientManager;
@property(nonatomic) _Bool hasAndroidStreamingFmt3Captions; // @dynamic hasAndroidStreamingFmt3Captions;
@property(nonatomic) _Bool hasAndroidSuppressEarlyLiveTimeEvents; // @dynamic hasAndroidSuppressEarlyLiveTimeEvents;
@property(nonatomic) _Bool hasAndroidSyncronousMediaEvents; // @dynamic hasAndroidSyncronousMediaEvents;
@property(nonatomic) _Bool hasAndroidUpdateVideoTimeEventOnStateChange; // @dynamic hasAndroidUpdateVideoTimeEventOnStateChange;
@property(nonatomic) _Bool hasAndroidUseCsiGelForWatch; // @dynamic hasAndroidUseCsiGelForWatch;
@property(nonatomic) _Bool hasAndroidUseFirstSegmentInTimeline; // @dynamic hasAndroidUseFirstSegmentInTimeline;
@property(nonatomic) _Bool hasAndroidUseLazyVideoStatsClient; // @dynamic hasAndroidUseLazyVideoStatsClient;
@property(nonatomic) _Bool hasAndroidUseMediaPlayerGetCpn; // @dynamic hasAndroidUseMediaPlayerGetCpn;
@property(nonatomic) _Bool hasAndroidUseNewVideoQualitySelectionUi; // @dynamic hasAndroidUseNewVideoQualitySelectionUi;
@property(nonatomic) _Bool hasAndroidUseOnesieForAutonav; // @dynamic hasAndroidUseOnesieForAutonav;
@property(nonatomic) _Bool hasAndroidUseOnesieForAutoplay; // @dynamic hasAndroidUseOnesieForAutoplay;
@property(nonatomic) _Bool hasAndroidUsePlaybackRequestFirstRunnable; // @dynamic hasAndroidUsePlaybackRequestFirstRunnable;
@property(nonatomic) _Bool hasAndroidUsePlaybackRequesterForQueuing; // @dynamic hasAndroidUsePlaybackRequesterForQueuing;
@property(nonatomic) _Bool hasAndroidUseQueueVideoForAutoplay; // @dynamic hasAndroidUseQueueVideoForAutoplay;
@property(nonatomic) _Bool hasAndroidUseStartValuesFromPsd; // @dynamic hasAndroidUseStartValuesFromPsd;
@property(nonatomic) _Bool hasAndroidUseTimelineForVod; // @dynamic hasAndroidUseTimelineForVod;
@property(nonatomic) _Bool hasAndroidUseTimelineForVodMediaAds; // @dynamic hasAndroidUseTimelineForVodMediaAds;
@property(nonatomic) _Bool hasAndroidUseWatchnextRequestFirstRunnable; // @dynamic hasAndroidUseWatchnextRequestFirstRunnable;
@property(nonatomic) _Bool hasBlockAllPlayerPrefetchRequests; // @dynamic hasBlockAllPlayerPrefetchRequests;
@property(nonatomic) _Bool hasBuildPsdUsingCurrentWatchEndpointFromWatchNext; // @dynamic hasBuildPsdUsingCurrentWatchEndpointFromWatchNext;
@property(nonatomic) _Bool hasCreateNewDirectorOnReloadOrError; // @dynamic hasCreateNewDirectorOnReloadOrError;
@property(nonatomic) _Bool hasDisableVss2DelaypingOnZeroWatchtime; // @dynamic hasDisableVss2DelaypingOnZeroWatchtime;
@property(nonatomic) _Bool hasDisableVss2LivePositionTruncation; // @dynamic hasDisableVss2LivePositionTruncation;
@property(nonatomic) _Bool hasEnableIosPrepareAdsOverlayForOnlineWatchEndpointsOnly; // @dynamic hasEnableIosPrepareAdsOverlayForOnlineWatchEndpointsOnly;
@property(nonatomic) _Bool hasEnablePlayerRequestCompletionLogging; // @dynamic hasEnablePlayerRequestCompletionLogging;
@property(nonatomic) _Bool hasEnableStoryboardThumbnailLogging; // @dynamic hasEnableStoryboardThumbnailLogging;
@property(nonatomic) _Bool hasFix30SUpcomingStreamStart; // @dynamic hasFix30SUpcomingStreamStart;
@property(nonatomic) _Bool hasFixVssWatchTimePingIntervalScheduling; // @dynamic hasFixVssWatchTimePingIntervalScheduling;
@property(nonatomic) _Bool hasIosActivateVideoOverlaysAfterVideoActivation; // @dynamic hasIosActivateVideoOverlaysAfterVideoActivation;
@property(nonatomic) _Bool hasIosDeferredAttestationMaxRetryCount; // @dynamic hasIosDeferredAttestationMaxRetryCount;
@property(nonatomic) _Bool hasIosDeprecateUiwebview; // @dynamic hasIosDeprecateUiwebview;
@property(nonatomic) _Bool hasIosDisableCaptionWindowPrecalculation; // @dynamic hasIosDisableCaptionWindowPrecalculation;
@property(nonatomic) _Bool hasIosDisableExternalPlayback; // @dynamic hasIosDisableExternalPlayback;
@property(nonatomic) _Bool hasIosDisableLpcFocusApi; // @dynamic hasIosDisableLpcFocusApi;
@property(nonatomic) _Bool hasIosEnableControlCenterPlaybackControls; // @dynamic hasIosEnableControlCenterPlaybackControls;
@property(nonatomic) _Bool hasIosEnableFixForVssAirplayIssue; // @dynamic hasIosEnableFixForVssAirplayIssue;
@property(nonatomic) _Bool hasIosEnableGaplessSequencer; // @dynamic hasIosEnableGaplessSequencer;
@property(nonatomic) _Bool hasIosEnableLiveStoryboardController; // @dynamic hasIosEnableLiveStoryboardController;
@property(nonatomic) _Bool hasIosEnableNewAvplayerDaiSequencer; // @dynamic hasIosEnableNewAvplayerDaiSequencer;
@property(nonatomic) _Bool hasIosEnableQueuePlayerDaiSequencer; // @dynamic hasIosEnableQueuePlayerDaiSequencer;
@property(nonatomic) _Bool hasIosEnableQueuePlayerGaplessSequencer; // @dynamic hasIosEnableQueuePlayerGaplessSequencer;
@property(nonatomic) _Bool hasIosEnableQueuePlayerPrebuffer; // @dynamic hasIosEnableQueuePlayerPrebuffer;
@property(nonatomic) _Bool hasIosEnableVss3Controller; // @dynamic hasIosEnableVss3Controller;
@property(nonatomic) _Bool hasIosErrorOnUnplayableHeartbeat; // @dynamic hasIosErrorOnUnplayableHeartbeat;
@property(nonatomic) _Bool hasIosFillHeartbeatRequestsWithHeartbeatChecks; // @dynamic hasIosFillHeartbeatRequestsWithHeartbeatChecks;
@property(nonatomic) _Bool hasIosFixMissingViewportSize; // @dynamic hasIosFixMissingViewportSize;
@property(nonatomic) _Bool hasIosForceDisableVss3Controller; // @dynamic hasIosForceDisableVss3Controller;
@property(nonatomic) _Bool hasIosLiveStoryboardApproximatesSegments; // @dynamic hasIosLiveStoryboardApproximatesSegments;
@property(nonatomic) _Bool hasIosLoadContentVideoWhenMediaChunkReceived; // @dynamic hasIosLoadContentVideoWhenMediaChunkReceived;
@property(nonatomic) _Bool hasIosLoopStartSeekLeewaySeconds; // @dynamic hasIosLoopStartSeekLeewaySeconds;
@property(nonatomic) _Bool hasIosOfflineVideoListPrefetchCount; // @dynamic hasIosOfflineVideoListPrefetchCount;
@property(nonatomic) _Bool hasIosOnlyUseOfflinePlayerResponseForPlayableVideo; // @dynamic hasIosOnlyUseOfflinePlayerResponseForPlayableVideo;
@property(nonatomic) _Bool hasIosPlayerAttestationConfig; // @dynamic hasIosPlayerAttestationConfig;
@property(nonatomic) _Bool hasIosPlayerSendEcatcherLogs; // @dynamic hasIosPlayerSendEcatcherLogs;
@property(nonatomic) _Bool hasIosPlayerWatchNextOrderingConfig; // @dynamic hasIosPlayerWatchNextOrderingConfig;
@property(nonatomic) _Bool hasIosRefreshLiveStreamsAccordingToSpec; // @dynamic hasIosRefreshLiveStreamsAccordingToSpec;
@property(nonatomic) _Bool hasIosRespectOfflinePlayerRequestBehavior; // @dynamic hasIosRespectOfflinePlayerRequestBehavior;
@property(nonatomic) _Bool hasIosResumeDeferredAttestationWorkflow; // @dynamic hasIosResumeDeferredAttestationWorkflow;
@property(nonatomic) _Bool hasIosReuseUiWrapper; // @dynamic hasIosReuseUiWrapper;
@property(nonatomic) _Bool hasIosSendAttestationPingsBeforeBeingDeallocated; // @dynamic hasIosSendAttestationPingsBeforeBeingDeallocated;
@property(nonatomic) _Bool hasIosSendsAtrPingForEarlyTerminatedVideos; // @dynamic hasIosSendsAtrPingForEarlyTerminatedVideos;
@property(nonatomic) _Bool hasIosSetAudioFlagsOnVideoActivation; // @dynamic hasIosSetAudioFlagsOnVideoActivation;
@property(nonatomic) _Bool hasIosStopMungingPlaybackDataForTrailers; // @dynamic hasIosStopMungingPlaybackDataForTrailers;
@property(nonatomic) _Bool hasIosUseExpectedViewportSize; // @dynamic hasIosUseExpectedViewportSize;
@property(nonatomic) _Bool hasIosUseExperimentalPlayerViewController; // @dynamic hasIosUseExperimentalPlayerViewController;
@property(nonatomic) _Bool hasIosUseNowPlayingCenterPlaybackState; // @dynamic hasIosUseNowPlayingCenterPlaybackState;
@property(nonatomic) _Bool hasIosUseRelativeTimesForVssWatchSegments; // @dynamic hasIosUseRelativeTimesForVssWatchSegments;
@property(nonatomic) _Bool hasIosUseScopedHeartbeatController; // @dynamic hasIosUseScopedHeartbeatController;
@property(nonatomic) _Bool hasIosUseUpcomingPlayerTransition; // @dynamic hasIosUseUpcomingPlayerTransition;
@property(nonatomic) _Bool hasIosVarispeed; // @dynamic hasIosVarispeed;
@property(nonatomic) _Bool hasIosVssUseNetworkPropertiesApi; // @dynamic hasIosVssUseNetworkPropertiesApi;
@property(nonatomic) _Bool hasMoveToForegroundStopBackgroundService; // @dynamic hasMoveToForegroundStopBackgroundService;
@property(nonatomic) _Bool hasOfflinePlaybackDataFallbackEnabled; // @dynamic hasOfflinePlaybackDataFallbackEnabled;
@property(nonatomic) _Bool hasOfflinePlaybackDataFallbackTriggerDurationMsecs; // @dynamic hasOfflinePlaybackDataFallbackTriggerDurationMsecs;
@property(nonatomic) _Bool hasOneCastEnabled; // @dynamic hasOneCastEnabled;
@property(nonatomic) _Bool hasPlayerCacheKeyOnVideoIdOnly; // @dynamic hasPlayerCacheKeyOnVideoIdOnly;
@property(nonatomic) _Bool hasPlayerResponseTimeoutMs; // @dynamic hasPlayerResponseTimeoutMs;
@property(nonatomic) _Bool hasPlayerServiceRetryConfig; // @dynamic hasPlayerServiceRetryConfig;
@property(nonatomic) _Bool hasRelaylogMobilePlaybackEvent; // @dynamic hasRelaylogMobilePlaybackEvent;
@property(nonatomic) _Bool hasSegmentMutedReporting; // @dynamic hasSegmentMutedReporting;
@property(nonatomic) _Bool hasSendVssValidationGelPayload; // @dynamic hasSendVssValidationGelPayload;
@property(nonatomic) _Bool hasSupportPollDelayMsFromLiveStreamabilityRenderer; // @dynamic hasSupportPollDelayMsFromLiveStreamabilityRenderer;
@property(nonatomic) _Bool hasUseRxForDirectorListeners; // @dynamic hasUseRxForDirectorListeners;
@property(nonatomic) _Bool hasVarispeedConfig; // @dynamic hasVarispeedConfig;
@property(nonatomic) _Bool hasWatchNextCacheKeyOnVideoIdOnly; // @dynamic hasWatchNextCacheKeyOnVideoIdOnly;
@property(nonatomic) _Bool iosActivateVideoOverlaysAfterVideoActivation; // @dynamic iosActivateVideoOverlaysAfterVideoActivation;
@property(nonatomic) int iosDeferredAttestationMaxRetryCount; // @dynamic iosDeferredAttestationMaxRetryCount;
@property(nonatomic) _Bool iosDeprecateUiwebview; // @dynamic iosDeprecateUiwebview;
@property(nonatomic) _Bool iosDisableCaptionWindowPrecalculation; // @dynamic iosDisableCaptionWindowPrecalculation;
@property(nonatomic) _Bool iosDisableExternalPlayback; // @dynamic iosDisableExternalPlayback;
@property(nonatomic) _Bool iosDisableLpcFocusApi; // @dynamic iosDisableLpcFocusApi;
@property(nonatomic) _Bool iosEnableControlCenterPlaybackControls; // @dynamic iosEnableControlCenterPlaybackControls;
@property(nonatomic) _Bool iosEnableFixForVssAirplayIssue; // @dynamic iosEnableFixForVssAirplayIssue;
@property(nonatomic) _Bool iosEnableGaplessSequencer; // @dynamic iosEnableGaplessSequencer;
@property(nonatomic) _Bool iosEnableLiveStoryboardController; // @dynamic iosEnableLiveStoryboardController;
@property(nonatomic) _Bool iosEnableNewAvplayerDaiSequencer; // @dynamic iosEnableNewAvplayerDaiSequencer;
@property(nonatomic) _Bool iosEnableQueuePlayerDaiSequencer; // @dynamic iosEnableQueuePlayerDaiSequencer;
@property(nonatomic) _Bool iosEnableQueuePlayerGaplessSequencer; // @dynamic iosEnableQueuePlayerGaplessSequencer;
@property(nonatomic) _Bool iosEnableQueuePlayerPrebuffer; // @dynamic iosEnableQueuePlayerPrebuffer;
@property(nonatomic) _Bool iosEnableVss3Controller; // @dynamic iosEnableVss3Controller;
@property(nonatomic) _Bool iosErrorOnUnplayableHeartbeat; // @dynamic iosErrorOnUnplayableHeartbeat;
@property(nonatomic) _Bool iosFillHeartbeatRequestsWithHeartbeatChecks; // @dynamic iosFillHeartbeatRequestsWithHeartbeatChecks;
@property(nonatomic) _Bool iosFixMissingViewportSize; // @dynamic iosFixMissingViewportSize;
@property(nonatomic) _Bool iosForceDisableVss3Controller; // @dynamic iosForceDisableVss3Controller;
@property(nonatomic) _Bool iosLiveStoryboardApproximatesSegments; // @dynamic iosLiveStoryboardApproximatesSegments;
@property(nonatomic) _Bool iosLoadContentVideoWhenMediaChunkReceived; // @dynamic iosLoadContentVideoWhenMediaChunkReceived;
@property(nonatomic) float iosLoopStartSeekLeewaySeconds; // @dynamic iosLoopStartSeekLeewaySeconds;
@property(nonatomic) int iosOfflineVideoListPrefetchCount; // @dynamic iosOfflineVideoListPrefetchCount;
@property(nonatomic) _Bool iosOnlyUseOfflinePlayerResponseForPlayableVideo; // @dynamic iosOnlyUseOfflinePlayerResponseForPlayableVideo;
@property(retain, nonatomic) YTIIosPlayerAttestationConfig *iosPlayerAttestationConfig; // @dynamic iosPlayerAttestationConfig;
@property(nonatomic) _Bool iosPlayerSendEcatcherLogs; // @dynamic iosPlayerSendEcatcherLogs;
@property(retain, nonatomic) YTIIosPlayerWatchNextOrderingConfig *iosPlayerWatchNextOrderingConfig; // @dynamic iosPlayerWatchNextOrderingConfig;
@property(nonatomic) _Bool iosRefreshLiveStreamsAccordingToSpec; // @dynamic iosRefreshLiveStreamsAccordingToSpec;
@property(nonatomic) _Bool iosRespectOfflinePlayerRequestBehavior; // @dynamic iosRespectOfflinePlayerRequestBehavior;
@property(nonatomic) _Bool iosResumeDeferredAttestationWorkflow; // @dynamic iosResumeDeferredAttestationWorkflow;
@property(nonatomic) _Bool iosReuseUiWrapper; // @dynamic iosReuseUiWrapper;
@property(nonatomic) _Bool iosSendAttestationPingsBeforeBeingDeallocated; // @dynamic iosSendAttestationPingsBeforeBeingDeallocated;
@property(nonatomic) _Bool iosSendsAtrPingForEarlyTerminatedVideos; // @dynamic iosSendsAtrPingForEarlyTerminatedVideos;
@property(nonatomic) _Bool iosSetAudioFlagsOnVideoActivation; // @dynamic iosSetAudioFlagsOnVideoActivation;
@property(nonatomic) _Bool iosStopMungingPlaybackDataForTrailers; // @dynamic iosStopMungingPlaybackDataForTrailers;
@property(nonatomic) _Bool iosUseExpectedViewportSize; // @dynamic iosUseExpectedViewportSize;
@property(nonatomic) _Bool iosUseExperimentalPlayerViewController; // @dynamic iosUseExperimentalPlayerViewController;
@property(nonatomic) _Bool iosUseNowPlayingCenterPlaybackState; // @dynamic iosUseNowPlayingCenterPlaybackState;
@property(nonatomic) _Bool iosUseRelativeTimesForVssWatchSegments; // @dynamic iosUseRelativeTimesForVssWatchSegments;
@property(nonatomic) _Bool iosUseScopedHeartbeatController; // @dynamic iosUseScopedHeartbeatController;
@property(nonatomic) _Bool iosUseUpcomingPlayerTransition; // @dynamic iosUseUpcomingPlayerTransition;
@property(nonatomic) _Bool iosVarispeed; // @dynamic iosVarispeed;
@property(nonatomic) _Bool iosVssUseNetworkPropertiesApi; // @dynamic iosVssUseNetworkPropertiesApi;
@property(nonatomic) _Bool moveToForegroundStopBackgroundService; // @dynamic moveToForegroundStopBackgroundService;
@property(nonatomic) _Bool offlinePlaybackDataFallbackEnabled; // @dynamic offlinePlaybackDataFallbackEnabled;
@property(nonatomic) int offlinePlaybackDataFallbackTriggerDurationMsecs; // @dynamic offlinePlaybackDataFallbackTriggerDurationMsecs;
@property(nonatomic) _Bool oneCastEnabled; // @dynamic oneCastEnabled;
@property(nonatomic) _Bool playerCacheKeyOnVideoIdOnly; // @dynamic playerCacheKeyOnVideoIdOnly;
@property(nonatomic) int playerResponseTimeoutMs; // @dynamic playerResponseTimeoutMs;
@property(retain, nonatomic) YTIPlayerServiceRetryConfig *playerServiceRetryConfig; // @dynamic playerServiceRetryConfig;
@property(nonatomic) _Bool relaylogMobilePlaybackEvent; // @dynamic relaylogMobilePlaybackEvent;
@property(nonatomic) _Bool segmentMutedReporting; // @dynamic segmentMutedReporting;
@property(nonatomic) _Bool sendVssValidationGelPayload; // @dynamic sendVssValidationGelPayload;
@property(nonatomic) _Bool supportPollDelayMsFromLiveStreamabilityRenderer; // @dynamic supportPollDelayMsFromLiveStreamabilityRenderer;
@property(nonatomic) _Bool useRxForDirectorListeners; // @dynamic useRxForDirectorListeners;
@property(retain, nonatomic) YTIVarispeedConfig *varispeedConfig; // @dynamic varispeedConfig;
@property(nonatomic) _Bool watchNextCacheKeyOnVideoIdOnly; // @dynamic watchNextCacheKeyOnVideoIdOnly;

@end

