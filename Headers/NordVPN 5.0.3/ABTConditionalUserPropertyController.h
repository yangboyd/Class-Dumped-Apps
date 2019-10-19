//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ABTConditionalUserPropertyController : NSObject
{
    NSObject<OS_dispatch_queue> *_analyticOperationQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)performSelectorForMethodName:(id)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (int)overflowPolicyWithPayload:(id)arg1 originalPolicy:(int)arg2;
- (_Bool)isExperiment:(id)arg1 theSameAsPayload:(id)arg2;
- (void)logScionInternalEventWithOrigin:(id)arg1 payload:(id)arg2 events:(id)arg3;
- (void)maxNumberOfExperimentsOfOrigin:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)maxNumberOfExperimentsOfOrigin:(id)arg1;
- (id)variantIDOfExperiment:(id)arg1;
- (id)experimentIDOfExperiment:(id)arg1;
- (id)eventWithOrigin:(id)arg1 eventName:(id)arg2 params:(id)arg3;
- (id)createExperimentFromOrigin:(id)arg1 payload:(id)arg2 events:(id)arg3;
- (void)setExperimentWithOrigin:(id)arg1 payload:(id)arg2 events:(id)arg3 policy:(int)arg4;
- (void)clearExperiment:(id)arg1 variantID:(id)arg2 withOrigin:(id)arg3 payload:(id)arg4 events:(id)arg5;
- (id)experimentsWithOrigin:(id)arg1;
- (id)init;

@end

