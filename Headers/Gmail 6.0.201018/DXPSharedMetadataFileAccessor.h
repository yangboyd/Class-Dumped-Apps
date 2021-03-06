//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DXPSharedMetadataAccessor-Protocol.h"

@class NSFileCoordinator, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface DXPSharedMetadataFileAccessor : NSObject <DXPSharedMetadataAccessor>
{
    _Bool _didCreateBaseDirectory;
    NSURL *_baseURL;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
    NSFileCoordinator *_fileCoordinator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue; // @synthesize serialWorkQueue=_serialWorkQueue;
@property(nonatomic) _Bool didCreateBaseDirectory; // @synthesize didCreateBaseDirectory=_didCreateBaseDirectory;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)metadataAtURL:(id)arg1;
- (id)contentsAtURL:(id)arg1 needsDirectory:(_Bool)arg2 error:(out id *)arg3;
- (void)seriallyDo:(CDUnknownBlockType)arg1;
- (void)removeSharedMetadataWithCondition:(CDUnknownBlockType)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)writeSharedMetadata:(id)arg1 hasherVersion:(id)arg2 digest:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)readSharedMetadataWithHasherVersion:(id)arg1 digest:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getHasherVersionsWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRootURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

