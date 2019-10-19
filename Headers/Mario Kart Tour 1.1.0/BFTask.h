//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSError, NSMutableArray;

@interface BFTask : NSObject
{
    id _result;
    NSError *_error;
    _Bool _cancelled;
    _Bool _faulted;
    _Bool _completed;
    NSObject *_lock;
    NSCondition *_condition;
    NSMutableArray *_callbacks;
}

+ (id)taskFromExecutor:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)taskWithDelay:(int)arg1 cancellationToken:(id)arg2;
+ (id)taskWithDelay:(int)arg1;
+ (id)taskForCompletionOfAnyTask:(id)arg1;
+ (id)taskForCompletionOfAllTasksWithResults:(id)arg1;
+ (id)taskForCompletionOfAllTasks:(id)arg1;
+ (id)cancelledTask;
+ (id)taskWithError:(id)arg1;
+ (id)taskWithResult:(id)arg1;
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic, getter=isFaulted) _Bool faulted; // @synthesize faulted=_faulted;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (id)description;
- (void)waitUntilFinished;
- (void)warnOperationOnMainThread;
- (id)continueWithSuccessBlock:(CDUnknownBlockType)arg1 cancellationToken:(id)arg2;
- (id)continueWithSuccessBlock:(CDUnknownBlockType)arg1;
- (id)continueWithExecutor:(id)arg1 successBlock:(CDUnknownBlockType)arg2 cancellationToken:(id)arg3;
- (id)continueWithExecutor:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2;
- (id)continueWithBlock:(CDUnknownBlockType)arg1 cancellationToken:(id)arg2;
- (id)continueWithBlock:(CDUnknownBlockType)arg1;
- (id)continueWithExecutor:(id)arg1 block:(CDUnknownBlockType)arg2 cancellationToken:(id)arg3;
- (id)continueWithExecutor:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)runContinuations;
- (_Bool)trySetCancelled;
- (_Bool)trySetError:(id)arg1;
@property(readonly, nonatomic) NSError *error;
- (_Bool)trySetResult:(id)arg1;
@property(readonly, nonatomic) id result;
- (id)initCancelled;
- (id)initWithError:(id)arg1;
- (id)initWithResult:(id)arg1;
- (id)init;

@end

