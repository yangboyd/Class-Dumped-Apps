//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFeatureProvider;
@protocol SCCameraResources, SCCameraViewConfiguration, SCCameraViewContaining, SCCaptureWorkflow, SCCaptureWorkflowDelegate, SCCaptureWorkflowResultDelegate, SCLensCameraScreenDataProviderProtocol;

@interface SCCaptureScope : NSObject
{
    struct SCFeatureProvider *_cameraFeatureProvider;
    id <SCCameraViewConfiguration> _cameraViewConfigurationController;
    id <SCCameraViewContaining> _cameraViewContainer;
    id <SCCaptureWorkflowDelegate> _captureWorkflowDelegate;
    id <SCCaptureWorkflowResultDelegate> _captureWorkflowResultDelegate;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    id <SCCaptureWorkflow> _captureWorkflow;
}

@property(nonatomic) __weak id <SCCaptureWorkflow> captureWorkflow; // @synthesize captureWorkflow=_captureWorkflow;
@property(readonly, nonatomic) id <SCLensCameraScreenDataProviderProtocol> lensDataProvider; // @synthesize lensDataProvider=_lensDataProvider;
@property(readonly, nonatomic) __weak id <SCCaptureWorkflowResultDelegate> captureWorkflowResultDelegate; // @synthesize captureWorkflowResultDelegate=_captureWorkflowResultDelegate;
@property(readonly, nonatomic) __weak id <SCCaptureWorkflowDelegate> captureWorkflowDelegate; // @synthesize captureWorkflowDelegate=_captureWorkflowDelegate;
@property(readonly, nonatomic) id <SCCameraViewContaining> cameraViewContainer; // @synthesize cameraViewContainer=_cameraViewContainer;
@property(readonly, nonatomic) id <SCCameraViewConfiguration> cameraViewConfigurationController; // @synthesize cameraViewConfigurationController=_cameraViewConfigurationController;
@property(readonly, nonatomic) SCFeatureProvider<SCCameraResources> *cameraFeatureProvider; // @synthesize cameraFeatureProvider=_cameraFeatureProvider;
- (void).cxx_destruct;
- (id)initWithCameraFeatureProvider:(struct SCFeatureProvider *)arg1 cameraViewConfigurationController:(id)arg2 cameraViewContainer:(id)arg3 captureWorkflowDelegate:(id)arg4 captureWorkflowResultDelegate:(id)arg5 lensDataProvider:(id)arg6;

@end

