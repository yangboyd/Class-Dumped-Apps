//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSnapAdsAdMediaRenditionSelector;
@protocol SCSnapAdsAdRenderDataParserMetricsAdapter;

@interface SCSnapAdsAdRenderDataParser : NSObject
{
    SCSnapAdsAdMediaRenditionSelector *_renditionSelector;
    id <SCSnapAdsAdRenderDataParserMetricsAdapter> _metricsAdapter;
}

- (void).cxx_destruct;
- (_Bool)_isAdTypeValid:(id)arg1 adLevelAdType:(int)arg2;
- (id)parseAndSelectOptimalRendition:(id)arg1 enableStreaming:(_Bool)arg2 adType:(long long)arg3;
- (id)parseAdRenderData:(id)arg1 adIdentifier:(id)arg2 serveItemId:(id)arg3 adServeRequestId:(id)arg4 adProductType:(unsigned long long)arg5 experimentSettings:(id)arg6 configAdapter:(id)arg7 serveLoggingContext:(id)arg8 targetingParameters:(id)arg9;
- (id)initWithRenditionSelector:(id)arg1 metricsAdapter:(id)arg2;
- (id)_parseStoryAd:(id)arg1;
- (id)_getUUIDFromBytes:(id)arg1 context:(unsigned long long)arg2;
- (id)_parseAdSnapBottomMedia:(id)arg1;
- (id)_parseCollection:(id)arg1;
- (id)_parseCollectionItem:(id)arg1;
- (id)_parseCollectionItemAttachment:(id)arg1;
- (id)_parseDeeplink:(id)arg1;
- (long long)_deepLinkFallbackTypeFromProto:(int)arg1;
- (id)_parseLongformVideo:(id)arg1;
- (id)_parseAdToLensMedia:(id)arg1;
- (id)_parseSnapcodeInfo:(id)arg1;
- (id)_parseAppInstallMedia:(id)arg1;
- (id)_parseWebviewAttachment:(id)arg1;
- (id)_parseAdSnapTopMedia:(id)arg1;
- (id)_parseWebviewTopSnap:(id)arg1;
- (id)_parseMediaCookie:(id)arg1;
- (id)_imageFromPbMediaRenderInfo:(id)arg1 shouldLog:(_Bool)arg2;
- (id)_videoFromPbMediaRenderInfo:(id)arg1;
- (id)_adMediaLocationFromPbMediaRenderInfo:(id)arg1;
- (id)_parseAdMediaLocation:(id)arg1;
- (long long)_adMediaLocationTypeFromPbMediaLocationType:(int)arg1;
- (id)_parseRenditionArray:(id)arg1 enableStreaming:(_Bool)arg2;
- (long long)_renditionTypeFromProtoRenditionType:(int)arg1;

@end

