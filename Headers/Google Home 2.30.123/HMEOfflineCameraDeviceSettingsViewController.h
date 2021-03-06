//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEOfflineDeviceSettingsViewController.h"

@class GHCCameraMetadata, NSString;
@protocol GCAConfigurationFlags, HMEConciergeEntitlementData, HMEGriffinUserChecker, HMEHomeAutomationDeviceLinkOpener;

@interface HMEOfflineCameraDeviceSettingsViewController : HMEOfflineDeviceSettingsViewController
{
    _Bool _familiarFacesEnabled;
    _Bool _isCountrySupported;
    _Bool _hasActiveConciergeEntitlementForStructure;
    int _familiarFacesEntitlement;
    NSString *_structureID;
    id <GCAConfigurationFlags> _experimentFlags;
    GHCCameraMetadata *_cameraMetadata;
    NSString *_countryCode;
    id <HMEConciergeEntitlementData> _conciergeEntitlementData;
    id <HMEHomeAutomationDeviceLinkOpener> _deviceLinkOpener;
    id <HMEGriffinUserChecker> _griffinUserChecker;
    long long _currentUserOwnerUserType;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentUserOwnerUserType; // @synthesize currentUserOwnerUserType=_currentUserOwnerUserType;
@property(retain, nonatomic) id <HMEGriffinUserChecker> griffinUserChecker; // @synthesize griffinUserChecker=_griffinUserChecker;
@property(readonly, nonatomic) id <HMEHomeAutomationDeviceLinkOpener> deviceLinkOpener; // @synthesize deviceLinkOpener=_deviceLinkOpener;
@property(nonatomic) _Bool hasActiveConciergeEntitlementForStructure; // @synthesize hasActiveConciergeEntitlementForStructure=_hasActiveConciergeEntitlementForStructure;
@property(readonly, nonatomic) id <HMEConciergeEntitlementData> conciergeEntitlementData; // @synthesize conciergeEntitlementData=_conciergeEntitlementData;
@property(readonly, nonatomic) _Bool isCountrySupported; // @synthesize isCountrySupported=_isCountrySupported;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool familiarFacesEnabled; // @synthesize familiarFacesEnabled=_familiarFacesEnabled;
@property(nonatomic) int familiarFacesEntitlement; // @synthesize familiarFacesEntitlement=_familiarFacesEntitlement;
@property(retain, nonatomic) GHCCameraMetadata *cameraMetadata; // @synthesize cameraMetadata=_cameraMetadata;
@property(readonly, nonatomic) id <GCAConfigurationFlags> experimentFlags; // @synthesize experimentFlags=_experimentFlags;
@property(readonly, copy, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
- (void)updateCameraMetadataToSetVideoRecordingEnabled:(_Bool)arg1;
- (void)updateCameraMetadataToSetCameraStreamingEnabled:(_Bool)arg1;
- (void)refreshStructureConciergeEntitlements;
- (void)refreshNestCameraSettings;
- (void)updateSections;
- (id)buildNestCameraSettingsSection;
- (id)deleteVideoHistoryItem;
- (id)videoRecordingItem;
- (id)familiarFacesForNonGriffinUserWithTitle:(id)arg1 structureID:(id)arg2;
- (id)settingsItemForCapablePaidAndAllowedEntitlementWithTitle:(id)arg1 structureID:(id)arg2;
- (id)familiarFaceItem;
- (id)cameraMicrophoneItem;
- (id)securityCameraItem;
- (id)nestAppItem;
- (void)fetchOwnerUserTypeAndUpdateSettings;
- (double)collectionView:(id)arg1 cellHeightAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDevice:(id)arg1 assistantSettings:(id)arg2 structureID:(id)arg3 conciergeEntitlementData:(id)arg4 experimentFlags:(id)arg5 deviceLinkOpener:(id)arg6 griffinUserChecker:(id)arg7;

@end

