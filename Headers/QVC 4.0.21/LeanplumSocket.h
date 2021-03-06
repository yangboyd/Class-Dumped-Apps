//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Leanplum/Leanplum_SocketIODelegate-Protocol.h>

@class LPCountAggregator, Leanplum_SocketIO, NSString, NSTimer;

@interface LeanplumSocket : NSObject <Leanplum_SocketIODelegate>
{
    Leanplum_SocketIO *_socketIO;
    NSString *_appId;
    NSString *_deviceId;
    _Bool _authSent;
    NSTimer *_reconnectTimer;
    _Bool _connected;
    LPCountAggregator *_countAggregator;
}

+ (id)engine;
+ (id)sharedSocket;
@property(retain, nonatomic) LPCountAggregator *countAggregator; // @synthesize countAggregator=_countAggregator;
@property(readonly) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1 withData:(id)arg2;
- (void)socketIO:(id)arg1 didReceiveEvent:(id)arg2;
- (void)socketIODidDisconnect:(id)arg1;
- (void)socketIODidConnect:(id)arg1;
- (void)reconnect;
- (void)connect;
- (void)connectToAppId:(id)arg1 deviceId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

