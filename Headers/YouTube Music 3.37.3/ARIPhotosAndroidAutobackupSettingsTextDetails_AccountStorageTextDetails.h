//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIAndroidGeneralComplexTextDetails, ARIAndroidTextDetails;

@interface ARIPhotosAndroidAutobackupSettingsTextDetails_AccountStorageTextDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARIAndroidTextDetails *accountStorageTitleText; // @dynamic accountStorageTitleText;
@property(nonatomic) _Bool hasAccountStorageTitleText; // @dynamic hasAccountStorageTitleText;
@property(nonatomic) _Bool hasStorageQuota; // @dynamic hasStorageQuota;
@property(nonatomic) _Bool hasStorageUsage; // @dynamic hasStorageUsage;
@property(retain, nonatomic) ARIAndroidGeneralComplexTextDetails *storageQuota; // @dynamic storageQuota;
@property(retain, nonatomic) ARIAndroidGeneralComplexTextDetails *storageUsage; // @dynamic storageUsage;

@end

