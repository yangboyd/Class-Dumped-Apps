//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLRequestOperation.h>

@class TNLURLSessionTaskOperation;

@interface TNLFakeRequestOperation : TNLRequestOperation
{
    TNLURLSessionTaskOperation *_ownedURLSessionTaskOperation;
}

- (void).cxx_destruct;
- (void)waitUntilFinishedWithoutBlockingRunLoop;
- (void)waitUntilFinished;
- (void)cancelWithSource:(id)arg1 underlyingError:(id)arg2;
- (long long)priority;
- (id)context;
- (float)uploadProgress;
- (float)downloadProgress;
- (unsigned long long)redirectCount;
- (unsigned long long)retryCount;
- (unsigned long long)attemptCount;
- (long long)state;
- (id)error;
- (id)response;
- (id)hydratedRequest;
- (id)originalRequest;
- (id)requestDelegate;
- (id)requestConfiguration;
- (id)requestOperationQueue;
- (long long)operationId;
- (id)URLSessionTaskOperation;
- (id)init;

@end

