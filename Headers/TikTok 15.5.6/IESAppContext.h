//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESBeanFactory.h"

#import "HTSLiveConfigModule-Protocol.h"
#import "HTSLiveGiftPluginsModule-Protocol.h"
#import "IESKVStoreModule-Protocol.h"
#import "IESLiveAWERTLModule-Protocol.h"
#import "IESLiveAuthorizationModule-Protocol.h"
#import "IESLiveBackModule-Protocol.h"
#import "IESLiveBeautyModule-Protocol.h"
#import "IESLiveCertifyServiceModule-Protocol.h"
#import "IESLiveComponentsModule-Protocol.h"
#import "IESLiveContainerModule-Protocol.h"
#import "IESLiveDouPlusConfigModule-Protocol.h"
#import "IESLiveECommerceModule-Protocol.h"
#import "IESLiveEffectAdConfigModule-Protocol.h"
#import "IESLiveEffectPlatformServiceModule-Protocol.h"
#import "IESLiveEnvironmentModule-Protocol.h"
#import "IESLiveFanGroupsApiServiceModule-Protocol.h"
#import "IESLiveFeedConfigFetcherModule-Protocol.h"
#import "IESLiveFeedConfigModule-Protocol.h"
#import "IESLiveFeedDrawerModule-Protocol.h"
#import "IESLiveFeedInternalModule-Protocol.h"
#import "IESLiveFilterModule-Protocol.h"
#import "IESLiveInternalRouterModule-Protocol.h"
#import "IESLiveMessageOptimizeModule-Protocol.h"
#import "IESLiveOuterServiceModule-Protocol.h"
#import "IESLiveReferenceModule-Protocol.h"
#import "IESLiveRoomInnerFeedContainerModule-Protocol.h"
#import "IESLiveRoomSlideModuleService-Protocol.h"
#import "IESLiveRpcServiceModule-Protocol.h"
#import "IESLiveSDKServicesModule-Protocol.h"
#import "IESLiveSchemaURLHandlerModule-Protocol.h"
#import "IESLiveSettingsModule-Protocol.h"
#import "IESLiveShareReponseServiceModule-Protocol.h"
#import "IESLiveSlideModule-Protocol.h"
#import "IESLiveUserModule-Protocol.h"
#import "IESLiveWebViewModule-Protocol.h"
#import "IESUIColorModule-Protocol.h"

@class NSString;

@interface IESAppContext : IESBeanFactory <IESKVStoreModule, IESLiveRoomInnerFeedContainerModule, IESLiveSlideModule, IESLiveFeedInternalModule, IESLiveEnvironmentModule, IESLiveShareReponseServiceModule, IESLiveCertifyServiceModule, IESLiveEffectPlatformServiceModule, IESLiveSettingsModule, IESUIColorModule, IESLiveECommerceModule, IESLiveReferenceModule, IESLiveSDKServicesModule, IESLiveUserModule, IESLiveBackModule, IESLiveFeedDrawerModule, IESLiveRoomSlideModuleService, IESLiveFeedConfigFetcherModule, IESLiveBeautyModule, IESLiveFilterModule, IESLiveAuthorizationModule, HTSLiveGiftPluginsModule, IESLiveComponentsModule, IESLiveContainerModule, IESLiveFanGroupsApiServiceModule, IESLiveInternalRouterModule, IESLiveMessageOptimizeModule, IESLiveOuterServiceModule, IESLiveRpcServiceModule, IESLiveSchemaURLHandlerModule, IESLiveWebViewModule, IESLiveFeedConfigModule, HTSLiveConfigModule, IESLiveAWERTLModule, IESLiveDouPlusConfigModule, IESLiveEffectAdConfigModule>
{
}

