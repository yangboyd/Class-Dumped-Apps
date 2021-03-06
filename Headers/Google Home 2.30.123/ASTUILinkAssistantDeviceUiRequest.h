//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUISettingsRequestHeader, NSString;

@interface ASTUILinkAssistantDeviceUiRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *assistantDeviceId; // @dynamic assistantDeviceId;
@property(copy, nonatomic) NSString *clientCertificateFingerprint; // @dynamic clientCertificateFingerprint;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *deviceModelId; // @dynamic deviceModelId;
@property(copy, nonatomic) NSString *foreignDeviceId; // @dynamic foreignDeviceId;
@property(nonatomic) _Bool hasAssistantDeviceId; // @dynamic hasAssistantDeviceId;
@property(nonatomic) _Bool hasClientCertificateFingerprint; // @dynamic hasClientCertificateFingerprint;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasDeviceModelId; // @dynamic hasDeviceModelId;
@property(nonatomic) _Bool hasForeignDeviceId; // @dynamic hasForeignDeviceId;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHomeGraphId; // @dynamic hasHomeGraphId;
@property(nonatomic) _Bool hasHumanFriendlyName; // @dynamic hasHumanFriendlyName;
@property(retain, nonatomic) ASTUISettingsRequestHeader *header; // @dynamic header;
@property(copy, nonatomic) NSString *homeGraphId; // @dynamic homeGraphId;
@property(copy, nonatomic) NSString *humanFriendlyName; // @dynamic humanFriendlyName;

@end

