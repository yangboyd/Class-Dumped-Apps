//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface YTBaseService : NSObject
{
    NSOperationQueue *_operationQueue;
}

+ (void)performCompletionHandlerWithNumber:(unsigned long long)arg1 error:(id)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)performCompletionHandlerWithValue:(id)arg1 error:(id)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)performBooleanBlock:(CDUnknownBlockType)arg1 response:(_Bool)arg2 orErrorBlock:(CDUnknownBlockType)arg3 error:(id)arg4;
- (void)performVoidBlock:(CDUnknownBlockType)arg1 orErrorBlock:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)performResponseBlock:(CDUnknownBlockType)arg1 response:(id)arg2 orErrorBlock:(CDUnknownBlockType)arg3 error:(id)arg4;
- (void)performErrorBlockWithDependency:(id)arg1 error:(id)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)performErrorBlock:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)performBooleanBlock:(CDUnknownBlockType)arg1 response:(_Bool)arg2;
- (void)performVoidBlock:(CDUnknownBlockType)arg1;
- (void)performAsyncVoidBlock:(CDUnknownBlockType)arg1;
- (void)performResponseBlock:(CDUnknownBlockType)arg1 response:(id)arg2;
- (void)performResponseBlock:(CDUnknownBlockType)arg1 response:(id)arg2 alwaysAsync:(_Bool)arg3;
- (id)performBackgroundBlockWithDependency:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performBackgroundBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithOperationQueue:(id)arg1;

@end

