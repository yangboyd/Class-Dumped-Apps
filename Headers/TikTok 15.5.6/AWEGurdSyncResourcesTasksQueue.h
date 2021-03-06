//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface AWEGurdSyncResourcesTasksQueue : NSObject
{
    NSMutableDictionary *_tasksDictionary;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *tasksDictionary; // @synthesize tasksDictionary=_tasksDictionary;
- (void).cxx_destruct;
- (id)allTasks;
- (id)taskForIdentifier:(id)arg1;
- (_Bool)containsTask:(id)arg1;
- (void)removeTask:(id)arg1;
- (_Bool)addTask:(id)arg1;

@end

