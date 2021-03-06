//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TimeoutAsyncOperation.h"

@class BluetoothNewDevice, CBPeripheral;
@protocol BluetoothDeviceScanner;

@interface BluetoothConnectAsyncOperation : TimeoutAsyncOperation
{
    id <BluetoothDeviceScanner> _scanner;
    CBPeripheral *_registeredPeripheral;
    unsigned long long _retryCount;
    BluetoothNewDevice *_bluetoothDevice;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BluetoothNewDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (id)analyticsEventsInContext:(long long)arg1 basedOnAnalyticsEvent:(id)arg2;
- (void)didFinishWithError:(id)arg1;
- (void)cancel;
- (void)tryConnection;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisterObserver;
- (void)registerObserver;
- (void)dealloc;
- (id)initWithBluetoothDevice:(id)arg1 scanner:(id)arg2;

@end