+ (id)appContext;
- (id)prototypeObjectWithProtocol:(id)arg1;
- (id)provideHTSKVStoreProvider;
- (id)provideHTSKVStore;
- (id)provideIESLiveRoomInnerFeedContainerService;
- (id)provideIESLiveSlideControllerFactory;
- (id)provideIESLiveFeedSchemeHandler;
- (id)provideIESLiveEnvironment;
- (id)provideIESLiveShareResponseService;
- (id)provideIESLiveCertifyService;
- (id)provideIESLiveEffectPlatformService;
- (id)provideIESLiveSettingsPoliticalFilter;
- (id)provideIESLiveSettingsFilter;
- (id)provideIESLiveSettings;
- (id)provideIESLiveUIColorService;
- (id)provideIESLiveGuideShopFactory;
- (id)provideIESLiveReference;
- (id)provideIESLiveAppInfo;
- (id)provideIESLiveCloudResourceService;
- (id)provideIESLiveCreateViewProtocol;
- (id)provideIESLiveWebImageService;
- (id)provideIESLiveMonitor;
- (id)provideIESLiveTracker;
- (id)provideIESLiveWebViewService;
- (id)provideIESLiveHTTPClient;
- (id)provideIESActionDispatcher;
- (id)provideIESLiveUserService;
- (id)provideIESLiveBackTipRouter;
- (id)provideIESLiveFeedDrawerService;
- (id)provideIESLiveDislikeGuide;
- (id)provideIESLiveDislikeServiceFactory;
- (id)provideIESLiveFeedConfig;
- (id)provideIESLiveBeautyProvider;
- (id)provideIESLiveFilterProvider;
- (id)provideIESLiveAuthorizationService;
- (id)provideHTSLiveGiftExtensionListFactory;
- (id)provideHTSLiveGiftItemFactory;
- (id)provideIESLiveFinishViewFactory;
- (id)provideIESLiveContainerRouter;
- (id)provideIESLiveFanGroupsApiService;
- (id)provideIESLiveInternalRouter;
- (id)provideIESLiveMessageOptimizeService;
- (id)provideIESLiveOpenChargeViewService;
- (id)provideIESLiveRpcService;
- (id)provideIESLiveURLSchemaHandler;
- (id)provideIESLiveWebViewFactory;
- (id)provideIESLiveFeedADConvert;
- (id)provideIESLiveFeedPerformanceHandler;
- (id)provideIESLiveFeedMobileNetEnableService;
- (id)provideIESLiveFeedInjectService;
- (id)provideIESLiveFeedViewFactory;
- (id)provideIESLiveCJPayService;
- (id)provideIESLiveWalletService;
- (id)provideIESLivePOIProtocol;
- (id)provideIESLiveLoadingFactory;
- (id)provideIESLiveSettingsPoliticalService;
- (id)provideIESLiveAuthorizationControllerProvider;
- (id)provideIESLiveInHouseService;
- (id)provideIESLiveLongPressOuterMenuProvider;
- (id)provideIESLiveEmoticonResource;
- (id)provideIESLiveECommerceService;
- (id)provideIESLiveQiActivityService;
- (id)provideIESLiveUserFlowService;
- (id)provideIESLivePrefetchConfiguration;
- (id)provideIESLiveEffectStickerViewFactory;
- (id)provideIESLiveTipBackDelegate;
- (id)provideIESLiveShowUGCConfig;
- (id)provideIESLiveScrollRefreshService;
- (id)provideIESLiveViewExternalConfig;
- (id)provideIESLiveOuterComponentProvider;
- (id)provideIESLivePlayerSettings;
- (id)provideIESLiveCustomObserver;
- (id)provideIESLiveVideoDetailService;
- (id)provideIESLiveLoggerService;
- (id)provideIESLiveEffectPlatformConfig;
- (id)provideIESLiveAudienceRoomAwareness;
- (id)provideIESLiveLocationService;
- (id)provideIESLiveCreateRoomPreCheckService;
- (id)provideIESLiveABTestService;
- (id)provideIESLiveChargeService;
- (id)provideIESLiveAlertFactory;
- (id)provideIESLiveOrientationConfig;
- (id)provideIESLiveToastFactory;
- (id)provideIESLiveStickerPickerService;
- (id)provideIESLiveShareService;
- (id)provideIESLiveRecoderService;
- (id)provideIESLivePushService;
- (id)provideIESLiveLanguageService;
- (id)provideIESLiveLoginService;
- (id)provideIESLiveCustomConfig;
- (id)provideIESLiveFeedbackService;
- (id)provideIESLiveReportService;
- (id)provideIESLiveOpenURL;
- (id)provideIESLiveUserProfileControllerFactory;
- (id)provideIESLiveVerifyConfig;
- (id)provideIESLiveSDKServicesInjector;
- (id)provideIESLiveRootRouter;
- (id)provideIESLiveRTLProtocol;
- (id)provideIESLiveDouPlusService;
- (id)provideIESLiveEffectAdService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

