//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface AMapLog : NSObject
{
    _Bool _inBackground;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSObject<OS_dispatch_group> *_loggingGroup;
    NSObject<OS_dispatch_semaphore> *_queueSemaphore;
    unsigned long long _numProcessors;
    NSMutableDictionary *_logHandlerDic;
}

+ (void)log:(_Bool)arg1 level:(unsigned long long)arg2 component:(id)arg3 session:(id)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 info:(id)arg8;
+ (void)log:(_Bool)arg1 level:(unsigned long long)arg2 component:(id)arg3 session:(id)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 format:(id)arg8;
+ (void)registerLogHandler:(id)arg1 consoleEnable:(_Bool)arg2;
+ (void)registerLogHandler:(id)arg1 cloudConfig:(id)arg2;
+ (void)uploadLogWithComponent:(id)arg1 level:(unsigned long long)arg2 complete:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
+ (void)log:(_Bool)arg1 level:(unsigned long long)arg2 component:(id)arg3 session:(id)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 exception:(id)arg8;
+ (void)log:(_Bool)arg1 level:(unsigned long long)arg2 component:(id)arg3 session:(id)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 request:(id)arg8 response:(id)arg9 jsonData:(id)arg10 error:(id)arg11;
+ (void)log:(_Bool)arg1 level:(unsigned long long)arg2 component:(id)arg3 session:(id)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 reformer:(id)arg8 jsonData:(id)arg9 error:(id)arg10;
- (void).cxx_destruct;
@property _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(retain, nonatomic) NSMutableDictionary *logHandlerDic; // @synthesize logHandlerDic=_logHandlerDic;
@property(nonatomic) unsigned long long numProcessors; // @synthesize numProcessors=_numProcessors;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *queueSemaphore; // @synthesize queueSemaphore=_queueSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *loggingGroup; // @synthesize loggingGroup=_loggingGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
- (void)_defaultUpload;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)currentIsInBackground;
- (void)_removeLogger:(id)arg1;
- (void)_addLogger:(id)arg1 config:(id)arg2;
- (void)_addTTYLogHandler;
- (void)_logMessage:(id)arg1;
- (void)_queueLogMessage:(id)arg1 asynchronously:(_Bool)arg2;
- (void)_log:(_Bool)arg1 message:(id)arg2 level:(unsigned long long)arg3 component:(id)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(unsigned long long)arg7 session:(id)arg8;
- (void)_uploadLogWithComponentName:(id)arg1 levelStr:(id)arg2 traversalUpload:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (id)_initSingleton;
- (id)init;
- (void)dealloc;

@end

