//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRMessagingConnectionDelegate-Protocol.h"

@class FIRMessagingConnection, FIRMessagingDataMessageManager, FIRMessagingPubSubRegistrar, FIRMessagingRmqManager, GULReachabilityChecker, NSString;
@protocol FIRMessagingClientDelegate;

@interface FIRMessagingClient : NSObject <FIRMessagingConnectionDelegate>
{
    _Bool _stayConnected;
    _Bool _didScheduleReconnect;
    FIRMessagingConnection *_connection;
    FIRMessagingDataMessageManager *_dataMessageManager;
    id <FIRMessagingClientDelegate> _clientDelegate;
    FIRMessagingPubSubRegistrar *_registrar;
    NSString *_senderId;
    FIRMessagingRmqManager *_rmq2Manager;
    GULReachabilityChecker *_reachability;
    long long _lastConnectedTimestamp;
    long long _lastDisconnectedTimestamp;
    unsigned long long _connectRetryCount;
    double _connectionTimeoutInterval;
    CDUnknownBlockType _connectHandler;
}

@property(copy, nonatomic) CDUnknownBlockType connectHandler; // @synthesize connectHandler=_connectHandler;
@property(nonatomic) _Bool didScheduleReconnect; // @synthesize didScheduleReconnect=_didScheduleReconnect;
@property(nonatomic) double connectionTimeoutInterval; // @synthesize connectionTimeoutInterval=_connectionTimeoutInterval;
@property(nonatomic) _Bool stayConnected; // @synthesize stayConnected=_stayConnected;
@property(nonatomic) unsigned long long connectRetryCount; // @synthesize connectRetryCount=_connectRetryCount;
@property(nonatomic) long long lastDisconnectedTimestamp; // @synthesize lastDisconnectedTimestamp=_lastDisconnectedTimestamp;
@property(nonatomic) long long lastConnectedTimestamp; // @synthesize lastConnectedTimestamp=_lastConnectedTimestamp;
@property(nonatomic) __weak GULReachabilityChecker *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) __weak FIRMessagingRmqManager *rmq2Manager; // @synthesize rmq2Manager=_rmq2Manager;
@property(retain, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(readonly, nonatomic) FIRMessagingPubSubRegistrar *registrar; // @synthesize registrar=_registrar;
@property(nonatomic) __weak id <FIRMessagingClientDelegate> clientDelegate; // @synthesize clientDelegate=_clientDelegate;
@property(nonatomic) __weak FIRMessagingDataMessageManager *dataMessageManager; // @synthesize dataMessageManager=_dataMessageManager;
@property(retain, nonatomic) FIRMessagingConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (unsigned long long)nextRetryInterval;
- (void)scheduleConnectRetry;
- (void)didConnectTimeout;
- (void)tryToConnect;
- (void)setupConnection;
- (void)setupConnectionAndConnect;
- (int)connectionDidReceiveAckForRmqIds:(id)arg1;
- (void)connectionDidRecieveMessage:(id)arg1;
- (void)didLoginWithConnection:(id)arg1;
- (void)connection:(id)arg1 didCloseForReason:(unsigned long long)arg2;
- (void)sendOnConnectOrDrop:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)checkinFetched:(id)arg1;
- (void)disconnectWithTryToConnectLater:(_Bool)arg1;
- (void)disconnect;
- (void)connect;
- (void)connectWithHandler:(CDUnknownBlockType)arg1;
- (void)retryConnectionImmediately:(_Bool)arg1;
@property(readonly, nonatomic) _Bool shouldStayConnected;
@property(readonly, nonatomic) _Bool isConnectionActive;
@property(readonly, nonatomic) _Bool isConnected;
- (void)updateSubscriptionWithToken:(id)arg1 topic:(id)arg2 options:(id)arg3 shouldDelete:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)cancelAllRequests;
- (void)teardown;
- (id)initWithDelegate:(id)arg1 reachability:(id)arg2 rmq2Manager:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

