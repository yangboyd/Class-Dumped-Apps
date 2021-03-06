//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOActiveViewMonitorDelegate-Protocol.h"
#import "GADOAdFetcherDelegate-Protocol.h"
#import "GADOAdViewActiveViewMonitoring-Protocol.h"
#import "GADOImpressionMonitorDelegate-Protocol.h"
#import "GADOMRAIDEventHandling-Protocol.h"
#import "GADOSDKCoreControllerDelegate-Protocol.h"

@class GADMAdNetworkConnector, GADOActiveViewMonitor, GADOAd, GADOAdFetcher, GADOAdType, GADOAdView, GADOBannerAdViewDelegate, GADOCSI, GADOCSITimeRecorder, GADOClearcutLogger, GADOCorrelator, GADOImpressionMonitor, GADOIntermission, GADOMAdManager, GADOMIDAdSession, GADORequest, GADOSDKCoreWebView, GADOSlotStatistics, NSDictionary, NSNumber, NSSet, NSString, NSTimer, UIView;
@protocol GADOSlotAdEventDelegate, GADOSlotAdKeyDelegate, GADOSlotAdLoadDelegate, GADOSlotAdResponseDelegate, GADOSlotDelegate;

@interface GADOSlot : NSObject <GADOActiveViewMonitorDelegate, GADOAdViewActiveViewMonitoring, GADOSDKCoreControllerDelegate, GADOImpressionMonitorDelegate, GADOMRAIDEventHandling, GADOAdFetcherDelegate>
{
    long long _state;
    unsigned long long _activeViewID;
    GADOImpressionMonitor *_impressionMonitor;
    GADOMAdManager *_mediationManager;
    NSDictionary *_RTBAdapters;
    _Bool _slotHasAttemptedAnAdRequestAtLeastOnce;
    GADOClearcutLogger *_logger;
    _Bool _isListeningToDeviceOrientationChangeEvent;
    struct CGRect _usableInterfaceFrame;
    struct CGRect _creativeWebViewFrame;
    struct CGRect _creativeAdFrame;
    GADOAd *_pendingCustomRenderingAd;
    GADOCSITimeRecorder *_adLoadActionTimeRecorder;
    GADOActiveViewMonitor *_activeViewMonitor;
    unsigned long long _measurementReceivers;
    _Bool _viewHasMadeImpression;
    _Bool _monitoredViewVisible;
    GADOCSI *_CSI;
    _Bool _hasAutoRefreshed;
    _Bool _reloadable;
    _Bool _manualImpressionsEnabled;
    id <GADOSlotDelegate> _slotDelegate;
    id <GADOSlotAdLoadDelegate> _adLoadDelegate;
    id <GADOSlotAdEventDelegate> _adEventDelegate;
    id <GADOSlotAdResponseDelegate> _adResponseDelegate;
    id <GADOSlotAdKeyDelegate> _adKeyDelegate;
    NSString *_adUnitID;
    GADOAd *_ad;
    GADOAdType *_adType;
    long long _RTBAdFormat;
    GADORequest *_loadingRequest;
    GADOCorrelator *_correlator;
    NSNumber *_timeLastLoaded;
    GADOAdView *_adView;
    GADOSlotStatistics *_slotStats;
    GADOIntermission *_intermission;
    id _placement;
    GADOMIDAdSession *_adSession;
    GADOBannerAdViewDelegate *_adViewDelegate;
    GADOAd *_loadingAd;
    GADOAdFetcher *_adFetcher;
    NSDictionary *_applicationStatistics;
    NSSet *_pendingAdStatistics;
    NSTimer *_reloadTimer;
    double _reloadInterval;
    NSString *_requestID;
    GADORequest *_nextRequest;
    GADOSDKCoreWebView *_SDKCoreWebView;
    UIView *_activeViewMonitoredView;
    struct CGSize _newAdSize;
}

