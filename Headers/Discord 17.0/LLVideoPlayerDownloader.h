//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LLVideoPlayerCacheManager, NSMutableArray;
@protocol OS_dispatch_queue;

@interface LLVideoPlayerDownloader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    long long _maxConcurrentCount;
    LLVideoPlayerCacheManager *_manager;
    NSMutableArray *_runningTasks;
    NSMutableArray *_pendingRequests;
    long long _state;
}

+ (id)defaultDownloader;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSMutableArray *runningTasks; // @synthesize runningTasks=_runningTasks;
@property(nonatomic) __weak LLVideoPlayerCacheManager *manager; // @synthesize manager=_manager;
@property(nonatomic) long long maxConcurrentCount; // @synthesize maxConcurrentCount=_maxConcurrentCount;
- (void).cxx_destruct;
- (void)cacheLoaderIdle;
- (void)cacheLoaderBusy;
- (void)processNextNoLock;
- (_Bool)preloadWithRequest:(id)arg1;
- (void)cancelAllPreloads;
- (void)cancelPreloadWithURL:(id)arg1;
- (void)preloadWithURL:(id)arg1 bytes:(unsigned long long)arg2;
- (void)preloadWithURL:(id)arg1;
- (void)scheduleWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

@end

