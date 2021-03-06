//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkCallbacks-Protocol.h>

@class NSString;
@protocol IGNetworkCallbacks;

@interface IGBaseNetworkerCallbacks : NSObject <IGNetworkCallbacks>
{
    id <IGNetworkCallbacks> _innerCallbacks;
    CDUnknownBlockType _onSuccessHandler;
    CDUnknownBlockType _onFailureHandler;
}

- (void).cxx_destruct;
- (void)failure:(id)arg1 summary:(id)arg2;
- (void)success:(id)arg1;
- (void)bytesReceived:(const char *)arg1 len:(unsigned long long)arg2 totalBytesExpectedToReceive:(long long)arg3;
- (void)responseReceived:(id)arg1;
- (void)bytesSent:(long long)arg1 totalBytes:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)startHandler;
- (void)cacheHandler:(id)arg1;
- (void)retryHandler:(id)arg1;
- (id)initWithCallbacks:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

