//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;

@interface SCRequestPriorityConcurrencyCounter : NSObject
{
    unsigned long long _numOfRunningTask;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)reset;
- (void)finishRunningTask;
- (void)startRunningTask;
- (unsigned long long)numOfRunningTask;
- (id)initWithPerformer:(id)arg1;

@end

