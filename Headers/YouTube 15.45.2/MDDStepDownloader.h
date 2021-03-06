//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSURLSessionDelegate-Protocol.h>
#import <Module_Framework/NSURLSessionDownloadDelegate-Protocol.h>
#import <Module_Framework/NSURLSessionTaskDelegate-Protocol.h>

@class MDDNotificationHelpers, NSMapTable, NSMutableDictionary, NSString, NSURLSession;
@protocol MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationBundleID><MDDConfigurationInstanceID><MDDConfigurationStorageEnvironment, MDDStepDownloaderDelegate;

@interface MDDStepDownloader : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate>
{
    id <MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationBundleID><MDDConfigurationInstanceID><MDDConfigurationStorageEnvironment> _configuration;
    NSString *_sessionID;
    NSMapTable *_URLToTaskMap;
    NSURLSession *_downloadSession;
    MDDNotificationHelpers *_notificationHelpers;
    id <MDDStepDownloaderDelegate> _delegate;
    NSMutableDictionary *_contextDictionary;
}

+ (id)downloaderWithDelegate:(id)arg1 configuration:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(readonly, nonatomic) NSMutableDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;
@property(readonly, nonatomic) __weak id <MDDStepDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)cancelAllTasksWithResumeData;
- (void)cancelTask:(id)arg1 synchronously:(_Bool)arg2;
- (void)cancelTaskWithResumeDataForURL:(id)arg1;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (id)retrieveAndRemoveContextForURL:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfRunningDownloads;
- (_Bool)loadContextDictionaryFromDisk;
- (_Bool)downloadFileGroupFile:(id)arg1 fileGroup:(id)arg2 fileGroupName:(id)arg3;
- (void)unsafeWriteContext;
- (void)setUpSession;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

