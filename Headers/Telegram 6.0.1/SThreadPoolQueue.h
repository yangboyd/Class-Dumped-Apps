//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SThreadPool;

@interface SThreadPoolQueue : NSObject
{
    SThreadPool *_threadPool;
    NSMutableArray *_tasks;
}

- (void).cxx_destruct;
- (_Bool)_hasTasks;
- (id)_popFirstTask;
- (void)addTask:(id)arg1;
- (id)initWithThreadPool:(id)arg1;

@end

