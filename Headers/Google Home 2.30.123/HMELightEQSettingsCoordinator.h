//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMELightEQSettingsCoordinator-Protocol.h"
#import "HMELightEQSettingsViewControllerDelegate-Protocol.h"

@class HMEAccessibilitySettingsCoordinator, HMELightEQSettingsViewController, NSString, UINavigationController;
@protocol AnalyticsLogger, GCAConfigurationFlags, HMEDefaultOutputSettingsCoordinator, HMEDeviceQueryService, HMEHelpCoordinator, HMELightEQSettingsData, HMEUnifiedDevice;

@interface HMELightEQSettingsCoordinator : NSObject <HMELightEQSettingsViewControllerDelegate, HMELightEQSettingsCoordinator>
{
    id <HMELightEQSettingsData> _data;
    id <HMEUnifiedDevice> _device;
    id <HMEHelpCoordinator> _helpCoordinator;
    CDUnknownBlockType _helpCoordinatorFactory;
    id <HMEDeviceQueryService> _deviceQueryService;
    HMELightEQSettingsViewController *_lightEqSettingsVC;
    UINavigationController *_navigationController;
    HMEAccessibilitySettingsCoordinator *_accessibilitySettingsCoordinator;
    CDUnknownBlockType _defaultOutputSettingsCoordinatorFactory;
    id <HMEDefaultOutputSettingsCoordinator> _defaultOutputSettingsCoordinator;
    id <AnalyticsLogger> _analyticsLogger;
    id <GCAConfigurationFlags> _experimentFlags;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GCAConfigurationFlags> experimentFlags; // @synthesize experimentFlags=_experimentFlags;
@property(retain, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) id <HMEDefaultOutputSettingsCoordinator> defaultOutputSettingsCoordinator; // @synthesize defaultOutputSettingsCoordinator=_defaultOutputSettingsCoordinator;
@property(copy, nonatomic) CDUnknownBlockType defaultOutputSettingsCoordinatorFactory; // @synthesize defaultOutputSettingsCoordinatorFactory=_defaultOutputSettingsCoordinatorFactory;
@property(retain, nonatomic) HMEAccessibilitySettingsCoordinator *accessibilitySettingsCoordinator; // @synthesize accessibilitySettingsCoordinator=_accessibilitySettingsCoordinator;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak HMELightEQSettingsViewController *lightEqSettingsVC; // @synthesize lightEqSettingsVC=_lightEqSettingsVC;
@property(readonly, nonatomic) id <HMEDeviceQueryService> deviceQueryService; // @synthesize deviceQueryService=_deviceQueryService;
@property(readonly, nonatomic) CDUnknownBlockType helpCoordinatorFactory; // @synthesize helpCoordinatorFactory=_helpCoordinatorFactory;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator; // @synthesize helpCoordinator=_helpCoordinator;
@property(readonly, nonatomic) id <HMEUnifiedDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) id <HMELightEQSettingsData> data; // @synthesize data=_data;
- (void)lightEQSettingsViewController:(id)arg1 didSelectAccessibilitySettingsWithCompletion:(CDUnknownBlockType)arg2;
- (void)lightEQSettingsViewController:(id)arg1 didSelectDisplayTVSettingsWithCompletion:(CDUnknownBlockType)arg2;
- (void)didUpdateStateInLightEQSettingsVC:(id)arg1;
- (void)showFeedbackOverlayForLightEQSettingsVC:(id)arg1;
- (void)didPressBack;
- (void)requestInitialState;
- (void)startInNavigationController:(id)arg1;
- (id)initWithData:(id)arg1 device:(id)arg2 helpCoordinatorFactory:(CDUnknownBlockType)arg3 analyticsLogger:(id)arg4 experimentFlags:(id)arg5 deviceQueryService:(id)arg6 defaultOutputSettingsCoordinatoryFactory:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

