//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <drive_extension_framework/GDKUploadInfoProvider-Protocol.h>
#import <drive_extension_framework/GDKUploadService-Protocol.h>
#import <drive_extension_framework/NSCoding-Protocol.h>

@class GDKBackendInstance, GDKStorageService, GTMSessionFetcherService, GTMSessionUploadFetcher, NSMutableArray, NSString, NSTimer;
@protocol GDKUploadServiceStorageDelegate, OS_dispatch_group, OS_dispatch_queue, SSOIdentity;

@interface GDKUploadService : NSObject <GDKUploadInfoProvider, GDKUploadService, NSCoding>
{
    _Bool _enableStorageCallback;
    id <GDKUploadServiceStorageDelegate> _storageDelegate;
    id <SSOIdentity> _ssoIdentity;
    NSMutableArray *_uploadQueue;
    NSObject<OS_dispatch_queue> *_uploadDispatchQueue;
    NSObject<OS_dispatch_group> *_uploadDispatchGroup;
    NSString *_stateFilePath;
    GTMSessionFetcherService *_sessionFetcherService;
    GTMSessionUploadFetcher *_currentFetcher;
    GDKBackendInstance *_backendInstance;
    unsigned long long _backgroundTaskID;
    long long _currentUploadIndex;
    GDKStorageService *_storageService;
    NSTimer *_stalledUploadTimer;
}

@property _Bool enableStorageCallback; // @synthesize enableStorageCallback=_enableStorageCallback;
@property(retain, nonatomic) NSTimer *stalledUploadTimer; // @synthesize stalledUploadTimer=_stalledUploadTimer;
@property(readonly, nonatomic) GDKStorageService *storageService; // @synthesize storageService=_storageService;
@property(nonatomic) long long currentUploadIndex; // @synthesize currentUploadIndex=_currentUploadIndex;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property(readonly, nonatomic) GDKBackendInstance *backendInstance; // @synthesize backendInstance=_backendInstance;
@property(retain, nonatomic) GTMSessionUploadFetcher *currentFetcher; // @synthesize currentFetcher=_currentFetcher;
@property(retain, nonatomic) GTMSessionFetcherService *sessionFetcherService; // @synthesize sessionFetcherService=_sessionFetcherService;
@property(retain, nonatomic) NSString *stateFilePath; // @synthesize stateFilePath=_stateFilePath;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *uploadDispatchGroup; // @synthesize uploadDispatchGroup=_uploadDispatchGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *uploadDispatchQueue; // @synthesize uploadDispatchQueue=_uploadDispatchQueue;
@property(retain, nonatomic) NSMutableArray *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(retain, nonatomic) id <SSOIdentity> ssoIdentity; // @synthesize ssoIdentity=_ssoIdentity;
@property(nonatomic) __weak id <GDKUploadServiceStorageDelegate> storageDelegate; // @synthesize storageDelegate=_storageDelegate;
- (void).cxx_destruct;
- (id)standardUploadFileFromFileURL:(id)arg1;
- (void)stalledTimerDidFire:(id)arg1;
- (id)userID;
- (float)totalUploadProgressWithCurrentBytesSent:(long long)arg1;
- (void)notify:(id)arg1 userInfo:(id)arg2;
- (void)fetcherUploadLocationObtained:(id)arg1;
- (id)uploadFetcherForUpload:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)allUploads:(id)arg1 didCompleteToParentFolder:(id)arg2;
- (void)cleanupStuckUploads;
- (void)resetQueueIfNecessary;
- (id)uniqueTemporaryLocalPath;
- (id)saveImage:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)uploadItemForVideoURL:(id)arg1 toFolder:(id)arg2 title:(id)arg3;
- (id)uploadItemForVideoURL:(id)arg1 toFolder:(id)arg2;
- (void)checkAvailableStorage:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)waitUntilReady;
- (void)cleanupUpload:(id)arg1;
- (void)finishUpload:(id)arg1 withError:(id)arg2;
- (void)uploadCompleted:(id)arg1 withResponse:(id)arg2;
- (unsigned long long)nextUploadIndex;
- (void)startNextUpload;
- (void)failUpload:(id)arg1;
- (void)enqueueUploads:(id)arg1;
- (void)loadState;
- (void)saveStateIfNecessary;
- (id)queuedUploads;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)shutdown;
- (id)currentUpload;
- (id)itemsUploadingInFolders:(id)arg1;
- (id)itemsUploadingInFolder:(id)arg1;
- (void)cancelUpload:(id)arg1;
- (void)uploadVideoURL:(id)arg1 toFolder:(id)arg2 title:(id)arg3;
- (void)uploadVideoURL:(id)arg1 toFolder:(id)arg2;
- (id)uploadFileURL:(id)arg1 toExistingFile:(id)arg2;
- (id)uploadRevisionForFile:(id)arg1 localContentURL:(id)arg2 title:(id)arg3 localMIMEType:(id)arg4;
- (id)uploadFileURL:(id)arg1 stableIdentifier:(id)arg2 toFolder:(id)arg3 title:(id)arg4 convertToDocs:(_Bool)arg5;
- (id)uploadFileURL:(id)arg1 toFolder:(id)arg2 title:(id)arg3 convertToDocs:(_Bool)arg4;
- (id)uploadFileURL:(id)arg1 toFolder:(id)arg2;
@property(readonly, nonatomic) unsigned long long queueCount;
@property(readonly, copy) NSString *description;
- (id)initWithSessionFetcherService:(id)arg1 storageService:(id)arg2 backendInstance:(id)arg3 ssoIdentity:(id)arg4 stateFilePath:(id)arg5;
- (id)initWithSessionFetcherService:(id)arg1 backendInstance:(id)arg2 ssoIdentity:(id)arg3 stateFilePath:(id)arg4;
- (id)initWithSessionFetcherService:(id)arg1 backendInstance:(id)arg2 ssoIdentity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

