//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Account, AnalyticsAPIClient, NSDate, NSString, PersistedSet, RedditService, SessionTracker;
@protocol AnalyticsProcessorDelegate, OS_dispatch_queue;

@interface AnalyticsEventProcessor : NSObject
{
    _Bool _isProcessingPendingEvents;
    _Bool _isSendingEvents;
    id <AnalyticsProcessorDelegate> _delegate;
    PersistedSet *_eventsSet;
    long long _eventBatchSize;
    double _backoffSeconds;
    NSDate *_backoffTimestamp;
    NSObject<OS_dispatch_queue> *_queue;
    AnalyticsAPIClient *_apiClient;
    PersistedSet *_pendingEventsSet;
    SessionTracker *_sessionTracker;
}

@property(readonly, nonatomic) SessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
@property(readonly, nonatomic) PersistedSet *pendingEventsSet; // @synthesize pendingEventsSet=_pendingEventsSet;
@property(readonly, nonatomic) AnalyticsAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isSendingEvents; // @synthesize isSendingEvents=_isSendingEvents;
@property(retain) NSDate *backoffTimestamp; // @synthesize backoffTimestamp=_backoffTimestamp;
@property double backoffSeconds; // @synthesize backoffSeconds=_backoffSeconds;
@property long long eventBatchSize; // @synthesize eventBatchSize=_eventBatchSize;
@property(nonatomic) _Bool isProcessingPendingEvents; // @synthesize isProcessingPendingEvents=_isProcessingPendingEvents;
@property(readonly, nonatomic) PersistedSet *eventsSet; // @synthesize eventsSet=_eventsSet;
@property(nonatomic) __weak id <AnalyticsProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendEventsToServerUsingBackgroundTask:(unsigned long long)arg1;
- (void)concreteFlushPendingEvents;
@property(readonly, nonatomic) NSString *backgroundTaskName;
@property(readonly, nonatomic) Account *account;
@property(readonly, nonatomic) RedditService *redditService;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (void)endBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (void)sendEventsToServer;
- (void)flushPendingEvents;
- (void)processEvents;
- (void)startHeartbeat;
- (id)initWithEventsSet:(id)arg1 pendingEventsSet:(id)arg2 apiClient:(id)arg3 sessionTracker:(id)arg4;

@end

