//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDPSTLQueue;
@protocol OS_dispatch_semaphore;

@interface BDPOfflineZipManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_localConfigLock;
    NSObject<OS_dispatch_semaphore> *_offlineZipLock;
    BDPSTLQueue *_groupQueue;
}

+ (id)shareManager;
@property(retain, nonatomic) BDPSTLQueue *groupQueue; // @synthesize groupQueue=_groupQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *offlineZipLock; // @synthesize offlineZipLock=_offlineZipLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *localConfigLock; // @synthesize localConfigLock=_localConfigLock;
- (void).cxx_destruct;
- (id)_getUpdateConfigInOffline;
- (void)_updateLocalConfigWithPackage:(id)arg1;
- (id)_localOfflinePackages;
- (id)_getLocalOfflineConfig;
- (_Bool)_decodeSource:(id)arg1 toPath:(id)arg2;
- (void)_copyBundleOfflineZipToDestination;
- (void)_triggerDownloadTaskIfNeed;
- (void)_updateResourceWithPackageNames:(id)arg1 updateAllPackages:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installOfflinePackageIfNeed;
- (void)setupDefaultOfflineZipIfNeed;
- (id)syncGetDataForPath:(id)arg1;
- (void)asyncGetDataForPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasCacheWithPath:(id)arg1;
- (void)asynUpdateResourceWithPackageNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateResourceWithPackageNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asynUpdateResourceWithPackageName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateResourceWithPackageName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asynUpdateResourcesIfNeed:(CDUnknownBlockType)arg1;
- (void)updateResourcesIfNeed:(CDUnknownBlockType)arg1;

@end

