//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureContextImageClassifier-Protocol.h"

@class NSString, SCPreviewConfiguration, SCPreviewContextImageClassificationListenerAnnouncer, SCPreviewContextImageClassifierResult, SCSnapCommonLoggingParameters, SCUserSession;
@protocol SCPerforming;

@interface SCPreviewFeatureContextImageClassifierImpl : SCFeature <SCPreviewFeatureContextImageClassifier>
{
    SCPreviewConfiguration *_previewConfiguration;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    SCUserSession *_userSession;
    SCPreviewContextImageClassificationListenerAnnouncer *_announcer;
    id <SCPerforming> _performer;
    _Bool _didBeginClassification;
    double _classificationStartTimeInterval;
    SCPreviewContextImageClassifierResult *_result;
}

- (void).cxx_destruct;
- (void)_logClassificationResult:(id)arg1;
- (void)_updateClassificationResult:(id)arg1;
- (void)_handleClassificationResult:(id)arg1;
- (void)_beginClassification;
- (void)_classifyImageWithListener:(id)arg1;
- (void)cancelPendingOperations;
- (void)classifyImageWithListener:(id)arg1;
- (id)initWithConfiguration:(id)arg1 commonLoggingParameters:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

