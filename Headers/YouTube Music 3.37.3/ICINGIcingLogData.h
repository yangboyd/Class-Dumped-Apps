//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ICINGIcingLogError, ICINGIndexApiStats, ICINGMddApiCallStats, ICINGMddFileExpirationLog, ICINGMdhCallCredentialsStats, ICINGMdhFetchChannelConfigsStats, ICINGMdhStorageStats, ICINGMdhSyncStats, NSString;

@interface ICINGIcingLogData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHostPackageName; // @dynamic hasHostPackageName;
@property(nonatomic) _Bool hasIndexApiStats; // @dynamic hasIndexApiStats;
@property(nonatomic) _Bool hasLogError; // @dynamic hasLogError;
@property(nonatomic) _Bool hasMddApiCallStats; // @dynamic hasMddApiCallStats;
@property(nonatomic) _Bool hasMddFileExpirationLog; // @dynamic hasMddFileExpirationLog;
@property(nonatomic) _Bool hasMdhCallCredentialsStats; // @dynamic hasMdhCallCredentialsStats;
@property(nonatomic) _Bool hasMdhFetchChannelConfigsStats; // @dynamic hasMdhFetchChannelConfigsStats;
@property(nonatomic) _Bool hasMdhStorageStats; // @dynamic hasMdhStorageStats;
@property(nonatomic) _Bool hasMdhSyncStats; // @dynamic hasMdhSyncStats;
@property(nonatomic) _Bool hasModuleVersion; // @dynamic hasModuleVersion;
@property(nonatomic) _Bool hasSamplingInterval; // @dynamic hasSamplingInterval;
@property(copy, nonatomic) NSString *hostPackageName; // @dynamic hostPackageName;
@property(retain, nonatomic) ICINGIndexApiStats *indexApiStats; // @dynamic indexApiStats;
@property(retain, nonatomic) ICINGIcingLogError *logError; // @dynamic logError;
@property(retain, nonatomic) ICINGMddApiCallStats *mddApiCallStats; // @dynamic mddApiCallStats;
@property(retain, nonatomic) ICINGMddFileExpirationLog *mddFileExpirationLog; // @dynamic mddFileExpirationLog;
@property(retain, nonatomic) ICINGMdhCallCredentialsStats *mdhCallCredentialsStats; // @dynamic mdhCallCredentialsStats;
@property(retain, nonatomic) ICINGMdhFetchChannelConfigsStats *mdhFetchChannelConfigsStats; // @dynamic mdhFetchChannelConfigsStats;
@property(retain, nonatomic) ICINGMdhStorageStats *mdhStorageStats; // @dynamic mdhStorageStats;
@property(retain, nonatomic) ICINGMdhSyncStats *mdhSyncStats; // @dynamic mdhSyncStats;
@property(nonatomic) int moduleVersion; // @dynamic moduleVersion;
@property(nonatomic) long long samplingInterval; // @dynamic samplingInterval;

@end

