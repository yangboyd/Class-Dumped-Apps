//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSDatabase/TFSDatabaseWriteOperation.h>

@class TFSDatabaseStateQueue;
@protocol TFSDatabaseExpiringActivityManager;

@interface TFSDatabaseExpiringActivityWriteOperation : TFSDatabaseWriteOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    id <TFSDatabaseExpiringActivityManager> _expiringActivityManager;
    TFSDatabaseStateQueue *_stateQueue;
}

+ (id)operationAddedToQueue:(id)arg1 withExpiringActivityManager:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFSDatabaseStateQueue *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(readonly, nonatomic) id <TFSDatabaseExpiringActivityManager> expiringActivityManager; // @synthesize expiringActivityManager=_expiringActivityManager;
- (void)completeOperation;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueue:(id)arg1 expiringActivityManager:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