+ (void)initialize;
@property(retain, nonatomic) UIView *activeViewMonitoredView; // @synthesize activeViewMonitoredView=_activeViewMonitoredView;
@property(retain, nonatomic) GADOSDKCoreWebView *SDKCoreWebView; // @synthesize SDKCoreWebView=_SDKCoreWebView;
@property(nonatomic) struct CGSize newAdSize; // @synthesize newAdSize=_newAdSize;
@property(copy, nonatomic) GADORequest *nextRequest; // @synthesize nextRequest=_nextRequest;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) double reloadInterval; // @synthesize reloadInterval=_reloadInterval;
@property(retain, nonatomic) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property(copy, nonatomic) NSSet *pendingAdStatistics; // @synthesize pendingAdStatistics=_pendingAdStatistics;
@property(copy, nonatomic) NSDictionary *applicationStatistics; // @synthesize applicationStatistics=_applicationStatistics;
@property(retain, nonatomic) GADOAdFetcher *adFetcher; // @synthesize adFetcher=_adFetcher;
@property(retain, nonatomic) GADOAd *loadingAd; // @synthesize loadingAd=_loadingAd;
@property(retain, nonatomic) GADOBannerAdViewDelegate *adViewDelegate; // @synthesize adViewDelegate=_adViewDelegate;
@property(retain, nonatomic) GADOMIDAdSession *adSession; // @synthesize adSession=_adSession;
@property(readonly, nonatomic) GADOCSI *CSI; // @synthesize CSI=_CSI;
@property(nonatomic) __weak id placement; // @synthesize placement=_placement;
@property(nonatomic) __weak GADOIntermission *intermission; // @synthesize intermission=_intermission;
@property(readonly, nonatomic) GADOSlotStatistics *slotStats; // @synthesize slotStats=_slotStats;
@property(readonly, nonatomic) GADOAdView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) NSNumber *timeLastLoaded; // @synthesize timeLastLoaded=_timeLastLoaded;
@property(retain, nonatomic) GADOCorrelator *correlator; // @synthesize correlator=_correlator;
@property(copy, nonatomic) GADORequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(nonatomic) long long RTBAdFormat; // @synthesize RTBAdFormat=_RTBAdFormat;
@property(retain, nonatomic) GADOAdType *adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) GADOAd *ad; // @synthesize ad=_ad;
@property(nonatomic) _Bool manualImpressionsEnabled; // @synthesize manualImpressionsEnabled=_manualImpressionsEnabled;
@property(nonatomic) _Bool reloadable; // @synthesize reloadable=_reloadable;
@property(nonatomic) _Bool hasAutoRefreshed; // @synthesize hasAutoRefreshed=_hasAutoRefreshed;
@property(copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(nonatomic) __weak id <GADOSlotAdKeyDelegate> adKeyDelegate; // @synthesize adKeyDelegate=_adKeyDelegate;
@property(nonatomic) __weak id <GADOSlotAdResponseDelegate> adResponseDelegate; // @synthesize adResponseDelegate=_adResponseDelegate;
@property(nonatomic) __weak id <GADOSlotAdEventDelegate> adEventDelegate; // @synthesize adEventDelegate=_adEventDelegate;
@property(nonatomic) __weak id <GADOSlotAdLoadDelegate> adLoadDelegate; // @synthesize adLoadDelegate=_adLoadDelegate;
@property(nonatomic) __weak id <GADOSlotDelegate> slotDelegate; // @synthesize slotDelegate=_slotDelegate;
- (void).cxx_destruct;
- (void)adFetcher:(id)arg1 didFailToFetchAd:(id)arg2 withError:(id)arg3 responseCode:(unsigned long long)arg4;
- (void)adFetcher:(id)arg1 didFetchAd:(id)arg2;
- (void)resetLogger;
- (void)makeRootLoggingObject;
- (struct GADOAdSize)adSizeForMultiSizeAd;
- (void)setViewForAdUsingView:(id)arg1;
- (_Bool)validateAdResponseWithAdSize:(struct GADOAdSize)arg1 andValidAdSizes:(id)arg2;
- (void)processCustomRenderingAdResponse:(id)arg1;
- (void)renderPendingCustomRenderingAd;
- (_Bool)isMRAIDEnabled;
- (void)sendCSIAdLoadTimings;
- (void)pingManualTrackingURLs;
- (void)pingDownloadedImpressionURLs;
- (void)pingImpressionURLs;
- (void)pingClickURLs;
- (void)startImpressionMonitoring;
- (void)processStandardAdResponse:(id)arg1;
- (void)finishedLoadingAdResponse:(id)arg1;
- (id)gestureClickURLWithURL:(id)arg1;
- (_Bool)isGoogleAdURL:(id)arg1;
- (void)cancelPendingAndFutureActions;
- (void)cancelPendingActions;
- (void)cancelLoad;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithoutAdView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 webViewConfiguration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 webViewConfiguration:(id)arg2 createAdView:(_Bool)arg3;
- (void)loadAd:(id)arg1 headers:(id)arg2;
- (void)resetRequestState;
- (void)interstitialViewWillDisappear;
- (void)interstitialViewWillAppear;
- (void)ownerViewDidMoveToWindow:(id)arg1;
- (void)mediatedAdNetworkAutoRefreshed;
- (void)logRequestTestAdInstructions;
- (void)loadNextRequestWithAutoRefresh:(_Bool)arg1;
- (void)loadRequest:(id)arg1;
- (_Bool)shouldMakeRequest:(id)arg1;
- (_Bool)isMakingRequest;
- (void)adDidRelinquishFullScreen:(id)arg1;
- (void)adWillPresentFullScreen:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillBecomeInactive:(id)arg1;
- (void)scheduleAdReloadTimer;
- (void)deactivateReloadTimer;
- (void)reloadCurrentRequest;
- (void)setAdType:(id)arg1 andReloadRequest:(_Bool)arg2;
- (_Bool)canEnableActiveViewMonitoring;
- (id)adFormat;
- (id)activeViewScrollJSCommandWithParams:(id)arg1;
- (id)activeViewJSCommandWithParams:(id)arg1;
- (void)activeViewMonitorDidScroll:(id)arg1;
- (void)activeViewMonitorDidRefresh:(id)arg1;
- (void)activeViewMonitorWillUnload;
- (void)executeJavaScriptCommand:(id)arg1;
- (void)unloadActiveViewMonitor;
- (void)finishActiveViewReporting;
- (void)startActiveViewReporting;
- (void)startActiveViewReportingIfEnabled;
- (void)createActiveViewMonitor;
- (_Bool)monitoredViewIsSubviewOfDeviceScreen;
- (void)activeViewMonitoringDidStop:(unsigned long long)arg1;
- (_Bool)activeViewMonitoringStarted:(unsigned long long)arg1;
- (void)activeViewVisibilityChanged:(_Bool)arg1;
@property(nonatomic) _Bool viewHasMadeImpression;
@property(readonly, nonatomic) _Bool monitoredViewVisible;
- (id)viewControllerForPresentingModalView;
- (void)processMediationAdResponse:(id)arg1;
- (void)presentMediatedInterstitialFromRootViewController:(id)arg1;
- (_Bool)isBeingMediated;
- (_Bool)isSelfMediatedRewardedRequest;
- (_Bool)isMediating;
- (_Bool)changeAdTypeTo:(id)arg1;
- (id)adNetworkClassName;
@property(retain, nonatomic) GADMAdNetworkConnector *mediationConnector;
- (id)backgroundRequestParameters;
- (_Bool)requiresBackgroundSignalCollection;
- (void)loadAdURLWithParameters:(id)arg1;
- (id)requestParameters;
- (id)requestParametersForRequest:(id)arg1;
- (void)invalidJavaScriptRequest;
- (void)failedJavaScriptFile;
- (long long)requestedAdType;
- (id)adLoadActionTimeRecorder;
- (void)adDidLoadVideoWithSize:(struct CGSize)arg1;
- (void)adWillLeaveApplication;
- (void)adDidDismissScreen;
- (void)adWillDismissScreen;
- (void)adWillPresentScreen;
- (void)adWasClicked;
- (void)adFinishedLoadingContent;
- (void)adFailedToReceiveContentWithError:(id)arg1;
- (void)startedProcessingAd:(id)arg1;
- (void)adFetchingFailedWithResponseCode:(long long)arg1 error:(id)arg2;
- (void)adFetchingSucceeded;
- (void)adFetchingStartedWithURL:(id)arg1;
- (void)adURLBuildRequestCompleted;
- (void)adURLBuildRequestStarted;
- (void)adLoadingFromSecretAdURL:(id)arg1;
- (void)adLoadingFromInlineAd:(id)arg1;
- (void)adLoadingStarted;
- (void)createdAdView:(id)arg1;
- (void)processAdResponse:(id)arg1;
- (void)applicationVolumeDidChange:(id)arg1;
- (void)postVolumeNotification;
- (void)updateContentSize:(struct CGSize)arg1;
- (void)impressionMonitorDidMonitorImpression:(id)arg1;
- (void)invalidateState;
- (void)resetState;
- (void)willLeaveAppDueToClick;
- (void)didLoadAd;
- (void)didMakeAdImpression;
- (void)didLoadAdHTMLInWebView;
- (void)willLoadAdHTMLInWebView;
- (void)willStartAdRendering;
- (void)didReceiveValidAd;
- (void)didFailToReceiveAdWithError:(id)arg1 shouldCancelPendingActions:(_Bool)arg2;
- (void)willProcessMediationResponse;
- (void)didFetchAdContent;
- (void)willFetchAdContent;
- (void)didReceiveAdURL;
- (void)didFailToRetrieveSDKCoreWithError:(id)arg1;
- (void)willRequestAdURL;
- (void)setState:(long long)arg1;
@property(readonly, nonatomic) long long state;
- (void)loadAdNetworkJavaScriptRequest:(id)arg1;
- (void)didChangeDeviceOrientation;
- (void)addCreativeOrientationChangeObserver:(id)arg1 selector:(SEL)arg2;
- (void)endListeningToDeviceOrientationChangeEvent;
- (void)beginListeningToDeviceOrientationChangeEvent;
- (void)unloadAdView:(id)arg1;
- (void)handleError:(id)arg1 action:(id)arg2;
- (id)forcedAdOrientation;
- (void)updatePositionFromView:(id)arg1;
- (void)updateVisibility:(_Bool)arg1;
- (void)MRAIDAdDidUnload;
- (void)MRAIDAdDidLoad;
- (void)SDKDidBecomeReady;
- (void)notifyDeviceFeatures;
- (void)notifyOrientationToMRAIDCreative;
- (id)creativePositionDictionaryForActiveViewBounds:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

