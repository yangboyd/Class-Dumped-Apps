//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUploadFlowExecutor-Protocol.h>
#import <Module_Framework/YTUploadOperationStatusDelegate-Protocol.h>

@class GIMMe, NSError, NSOperationQueue, NSString, YTUploadFlow;
@protocol YTUploadFlowExecutionDelegate;

@interface YTUploadOperationQueueFlowExecutor : NSObject <YTUploadOperationStatusDelegate, YTUploadFlowExecutor>
{
    NSError *_error;
    _Bool _cancelling;
    int _flowPhase;
    id <YTUploadFlowExecutionDelegate> delegate;
    NSString *_frontendID;
    GIMMe *_gimme;
    YTUploadFlow *_flow;
    NSOperationQueue *_queue;
    CDUnknownBlockType _stoppageBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType stoppageBlock; // @synthesize stoppageBlock=_stoppageBlock;
@property _Bool cancelling; // @synthesize cancelling=_cancelling;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) YTUploadFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) int flowPhase; // @synthesize flowPhase=_flowPhase;
@property(readonly, nonatomic) NSString *frontendID; // @synthesize frontendID=_frontendID;
@property(nonatomic) __weak id <YTUploadFlowExecutionDelegate> delegate; // @synthesize delegate;
- (void)stop;
- (id)operationForProcessor:(id)arg1 identifier:(id)arg2;
- (id)mapFlow:(id)arg1 mappedOperations:(id)arg2;
- (void)reportExecutionFinished;
- (void)handleFailureWithError:(id)arg1;
- (void)nodeDidFinish:(id)arg1 error:(id)arg2;
- (void)operation:(id)arg1 didFinishWithError:(id)arg2;
- (_Bool)operationShouldStartExecution:(id)arg1;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)start;
- (id)initWithFrontendID:(id)arg1 flow:(id)arg2 flowPhase:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

