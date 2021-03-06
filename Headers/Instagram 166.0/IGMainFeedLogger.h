//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGApplicationStateInfoProvider, IGFeedStateInfoProvider;

@interface IGMainFeedLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSString *_analyticsModule;
    id <IGFeedStateInfoProvider> _feedStateInfoProvider;
    id <IGApplicationStateInfoProvider> _applicationStateInfoProvider;
    _Bool _shouldLogScrollToTopAndFollowActions;
    _Bool _isTrackingScrollToTopFollowActions;
    _Bool _shouldLogFeedFunnelEvent;
}

- (void).cxx_destruct;
- (void)_logFeedItemInsertedWithSessionId:(id)arg1 requestId:(id)arg2 requestType:(id)arg3 expectedPosition:(long long)arg4 mediaId:(long long)arg5 deliveryFlags:(id)arg6 isAd:(_Bool)arg7;
- (void)_logMainFeedRequestFailedWithRequestInfo:(id)arg1 error:(id)arg2 module:(id)arg3;
- (void)_logMainFeedFunnelLoggingRequestStateCompletedWithInfo:(id)arg1;
- (void)_logMainFeedFunnelLoggingRequestStateSentWithInfo:(id)arg1;
- (void)_logEventWithName:(id)arg1 shouldAddPrefix:(_Bool)arg2 extras:(id)arg3 feedStateExtras:(id)arg4 applicationStateExtras:(id)arg5;
- (void)_logEventWithName:(id)arg1 shouldAddPrefix:(_Bool)arg2 extras:(id)arg3;
- (void)logScrollToTopEndPoint:(unsigned long long)arg1;
- (void)logScrollToTopMidPoint:(unsigned long long)arg1;
- (void)logScrollToTopFirstPoint:(unsigned long long)arg1;
- (void)logFeedFunnelInsertEventWithSessionId:(id)arg1 requestId:(id)arg2 requestType:(id)arg3 viewInfoCount:(long long)arg4 feedItems:(id)arg5 position:(long long)arg6;
- (void)logFeedCacheReadWriteEventWithEventName:(id)arg1 sessionId:(id)arg2 feedItems:(id)arg3;
- (void)logAppearedInTheMiddleOfFeedWithScrollDistance:(double)arg1 withBackgroundInterval:(double)arg2;
- (void)logDidRequestNewReportedPosts:(unsigned long long)arg1;
- (void)logDeferredResponseLoadedWithReason:(unsigned long long)arg1 newlySeenMediaIDs:(id)arg2;
- (void)logDidScrollToBottomWhileLoading:(_Bool)arg1 cachedFeed:(_Bool)arg2 deferredResponse:(_Bool)arg3 newPostsIndicatorVisible:(_Bool)arg4;
- (void)logNewPostsIndicatorWasTapped;
- (void)logNewPostsIndicatorHiddenWithReason:(unsigned long long)arg1;
- (void)logDeferredResponseDiscarded;
- (void)logNewPostsIndicatorDisplayedWithReason:(unsigned long long)arg1;
- (void)onRequestFailedWithError:(id)arg1 statusCode:(long long)arg2 duration:(double)arg3 requestInfo:(id)arg4 userSession:(id)arg5;
- (void)onRequestSucceededWithNewItemsDelivered:(_Bool)arg1 itemCount:(unsigned long long)arg2 duration:(double)arg3 requestInfo:(id)arg4 userSession:(id)arg5;
- (void)logRequestBlockedWithBlockedReason:(unsigned long long)arg1 requestInfo:(id)arg2;
- (void)logRequestFunnelStateChangeWithRequestInfo:(id)arg1;
- (void)onRequestBeganWithRequestInfo:(id)arg1;
- (id)initWithFeedStateInfoProvider:(id)arg1 applicationStateInfoProvider:(id)arg2 analyticsLogger:(id)arg3 analyticsModule:(id)arg4 launcherSet:(id)arg5;

@end

