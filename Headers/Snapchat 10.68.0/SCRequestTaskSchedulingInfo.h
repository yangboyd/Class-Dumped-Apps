//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCRequestTaskSchedulingInfo : NSObject
{
    _Bool _isHighPriority;
    long long _numRunningRegularTasks;
    long long _numRunningHighPriorityTasks;
    double _runStartTime;
}

@property(nonatomic) double runStartTime; // @synthesize runStartTime=_runStartTime;
@property(nonatomic) long long numRunningHighPriorityTasks; // @synthesize numRunningHighPriorityTasks=_numRunningHighPriorityTasks;
@property(nonatomic) long long numRunningRegularTasks; // @synthesize numRunningRegularTasks=_numRunningRegularTasks;
@property(nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;

@end

