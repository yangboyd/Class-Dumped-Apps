//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCInAppRatingWorkflowDelegate-Protocol.h"

@class SCDisposableObserverLifecycle, SCExperimentManager, SCFeatureSettingsManager, SCLazy, SCObservable;
@protocol SCInAppRatingSubWorkflowDelegate;

@interface SCInAppRatingTrigger : NSObject <SCInAppRatingWorkflowDelegate>
{
    SCObservable *_snapSendEventObservable;
    SCLazy *_userSegmentsObservable;
    SCExperimentManager *_experimentManager;
    SCFeatureSettingsManager *_featureSettingsManager;
    id <SCInAppRatingSubWorkflowDelegate> _subWorkflowDelegate;
    SCDisposableObserverLifecycle *_observerLifecycle;
}

- (void).cxx_destruct;
- (void)inAppRatingWorkflowEnded;
- (void)_handleSnapSend:(id)arg1;
- (void)startListening;
- (id)initWithSnapSendEvent:(id)arg1 userSegmentsObservable:(id)arg2 experimentManger:(id)arg3 featureSettingsManager:(id)arg4 subWorkflowDelegate:(id)arg5;

@end

