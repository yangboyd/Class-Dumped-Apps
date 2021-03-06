//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupCollectionLayoutViewController.h"

#import "HMESetupMakeChoiceCollectionViewModelDelegate-Protocol.h"

@class HMEDeviceMO, HMESetupMakeChoiceCollectionViewModel, NSArray, NSString, SetupCastDevice;
@protocol HMESetupDefaultOutputDeviceViewControllerDelegate;

@interface HMESetupDefaultOutputDeviceViewController : HMESetupCollectionLayoutViewController <HMESetupMakeChoiceCollectionViewModelDelegate>
{
    id <HMESetupDefaultOutputDeviceViewControllerDelegate> _delegate;
    NSArray *_devices;
    HMEDeviceMO *_selectedDevice;
    SetupCastDevice *_device;
    long long _deviceType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) SetupCastDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) HMEDeviceMO *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(nonatomic) __weak id <HMESetupDefaultOutputDeviceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapSave;
- (id)subtitleText;
- (id)titleText;
- (void)didUpdateChoices:(id)arg1 userTriggered:(_Bool)arg2;
- (_Bool)shouldShowNoDefaultOption;
- (void)viewDidLoad;
- (id)initWithSelectedDevice:(id)arg1 deviceChoices:(id)arg2 forDevice:(id)arg3 deviceType:(long long)arg4;

// Remaining properties
@property(readonly, nonatomic) HMESetupMakeChoiceCollectionViewModel *collectionViewModel; // @dynamic collectionViewModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

