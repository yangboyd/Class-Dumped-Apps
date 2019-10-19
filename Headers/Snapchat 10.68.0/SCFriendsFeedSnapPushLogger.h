//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCFeatureSettingsManager, SCLazy, SCNetworkConnectivityAnnouncer, SCQueuePerformer;
@protocol SCDocObjectObservationToken, SCGraphene;

@interface SCFriendsFeedSnapPushLogger : NSObject
{
    id <SCGraphene> _graphene;
    double _startTime;
    SCQueuePerformer *_performer;
    SCLazy *_docObjectContext;
    id <SCDocObjectObservationToken> _observerationToken;
    SCFeatureSettingsManager *_featureSettingsManager;
    SCNetworkConnectivityAnnouncer *_networkStatusAnnouncer;
    NSString *_networkStatus;
    _Bool _wasDataSaverEnabled;
    _Bool _contentMetricSucceeded;
    NSString *_messageId;
}

- (void).cxx_destruct;
- (void)_logMetric:(id)arg1 success:(_Bool)arg2 withTime:(double)arg3;
- (void)_logMetricForLoadedSnapWithSuccess:(_Bool)arg1 currentTime:(double)arg2;
- (void)_logContentMetricWithSuccess:(_Bool)arg1 currentTime:(double)arg2;
- (void)logUserExitedFeed;
- (void)_processChangedResult:(id)arg1;
- (void)logUserEnteredFeedForSnapNotificationForMessageId:(id)arg1 conversationId:(id)arg2;
- (id)initWithGraphene:(id)arg1 docObjectContext:(id)arg2 featureSettingsManager:(id)arg3 networkStatusAnnouncer:(id)arg4;

@end

