//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMESettingsData-Protocol.h"

@class HMEModel, NSString;
@protocol GCAConfigurationFlags, HMEAssistantSettings, HMEDeviceData, HMELocalDeviceData, HMEStructureData, HMEUnifiedDeviceData, SSOIdentity;

@interface HMESettingsDataModelController : NSObject <HMESettingsData>
{
    _Bool _eligibleForFamilyTools;
    HMEModel *_structureModel;
    id <SSOIdentity> _identity;
    NSString *_structureID;
    id <HMEDeviceData> _deviceData;
    id <HMEUnifiedDeviceData> _unifiedDeviceData;
    id <HMELocalDeviceData> _localDeviceData;
    id <HMEAssistantSettings> _assistantSettings;
    HMEModel *_localDevicesModel;
    HMEModel *_multizoneGroupsModel;
    HMEModel *_managersModel;
    id <GCAConfigurationFlags> _experimentFlags;
    id <HMEStructureData> _structureData;
}

+ (_Bool)isEligibleForFamilyToolsForDevices:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <HMEStructureData> structureData; // @synthesize structureData=_structureData;
@property(readonly, nonatomic) _Bool eligibleForFamilyTools; // @synthesize eligibleForFamilyTools=_eligibleForFamilyTools;
@property(readonly, nonatomic) id <GCAConfigurationFlags> experimentFlags; // @synthesize experimentFlags=_experimentFlags;
@property(readonly, nonatomic) HMEModel *managersModel; // @synthesize managersModel=_managersModel;
@property(readonly, nonatomic) HMEModel *multizoneGroupsModel; // @synthesize multizoneGroupsModel=_multizoneGroupsModel;
@property(readonly, nonatomic) HMEModel *localDevicesModel; // @synthesize localDevicesModel=_localDevicesModel;
@property(readonly, nonatomic) id <HMEAssistantSettings> assistantSettings; // @synthesize assistantSettings=_assistantSettings;
@property(readonly, nonatomic) id <HMELocalDeviceData> localDeviceData; // @synthesize localDeviceData=_localDeviceData;
@property(readonly, nonatomic) id <HMEUnifiedDeviceData> unifiedDeviceData; // @synthesize unifiedDeviceData=_unifiedDeviceData;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, copy, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
@property(readonly, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) HMEModel *structureModel; // @synthesize structureModel=_structureModel;
- (id)roomsAndDevicesSettings;
- (id)homeInformationSettings;
- (id)addingMenu;
- (id)generalSettings;
- (id)initWithIdentity:(id)arg1 structureID:(id)arg2 structureData:(id)arg3 deviceData:(id)arg4 unifiedDeviceData:(id)arg5 localDeviceData:(id)arg6 assistantSettings:(id)arg7 localDevicesModel:(id)arg8 multizoneGroupsModel:(id)arg9 experimentFlags:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

