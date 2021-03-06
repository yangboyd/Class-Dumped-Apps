//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGAREffectApplicationListener-Protocol.h>
#import <InstagramAppCoreFramework/IGAREffectAvailabilityListener-Protocol.h>
#import <InstagramAppCoreFramework/IGARInstructionServiceDelegate-Protocol.h>

@class IGAREffectTargetModel, IGAREffectTargetResponse, IGCameraViewController, NSError;

@protocol IGCameraViewControllerAREffectDelegate <IGAREffectAvailabilityListener, IGARInstructionServiceDelegate, IGAREffectApplicationListener>
- (void)cameraViewController:(IGCameraViewController *)arg1 didFailFetchWithError:(NSError *)arg2;
- (void)cameraViewController:(IGCameraViewController *)arg1 didFailFetchForEffectTarget:(IGAREffectTargetModel *)arg2 response:(IGAREffectTargetResponse *)arg3;
- (void)cameraViewController:(IGCameraViewController *)arg1 didCompleteFetchForEffectTarget:(IGAREffectTargetModel *)arg2;
- (void)cameraViewController:(IGCameraViewController *)arg1 didBeginFetchingEffectTarget:(IGAREffectTargetModel *)arg2;
- (void)cameraViewControllerIsReadyToProcessNewAREffect:(IGCameraViewController *)arg1;
@end

