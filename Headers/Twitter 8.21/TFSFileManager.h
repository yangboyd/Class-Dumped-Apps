//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFSFileManager : NSObject
{
    NSString *_applicationGroupIdentifier;
}

+ (_Bool)fileExistsAtPath:(id)arg1;
+ (void)triggerLowDiskSpaceNotificationWithRateLimit;
+ (_Bool)parseComponentsOfAbsolutePath:(id)arg1 searchPathDirectory:(out unsigned long long *)arg2 relativePath:(out id *)arg3;
+ (CDStruct_f03de906)totalSizeOfDirectory:(id)arg1;
+ (id)performanceDataDirectory;
+ (id)authorizationRequestLogsDirectory;
+ (id)configurationDirectory;
+ (id)sentinelDirectory;
+ (id)crashlyticsTWCrashDirectory;
+ (id)storedStreamsDirectory;
+ (id)applicationImportantStateDirectory;
+ (id)applicationStateDirectory;
+ (id)scribeCacheDirectory;
+ (id)moviesDirectory;
+ (id)composeAttachmentsDirectory;
+ (id)subDocumentsDirectory:(id)arg1;
+ (id)subCacheDirectory:(id)arg1;
+ (id)libraryDirectory;
+ (id)documentsDirectory;
+ (id)cachesDirectory;
+ (id)directoryForSearchPath:(unsigned long long)arg1;
+ (id)createDirectoryIfNonExistent:(id)arg1;
+ (_Bool)isTooSoonForLowDiskSpaceNotification;
+ (void)setMinimumIntervalBetweenLowDiskSpaceNotifications:(double)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *applicationGroupIdentifier; // @synthesize applicationGroupIdentifier=_applicationGroupIdentifier;
- (id)sharedFailedCompositionsDirectory;
- (id)sharedContainerDirectory;
- (id)sharedScribeFileURL;
- (id)sharedScribeDirectory;
- (id)subSharedContainerDirectory:(id)arg1;
- (id)initWithApplicationGroupIdentifier:(id)arg1;

@end

