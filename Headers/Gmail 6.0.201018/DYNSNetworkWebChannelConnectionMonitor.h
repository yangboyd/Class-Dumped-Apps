//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonBaseStopwatch;
@protocol DYNSAnalyticsClearcutEventsLogger, DYNSAnalyticsStopwatchFactory;

@interface DYNSNetworkWebChannelConnectionMonitor : NSObject
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <DYNSAnalyticsStopwatchFactory> stopwatchFactory_;
    long long connectionTimestampMillis_;
    long long randomConnectionId_;
    ComGoogleCommonBaseStopwatch *initialHandshakeTimer_;
    ComGoogleCommonBaseStopwatch *connectionTimer_;
}

- (void)dealloc;
- (void)logReceivedNullMessageError;
- (void)logSessionReady;
- (void)logReceivedMessage;
- (void)logConnectionClose;
- (void)logConnectionErrorWithComGoogleNetWebchannelClientErrorStatus:(id)arg1;
- (void)logE2eConnectionLatencyWithLong:(long long)arg1;
- (void)logConnectionOpen;
- (void)logConnectionOpening;
- (void)logMissingCompassCookie;
- (void)logReceiveSampleIdWithNSString:(id)arg1;
- (long long)getConnectionId;
- (long long)getConnectionTimestampMillis;

@end

