//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARITwoStateSettingValue;

@interface ARIAndroidBackupSettingChangeEventDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARITwoStateSettingValue *backupEnabled; // @dynamic backupEnabled;
@property(nonatomic) _Bool backupEncryptionEnabled; // @dynamic backupEncryptionEnabled;
@property(retain, nonatomic) ARITwoStateSettingValue *backupOverCellularData; // @dynamic backupOverCellularData;
@property(nonatomic) _Bool callLogBackupEnabled; // @dynamic callLogBackupEnabled;
@property(nonatomic) _Bool fullDataBackupAware; // @dynamic fullDataBackupAware;
@property(nonatomic) _Bool hasBackupEnabled; // @dynamic hasBackupEnabled;
@property(nonatomic) _Bool hasBackupEncryptionEnabled; // @dynamic hasBackupEncryptionEnabled;
@property(nonatomic) _Bool hasBackupOverCellularData; // @dynamic hasBackupOverCellularData;
@property(nonatomic) _Bool hasCallLogBackupEnabled; // @dynamic hasCallLogBackupEnabled;
@property(nonatomic) _Bool hasFullDataBackupAware; // @dynamic hasFullDataBackupAware;
@property(nonatomic) _Bool hasPhotosBackupAvailable; // @dynamic hasPhotosBackupAvailable;
@property(nonatomic) _Bool hasTelephonyBackupEnabled; // @dynamic hasTelephonyBackupEnabled;
@property(nonatomic) _Bool photosBackupAvailable; // @dynamic photosBackupAvailable;
@property(nonatomic) _Bool telephonyBackupEnabled; // @dynamic telephonyBackupEnabled;

@end

