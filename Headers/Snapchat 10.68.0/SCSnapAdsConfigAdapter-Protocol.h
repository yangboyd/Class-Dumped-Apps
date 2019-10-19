//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCSnapAdsConfigAdapter <NSObject>
- (_Bool)enableCOF;
- (_Bool)forcePoliticalAd;
- (long long)mockAdServerAdRequestStatusCode;
- (long long)mockAdServerDebugAdType;
- (_Bool)enableMockAdServer;
- (_Bool)enableCommercialsExtendedPlay;
- (_Bool)enableCognacSkippableAd;
- (long long)pixelTokenTTLInSec;
- (_Bool)forcePopularRSPRenditionsOnly;
- (_Bool)overwriteEnableTopSnapStreaming;
- (_Bool)shouldOverwriteTopSnapStreaming;
- (NSString *)defaultStagingProtoTrackEndpoint;
- (_Bool)enableAdRenderDataStoryAds;
- (_Bool)requestAdRenderData;
- (_Bool)enableDPAProcessing;
- (_Bool)enablePetraProcessing;
- (NSString *)defaultStagingProtoServeEndpoint;
- (NSString *)defaultProtoServeEndpoint;
- (_Bool)isDisabledForProductTypeInKillswitch:(unsigned long long)arg1;
- (_Bool)isDisabledForProductTypeInHoldout:(unsigned long long)arg1;
- (NSString *)defaultShadowInitEndpoint;
- (long long)initRequestThrottleInMins;
- (_Bool)includeRequestDebugWaterfall;
- (_Bool)shouldUseShadowInit;
- (_Bool)shouldUseStagingHost;
@end

