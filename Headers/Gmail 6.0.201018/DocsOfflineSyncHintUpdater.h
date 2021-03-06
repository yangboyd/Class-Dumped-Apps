//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DocsOfflineSyncHintUpdater-Protocol.h"

@class DocsOfflineUserDataManager, NSFileCoordinator, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface DocsOfflineSyncHintUpdater : NSObject <DocsOfflineSyncHintUpdater>
{
    NSString *_applicationBundleID;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
    NSFileCoordinator *_fileCoordinator;
    NSURL *_appGroupDirectory;
    DocsOfflineUserDataManager *_userDataManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DocsOfflineUserDataManager *userDataManager; // @synthesize userDataManager=_userDataManager;
@property(retain, nonatomic) NSURL *appGroupDirectory; // @synthesize appGroupDirectory=_appGroupDirectory;
- (id)docsOfflineDirectoryURL;
- (_Bool)createDirectoryIfMissing:(id)arg1 error:(id *)arg2;
- (id)initializeSharedStorageWithError:(id *)arg1;
- (void)clearStorageWithError:(id *)arg1;
- (void)clearSyncHintsForUserID:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateSyncHints:(id)arg1 userID:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setUpAccountListMonitoring;
- (id)initWithApplicationBundleID:(id)arg1 ssoService:(id)arg2;

@end

