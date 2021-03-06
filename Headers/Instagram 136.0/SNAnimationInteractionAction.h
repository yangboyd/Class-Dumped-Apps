//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface SNAnimationInteractionAction : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    CDUnknownBlockType _executionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType executionBlock; // @synthesize executionBlock=_executionBlock;
- (void).cxx_destruct;
- (void)_setFinishedState:(_Bool)arg1;
- (void)_setExecutingState:(_Bool)arg1;
- (void)cancel;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)start;
- (_Bool)isAsynchronous;
- (void)finish;

@end

