//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, TTVideoEngineKVStorage;
@protocol OS_dispatch_queue, TTVideoEngineDownloaderDelegate;

@interface TTVideoEngineDownloader : NSObject
{
    NSObject<OS_dispatch_queue> *_diskOperationQueue;
    _Bool _readAllTask;
    _Bool _loadingData;
    unsigned long long _maxDownloadOperationCount;
    long long _limitFreeDiskSize;
    id <TTVideoEngineDownloaderDelegate> _delegate;
    long long _maxTaskId;
    NSMutableArray *_allTasks;
    NSMutableSet *_runningTasks;
    NSMutableArray *_waitingTasks;
    TTVideoEngineKVStorage *_storage;
    NSString *_tasksIndexPath;
    NSMutableArray *_indexArray;
}

+ (id)shareLoader;
@property(nonatomic) _Bool loadingData; // @synthesize loadingData=_loadingData;
@property(nonatomic) _Bool readAllTask; // @synthesize readAllTask=_readAllTask;
@property(retain, nonatomic) NSMutableArray *indexArray; // @synthesize indexArray=_indexArray;
@property(copy, nonatomic) NSString *tasksIndexPath; // @synthesize tasksIndexPath=_tasksIndexPath;
@property(retain, nonatomic) TTVideoEngineKVStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSMutableArray *waitingTasks; // @synthesize waitingTasks=_waitingTasks;
@property(retain, nonatomic) NSMutableSet *runningTasks; // @synthesize runningTasks=_runningTasks;
@property(retain, nonatomic) NSMutableArray *allTasks; // @synthesize allTasks=_allTasks;
@property(nonatomic) long long maxTaskId; // @synthesize maxTaskId=_maxTaskId;
@property(nonatomic) __weak id <TTVideoEngineDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long limitFreeDiskSize; // @synthesize limitFreeDiskSize=_limitFreeDiskSize;
@property(nonatomic) unsigned long long maxDownloadOperationCount; // @synthesize maxDownloadOperationCount=_maxDownloadOperationCount;
- (void).cxx_destruct;
- (void)_writeTaskToDisk:(id)arg1 allTasks:(id)arg2;
- (void)_saveTaskInfo:(id)arg1;
- (void)_writeIndexToDisk:(id)arg1;
- (id)_readTasksFromDisk;
- (id)_taskForKey:(id)arg1;
- (id)_addTask:(id)arg1;
- (void)tryNextWaitingTask:(id)arg1;
- (void)downloadDidSuspend:(id)arg1;
- (void)downloadFail:(id)arg1 error:(id)arg2;
- (void)progress:(id)arg1 info:(id)arg2;
- (void)cancelTask:(id)arg1;
- (void)task:(id)arg1 completeError:(id)arg2;
- (void)resume:(id)arg1;
- (_Bool)suspended:(id)arg1;
- (_Bool)shouldResume:(id)arg1;
- (id)vidTaskWithVideoModel:(id)arg1 resolution:(unsigned long long)arg2;
- (id)existVidTaskWithVideoModel:(id)arg1 resolution:(unsigned long long)arg2;
- (id)vidTask:(id)arg1 resolution:(unsigned long long)arg2 bytevc1:(_Bool)arg3 baseDash:(_Bool)arg4 https:(_Bool)arg5;
- (id)existVidTask:(id)arg1 resolution:(unsigned long long)arg2 bytevc1:(_Bool)arg3 baseDash:(_Bool)arg4 https:(_Bool)arg5;
- (id)urlTask:(id)arg1 key:(id)arg2 videoId:(id)arg3;
- (id)existUrlTask:(id)arg1;
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

