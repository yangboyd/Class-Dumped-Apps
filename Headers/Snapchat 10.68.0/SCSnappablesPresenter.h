//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptureWorkflowResultDelegate-Protocol.h"
#import "SCSnappablesPresenting-Protocol.h"

@class NSString, SCSnappablesDismissalCoordinator, SCUserSession;
@protocol SCCameraViewConfiguration, SCNotificationManager;

@interface SCSnappablesPresenter : NSObject <SCCaptureWorkflowResultDelegate, SCSnappablesPresenting>
{
    SCUserSession *_userSession;
    id <SCNotificationManager> _notificationManager;
    id <SCCameraViewConfiguration> _cameraLoadingConfigurationController;
    SCSnappablesDismissalCoordinator *_dismissalCoordinator;
}

@property(readonly, nonatomic) SCSnappablesDismissalCoordinator *dismissalCoordinator; // @synthesize dismissalCoordinator=_dismissalCoordinator;
- (void).cxx_destruct;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)captureWorkflowWillDismissWithDidSendSnap:(_Bool)arg1;
- (void)_processUnlock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unlockedLensForID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentCameraViewControllerWithState:(id)arg1 captureWorkflow:(id)arg2 fromViewController:(id)arg3;
- (void)presentSnappablesWithLens:(id)arg1 payload:(id)arg2 origin:(unsigned long long)arg3 replyParameters:(id)arg4 fromViewController:(id)arg5;
- (void)presentSnappablesWithLensID:(id)arg1 payload:(id)arg2 origin:(unsigned long long)arg3 replyParameters:(id)arg4 fromViewController:(id)arg5;
- (id)initWithUserSession:(id)arg1 notificationProcessingManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

