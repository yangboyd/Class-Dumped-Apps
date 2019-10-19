//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRWFileManager, GTMLogger, NSDateFormatter, NSFileCoordinator, NSMutableArray;
@protocol OS_dispatch_queue;

@interface GRWLogger : NSObject
{
    GTMLogger *_gtmLogger;
    NSMutableArray *_logArray;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSFileCoordinator *_fileCoordinator;
    GRWFileManager *_fileManager;
    NSDateFormatter *_dateFormatter;
}

+ (void)purgeTemporaryAppLogs;
+ (id)appLogsFileUrls;
+ (id)currentAppLogFileUrl;
+ (void)purgeAllAppLogs;
+ (void)purgeCurrentAppLogs;
+ (void)setLoggingEnabled:(_Bool)arg1;
+ (void)logFunc:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 string:(id)arg4;
+ (void)log:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) GRWFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableArray *logArray; // @synthesize logArray=_logArray;
@property(retain, nonatomic) GTMLogger *gtmLogger; // @synthesize gtmLogger=_gtmLogger;
- (void).cxx_destruct;
- (void)handleAppStateChangeNotification:(id)arg1;
- (id)copyFilesToTempDirectory:(id)arg1;
- (id)filesForBundleIdentifier:(id)arg1;
- (id)logUrlForCurrentApp;
- (void)removeExpiredLogFiles;
- (void)purgeLogFileAtUrl:(id)arg1;
- (void)purgeAllAppLogs;
- (void)purgeCurrentAppLogs;
- (void)saveLogsToDisk;
- (void)appendLogString:(id)arg1;
- (void)registerNotifications;
- (id)init;

@end

