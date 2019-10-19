//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDocObject, SCDocObjectContext;
@protocol OS_dispatch_queue, SCDocObjectObservationToken;

@interface SCDocObjectObserver : NSObject
{
    SCDocObjectContext *_docObjectContext;
    NSObject<OS_dispatch_queue> *_serialLock;
    NSObject<OS_dispatch_queue> *_observerCallBackQueue;
    CDUnknownBlockType _fetchBlock;
    SCDocObject *_docObject;
    id <SCDocObjectObservationToken> _observationToken;
}

- (void).cxx_destruct;
- (void)_setDocObject:(id)arg1;
- (void)_fetchAndObserveIfNecessary;
- (void)_startObservation;
- (id)value;
- (id)initWithDocObjectContext:(id)arg1 observerCallBackQueue:(id)arg2 fetchBlock:(CDUnknownBlockType)arg3;

@end

