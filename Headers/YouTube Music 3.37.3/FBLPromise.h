//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSMutableSet;

@interface FBLPromise : NSObject
{
    long long _state;
    NSMutableSet *_pendingObjects;
    id _value;
    NSError *_error;
    NSMutableArray *_observers;
}

+ (id)resolvedWith:(id)arg1;
+ (id)pendingPromise;
+ (void)setDefaultDispatchQueue:(id)arg1;
+ (id)defaultDispatchQueue;
+ (void)initialize;
+ (CDUnknownBlockType)resolved;
+ (CDUnknownBlockType)pending;
+ (id)onQueue:(id)arg1 all:(id)arg2;
+ (id)all:(id)arg1;
+ (CDUnknownBlockType)allOn;
+ (CDUnknownBlockType)all;
+ (id)onQueue:(id)arg1 any:(id)arg2;
+ (id)any:(id)arg1;
+ (CDUnknownBlockType)anyOn;
+ (CDUnknownBlockType)any;
+ (id)onQueue:(id)arg1 async:(CDUnknownBlockType)arg2;
+ (id)async:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)asyncOn;
+ (CDUnknownBlockType)async;
+ (id)onQueue:(id)arg1 do:(CDUnknownBlockType)arg2;
+ (id)do:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)doOn;
+ (id)onQueue:(id)arg1 race:(id)arg2;
+ (id)race:(id)arg1;
+ (CDUnknownBlockType)raceOn;
+ (CDUnknownBlockType)race;
+ (id)onQueue:(id)arg1 attempts:(long long)arg2 delay:(double)arg3 condition:(CDUnknownBlockType)arg4 retry:(CDUnknownBlockType)arg5;
+ (id)attempts:(long long)arg1 delay:(double)arg2 condition:(CDUnknownBlockType)arg3 retry:(CDUnknownBlockType)arg4;
+ (id)onQueue:(id)arg1 attempts:(long long)arg2 retry:(CDUnknownBlockType)arg3;
+ (id)attempts:(long long)arg1 retry:(CDUnknownBlockType)arg2;
+ (id)onQueue:(id)arg1 retry:(CDUnknownBlockType)arg2;
+ (id)retry:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)retryAgainOn;
+ (CDUnknownBlockType)retryAgain;
+ (CDUnknownBlockType)retryOn;
+ (CDUnknownBlockType)retry;
+ (id)dispatchGroup;
+ (id)onQueue:(id)arg1 wrapDoubleOrErrorCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapDoubleOrErrorCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapDoubleCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapDoubleCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapIntegerOrErrorCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapIntegerOrErrorCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapIntegerCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapIntegerCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapBoolOrErrorCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapBoolOrErrorCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapBoolCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapBoolCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrap2ObjectsOrErrorCompletion:(CDUnknownBlockType)arg2;
+ (id)wrap2ObjectsOrErrorCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapErrorOrObjectCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapErrorOrObjectCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapObjectOrErrorCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapObjectOrErrorCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapErrorCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapErrorCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapObjectCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapObjectCompletion:(CDUnknownBlockType)arg1;
+ (id)onQueue:(id)arg1 wrapCompletion:(CDUnknownBlockType)arg2;
+ (id)wrapCompletion:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)wrapDoubleOrErrorCompletionOn;
+ (CDUnknownBlockType)wrapDoubleOrErrorCompletion;
+ (CDUnknownBlockType)wrapDoubleCompletionOn;
+ (CDUnknownBlockType)wrapDoubleCompletion;
+ (CDUnknownBlockType)wrapIntegerOrErrorCompletionOn;
+ (CDUnknownBlockType)wrapIntegerOrErrorCompletion;
+ (CDUnknownBlockType)wrapIntegerCompletionOn;
+ (CDUnknownBlockType)wrapIntegerCompletion;
+ (CDUnknownBlockType)wrapBoolOrErrorCompletionOn;
+ (CDUnknownBlockType)wrapBoolOrErrorCompletion;
+ (CDUnknownBlockType)wrapBoolCompletionOn;
+ (CDUnknownBlockType)wrapBoolCompletion;
+ (CDUnknownBlockType)wrap2ObjectsOrErrorCompletionOn;
+ (CDUnknownBlockType)wrap2ObjectsOrErrorCompletion;
+ (CDUnknownBlockType)wrapErrorOrObjectCompletionOn;
+ (CDUnknownBlockType)wrapErrorOrObjectCompletion;
+ (CDUnknownBlockType)wrapObjectOrErrorCompletionOn;
+ (CDUnknownBlockType)wrapObjectOrErrorCompletion;
+ (CDUnknownBlockType)wrapErrorCompletionOn;
+ (CDUnknownBlockType)wrapErrorCompletion;
+ (CDUnknownBlockType)wrapObjectCompletionOn;
+ (CDUnknownBlockType)wrapObjectCompletion;
+ (CDUnknownBlockType)wrapCompletionOn;
+ (CDUnknownBlockType)wrapCompletion;
- (void).cxx_destruct;
- (id)chainOnQueue:(id)arg1 chainedFulfill:(CDUnknownBlockType)arg2 chainedReject:(CDUnknownBlockType)arg3;
- (void)observeOnQueue:(id)arg1 fulfill:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSMutableSet *pendingObjects; // @dynamic pendingObjects;
@property(readonly, nonatomic) NSError *error; // @dynamic error;
@property(readonly, nonatomic) id value; // @dynamic value;
@property(readonly, nonatomic) _Bool isRejected; // @dynamic isRejected;
@property(readonly, nonatomic) _Bool isFulfilled; // @dynamic isFulfilled;
@property(readonly, nonatomic) _Bool isPending; // @dynamic isPending;
- (void)dealloc;
- (id)initWithResolution:(id)arg1;
- (id)initPending;
- (id)description;
- (void)reject:(id)arg1;
- (void)fulfill:(id)arg1;
- (id)onQueue:(id)arg1 always:(CDUnknownBlockType)arg2;
- (id)always:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)alwaysOn;
- (CDUnknownBlockType)always;
- (id)onQueue:(id)arg1 catch:(CDUnknownBlockType)arg2;
- (id)catch:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)catchOn;
- (CDUnknownBlockType)catch;
- (id)onQueue:(id)arg1 delay:(double)arg2;
- (id)delay:(double)arg1;
- (CDUnknownBlockType)delayOn;
- (CDUnknownBlockType)delay;
- (id)onQueue:(id)arg1 recover:(CDUnknownBlockType)arg2;
- (id)recover:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)recoverOn;
- (CDUnknownBlockType)recover;
- (id)onQueue:(id)arg1 reduce:(id)arg2 combine:(CDUnknownBlockType)arg3;
- (id)reduce:(id)arg1 combine:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)reduceOn;
- (CDUnknownBlockType)reduce;
- (id)onQueue:(id)arg1 then:(CDUnknownBlockType)arg2;
- (id)then:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)thenOn;
- (CDUnknownBlockType)then;
- (id)onQueue:(id)arg1 timeout:(double)arg2;
- (id)timeout:(double)arg1;
- (CDUnknownBlockType)timeoutOn;
- (CDUnknownBlockType)timeout;
- (id)onQueue:(id)arg1 validate:(CDUnknownBlockType)arg2;
- (id)validate:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)validateOn;
- (CDUnknownBlockType)validate;

@end

