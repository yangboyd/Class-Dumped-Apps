//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CBPeripheral, NSDictionary, NSNumber;
@protocol NLGBluetoothManager;

@protocol NLGBluetoothManagerDelegate
- (void)bluetoothManager:(id <NLGBluetoothManager>)arg1 didDiscoverPeripheral:(CBPeripheral *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;
- (void)bluetoothManagerDidChangeState:(id <NLGBluetoothManager>)arg1;
@end

