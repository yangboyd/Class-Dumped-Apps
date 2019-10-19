//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSRWebSocket, NSError, NSString;

@protocol FSRWebSocketDelegate <NSObject>
- (void)webSocket:(FSRWebSocket *)arg1 didReceiveMessage:(id)arg2;

@optional
- (void)webSocket:(FSRWebSocket *)arg1 didCloseWithCode:(long long)arg2 reason:(NSString *)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(FSRWebSocket *)arg1 didFailWithError:(NSError *)arg2;
- (void)webSocketDidOpen:(FSRWebSocket *)arg1;
@end

