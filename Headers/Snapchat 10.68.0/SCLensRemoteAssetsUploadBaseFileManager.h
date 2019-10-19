//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensRemoteAssetsUploadFileManager-Protocol.h"

@class NSFileManager, NSLock, NSMutableSet, NSString;
@protocol SCPerforming;

@interface SCLensRemoteAssetsUploadBaseFileManager : NSObject <SCLensRemoteAssetsUploadFileManager>
{
    NSFileManager *_fileManager;
    NSMutableSet *_uploadAssetsInfo;
    NSLock *_uploadAssetInfoLock;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSLock *uploadAssetInfoLock; // @synthesize uploadAssetInfoLock=_uploadAssetInfoLock;
@property(retain, nonatomic) NSMutableSet *uploadAssetsInfo; // @synthesize uploadAssetsInfo=_uploadAssetsInfo;
- (void).cxx_destruct;
- (void)removeResourcesForAssetWithInfo:(id)arg1;
- (_Bool)assetExistsWithInfo:(id)arg1;
- (void)finishedUploadingToLensAssetSystemAssetWithInfo:(id)arg1;
- (void)enqueueUploadTaskWithAssetInfo:(id)arg1;
- (id)initWithFileManager:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

