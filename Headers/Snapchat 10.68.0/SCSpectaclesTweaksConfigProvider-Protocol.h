//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber;

@protocol SCSpectaclesTweaksConfigProvider <NSObject>
- (unsigned long long)mockTemperatureStatus;
- (unsigned long long)mockStorageLevelStatus;
- (unsigned long long)mockBatteryLevelStatus;
- (_Bool)restrictRSSIWhenScanning;
- (long long)mockGuppyBatteryLevel;
- (long long)mockCoulombCounterTemperature;
- (long long)mockDeviceBatteryLevel;
- (_Bool)gpsEnabled;
- (_Bool)ancsEnabled;
- (_Bool)gateLowEndDevices;
- (_Bool)disableContentDeletion;
- (NSNumber *)newportBurstFrame;
- (_Bool)newportEnableBurst;
- (_Bool)newportEnabled;
- (_Bool)keepAliveInBackground;
- (_Bool)disableProdAuthentication;
- (_Bool)disableEncryption;
- (_Bool)disableBluetooth;
- (_Bool)setupBleNotifications;
@end

