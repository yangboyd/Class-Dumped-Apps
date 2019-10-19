//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIUnpluggedLocationAcquisitionSupportedRenderers, YTIUnpluggedLocationResolutionSupportedRenderers, YTIUnpluggedLocationStepSupportedRenderers;

@interface YTIUnpluggedLocationResolutionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnpluggedLocationAcquisitionSupportedRenderers *acquisitionItem; // @dynamic acquisitionItem;
@property(retain, nonatomic) YTIUnpluggedLocationStepSupportedRenderers *askedPermissionItem; // @dynamic askedPermissionItem;
@property(retain, nonatomic) YTIUnpluggedLocationStepSupportedRenderers *checkInDelinquentItem; // @dynamic checkInDelinquentItem;
@property(nonatomic) _Bool hasAcquisitionItem; // @dynamic hasAcquisitionItem;
@property(nonatomic) _Bool hasAskedPermissionItem; // @dynamic hasAskedPermissionItem;
@property(nonatomic) _Bool hasCheckInDelinquentItem; // @dynamic hasCheckInDelinquentItem;
@property(nonatomic) _Bool hasItem; // @dynamic hasItem;
@property(nonatomic) _Bool hasResolutionDestination; // @dynamic hasResolutionDestination;
@property(nonatomic) _Bool hasServicesItem; // @dynamic hasServicesItem;
@property(nonatomic) _Bool hasSettingsTitle; // @dynamic hasSettingsTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnaskedPermissionItem; // @dynamic hasUnaskedPermissionItem;
@property(nonatomic) _Bool hasVpnItem; // @dynamic hasVpnItem;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTIUnpluggedLocationResolutionSupportedRenderers *item; // @dynamic item;
@property(retain, nonatomic) YTICommand *resolutionDestination; // @dynamic resolutionDestination;
@property(retain, nonatomic) YTIUnpluggedLocationStepSupportedRenderers *servicesItem; // @dynamic servicesItem;
@property(retain, nonatomic) YTIFormattedString *settingsTitle; // @dynamic settingsTitle;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIUnpluggedLocationStepSupportedRenderers *unaskedPermissionItem; // @dynamic unaskedPermissionItem;
@property(retain, nonatomic) YTIUnpluggedLocationStepSupportedRenderers *vpnItem; // @dynamic vpnItem;

@end

