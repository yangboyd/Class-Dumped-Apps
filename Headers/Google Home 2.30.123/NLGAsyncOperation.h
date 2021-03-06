//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSMutableArray;

@interface NLGAsyncOperation : NSOperation
{
    long long _state;
    id _result;
    NSError *_error;
    NSMutableArray *_requiredDependencies;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *requiredDependencies; // @synthesize requiredDependencies=_requiredDependencies;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id result; // @synthesize result=_result;
- (void)cancel;
- (_Bool)checkRequiredDependenciesSucceeded;
- (_Bool)shouldExecute;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (_Bool)isAsynchronous;
- (id)keysAffectedByState:(long long)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (void)addRequiredDependency:(id)arg1;
- (void)finishWithResult:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)init;

@end

