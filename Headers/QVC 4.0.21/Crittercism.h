//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Crittercism : NSObject
{
}

+ (void)logExit;
+ (void)logAbort;
+ (unsigned long long)maxOfflineCrashReports;
+ (void)setMaxOfflineCrashReports:(unsigned long long)arg1;
+ (void)setValue:(int)arg1 forTransaction:(id)arg2;
+ (int)valueForTransaction:(id)arg1;
+ (void)failTransaction:(id)arg1;
+ (void)endTransaction:(id)arg1;
+ (void)cancelTransaction:(id)arg1;
+ (void)beginTransaction:(id)arg1 withValue:(int)arg2;
+ (void)beginTransaction:(id)arg1;
+ (void)enableWithAppID:(id)arg1 andDelegate:(id)arg2 andURLFilters:(id)arg3 disableInstrumentation:(_Bool)arg4;
+ (void)enableWithAppID:(id)arg1 andURLFilters:(id)arg2;
+ (void)enableWithAppID:(id)arg1 andDelegate:(id)arg2 andURLFilters:(id)arg3;
+ (void)enableWithAppID:(id)arg1 andDelegate:(id)arg2;
+ (void)enableWithAppID:(id)arg1;
+ (void)setValue:(int)arg1 forUserflow:(id)arg2;
+ (int)valueForUserflow:(id)arg1;
+ (void)failUserflow:(id)arg1;
+ (void)endUserflow:(id)arg1;
+ (void)cancelUserflow:(id)arg1;
+ (void)beginUserflow:(id)arg1 withValue:(int)arg2;
+ (void)beginUserflow:(id)arg1;
+ (void)logExternalErrorWithName:(id)arg1 reason:(id)arg2 stacktrace:(id)arg3 platformType:(unsigned long long)arg4 errorType:(unsigned long long)arg5;
+ (long long)loggingLevel;
+ (void)setLoggingLevel:(long long)arg1;
+ (void)sendAppLoadData;
+ (_Bool)didCrashOnLastLoad;
+ (void)setDelegate:(id)arg1;
+ (id)delegate;
+ (void)updateLocationToLatitude:(double)arg1 longitude:(double)arg2;
+ (void)updateLocation:(id)arg1;
+ (void)addFilter:(id)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (void)setUsername:(id)arg1;
+ (id)getUserUUID;
+ (void)leaveBreadcrumb:(id)arg1;
+ (_Bool)logNetworkRequest:(id)arg1 urlString:(id)arg2 latency:(double)arg3 bytesRead:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 responseCode:(long long)arg6 error:(id)arg7;
+ (_Bool)logNetworkRequest:(id)arg1 url:(id)arg2 latency:(double)arg3 bytesRead:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 responseCode:(long long)arg6 error:(id)arg7;
+ (_Bool)logError:(id)arg1 stacktrace:(id)arg2;
+ (_Bool)logError:(id)arg1;
+ (_Bool)logHandledException:(id)arg1;
+ (_Bool)getOptOutStatus;
+ (void)setOptOutStatus:(_Bool)arg1;
+ (void)setAsyncBreadcrumbMode:(_Bool)arg1;
+ (void)enableWithAppID:(id)arg1 andConfig:(id)arg2;
+ (id)sharedCritter;

@end

