//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDPPkgFileReadHandleProtocol-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class BDPModel, NSMapTable, NSOperationQueue, NSRecursiveLock, NSString, NSURLSession;

@interface BDPWebAppFileHandle : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, BDPPkgFileReadHandleProtocol>
{
    BDPModel *_model;
    NSURLSession *_session;
    NSRecursiveLock *_lock;
    NSOperationQueue *_delegateQueue;
    NSMapTable *_taskMap;
}

@property(retain) NSMapTable *taskMap; // @synthesize taskMap=_taskMap;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) BDPModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)dealloc;
- (id)relativeFileUrl:(id)arg1;
- (void)setTask:(id)arg1 forKey:(id)arg2;
- (void)removeTaskForKey:(id)arg1;
- (id)getTaskForKey:(id)arg1;
- (id)generateURLTask:(id)arg1 type:(unsigned long long)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readDataWithFilePath:(id)arg1 syncIfDownloaded:(_Bool)arg2 dispatchQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readDataURLInOrder:(_Bool)arg1 withFilePath:(id)arg2 dispatchQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readDataInOrder:(_Bool)arg1 withFilePath:(id)arg2 dispatchQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getContentsOfDirAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getFileSizeInPkg:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)checkExistedFileInPkg:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addCompletedBlk:(CDUnknownBlockType)arg1;
- (id)contentsOfPkgDirAtPath:(id)arg1;
- (long long)fileSizeInPkgAtPath:(id)arg1;
- (_Bool)fileExistsInPkgAtPath:(id)arg1;
- (id)urlOfDataWithFilePath:(id)arg1 error:(id *)arg2;
- (id)readDataWithFilePath:(id)arg1 error:(id *)arg2;
- (void)removeAllLoadProgressBlks;
- (void)removeLoadProgressBlkWithToken:(id)arg1;
- (id)addLoadProgressBlk:(CDUnknownBlockType)arg1;
- (float)progress;
- (void)appContainerWillBeClosed;
- (void)cancelAllReadDataCompletionBlks;
- (id)basic;
- (_Bool)usedCacheMeta;
- (long long)createLoadStatus;
- (long long)loadStatus;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

