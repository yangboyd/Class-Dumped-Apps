//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol GDKFile, OS_dispatch_queue;

@protocol GDKWorkspacesProvider <NSObject>
- (void)deleteWorkspaceWithID:(NSString *)arg1 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSError *))arg3;
- (void)createWorkspaceWithTitle:(NSString *)arg1 withToken:(NSString *)arg2 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(id <GDKWorkspace>, NSError *))arg4;
- (void)unarchiveWorkspace:(NSString *)arg1 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(id <GDKWorkspace>, NSError *))arg3;
- (void)archiveWorkspace:(NSString *)arg1 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(id <GDKWorkspace>, NSError *))arg3;
- (void)renameWorkspace:(NSString *)arg1 toTitle:(NSString *)arg2 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(id <GDKWorkspace>, NSError *))arg4;
- (void)removeFile:(id <GDKFile>)arg1 fromWorkspace:(NSString *)arg2 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(id <GDKFile>, NSError *))arg4;
- (void)addFile:(id <GDKFile>)arg1 toWorkspace:(NSString *)arg2 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(id <GDKFile>, NSError *))arg4;
- (void)fetchFilesForWorkspace:(NSString *)arg1 forceServerRequest:(_Bool)arg2 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)listWorkspacesWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

