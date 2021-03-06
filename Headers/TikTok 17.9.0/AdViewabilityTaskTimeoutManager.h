//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface AdViewabilityTaskTimeoutManager : NSObject
{
    unsigned long long _timeoutInterval;
    long long _currentSequenceID;
    NSHashTable *_runningTasks;
    CDUnknownBlockType _timeoutCallback;
}

- (void).cxx_destruct;
- (void)finishAllTasks;
- (void)didFinishTask:(id)arg1;
- (void)didStartTask:(id)arg1;
- (void)tickWithSequenceID:(id)arg1;
- (id)initWithTimeoutInterval:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;

@end

