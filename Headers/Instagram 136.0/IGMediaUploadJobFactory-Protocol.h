//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBMediaUploadConfig, FBMediaUploadContentSource, NSObject, NSString;
@protocol FBMediaUploadJob, FBMediaUploadListener, IGNetworking, OS_dispatch_queue;

@protocol IGMediaUploadJobFactory
- (id <FBMediaUploadJob>)newUploadJobWithContentSource:(FBMediaUploadContentSource *)arg1 config:(FBMediaUploadConfig *)arg2 token:(NSString *)arg3 listener:(id <FBMediaUploadListener>)arg4 networkDispatcher:(id <IGNetworking>)arg5 queue:(NSObject<OS_dispatch_queue> *)arg6;
@end

