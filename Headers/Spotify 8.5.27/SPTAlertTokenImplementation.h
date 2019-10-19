//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAlertToken-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTAlertQueueOperation;

@interface SPTAlertTokenImplementation : NSObject <SPTAlertToken>
{
    long long _state;
    id <SPTAlertQueueOperation> _operation;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTAlertQueueOperation> operation; // @synthesize operation=_operation;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)complete;
- (void)performCancel;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelIfStillQueued;
- (void)cancelEvenIfDisplaying;
- (void)performOperationWithPresenter:(id)arg1;
- (id)initWithOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

