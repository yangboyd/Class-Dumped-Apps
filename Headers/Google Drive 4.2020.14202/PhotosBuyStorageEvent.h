//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosBuyStorageEvent_ErrorInfo, PhotosBuyStorageEvent_IosBuyStorageLifecycleEvent;

@interface PhotosBuyStorageEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int buyStorageState; // @dynamic buyStorageState;
@property(nonatomic) int deviceStoragePolicy; // @dynamic deviceStoragePolicy;
@property(retain, nonatomic) PhotosBuyStorageEvent_ErrorInfo *errorInfo; // @dynamic errorInfo;
@property(nonatomic) _Bool hasBuyStorageState; // @dynamic hasBuyStorageState;
@property(nonatomic) _Bool hasDeviceStoragePolicy; // @dynamic hasDeviceStoragePolicy;
@property(nonatomic) _Bool hasErrorInfo; // @dynamic hasErrorInfo;
@property(nonatomic) _Bool hasIosBuyStorageLifecycle; // @dynamic hasIosBuyStorageLifecycle;
@property(nonatomic) _Bool hasQuotaBytes; // @dynamic hasQuotaBytes;
@property(nonatomic) _Bool hasSkuId; // @dynamic hasSkuId;
@property(nonatomic) _Bool hasStoragePurchaseTimestampMs; // @dynamic hasStoragePurchaseTimestampMs;
@property(retain, nonatomic) PhotosBuyStorageEvent_IosBuyStorageLifecycleEvent *iosBuyStorageLifecycle; // @dynamic iosBuyStorageLifecycle;
@property(nonatomic) long long quotaBytes; // @dynamic quotaBytes;
@property(copy, nonatomic) NSString *skuId; // @dynamic skuId;
@property(nonatomic) unsigned long long storagePurchaseTimestampMs; // @dynamic storagePurchaseTimestampMs;

@end

