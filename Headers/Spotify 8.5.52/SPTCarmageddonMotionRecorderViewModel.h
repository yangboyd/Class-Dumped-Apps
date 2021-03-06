//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarmageddonMotionBasedStateDetectorDelegate-Protocol.h"

@class NSMutableArray, NSString, SPTCarmageddonMotionBasedStateDetector;
@protocol SPTCarmageddonMotionRecorderViewModelDelegate;

@interface SPTCarmageddonMotionRecorderViewModel : NSObject <SPTCarmageddonMotionBasedStateDetectorDelegate>
{
    id <SPTCarmageddonMotionRecorderViewModelDelegate> _delegate;
    SPTCarmageddonMotionBasedStateDetector *_motionBasedCarDetector;
    NSMutableArray *_loggedResults;
}

@property(retain, nonatomic) NSMutableArray *loggedResults; // @synthesize loggedResults=_loggedResults;
@property(retain, nonatomic) SPTCarmageddonMotionBasedStateDetector *motionBasedCarDetector; // @synthesize motionBasedCarDetector=_motionBasedCarDetector;
@property(nonatomic) __weak id <SPTCarmageddonMotionRecorderViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)carDetectorDidSendPredictionRequest:(id)arg1;
- (void)carDetectorDidReceiveSensorBatch:(id)arg1;
- (void)carDetector:(id)arg1 didReceivePredictionError:(id)arg2;
- (void)carDetector:(id)arg1 didReceivePredictionResult:(id)arg2;
- (long long)getNumberOfItems;
- (id)getTableContentValueForIndex:(long long)arg1;
- (void)stopSamplingSensorValuesForPrediction;
- (void)startSamplingSensorValuesForPrediction;
- (id)initWithMotionBasedDetector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

