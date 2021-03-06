//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASTAction;
@protocol ASTActionExecutor;

@protocol ASTActionExecutorFactory <NSObject>
- (id <ASTActionExecutor>)executorForAction:(ASTAction *)arg1;
- (void)deregisterExecutor:(Class)arg1 forExecutionInfoType:(long long)arg2;
- (void)deregisterExecutor:(Class)arg1 forActionType:(int)arg2;
- (void)registerExecutor:(Class)arg1 forExecutionInfoType:(long long)arg2;
- (void)registerExecutor:(Class)arg1 forActionType:(int)arg2;
@end

