//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADBrokerRequestControlling-Protocol.h"
#import "ADBrokerRequestStateUpdating-Protocol.h"

@class ADBrokerAction, ADBrokerBootstrapManager, ADBrokerRequest, NSString, WorkPlaceJoin;

@interface ADBaseBrokerRequestHandler : NSObject <ADBrokerRequestStateUpdating, ADBrokerRequestControlling>
{
    _Bool _completed;
    _Bool _shouldResolveAccountIdentifier;
    _Bool _shouldCallSSOSeeding;
    CDUnknownBlockType _completionBlock;
    ADBrokerBootstrapManager *_bootstrapManager;
    ADBrokerRequest *_request;
    ADBrokerAction *_currentAction;
    WorkPlaceJoin *_workPlaceJoin;
    NSString *_requestId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCallSSOSeeding; // @synthesize shouldCallSSOSeeding=_shouldCallSSOSeeding;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) WorkPlaceJoin *workPlaceJoin; // @synthesize workPlaceJoin=_workPlaceJoin;
@property(retain, nonatomic) ADBrokerAction *currentAction; // @synthesize currentAction=_currentAction;
@property(retain, nonatomic) ADBrokerRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) ADBrokerBootstrapManager *bootstrapManager; // @synthesize bootstrapManager=_bootstrapManager;
@property(nonatomic) _Bool shouldResolveAccountIdentifier; // @synthesize shouldResolveAccountIdentifier=_shouldResolveAccountIdentifier;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
- (void)continueExecuteRequest;
- (void)doSeedingThenExecuteRequest;
- (CDUnknownBlockType)copyAndClearCompletionBlock;
- (_Bool)setRequestCompletionBlock:(CDUnknownBlockType)arg1;
- (void)executeWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool shouldExecuteInParallel;
- (void)brokerRequestSucceededWithResult:(id)arg1 state:(id)arg2;
- (void)brokerRequestFailedWithError:(id)arg1;
- (void)logAndDoAction:(id)arg1;
- (void)returnResponseWithResult:(id)arg1 error:(id)arg2;
- (_Bool)isWorkplaceJoined:(id)arg1;
- (id)actionStateForRequest:(id)arg1;
- (id)nextBrokerActionForState:(id)arg1 error:(id *)arg2;
- (void)continueBrokerRequestWithState:(id)arg1;
- (id)initWithBrokerRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

