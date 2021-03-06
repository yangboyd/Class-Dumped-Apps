//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TimeoutAsyncOperation.h"

#import "CBPeripheralDelegate-Protocol.h"

@class BluetoothNewDevice, NSData, NSString;

@interface BluetoothWriteCharacteristicOperation : TimeoutAsyncOperation <CBPeripheralDelegate>
{
    NSString *_characteristicUUIDString;
    NSData *_characteristicValue;
    _Bool _shouldEncryptData;
    BluetoothNewDevice *_bluetoothDevice;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldEncryptData; // @synthesize shouldEncryptData=_shouldEncryptData;
@property(readonly, nonatomic) BluetoothNewDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (int)eventType;
- (id)analyticsEventsInContext:(long long)arg1 basedOnAnalyticsEvent:(id)arg2;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)didFinishWithError:(id)arg1;
- (void)cancel;
- (void)start;
- (id)initWithBluetoothDevice:(id)arg1 characteristicUUIDString:(id)arg2 characteristicValue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

