//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCDeviceId, HMEDeviceMO, MultizoneGroup, NSString, SetupCastDevice, UINavigationController, UIViewController;
@protocol HMEDeviceData, HMESettingsCoordinatorDelegate;

@protocol HMESettingsCoordinator <NSObject>
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData;
@property(nonatomic) __weak id <HMESettingsCoordinatorDelegate> delegate;
- (void)showStructureAddress;
- (void)showNestAwareInNavigationController:(UINavigationController *)arg1;
- (void)popToRootViewController;
- (void)showAccountPreferences;
- (void)showE911Settings;
- (void)showHousehold;
- (void)showFamilyTools;
- (void)showGroupSettingsForMultizoneGroup:(MultizoneGroup *)arg1;
- (void)showAmbientSettingsPageForIPAddress:(NSString *)arg1;
- (void)showSettingsForDeviceWithIPAddress:(NSString *)arg1;
- (void)showSettingsForThirdPartyDevice:(HMEDeviceMO *)arg1 inPresentingViewController:(UIViewController *)arg2;
- (void)showSettingsForDeviceID:(GHCDeviceId *)arg1;
- (void)showSettingsForSetupCastDevice:(SetupCastDevice *)arg1;
- (void)showSettingsForSpaceWithID:(NSString *)arg1;
- (void)showGeneralSettings;

@optional
- (void)showWiFiSettingsForDeviceID:(GHCDeviceId *)arg1;
@end

