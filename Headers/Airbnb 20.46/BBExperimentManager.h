//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBExperimentData, _TtC18ExperimentsService19ERFAssignmentLogger;
@protocol OS_dispatch_queue, _TtP18ExperimentsService18LogDeliveryCaching_;

@interface BBExperimentManager : NSObject
{
    _TtC18ExperimentsService19ERFAssignmentLogger *_assignmentLogger;
    _Bool _isProductionBuild;
    BBExperimentData *_experimentData;
    NSObject<OS_dispatch_queue> *_experimentIOQueue;
    NSObject<OS_dispatch_queue> *_experimentUpdateQueue;
    id <_TtP18ExperimentsService18LogDeliveryCaching_> _logDeliveryCache;
    CDUnknownBlockType _assertionFunction;
    _Bool _disableExperiments;
}

+ (_Bool)_areAllServerTreatments:(id)arg1 inLocalTreatmentArray:(id)arg2 orLocalDefaultTreatment:(id)arg3;
+ (id)_findTreatmentWithName:(id)arg1 inTreatments:(id)arg2 defaultTreatment:(id)arg3 shouldTrack:(_Bool *)arg4;
+ (id)_experimentWithName:(id)arg1 localTreatments:(id)arg2 allDeliverable:(_Bool *)arg3 defaultTreatment:(id)arg4 isOverride:(_Bool *)arg5 validateTreatmentNames:(_Bool)arg6 experimentData:(id)arg7 disableExposure:(_Bool)arg8 assertionFunction:(CDUnknownBlockType)arg9;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableExperiments; // @synthesize disableExperiments=_disableExperiments;
- (void)_asyncPersistExperiments:(id)arg1;
- (void)_persistTreatmentOverridesAndPostNotification:(id)arg1;
- (void)_updateExperiments:(id)arg1;
- (void)testing_waitUntilAllIOJobsHaveCompleted;
@property(copy, nonatomic) CDUnknownBlockType assertionFunction;
- (void)setExperimentData:(id)arg1;
- (id)assignmentLogger;
- (_Bool)isProductionBuild;
- (id)logDeliveryCache;
- (id)treatmentNamesForExperiment:(id)arg1;
- (void)clearAllTreatmentOverrides;
- (void)clearAllAssignments;
- (void)clearTreatmentOverrideForExperiment:(id)arg1;
- (void)setTreatmentOverride:(id)arg1 forExperiment:(id)arg2;
- (void)updateServerExperiments:(id)arg1;
- (void)setExperimentsDisabled:(_Bool)arg1;
- (id)experimentData;
- (id)initWithLogDeliveryCache:(id)arg1 isProductionBuild:(_Bool)arg2 assignmentLogger:(id)arg3;
- (id)initWithLogDeliveryCache:(id)arg1 isProductionBuild:(_Bool)arg2;
- (id)_deliverTreatmentWithExperimentData:(id)arg1 disableExperiments:(_Bool)arg2 forExperiment:(id)arg3 treatments:(id)arg4 defaultTreatment:(id)arg5 determineTreatmentName:(CDUnknownBlockType)arg6 validateTreatmentNames:(_Bool)arg7 listingId:(id)arg8 disableExposure:(_Bool)arg9;
- (id)deliverTreatmentForExperiment:(id)arg1 treatments:(id)arg2 defaultTreatment:(id)arg3 disableExposure:(_Bool)arg4;
- (id)deliverTreatmentForExperiment:(id)arg1 treatments:(id)arg2 defaultTreatment:(id)arg3 validateTreatmentNames:(_Bool)arg4 listingId:(id)arg5 disableExposure:(_Bool)arg6;
- (id)deliverTreatmentForExperiment:(id)arg1 treatments:(id)arg2 defaultTreatment:(id)arg3;
- (id)deliverTreatmentForExperiment:(id)arg1 treatments:(id)arg2 defaultTreatment:(id)arg3 listingId:(id)arg4;

@end

