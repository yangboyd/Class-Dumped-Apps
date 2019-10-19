//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMDataLoadTaskDelegate-Protocol.h"
#import "MLOnesieDataSaverConfigObserver-Protocol.h"
#import "YTReachabilityObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, HAMTimer, NSArray, NSString, NSURL, NSURLComponents, YTIOnesieConnectionPrewarmConfig, YTReachabilityController;
@protocol HAMClock, HAMDataLoader, OS_dispatch_queue;

@interface MLOnesieConnectionOpener : NSObject <HAMDataLoadTaskDelegate, MLOnesieDataSaverConfigObserver, YTReachabilityObserver, YTSystemNotificationsObserver>
{
    id <HAMDataLoader> _dataLoader;
    YTIOnesieConnectionPrewarmConfig *_config;
    NSObject<OS_dispatch_queue> *_queue;
    id <HAMClock> _clock;
    YTReachabilityController *_reachabilityController;
    HAMTimer *_pingTimer;
    _Bool _started;
    _Bool _applicationActive;
    _Bool _reachabilityConnected;
    NSURLComponents *_redirectorURLComponents;
    NSArray *_redirectorURLBaseQueryItems;
    NSURL *_redirectorURL;
    double _redirectorURLRandomizationTime;
    NSURL *_bandaidURL;
    double _bandaidURLResolutionTime;
    double _bandaidURLPingTime;
    _Bool _dataSaverModeEnabled;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)startTimerIfEligible;
- (void)maybeSendPing;
- (id)buildRedirectorURL;
- (id)pingURL;
- (void)setDataSaverModeEnabled:(_Bool)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)reachabilityDidChange;
- (void)onesieDataSaverConfigDidChange:(id)arg1;
- (_Bool)dataLoadTask:(id)arg1 shouldFollowRedirectWithResponse:(id)arg2 toURL:(id)arg3;
- (void)dataLoadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveData:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)updateURLComponents:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithDataLoader:(id)arg1 config:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

