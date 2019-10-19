//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable, YTHeartbeatService, YTIPlayerResponse, YTTimedAction;
@protocol YTPlayerHeartbeatControllerDelegate;

@interface YTPlayerHeartbeatController : NSObject
{
    YTHeartbeatService *_heartbeatService;
    YTIPlayerResponse *_playerResponse;
    YTTimedAction *_nextHeartbeatTimedAction;
    NSHashTable *_handlers;
    unsigned long long _currentRequestID;
    _Bool _running;
    GIMMe *_gimme;
    id <YTPlayerHeartbeatControllerDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) __weak id <YTPlayerHeartbeatControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)heartbeatTimedAction;
- (_Bool)sendDeviceID;
- (id)populatedHeartbeatRequestParams;
- (void)noOpPendingRequest;
- (void)passPlayabilityStatusToHandlers:(id)arg1;
- (void)sendHeartbeatRequest;
- (void)stopNextStatusCheck;
- (void)sendHeartbeatRequestAfterTimeInterval:(double)arg1;
- (void)scheduleNextStatusCheck;
- (void)stop;
- (void)startIfStopped;
- (void)updateStopOrStart;
- (void)forceHeartbeatPing;
- (void)setPlayerResponse:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)dealloc;
- (id)init;

@end

