//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BDASplashOMTrackDelegate, TTAdSplashDelegate, TTAdSplashInterceptDelegate;

@interface TTAdSplashMessageCenter : NSObject
{
    id <TTAdSplashDelegate> _delegate;
    id <TTAdSplashInterceptDelegate> _splashInterceptDelegate;
    id <BDASplashOMTrackDelegate> _omTrackDelegate;
}

+ (id)shareInstance;
@property(nonatomic) __weak id <BDASplashOMTrackDelegate> omTrackDelegate; // @synthesize omTrackDelegate=_omTrackDelegate;
@property(nonatomic) __weak id <TTAdSplashInterceptDelegate> splashInterceptDelegate; // @synthesize splashInterceptDelegate=_splashInterceptDelegate;
@property(nonatomic) __weak id <TTAdSplashDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trackOMClickEventWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMImageCompleteWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMSkipWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoCompleteWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoThirdQuartileWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoMidpointWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoFirstQuartileWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoStartWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMImpressionWithParams:(id)arg1 adView:(id)arg2;
- (void)removeTopViewResource:(id)arg1;
- (_Bool)isVideoPreloadSuccess:(id)arg1 videoId:(id)arg2;
- (void)preloadVideoWithCondition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)topViewSDKPreloadEnable;
- (_Bool)shouldOriginSplashCheckResource;
- (id)pickAwesomeSplashAdWithValidModels:(id)arg1;
- (id)pickAwesomeSplashAdWithValidIds:(id)arg1;
- (void)didFetchSplashModels:(id)arg1;
- (_Bool)splashShouldContainCoordinateInParams;
- (_Bool)shouldDisplayPersonalizedAd;
- (void)splashDebugLog:(id)arg1;
- (void)preloadSplashAdWebSplashList:(id)arg1;
- (void)preloadSplashAdMpURLList:(id)arg1;
- (void)monitorService:(id)arg1 value:(id)arg2 extra:(id)arg3;
- (void)monitorService:(id)arg1 status:(unsigned long long)arg2 extra:(id)arg3;
- (void)trackV3WithEvent:(id)arg1 params:(id)arg2 isDoubleSending:(_Bool)arg3;
- (void)trackWithAllTag:(id)arg1 label:(id)arg2 adId:(id)arg3 logExtra:(id)arg4 extra:(id)arg5;
- (void)trackWithTag:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (void)trackWithTag:(id)arg1 label:(id)arg2 adId:(id)arg3 logExtra:(id)arg4 extra:(id)arg5;
- (void)trackURLs:(id)arg1 model:(id)arg2;
- (_Bool)realTimeRequestUseTTNet;
- (void)splashActionWithCondition:(id)arg1;
- (void)splashViewDidScrollCompleted;
- (void)splashViewDidDisappear;
- (void)splashViewAppearWithAdInfo:(id)arg1;
- (void)splashViewWillAppearWithAdModel:(id)arg1;
- (void)splashViewWillAppear;
- (_Bool)enablePreloadReconsitution;
- (_Bool)enableSplashAudioSessionStalledOptimization;
- (_Bool)enableSplashGifKadunOptimize;
- (_Bool)enableSplashLog;
- (void)downloadCanvasResource:(id)arg1;
- (unsigned long long)displayContentMode;
- (long long)preloadPolicy;
- (unsigned long long)skipButtonBottomOffsetWithBannerMode:(unsigned long long)arg1;
- (unsigned long long)logoAreaHeight;
- (id)splashReadMoreString;
- (id)splashOpenAppString;
- (_Bool)isSplashSkipBtnInBottom;
- (id)splashSkipBtnName;
- (id)splashReadMoreView;
- (id)splashWifiView;
- (id)splashLogoViewWithColor:(unsigned long long)arg1;
- (id)splashBGViewWithFrame:(struct CGRect)arg1;
- (id)splashArrowImage;
- (id)splashViewMoreImage;
- (id)splashWifiImage;
- (id)splashVideoLogo;
- (id)splashFakeLaunchView;
- (id)splashBgImage;
- (id)ntType;
- (id)splashNetwokType;
- (id)installId;
- (id)deviceId;
- (id)splashPathUrl;
- (id)splashBaseUrl;
- (void)requestWithUrl:(id)arg1 method:(unsigned long long)arg2 headers:(id)arg3 param:(id)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (void)requestWithUrl:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

