//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPRewardedVideoReward, NSArray, NSData, NSDate, NSDictionary, NSString, NSURL;

@interface MPAdConfiguration : NSObject
{
    _Bool _adUnitWarmingUp;
    _Bool _scrollable;
    _Bool _precacheRequired;
    _Bool _isVastVideoPlayer;
    _Bool _rewardedPlayableShouldRewardOnClick;
    _Bool _visibleImpressionTrackingEnabled;
    unsigned long long _adType;
    NSString *_networkType;
    NSURL *_clickTrackingURL;
    NSURL *_impressionTrackingURL;
    NSURL *_failoverURL;
    NSURL *_interceptURLPrefix;
    double _refreshInterval;
    double _adTimeoutInterval;
    NSData *_adResponseData;
    NSDictionary *_nativeSDKParameters;
    NSString *_customSelectorName;
    Class _customEventClass;
    NSDictionary *_customEventClassData;
    unsigned long long _orientationType;
    NSString *_dspCreativeId;
    NSDate *_creationTimestamp;
    NSString *_creativeId;
    NSString *_headerAdType;
    long long _nativeVideoPlayVisiblePercent;
    long long _nativeVideoPauseVisiblePercent;
    double _nativeImpressionMinVisiblePixels;
    long long _nativeImpressionMinVisiblePercent;
    double _nativeImpressionMinVisibleTimeInterval;
    double _nativeVideoMaxBufferingTime;
    NSDictionary *_nativeVideoTrackers;
    NSArray *_availableRewards;
    MPRewardedVideoReward *_selectedReward;
    NSString *_rewardedVideoCompletionUrl;
    double _rewardedPlayableDuration;
    NSString *_advancedBidPayload;
    double _impressionMinVisibleTimeInSec;
    double _impressionMinVisiblePixels;
    NSString *_adResponseHTMLString;
    long long _clickthroughExperimentBrowserAgent;
    struct CGSize _preferredSize;
}

