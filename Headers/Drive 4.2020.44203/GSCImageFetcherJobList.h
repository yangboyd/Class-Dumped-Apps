//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSCImageFetcherJob;

@interface GSCImageFetcherJobList : NSObject
{
    unsigned long long _count;
    GSCImageFetcherJob *_head;
    GSCImageFetcherJob *_tail;
    unsigned long long _lastJobAddedIndex;
    double _lastJobAddedTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)popJob;
- (void)removeJob:(id)arg1;
- (void)addJob:(id)arg1;
- (void)insertJob:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)scheduleJob:(id)arg1;

@end

