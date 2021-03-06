//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface JsManagerBlockDispatcher : NSObject
{
    struct JsManager *_jsManager;
    NSObject *_jsManagerLock;
    NSMutableArray *_execPriorityQueue;
    _Bool _paused;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
- (void)addExecQueueItem:(CDUnknownBlockType)arg1 withPriority:(unsigned long long)arg2;
- (CDUnknownBlockType)popNextExecQueueItem;
- (unsigned long long)execQueueCount;
- (void)executeAsyncJsBlock:(CDUnknownBlockType)arg1 jsManagerDisposedBlock:(CDUnknownBlockType)arg2;
- (void)dispatchJsBlock:(CDUnknownBlockType)arg1 jsManagerDisposedBlock:(CDUnknownBlockType)arg2 priority:(unsigned long long)arg3;
- (void)executeQueueIfUnpaused;
- (void)scheduleQueueItemExecution;
- (void)dispatchJsCallback:(CDUnknownBlockType)arg1 andUnrootJsWrappers:(id)arg2;
- (void)dispatchJsCallback:(CDUnknownBlockType)arg1 andUnrootJsWrappers:(id)arg2 priority:(unsigned long long)arg3;
- (void)dispatchAsync:(CDUnknownBlockType)arg1 jsManagerDisposedBlock:(CDUnknownBlockType)arg2;
- (void)dispatchAsync:(CDUnknownBlockType)arg1 jsManagerDisposedBlock:(CDUnknownBlockType)arg2 priority:(unsigned long long)arg3;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispose;
- (id)initWithJsManager:(struct JsManager *)arg1;
- (id)init;

@end

