//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCountAggregator, NSDictionary, NSTimer;
@protocol LPNetworkEngineProtocol;

@interface LPRequestSender : NSObject
{
    _Bool _didUiTimeout;
    id <LPNetworkEngineProtocol> _engine;
    double _lastSentTime;
    NSDictionary *_requestHeaders;
    NSTimer *_uiTimeoutTimer;
    LPCountAggregator *_countAggregator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) LPCountAggregator *countAggregator; // @synthesize countAggregator=_countAggregator;
@property(nonatomic) _Bool didUiTimeout; // @synthesize didUiTimeout=_didUiTimeout;
@property(retain, nonatomic) NSTimer *uiTimeoutTimer; // @synthesize uiTimeoutTimer=_uiTimeoutTimer;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(nonatomic) double lastSentTime; // @synthesize lastSentTime=_lastSentTime;
@property(retain, nonatomic) id <LPNetworkEngineProtocol> engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (id)sendNowQueue;
- (void)uiDidTimeout;
- (void)sendRequests:(_Bool)arg1;
- (id)createArgsDictionaryForRequest:(id)arg1;
- (id)generateUUID;
- (void)attachApiKeys:(id)arg1;
- (void)sendNow:(id)arg1 withDatas:(id)arg2;
- (void)sendNow:(id)arg1 withData:(id)arg2 forKey:(id)arg3;
- (void)sendIfDelayedHelper:(id)arg1;
- (void)sendIfDelayed:(id)arg1;
- (void)sendNowSync:(id)arg1;
- (void)sendNow:(id)arg1;
- (void)sendIfConnected:(id)arg1 sync:(_Bool)arg2;
- (void)sendIfConnected:(id)arg1;
- (void)sendEventually:(id)arg1;
- (void)sendNow:(id)arg1 sync:(_Bool)arg2;
- (void)send:(id)arg1;
- (id)init;

@end

