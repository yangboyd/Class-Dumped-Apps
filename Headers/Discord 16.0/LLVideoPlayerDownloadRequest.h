//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LLVideoPlayerOperationDelegate-Protocol.h"

@class LLVideoPlayerCacheFile, NSError, NSMutableArray, NSOperationQueue, NSRecursiveLock, NSString, NSURLRequest;

@interface LLVideoPlayerDownloadRequest : NSObject <LLVideoPlayerOperationDelegate>
{
    NSURLRequest *_request;
    CDUnknownBlockType _completedBlock;
    LLVideoPlayerCacheFile *_cacheFile;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_taskQueue;
    NSRecursiveLock *_lock;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) LLVideoPlayerCacheFile *cacheFile; // @synthesize cacheFile=_cacheFile;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 didReceiveData:(id)arg2;
- (void)operation:(id)arg1 didCompleteWithError:(id)arg2;
- (void)addTaskWithRange:(struct _NSRange)arg1;
- (void)startOperation;
- (void)cancel;
- (void)resume;
- (id)initWithRequest:(id)arg1 cacheFile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

