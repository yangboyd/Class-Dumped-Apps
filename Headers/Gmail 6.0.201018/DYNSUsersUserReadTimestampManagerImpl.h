//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUsersAbstractUserReadTimestampManagerImpl.h"

@class JavaIoFile, XPTExecutionGuard;
@protocol DYNSAnalyticsStopwatchFactory;

@interface DYNSUsersUserReadTimestampManagerImpl : DYNSUsersAbstractUserReadTimestampManagerImpl
{
    XPTExecutionGuard *loadFileGuard_;
    JavaIoFile *readTimestampsProtoFile_;
    JavaIoFile *readTimestampsProtoFileTmp_;
    id <DYNSAnalyticsStopwatchFactory> stopwatchFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (void)flushToDiskInternal;
- (id)load__;
- (void)flushToDisk;

@end

