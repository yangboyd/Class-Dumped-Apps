//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class CCLPNowCardsReadyLatency, CCLPNowCollectionRenderMetrics;

@interface CCLPNowLogData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cardsDisplayScenario; // @dynamic cardsDisplayScenario;
@property(nonatomic) int cardsDisplayStrategy; // @dynamic cardsDisplayStrategy;
@property(retain, nonatomic) CCLPNowCollectionRenderMetrics *collectionRenderMetrics; // @dynamic collectionRenderMetrics;
@property(nonatomic) int dataFetchErrorType; // @dynamic dataFetchErrorType;
@property(nonatomic) int discoverErrorType; // @dynamic discoverErrorType;
@property(nonatomic) _Bool hasCardsDisplayScenario; // @dynamic hasCardsDisplayScenario;
@property(nonatomic) _Bool hasCardsDisplayStrategy; // @dynamic hasCardsDisplayStrategy;
@property(nonatomic) _Bool hasCollectionRenderMetrics; // @dynamic hasCollectionRenderMetrics;
@property(nonatomic) _Bool hasDataFetchErrorType; // @dynamic hasDataFetchErrorType;
@property(nonatomic) _Bool hasDiscoverErrorType; // @dynamic hasDiscoverErrorType;
@property(nonatomic) _Bool hasIsFromTout; // @dynamic hasIsFromTout;
@property(nonatomic) _Bool hasIsNativeMapsCardShown; // @dynamic hasIsNativeMapsCardShown;
@property(nonatomic) _Bool hasIsNativeVideoCardShown; // @dynamic hasIsNativeVideoCardShown;
@property(nonatomic) _Bool hasIsNowEnabled; // @dynamic hasIsNowEnabled;
@property(nonatomic) _Bool hasNetworkRequestDurationMs; // @dynamic hasNetworkRequestDurationMs;
@property(nonatomic) _Bool hasNotificationIsRemote; // @dynamic hasNotificationIsRemote;
@property(nonatomic) _Bool hasNowCardsReadyLatency; // @dynamic hasNowCardsReadyLatency;
@property(nonatomic) _Bool hasOnboardingAction; // @dynamic hasOnboardingAction;
@property(nonatomic) _Bool hasOnboardingScreen; // @dynamic hasOnboardingScreen;
@property(nonatomic) _Bool hasOnboardingSource; // @dynamic hasOnboardingSource;
@property(nonatomic) _Bool hasResponsePayloadSizeBytes; // @dynamic hasResponsePayloadSizeBytes;
@property(nonatomic) _Bool hasTabType; // @dynamic hasTabType;
@property(nonatomic) _Bool hasUsingNewDataLayer; // @dynamic hasUsingNewDataLayer;
@property(nonatomic) _Bool isFromTout; // @dynamic isFromTout;
@property(nonatomic) _Bool isNativeMapsCardShown; // @dynamic isNativeMapsCardShown;
@property(nonatomic) _Bool isNativeVideoCardShown; // @dynamic isNativeVideoCardShown;
@property(nonatomic) _Bool isNowEnabled; // @dynamic isNowEnabled;
@property(nonatomic) int networkRequestDurationMs; // @dynamic networkRequestDurationMs;
@property(nonatomic) _Bool notificationIsRemote; // @dynamic notificationIsRemote;
@property(retain, nonatomic) CCLPNowCardsReadyLatency *nowCardsReadyLatency; // @dynamic nowCardsReadyLatency;
@property(nonatomic) int onboardingAction; // @dynamic onboardingAction;
@property(nonatomic) int onboardingScreen; // @dynamic onboardingScreen;
@property(nonatomic) int onboardingSource; // @dynamic onboardingSource;
@property(nonatomic) int responsePayloadSizeBytes; // @dynamic responsePayloadSizeBytes;
@property(nonatomic) int tabType; // @dynamic tabType;
@property(nonatomic) _Bool usingNewDataLayer; // @dynamic usingNewDataLayer;

@end

