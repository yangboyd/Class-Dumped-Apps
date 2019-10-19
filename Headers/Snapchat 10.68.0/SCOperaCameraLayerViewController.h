//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCCaptureWorkflowResultDelegate-Protocol.h"

@class NSDate, NSMutableDictionary, NSString, SCAdsCameraLensDataProvider, SCScannableLensProcessor, SCUserSession;
@protocol SCCaptureWorkflow;

@interface SCOperaCameraLayerViewController : SCOperaLayerViewController <SCCaptureWorkflowResultDelegate>
{
    SCAdsCameraLensDataProvider *_lensDataProvider;
    SCScannableLensProcessor *_scannableLensProcessor;
    long long _viewLocation;
    _Bool _lensesAreLoadedOnEntry;
    _Bool _lensesAreLoadedOnExit;
    NSDate *_loadStartTime;
    NSDate *_loadCompleteTime;
    double _startCameraTime;
    unsigned long long _scannedLensCounter;
    NSMutableDictionary *_scanCodeIdToLensMap;
    id <SCCaptureWorkflow> _captureWorkflow;
    _Bool _shouldPushCamera;
    SCUserSession *_userSession;
}

+ (id)unavailableLensWithNonNilLensId;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)resetMetrics;
- (void)setLoadedOnEntryIfPossible;
- (id)currentViewParameters;
- (void)turnOnLenses:(id)arg1;
- (id)getLensesToPresent;
- (void)scanLensIfNecessaryWithLensItem:(id)arg1;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (long long)snapSourceForCurrentViewLocation;
- (void)pushCameraVC;
- (void)setAdIdAdRequestClientIdForLogging;
- (void)teardown;
- (void)viewDidFullyAppear;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)loadView;
- (void)didReceiveUpdateProperties:(id)arg1;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 userSession:(id)arg4 viewLocation:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

