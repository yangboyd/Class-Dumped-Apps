//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory, NSData, NSNumber, NSString;
@protocol SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion, SCSpectaclesNetworkClient, SCSpectaclesPeripheral;

@interface SCSpectaclesBabyDevice : NSObject
{
    _Bool _locationEnabled;
    id <SCSpectaclesPeripheral> _peripheral;
    id <SCSpectaclesNetworkClient> _networkClient;
    EAAccessory *_accessory;
    NSData *_encryptionKey;
    NSString *_fullDisplayName;
    NSString *_shortDisplayName;
    long long _deviceNumber;
    NSString *_serialNumber;
    id <SCSpectaclesFirmwareVersion> _firmwareVersion;
    id <SCSpectaclesHardwareVersion> _hardwareVersion;
    NSNumber *_batteryLevel;
    NSNumber *_voltageLevel;
    NSNumber *_mediaCount;
    unsigned long long _bleState;
    unsigned long long _btcState;
    long long _deviceColor;
}

@property(nonatomic, getter=isLocationEnabled) _Bool locationEnabled; // @synthesize locationEnabled=_locationEnabled;
@property(nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
@property(nonatomic) unsigned long long btcState; // @synthesize btcState=_btcState;
@property(nonatomic) unsigned long long bleState; // @synthesize bleState=_bleState;
@property(retain, nonatomic) NSNumber *mediaCount; // @synthesize mediaCount=_mediaCount;
@property(retain, nonatomic) NSNumber *voltageLevel; // @synthesize voltageLevel=_voltageLevel;
@property(retain, nonatomic) NSNumber *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) id <SCSpectaclesHardwareVersion> hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(retain, nonatomic) id <SCSpectaclesFirmwareVersion> firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) long long deviceNumber; // @synthesize deviceNumber=_deviceNumber;
@property(copy, nonatomic) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(copy, nonatomic) NSString *fullDisplayName; // @synthesize fullDisplayName=_fullDisplayName;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(retain, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) id <SCSpectaclesNetworkClient> networkClient; // @synthesize networkClient=_networkClient;
@property(retain, nonatomic) id <SCSpectaclesPeripheral> peripheral; // @synthesize peripheral=_peripheral;
- (void).cxx_destruct;
- (id)deviceInformation;
- (_Bool)isReadyToGrowUp;
- (id)init;

@end

