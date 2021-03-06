//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ASTOperationResult;

@interface ASTAsynchronousBlockOperation : NSOperation
{
    CDUnknownBlockType _block;
    ASTOperationResult *_result;
    CDUnknownBlockType _errorHandler;
    unsigned long long _state;
}

+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) ASTOperationResult *result; // @synthesize result=_result;
- (void)removeKeyValueObservers;
- (void)addKeyValueObservers;
- (id)initInternalWithBlock:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)finishWithObject:(id)arg1 error:(id)arg2;
- (void)dealloc;

@end

