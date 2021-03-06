//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Push-Protocol.h"

@class NSString, TTPushMessageDispatcher;
@protocol OS_dispatch_queue, WsDelegate;

@interface TTPushManager : NSObject <Push>
{
    // Error parsing type: ^{PushDelegate=^^?@^{WSClient}{unique_ptr<net::WSClient, std::__1::default_delete<net::WSClient> >={__compressed_pair<net::WSClient *, std::__1::default_delete<net::WSClient> >=^{WSClient}}}{atomic<bool>=AB}@}, name: pushDelegate
    struct unique_ptr<net::WSClient::ConnectionParams, std::__1::default_delete<net::WSClient::ConnectionParams>> parameters;
    _Bool _isForeground;
    _Bool _isBroadcasting;
    _Bool _isSecondInstance;
    _Bool _shared;
    id <WsDelegate> _delegate;
    TTPushMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    unsigned long long _connection_mode;
}

+ (unsigned long long)convertMessageType_:(int)arg1;
+ (unsigned long long)convertConnectionState_:(int)arg1;
+ (id)anotherSharedManager;
+ (id)sharedManager;
@property unsigned long long connection_mode; // @synthesize connection_mode=_connection_mode;
@property _Bool shared; // @synthesize shared=_shared;
@property _Bool isSecondInstance; // @synthesize isSecondInstance=_isSecondInstance;
@property _Bool isBroadcasting; // @synthesize isBroadcasting=_isBroadcasting;
@property _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatch_queue; // @synthesize dispatch_queue=_dispatch_queue;
@property(retain, nonatomic) TTPushMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak id <WsDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setBroadcastingMessage:(_Bool)arg1;
- (void)setCustomizedMessageReceiver:(id)arg1;
- (void)enableDebugLog:(_Bool)arg1;
- (void)onNetworkStateChanged:(unsigned long long)arg1;
- (_Bool)asyncSendPushMessage:(id)arg1;
- (void)asyncSendPing;
- (_Bool)asyncSendBinaryMessage:(id)arg1;
- (_Bool)asyncSendTextMessage:(id)arg1;
- (_Bool)isConnected;
- (void)stopConnection;
- (void)startConnection:(id)arg1 appId:(int)arg2 deviceId:(long long)arg3 appVersion:(int)arg4 sdkVersion:(int)arg5 installId:(long long)arg6 sessionId:(id)arg7 webId:(long long)arg8 platform:(int)arg9 network:(int)arg10;
- (void)startConnection:(id)arg1 appId:(int)arg2 fpid:(int)arg3 appKey:(id)arg4 deviceId:(long long)arg5 appVersion:(int)arg6 sdkVersion:(int)arg7 installId:(long long)arg8 sessionId:(id)arg9 webId:(long long)arg10 platform:(int)arg11 network:(int)arg12;
- (void)startConnection:(id)arg1 appId:(int)arg2 fpid:(int)arg3 appKey:(id)arg4 deviceId:(long long)arg5 appVersion:(int)arg6 sdkVersion:(int)arg7 installId:(long long)arg8 sessionId:(id)arg9 webId:(long long)arg10 platform:(int)arg11 network:(int)arg12 customParams:(id)arg13;
- (void)asyncStopConnection;
- (void)asyncStartConnection;
- (void)configConnection:(id)arg1;
- (void)onConnectionStateChanged:(int)arg1 url:(id)arg2;
- (void)onConnectionErrorWithState:(int)arg1 url:(id)arg2 error:(id)arg3;
- (void)onFeedbackLog:(id)arg1;
- (void)onPushMessageReceived:(const basic_string_90719d97 *)arg1 type:(int)arg2;
- (void)dealloc;
- (id)init:(_Bool)arg1 ConnectionMode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

