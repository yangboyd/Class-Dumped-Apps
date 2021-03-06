//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSStreamDelegate-Protocol.h>
#import <InstagramAppCoreFramework/NSURLSessionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/NSURLSessionStreamDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;

@interface RTStreamTransportDelegate : NSObject <NSStreamDelegate, NSURLSessionStreamDelegate, NSURLSessionDelegate>
{
    NSOperationQueue *_networkOperationQueue;
    id _certPinningContext;
    CDUnknownFunctionPointerType _challengeHandler;
    NSURLSession *_session;
    NSMutableDictionary *_taskDetailsMap;
}

- (void).cxx_destruct;
- (void)_handleErrorWithTaskDescription:(id)arg1 streamError:(id)arg2 errorReason:(long long)arg3;
- (void)_closeWithTaskDescription:(id)arg1 callErrorHandler:(_Bool)arg2 error:(id)arg3;
- (void)_writeStream:(id)arg1 eventCode:(unsigned long long)arg2 taskDescription:(id)arg3 taskDetails:(id)arg4;
- (void)_readStream:(id)arg1 eventCode:(unsigned long long)arg2 taskDescription:(id)arg3 taskDetails:(id)arg4;
- (void)_handleEventWithStream:(id)arg1 eventCode:(unsigned long long)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invokeConnectedWithTaskDescription:(id)arg1;
- (void)invalidate;
- (void)_invalidate;
- (id)session;
- (void)writeDataWithTaskDescription:(id)arg1 data:(id)arg2;
- (void)closeWithTaskDescription:(id)arg1;
- (void)registerWithNSURLSessionStreamTask:(id)arg1 context:(id)arg2 dataHandler:(CDUnknownFunctionPointerType)arg3 errorHandler:(CDUnknownFunctionPointerType)arg4 connectedHandler:(CDUnknownFunctionPointerType)arg5;
- (id)initWithCertPinningGetContextHandler:(CDUnknownFunctionPointerType)arg1 challengeHandler:(CDUnknownFunctionPointerType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

