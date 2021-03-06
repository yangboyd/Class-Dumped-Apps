//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCCameraData, GHCCameraProperties, GHCCameraProperty, GHCOliveCredential, NSString;

@interface GHCCameraMetadata : GPBMessage
{
}

+ (id)descriptor;
@property(nonatomic, getter=isFamiliarFacesEnabled) _Bool familiarFacesEnabled;
@property(nonatomic) int familiarFacesEntitlement;

// Remaining properties
@property(retain, nonatomic) GHCCameraData *cameraData; // @dynamic cameraData;
@property(retain, nonatomic) GHCCameraProperties *cameraProperties; // @dynamic cameraProperties;
@property(retain, nonatomic) GHCCameraProperty *cameraProperty; // @dynamic cameraProperty;
@property(copy, nonatomic) NSString *cameraUuid; // @dynamic cameraUuid;
@property(nonatomic) _Bool hasCameraData; // @dynamic hasCameraData;
@property(nonatomic) _Bool hasCameraProperties; // @dynamic hasCameraProperties;
@property(nonatomic) _Bool hasCameraProperty; // @dynamic hasCameraProperty;
@property(nonatomic) _Bool hasOliveCredential; // @dynamic hasOliveCredential;
@property(copy, nonatomic) NSString *hgsDeviceId; // @dynamic hgsDeviceId;
@property(retain, nonatomic) GHCOliveCredential *oliveCredential; // @dynamic oliveCredential;

@end

