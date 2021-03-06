//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreBluetooth/CBCentralManager.h>

@class NSLock, NSMapTable;

@interface NLGCentralManager : CBCentralManager
{
    NSMapTable *_contextToScanningUUIDsMap;
    NSLock *_modificationLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *modificationLock; // @synthesize modificationLock=_modificationLock;
@property(retain, nonatomic) NSMapTable *contextToScanningUUIDsMap; // @synthesize contextToScanningUUIDsMap=_contextToScanningUUIDsMap;
- (void)dealloc;
- (id)allUUIDSBeingScannedFor;
- (void)stopScan;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)stopScanWithContext:(void *)arg1;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2 context:(void *)arg3;

@end

