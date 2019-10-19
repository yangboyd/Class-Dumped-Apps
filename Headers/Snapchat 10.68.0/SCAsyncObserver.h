//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCObserver-Protocol.h"

@class NSOperationQueue, SCObservable;
@protocol SCObserver;

@interface SCAsyncObserver : NSObject <SCObserver>
{
    SCObservable *_observable;
    id <SCObserver> _observer;
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
- (void)complete;
- (void)next:(id)arg1;
- (id)initWithObservable:(id)arg1 observer:(id)arg2 queue:(id)arg3;

@end

