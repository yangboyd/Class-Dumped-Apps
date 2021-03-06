//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASTHomeAutomationDevice, HMECameraCoordinator, HMEDeviceMO, HMENavigationController, NSArray, NSDate, NSString, UIViewController;

@protocol HMECameraCoordinatorDelegate <NSObject>
- (void)cameraCoordinator:(HMECameraCoordinator *)arg1 shouldPushHistoryOnNavigationController:(HMENavigationController *)arg2 hgsIDs:(NSArray *)arg3 scrollToDate:(NSDate *)arg4;
- (void)cameraCoordinatorDismissedCameraScreen:(HMECameraCoordinator *)arg1 interactiveDismissal:(_Bool)arg2;
- (void)cameraCoordinator:(HMECameraCoordinator *)arg1 shouldOpenWebLinkForDevice:(ASTHomeAutomationDevice *)arg2;
- (void)cameraCoordinator:(HMECameraCoordinator *)arg1 shouldOpenLinkForDevice:(ASTHomeAutomationDevice *)arg2;
- (void)cameraCoordinator:(HMECameraCoordinator *)arg1 shouldShowUniversalRemoteForThirdPartyDevice:(ASTHomeAutomationDevice *)arg2 presentingController:(UIViewController *)arg3;
- (void)cameraCoordinator:(HMECameraCoordinator *)arg1 shouldStartAddDeviceToRoomForHGSID:(NSString *)arg2;
- (void)cameraCoordinator:(HMECameraCoordinator *)arg1 shouldShowDeviceSettingsViewControllerForThirdPartyDevice:(HMEDeviceMO *)arg2 presentingViewController:(UIViewController *)arg3;
- (void)cameraCoordinator:(HMECameraCoordinator *)arg1 shouldShowDeviceSettingsForDevice:(HMEDeviceMO *)arg2 presentingViewController:(UIViewController *)arg3;
@end

