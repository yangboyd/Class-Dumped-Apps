//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

#import "ASTSettingsLocationInputViewControllerDelegate-Protocol.h"

@class ASTMenuButtonItem, ASTMenuIconStreamItem, ASTUIAssistantDeviceSettings, NSString;

@interface ASTAssistantSDKDeviceSettingsUIAdapter : ASTSettingsUIAdapter <ASTSettingsLocationInputViewControllerDelegate>
{
    NSString *_deviceName;
    NSString *_deviceID;
    NSString *_homeGraphDeviceID;
    ASTUIAssistantDeviceSettings *_deviceSettings;
    ASTMenuIconStreamItem *_addressItem;
    ASTMenuIconStreamItem *_deviceNameItem;
    ASTMenuButtonItem *_removeDeviceAddressButton;
}

+ (id)iconStreamItem;
- (void).cxx_destruct;
- (id)unlinkAssistantSDKDeviceTitle;
- (void)unlinkDeviceFromUserAccount;
- (void)didTapUnlinkDeviceButton:(id)arg1;
- (void)updateDeviceName:(id)arg1;
- (void)didTapRemoveDeviceAddressButton:(id)arg1;
- (void)updateAddressItemWithAddress:(id)arg1;
- (id)deviceSettingsItemWithBuilderBlock:(CDUnknownBlockType)arg1;
- (void)didSelectAddressItem;
- (void)didTapEditDeviceNameButton;
- (void)updateDeviceLocation:(id)arg1 placeID:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (void)locationInputViewControllerDidTapCancelButton;
- (void)locationInputViewController:(id)arg1 didChangeLocation:(id)arg2 placeID:(id)arg3;
- (void)menuStreamController:(id)arg1 didUpdateItem:(id)arg2;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)settingsFilter;
- (id)pageCustomizations;
- (id)menuSectionsForSettings:(id)arg1;
- (id)initWithSettingsService:(id)arg1 deviceID:(id)arg2 deviceName:(id)arg3 modelID:(id)arg4 modelRevision:(int)arg5;
- (id)initWithSettingsService:(id)arg1 deviceID:(id)arg2 deviceName:(id)arg3 deviceSettings:(id)arg4;

@end

