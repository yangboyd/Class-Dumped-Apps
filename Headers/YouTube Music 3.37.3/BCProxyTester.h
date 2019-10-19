//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCHTTPHangingRequestHandlerDelegate-Protocol.h"

@class BCHTTPHandler;
@protocol BCProxyTesterDelegate;

@interface BCProxyTester : NSObject <BCHTTPHangingRequestHandlerDelegate>
{
    int _testRetriesDone;
    double _firstTestResponseSeconds;
    BCHTTPHandler *_hangingHttpHandler;
    _Bool _isCloseImmediately;
    id <BCProxyTesterDelegate> _delegate;
}

+ (id)proxyTesterForCloseImmediately:(id)arg1 withDelegate:(id)arg2;
- (void).cxx_destruct;
- (_Bool)checkProxiedConnection;
- (void)setHangingHttpHandler:(id)arg1;
- (id)hangingHttpHandler;
- (void)onHTTPHangingRequest:(id)arg1 error:(id)arg2;
- (void)onHTTPHangingRequestComplete:(id)arg1 statusCode:(long long)arg2;
- (void)onHTTPHangingRequest:(id)arg1 receivedContent:(id)arg2;
- (void)cancel;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end

