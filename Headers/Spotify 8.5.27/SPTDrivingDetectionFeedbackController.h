//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingMotionBasedStateDetectorDelegate-Protocol.h"
#import "SPTDrivingStateObserver-Protocol.h"

@class NSString, NSUserDefaults, SPTDrivingDetectionFeedbackLoader, SPTDrivingDetectionFeedbackPresenter, SPTDrivingMotionBasedStateDetector, SPTDrivingMotionDetectionLoaderResult, UIApplication;

@interface SPTDrivingDetectionFeedbackController : NSObject <SPTDrivingStateObserver, SPTDrivingMotionBasedStateDetectorDelegate>
{
    SPTDrivingMotionBasedStateDetector *_motionBasedDrivingDetector;
    SPTDrivingDetectionFeedbackLoader *_feedbackLoader;
    SPTDrivingDetectionFeedbackPresenter *_surveyPresenter;
    NSUserDefaults *_standardUserDefaults;
    UIApplication *_application;
    SPTDrivingMotionDetectionLoaderResult *_predictionResult;
}

@property(retain, nonatomic) SPTDrivingMotionDetectionLoaderResult *predictionResult; // @synthesize predictionResult=_predictionResult;
@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSUserDefaults *standardUserDefaults; // @synthesize standardUserDefaults=_standardUserDefaults;
@property(readonly, nonatomic) SPTDrivingDetectionFeedbackPresenter *surveyPresenter; // @synthesize surveyPresenter=_surveyPresenter;
@property(readonly, nonatomic) SPTDrivingDetectionFeedbackLoader *feedbackLoader; // @synthesize feedbackLoader=_feedbackLoader;
@property(readonly, nonatomic) SPTDrivingMotionBasedStateDetector *motionBasedDrivingDetector; // @synthesize motionBasedDrivingDetector=_motionBasedDrivingDetector;
- (void).cxx_destruct;
- (void)drivingStateDetector:(id)arg1 didReceivePredictionResult:(id)arg2;
- (void)drivingStateDetector:(id)arg1 drivingStateDidChange:(id)arg2;
- (_Bool)hasEnoughTimePassedSinceLastSurveyPresentation;
- (void)saveLastSurveyPresentationTimestamp;
- (_Bool)shouldPresentDrivingSurveyWithDrivingState:(id)arg1;
- (void)presentSurveyWithDrivingState:(id)arg1;
- (id)initWithMotionBasedDetector:(id)arg1 feedbackPresenter:(id)arg2 feedbackLoader:(id)arg3 standardUserDefaults:(id)arg4 application:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

