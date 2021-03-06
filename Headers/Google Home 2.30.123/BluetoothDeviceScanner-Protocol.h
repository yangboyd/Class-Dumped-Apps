//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BluetoothNewDevice, NSArray;
@protocol AnalyticsLogger, BluetoothNewDeviceScannerListener, SetupDeviceScanner;

@protocol BluetoothDeviceScanner <NSObject>
- (void)deviceDidCompleteSetup:(BluetoothNewDevice *)arg1;
- (void)stopScan;
- (void)scanAgain;
- (void)disconnectDevice:(BluetoothNewDevice *)arg1;
- (void)connectDevice:(BluetoothNewDevice *)arg1;
- (void)removeListener:(id <BluetoothNewDeviceScannerListener>)arg1;
- (void)addListener:(id <BluetoothNewDeviceScannerListener>)arg1;
- (void)setAnalyticsLogger:(id <AnalyticsLogger>)arg1;
@property(nonatomic, readonly) long long bluetoothAvailability;
@property(nonatomic) __weak id <SetupDeviceScanner> setupDeviceScanner;
@property(nonatomic, readonly) NSArray *devices;
@property(nonatomic, copy) NSArray *setupServiceUUIDs;
@end

