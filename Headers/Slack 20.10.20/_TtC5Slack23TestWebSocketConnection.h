//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@interface _TtC5Slack23TestWebSocketConnection : _TtCs12_SwiftObject
{
    // Error parsing type: , name: disconnectCalled
    // Error parsing type: , name: connectionStatus
}

@property(nonatomic) unsigned long long connectionStatus; // @synthesize connectionStatus;
- (void)beginReconnectionHandler;
- (void)didFinishConnectionProcess;
- (id)localizedConnectionStatusDescription;
- (void)disconnect;
- (void)fastReconnectWithUrl:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)flannelConnectWithUrl:(id)arg1 flannelStartCallback:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)connectWithURL:(id)arg1 isFastReconnect:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)shutdown;

@end

