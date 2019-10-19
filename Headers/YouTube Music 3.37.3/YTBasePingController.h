//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSString, UIApplication, YTPingService, YTPingStore;
@protocol YTPingControllerConfig;

@interface YTBasePingController : NSObject <YTSystemNotificationsObserver>
{
    YTPingStore *_pingStore;
    YTPingService *_pingService;
    UIApplication *_application;
    _Bool _isInBackground;
    unsigned long long _backgroundableTasksActive;
    unsigned long long _backgroundTaskID;
    id <YTPingControllerConfig> _config;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)authorizeRequest:(id)arg1 authorization:(id)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)decorateRequest:(id)arg1 withAuthorization:(id)arg2 visitorData:(id)arg3 successBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)endBackgroundableTask;
- (void)beginBackgroundableTask;
- (void)sendPingHTTPRequest:(id)arg1 identity:(id)arg2 visitorData:(id)arg3;
- (void)storePingHTTPRequest:(id)arg1 tag:(id)arg2 priority:(long long)arg3 maxAgeHours:(int)arg4 googDelayedDecoration:(_Bool)arg5 identity:(id)arg6 visitorData:(id)arg7;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

