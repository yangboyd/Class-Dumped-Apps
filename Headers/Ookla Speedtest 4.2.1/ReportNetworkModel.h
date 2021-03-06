//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpeedTestEngine/EncodableObject.h>

@class NSString, ReportWifiModel;

@interface ReportNetworkModel : EncodableObject
{
    short _connectionType;
    NSString *_connectionDetailedType;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_deviceIpAddress;
    NSString *_externalIpAddress;
    ReportWifiModel *_wifi;
    NSString *_carrier;
    NSString *_interface;
    NSString *_cellularDetailedType;
}

@property(copy, nonatomic) NSString *cellularDetailedType; // @synthesize cellularDetailedType=_cellularDetailedType;
@property(copy, nonatomic) NSString *interface; // @synthesize interface=_interface;
@property(nonatomic) short connectionType; // @synthesize connectionType=_connectionType;
@property(copy, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(copy, nonatomic) ReportWifiModel *wifi; // @synthesize wifi=_wifi;
@property(copy, nonatomic) NSString *externalIpAddress; // @synthesize externalIpAddress=_externalIpAddress;
@property(copy, nonatomic) NSString *deviceIpAddress; // @synthesize deviceIpAddress=_deviceIpAddress;
@property(copy, nonatomic) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(copy, nonatomic) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(copy, nonatomic) NSString *connectionDetailedType; // @synthesize connectionDetailedType=_connectionDetailedType;
- (void).cxx_destruct;
- (id)initWithConnectionType:(short)arg1 interfaceInfo:(id)arg2;

@end

