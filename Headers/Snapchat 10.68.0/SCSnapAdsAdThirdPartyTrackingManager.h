//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SCQueuePerformer, SCSnapAdsAdThirdPartyTrackUrlCreator, SCSnapAdsSerializingNetworkManager;
@protocol SCSnapAdsNetworkUserAgentAdapter, SCSnapAdsOperationMetricsAdapter;

@interface SCSnapAdsAdThirdPartyTrackingManager : NSObject
{
    SCQueuePerformer *_queuePerformer;
    SCSnapAdsSerializingNetworkManager *_networkManager;
    SCSnapAdsAdThirdPartyTrackUrlCreator *_urlCreator;
    id <SCSnapAdsNetworkUserAgentAdapter> _userAgentAdapter;
    id <SCSnapAdsOperationMetricsAdapter> _metricsManager;
    NSMutableSet *_trackedImpressionSnapAdsIdentifiers;
}

@property(retain, nonatomic) NSMutableSet *trackedImpressionSnapAdsIdentifiers; // @synthesize trackedImpressionSnapAdsIdentifiers=_trackedImpressionSnapAdsIdentifiers;
@property(readonly, nonatomic) __weak id <SCSnapAdsOperationMetricsAdapter> metricsManager; // @synthesize metricsManager=_metricsManager;
@property(readonly, nonatomic) __weak id <SCSnapAdsNetworkUserAgentAdapter> userAgentAdapter; // @synthesize userAgentAdapter=_userAgentAdapter;
@property(readonly, nonatomic) SCSnapAdsAdThirdPartyTrackUrlCreator *urlCreator; // @synthesize urlCreator=_urlCreator;
@property(readonly, nonatomic) SCSnapAdsSerializingNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;
- (void)_handleTrackResult:(id)arg1 trackURL:(id)arg2 adProductType:(unsigned long long)arg3 requestLatencyInSec:(double)arg4;
- (void)_trackImpressionUrl:(id)arg1 adProductType:(unsigned long long)arg2;
- (void)_removeTrackedImpressionForAdIdentifier:(id)arg1;
- (void)_trackSnapAdsThirdParty:(id)arg1;
- (void)_trackSnapAdsThirdPartyImpression:(id)arg1;
- (void)_trackPromotedStoryThirdPartyURLs:(id)arg1;
- (void)adExpired:(id)arg1;
- (void)trackSnapAdsClickThirdParty:(id)arg1;
- (void)trackSnapAdsImpressionThirdParty:(id)arg1;
- (void)trackPromotedStoryThirdParty:(id)arg1;
- (id)initWithNetworkManager:(id)arg1 userAgentAdapter:(id)arg2 urlCreator:(id)arg3 metricsManager:(id)arg4;

@end

