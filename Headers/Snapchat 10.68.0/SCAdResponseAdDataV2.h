//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString, SCAdMediaStoryAd, SCAdServeLoggingContext, SCAdTargetingParameters, SCSnapAdsIdentifier;

@interface SCAdResponseAdDataV2 : NSObject <NSCopying, NSCoding>
{
    _Bool _isValid;
    _Bool _servedFromSOJUEndpoint_DEPRECATING;
    double _resolvedTimeStampMillis;
    unsigned long long _adProductType;
    SCSnapAdsIdentifier *_identifier;
    NSString *_adId;
    NSString *_serveItemId;
    NSString *_lineItemId;
    NSString *_adServeRequestId;
    long long _adType;
    NSArray *_adSnapArray;
    NSArray *_thirdPartyImpressionTrackUrls;
    NSArray *_thirdPartyImpressionClickUrls;
    SCAdMediaStoryAd *_storyAd;
    NSDictionary *_responseJson_DEPRECATING;
    SCAdServeLoggingContext *_serveLoggingContext;
    SCAdTargetingParameters *_targetingParameters;
}

@property(readonly, copy, nonatomic) SCAdTargetingParameters *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(readonly, nonatomic) _Bool servedFromSOJUEndpoint_DEPRECATING; // @synthesize servedFromSOJUEndpoint_DEPRECATING=_servedFromSOJUEndpoint_DEPRECATING;
@property(readonly, copy, nonatomic) SCAdServeLoggingContext *serveLoggingContext; // @synthesize serveLoggingContext=_serveLoggingContext;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, copy, nonatomic) NSDictionary *responseJson_DEPRECATING; // @synthesize responseJson_DEPRECATING=_responseJson_DEPRECATING;
@property(readonly, copy, nonatomic) SCAdMediaStoryAd *storyAd; // @synthesize storyAd=_storyAd;
@property(readonly, copy, nonatomic) NSArray *thirdPartyImpressionClickUrls; // @synthesize thirdPartyImpressionClickUrls=_thirdPartyImpressionClickUrls;
@property(readonly, copy, nonatomic) NSArray *thirdPartyImpressionTrackUrls; // @synthesize thirdPartyImpressionTrackUrls=_thirdPartyImpressionTrackUrls;
@property(readonly, copy, nonatomic) NSArray *adSnapArray; // @synthesize adSnapArray=_adSnapArray;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) NSString *adServeRequestId; // @synthesize adServeRequestId=_adServeRequestId;
@property(readonly, copy, nonatomic) NSString *lineItemId; // @synthesize lineItemId=_lineItemId;
@property(readonly, copy, nonatomic) NSString *serveItemId; // @synthesize serveItemId=_serveItemId;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
@property(readonly, nonatomic) double resolvedTimeStampMillis; // @synthesize resolvedTimeStampMillis=_resolvedTimeStampMillis;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResolvedTimeStampMillis:(double)arg1 adProductType:(unsigned long long)arg2 identifier:(id)arg3 adId:(id)arg4 serveItemId:(id)arg5 lineItemId:(id)arg6 adServeRequestId:(id)arg7 adType:(long long)arg8 adSnapArray:(id)arg9 thirdPartyImpressionTrackUrls:(id)arg10 thirdPartyImpressionClickUrls:(id)arg11 storyAd:(id)arg12 responseJson_DEPRECATING:(id)arg13 isValid:(_Bool)arg14 serveLoggingContext:(id)arg15 servedFromSOJUEndpoint_DEPRECATING:(_Bool)arg16 targetingParameters:(id)arg17;
- (id)initWithCoder:(id)arg1;

@end

