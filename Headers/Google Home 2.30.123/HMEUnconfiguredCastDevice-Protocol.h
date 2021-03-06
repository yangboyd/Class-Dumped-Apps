//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BluetoothNewDevice, CastSSIDSuffix, NSString, SetupCastDevice, UIImage;
@protocol HMEUnconfiguredDeviceCapabilities;

@protocol HMEUnconfiguredCastDevice <NSObject>
@property(nonatomic, readonly) BluetoothNewDevice *bluetoothDevice;
@property(nonatomic, readonly) SetupCastDevice *networkDevice;
@property(nonatomic, readonly) id <HMEUnconfiguredDeviceCapabilities> deviceCapabilities;
@property(nonatomic, readonly) CastSSIDSuffix *SSIDSuffix;
@property(nonatomic, readonly) UIImage *smallIconImage;
@property(nonatomic, readonly) NSString *deviceTypeName;
@property(nonatomic, readonly) NSString *friendlyName;
@end

