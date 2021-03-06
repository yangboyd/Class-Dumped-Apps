//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBQueuedUploadAnalyticsLoggerProtocol-Protocol.h"

@class DBDocscannerAnalyticsLogger, DBQueuedUploadFileAnalyticsLogger, NSString;

@interface DBQueuedUploadFileAndScansAnalyticsLogger : NSObject <DBQueuedUploadAnalyticsLoggerProtocol>
{
    DBQueuedUploadFileAnalyticsLogger *_fileUploadAnalyticsLogger;
    DBDocscannerAnalyticsLogger *_docscannerAnalyticsLogger;
}

- (void).cxx_destruct;
- (void)logDeletedOrphanedSourceFileCount:(unsigned long long)arg1;
- (void)logUploadQueueInitializedWithTotalUploadCount:(unsigned long long)arg1 highPriorityUploadCount:(unsigned long long)arg2 normalPriorityUploadCount:(unsigned long long)arg3 lowPriorityUploadCount:(unsigned long long)arg4 suspendedUploadCount:(unsigned long long)arg5 crossProcessUploadCount:(unsigned long long)arg6;
- (void)logUploadPreparingFailureWithUploadUID:(unsigned long long)arg1 dataLoader:(id)arg2 prepareError:(id)arg3;
- (void)logUploadPreparingSuccessWithUploadUID:(unsigned long long)arg1 dataLoader:(id)arg2 sourceFileSize:(unsigned long long)arg3;
- (void)logUploadFailedWithQueuedUpload:(id)arg1 failureError:(id)arg2;
- (void)logUploadStartedWithQueuedUpload:(id)arg1;
- (void)logUploadProgressWithQueuedUpload:(id)arg1;
- (void)logUploadSuccessWithQueuedUpload:(id)arg1 withMetadata:(id)arg2 completionDate:(id)arg3;
- (id)initWithUserID:(id)arg1 uploadManagerConfigType:(unsigned long long)arg2 analyticsLogger:(id)arg3 appStateDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

