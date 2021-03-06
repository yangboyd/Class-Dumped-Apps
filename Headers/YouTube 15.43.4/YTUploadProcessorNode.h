//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTRetryTaskConfig-Protocol.h>
#import <Module_Framework/YTUploadRequirementsObserver-Protocol.h>

@class GIMMe, NSString, YTDispatchTimer, YTUploadGelLogger, YTUploadRequirementsStore, YTUploadTaskStore;
@protocol OS_dispatch_queue, YTUploadProcessor;

@interface YTUploadProcessorNode : NSObject <YTUploadRequirementsObserver, YTRetryTaskConfig>
{
    int _flowPhase;
    int _state;
    GIMMe *_gimme;
    NSString *_identifier;
    NSString *_frontendID;
    id <YTUploadProcessor> _processor;
    YTUploadTaskStore *_taskStore;
    YTDispatchTimer *_retryTimer;
    YTUploadGelLogger *_logger;
    YTUploadRequirementsStore *_requirementsStore;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) YTUploadRequirementsStore *requirementsStore; // @synthesize requirementsStore=_requirementsStore;
@property(retain, nonatomic) YTUploadGelLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) YTDispatchTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) YTUploadTaskStore *taskStore; // @synthesize taskStore=_taskStore;
@property(nonatomic) int flowPhase; // @synthesize flowPhase=_flowPhase;
@property(readonly, nonatomic) id <YTUploadProcessor> processor; // @synthesize processor=_processor;
@property(readonly, nonatomic) NSString *frontendID; // @synthesize frontendID=_frontendID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)logFinishedProcessorWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)retryAtDate:(id)arg1;
- (void)waitForRequirements:(long long)arg1;
- (void)stopExecutionAndWaitForRequirements:(long long)arg1;
- (void)handleSuccessWithUpdater:(id)arg1;
- (void)handleFailureWithError:(id)arg1;
- (void)handleRetryForError:(id)arg1;
- (void)handleProcessorExecutionResult:(id)arg1 error:(id)arg2;
- (void)startNewExecutionWithTask:(id)arg1;
- (void)startExecutionIfNeededWithTask:(id)arg1;
- (void)fetchTaskAndStart;
- (long long)processorRequirements;
- (_Bool)isBestEffort;
- (double)nextRetryIntervalForRetryCount:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long maxRetries;
- (void)requirementsDidBecomeUnsatisfied:(long long)arg1;
- (void)requirementsDidBecomeSatisfied;
@property(readonly, nonatomic) long long requirements;
- (void)cancel;
- (void)executeWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 frontendID:(id)arg2 flowPhase:(int)arg3 processor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