@property(nonatomic) long long clickthroughExperimentBrowserAgent; // @synthesize clickthroughExperimentBrowserAgent=_clickthroughExperimentBrowserAgent;
@property(copy, nonatomic) NSString *adResponseHTMLString; // @synthesize adResponseHTMLString=_adResponseHTMLString;
@property(nonatomic) _Bool visibleImpressionTrackingEnabled; // @synthesize visibleImpressionTrackingEnabled=_visibleImpressionTrackingEnabled;
@property(nonatomic) double impressionMinVisiblePixels; // @synthesize impressionMinVisiblePixels=_impressionMinVisiblePixels;
@property(nonatomic) double impressionMinVisibleTimeInSec; // @synthesize impressionMinVisibleTimeInSec=_impressionMinVisibleTimeInSec;
@property(copy, nonatomic) NSString *advancedBidPayload; // @synthesize advancedBidPayload=_advancedBidPayload;
@property(nonatomic) _Bool rewardedPlayableShouldRewardOnClick; // @synthesize rewardedPlayableShouldRewardOnClick=_rewardedPlayableShouldRewardOnClick;
@property(nonatomic) double rewardedPlayableDuration; // @synthesize rewardedPlayableDuration=_rewardedPlayableDuration;
@property(copy, nonatomic) NSString *rewardedVideoCompletionUrl; // @synthesize rewardedVideoCompletionUrl=_rewardedVideoCompletionUrl;
@property(retain, nonatomic) MPRewardedVideoReward *selectedReward; // @synthesize selectedReward=_selectedReward;
@property(retain, nonatomic) NSArray *availableRewards; // @synthesize availableRewards=_availableRewards;
@property(retain, nonatomic) NSDictionary *nativeVideoTrackers; // @synthesize nativeVideoTrackers=_nativeVideoTrackers;
@property(nonatomic) double nativeVideoMaxBufferingTime; // @synthesize nativeVideoMaxBufferingTime=_nativeVideoMaxBufferingTime;
@property(nonatomic) double nativeImpressionMinVisibleTimeInterval; // @synthesize nativeImpressionMinVisibleTimeInterval=_nativeImpressionMinVisibleTimeInterval;
@property(nonatomic) long long nativeImpressionMinVisiblePercent; // @synthesize nativeImpressionMinVisiblePercent=_nativeImpressionMinVisiblePercent;
@property(nonatomic) double nativeImpressionMinVisiblePixels; // @synthesize nativeImpressionMinVisiblePixels=_nativeImpressionMinVisiblePixels;
@property(nonatomic) long long nativeVideoPauseVisiblePercent; // @synthesize nativeVideoPauseVisiblePercent=_nativeVideoPauseVisiblePercent;
@property(nonatomic) long long nativeVideoPlayVisiblePercent; // @synthesize nativeVideoPlayVisiblePercent=_nativeVideoPlayVisiblePercent;
@property(copy, nonatomic) NSString *headerAdType; // @synthesize headerAdType=_headerAdType;
@property(copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSDate *creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(nonatomic) _Bool isVastVideoPlayer; // @synthesize isVastVideoPlayer=_isVastVideoPlayer;
@property(nonatomic) _Bool precacheRequired; // @synthesize precacheRequired=_precacheRequired;
@property(copy, nonatomic) NSString *dspCreativeId; // @synthesize dspCreativeId=_dspCreativeId;
@property(nonatomic) unsigned long long orientationType; // @synthesize orientationType=_orientationType;
@property(retain, nonatomic) NSDictionary *customEventClassData; // @synthesize customEventClassData=_customEventClassData;
@property(nonatomic) Class customEventClass; // @synthesize customEventClass=_customEventClass;
@property(copy, nonatomic) NSString *customSelectorName; // @synthesize customSelectorName=_customSelectorName;
@property(retain, nonatomic) NSDictionary *nativeSDKParameters; // @synthesize nativeSDKParameters=_nativeSDKParameters;
@property(copy, nonatomic) NSData *adResponseData; // @synthesize adResponseData=_adResponseData;
@property(nonatomic) double adTimeoutInterval; // @synthesize adTimeoutInterval=_adTimeoutInterval;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) _Bool scrollable; // @synthesize scrollable=_scrollable;
@property(retain, nonatomic) NSURL *interceptURLPrefix; // @synthesize interceptURLPrefix=_interceptURLPrefix;
@property(retain, nonatomic) NSURL *failoverURL; // @synthesize failoverURL=_failoverURL;
@property(retain, nonatomic) NSURL *impressionTrackingURL; // @synthesize impressionTrackingURL=_impressionTrackingURL;
@property(retain, nonatomic) NSURL *clickTrackingURL; // @synthesize clickTrackingURL=_clickTrackingURL;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) _Bool adUnitWarmingUp; // @synthesize adUnitWarmingUp=_adUnitWarmingUp;
@property(nonatomic) unsigned long long adType; // @synthesize adType=_adType;
- (void).cxx_destruct;
- (long long)clickthroughExperimentVariantFromHeaders:(id)arg1 forKey:(id)arg2;
- (id)parseAvailableRewardsFromHeaders:(id)arg1;
- (void)setVideoTrackers:(id)arg1 event:(id)arg2 urls:(id)arg3;
- (id)nativeVideoTrackersFromHeaders:(id)arg1 key:(id)arg2;
- (unsigned long long)orientationTypeFromHeaders:(id)arg1;
- (id)adAmountFromHeaders:(id)arg1 key:(id)arg2;
- (long long)percentFromHeaders:(id)arg1 forKey:(id)arg2;
- (double)timeIntervalFromMsHeaders:(id)arg1 forKey:(id)arg2;
- (double)timeIntervalFromHeaders:(id)arg1 forKey:(id)arg2;
- (double)refreshIntervalFromHeaders:(id)arg1;
- (id)dictionaryFromHeaders:(id)arg1 forKey:(id)arg2;
- (id)URLFromHeaders:(id)arg1 forKey:(id)arg2;
- (id)networkTypeFromHeaders:(id)arg1;
- (unsigned long long)adTypeFromHeaders:(id)arg1;
- (id)clickDetectionURLPrefix;
- (_Bool)hasPreferredSize;
- (id)customEventClassDataFromHeaders:(id)arg1;
- (Class)setUpCustomEventClassFromHeaders:(id)arg1;
- (id)initWithHeaders:(id)arg1 data:(id)arg2;

@end

