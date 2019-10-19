//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTTPConnection.h"

@class MDXWebSocketServer;

@interface MDXWebSocketServerConnection : HTTPConnection
{
    MDXWebSocketServer *_server;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)payloadBlockWithHTTPErrorType:(int)arg1 requestURI:(id)arg2;
- (void)logHTTPRequestErrorWithErrorType:(int)arg1;
- (void)handleResourceNotFound;
- (void)handleUnknownMethod:(id)arg1;
- (void)handleInvalidRequest:(id)arg1;
- (void)handleAuthenticationFailed;
- (void)handleVersionNotSupported:(id)arg1;
- (id)webSocketForURI:(id)arg1;
- (id)initWithAsyncSocket:(id)arg1 configuration:(id)arg2;

@end

