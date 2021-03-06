//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESettingsDataModel.h"

#import "HMEModelObserver-Protocol.h"

@class GHCAssistantDeviceSettings, HMEModel, NSString, UIViewController;
@protocol HMEDeviceData;

@interface HMEAssistantDeviceSettingsDataModel : HMESettingsDataModel <HMEModelObserver>
{
    UIViewController *_viewController;
    GHCAssistantDeviceSettings *_assistantDeviceSettings;
    HMEModel *_deviceModel;
    id <HMEDeviceData> _deviceData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, nonatomic) HMEModel *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) GHCAssistantDeviceSettings *assistantDeviceSettings; // @synthesize assistantDeviceSettings=_assistantDeviceSettings;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)refreshAssistantDeviceSettings;
- (id)bundle;
- (void)modelDidChange:(id)arg1;
- (long long)bannerViewStyle;
- (id)settingsTitle;
- (id)buildStatus;
- (id)initWithDeviceModel:(id)arg1 deviceData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

