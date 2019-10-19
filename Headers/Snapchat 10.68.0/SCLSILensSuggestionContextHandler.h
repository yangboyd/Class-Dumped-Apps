//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLSIContextHandler.h"

@class NSMutableDictionary, SCLogger, SCPredefinedLensMetadataStore, UIGestureRecognizer;
@protocol SCFeatureSceneIntelligenceLensDelegate, SCLensSceneIntelligenceLogger;

@interface SCLSILensSuggestionContextHandler : SCLSIContextHandler
{
    SCPredefinedLensMetadataStore *_store;
    id <SCFeatureSceneIntelligenceLensDelegate> _lensDelegate;
    double _triggerDelay;
    double _startTime;
    UIGestureRecognizer *_recognizer;
    id <SCLensSceneIntelligenceLogger> _sceneIntelligenceLogger;
    SCLogger *_generalPurposeLogger;
    NSMutableDictionary *_requestTimestamps;
}

- (void).cxx_destruct;
- (void)_logResponseWithRequestId:(id)arg1 responseCode:(long long)arg2;
- (void)_completeAfter:(double)arg1 startTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleGesture:(id)arg1;
- (void)sceneIntelligenceController:(id)arg1 request:(id)arg2 failedWithError:(id)arg3;
- (void)sceneIntelligenceController:(id)arg1 request:(id)arg2 receivedResponse:(id)arg3;
- (void)sceneIntelligenceController:(id)arg1 willProcessRequest:(id)arg2;
- (id)initWithStore:(id)arg1 lensDelegate:(id)arg2 sceneIntelligenceLogger:(id)arg3 triggerDelay:(double)arg4;

@end

