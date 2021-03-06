//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAnalyticsConfiguration-Protocol.h>

@class NSString;

@interface IGAnalyticsGenericConfiguration : NSObject <IGAnalyticsConfiguration>
{
    NSString *_key;
    NSString *_clientToken;
    NSString *_appID;
    NSString *_deviceID;
    NSString *_userID;
    _Bool _useSharedContainer;
    _Bool _multiBatchEnabled;
    _Bool _pigeonSessionFixEnabled;
}

- (void).cxx_destruct;
- (id)fbAnalyticsCoreLoggerExperimentValues;
- (_Bool)fbAnalyticsCoreEnabled;
- (_Bool)synchronousWritesDisabled;
- (id)dynoStatsTags;
- (long long)dropLargeEventsThreshold;
- (_Bool)dropLargeEventsEnabled;
- (long long)maxMultiBatchFileSize;
- (_Bool)multiBatchEnabled;
- (_Bool)microBatchDebouncingEnabled;
- (_Bool)microBatchingEnabled;
- (_Bool)sqliteBatchTransactionsEnabled;
- (_Bool)sqlitePersistenceEnabled;
- (_Bool)httpBodyCompressionEnabled;
- (_Bool)compressionEnabled;
- (long long)retryDelayTimeInSeconds;
- (_Bool)pigeonSessionFixEnabled;
- (_Bool)waitForTasksToCompleteOnTermination;
- (_Bool)stripNonJSON;
- (_Bool)uploadLogsAfterCleanup;
- (long long)periodicUploadInterval;
- (_Bool)retryUploadIndefinitelyForCertainErrors;
- (_Bool)useSharedContainer;
- (float)postCleanupRetentionRatio;
- (long long)maxNumberOfRetries;
- (long long)maxNumberOfLogFiles;
- (long long)logFileBatchSize;
- (id)userID;
- (id)deviceID;
- (id)appID;
- (id)clientToken;
- (id)key;
- (id)initWithKey:(id)arg1 clientToken:(id)arg2 appID:(id)arg3 deviceID:(id)arg4 userID:(id)arg5 useSharedContainer:(_Bool)arg6 multiBatchEnabled:(_Bool)arg7 pigeonSessionFixEnabled:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

