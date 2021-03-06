//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPeripheralDelegate-Protocol.h"

@class CBUUID, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface NLWeaveBleDelegate : NSObject <CBPeripheralDelegate>
{
    struct BleDelegateTrampoline *_mTrampoline;
    NSObject<OS_dispatch_queue> *_mCbWorkQueue;
    NSMapTable *_mMapFromPeripheralToDm;
    CBUUID *_mWeaveServiceUUID;
    struct BleLayer *_mBleLayer;
}

+ (void)fillServiceWithCharacteristicUuids:(id)arg1 svcId:(CDStruct_60067b7e *)arg2 charId:(CDStruct_60067b7e *)arg3;
+ (id)GetShortestServiceUUID:(const CDStruct_60067b7e *)arg1;
- (void).cxx_destruct;
- (void)NotifyWeaveConnectionClosed:(id)arg1;
- (_Bool)SendReadResponse:(id)arg1 requestContext:(id)arg2 serivce:(id)arg3 characteristic:(id)arg4;
- (_Bool)SendReadRequest:(id)arg1 serivce:(id)arg2 characteristic:(id)arg3 data:(id)arg4;
- (_Bool)SendWriteRequest:(id)arg1 serivce:(id)arg2 characteristic:(id)arg3 data:(id)arg4;
- (_Bool)SendIndication:(id)arg1 serivce:(id)arg2 characteristic:(id)arg3 data:(id)arg4;
- (unsigned short)GetMTU:(id)arg1;
- (_Bool)CloseConnection:(id)arg1;
- (_Bool)UnsubscribeCharacteristic:(id)arg1 serivce:(id)arg2 characteristic:(id)arg3;
- (_Bool)SubscribeCharacteristic:(id)arg1 serivce:(id)arg2 characteristic:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)notifyBleDisconnected:(id)arg1;
- (void)forceBleDisconnect_Sync:(id)arg1;
- (_Bool)isPeripheralValid:(id)arg1;
- (void)prepareNewBleConnection:(id)arg1;
- (void)SetBleLayer:(struct BleLayer *)arg1;
- (struct BleApplicationDelegate *)GetApplicationDelegate;
- (struct BlePlatformDelegate *)GetPlatformDelegate;
- (void)dealloc;
- (id)init:(id)arg1;
- (id)initDummyDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

