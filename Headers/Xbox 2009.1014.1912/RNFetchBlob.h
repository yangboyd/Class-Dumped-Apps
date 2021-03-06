//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"

@class NSString, RCTBridge, UIDocumentInteractionController;
@protocol OS_dispatch_queue;

@interface RNFetchBlob : NSObject <RCTBridgeModule, UIDocumentInteractionControllerDelegate>
{
    NSString *filePathPrefix;
    UIDocumentInteractionController *documentController;
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__64733;
+ (const struct RCTMethodInfo *)__rct_export__63432;
+ (const struct RCTMethodInfo *)__rct_export__62031;
+ (const struct RCTMethodInfo *)__rct_export__59730;
+ (const struct RCTMethodInfo *)__rct_export__57629;
+ (const struct RCTMethodInfo *)__rct_export__57128;
+ (const struct RCTMethodInfo *)__rct_export__56427;
+ (const struct RCTMethodInfo *)__rct_export__55626;
+ (const struct RCTMethodInfo *)__rct_export__54925;
+ (const struct RCTMethodInfo *)__rct_export__53924;
+ (const struct RCTMethodInfo *)__rct_export__52423;
+ (const struct RCTMethodInfo *)__rct_export__51822;
+ (const struct RCTMethodInfo *)__rct_export__49721;
+ (const struct RCTMethodInfo *)__rct_export__48820;
+ (const struct RCTMethodInfo *)__rct_export__47519;
+ (const struct RCTMethodInfo *)__rct_export__45018;
+ (const struct RCTMethodInfo *)__rct_export__41517;
+ (const struct RCTMethodInfo *)__rct_export__37516;
+ (const struct RCTMethodInfo *)__rct_export__35315;
+ (const struct RCTMethodInfo *)__rct_export__33614;
+ (const struct RCTMethodInfo *)__rct_export__32413;
+ (const struct RCTMethodInfo *)__rct_export__31612;
+ (const struct RCTMethodInfo *)__rct_export__30811;
+ (const struct RCTMethodInfo *)__rct_export__29310;
+ (const struct RCTMethodInfo *)__rct_export__2669;
+ (const struct RCTMethodInfo *)__rct_export__2608;
+ (const struct RCTMethodInfo *)__rct_export__2547;
+ (const struct RCTMethodInfo *)__rct_export__2496;
+ (const struct RCTMethodInfo *)__rct_export__2375;
+ (const struct RCTMethodInfo *)__rct_export__2254;
+ (const struct RCTMethodInfo *)__rct_export__1953;
+ (const struct RCTMethodInfo *)__rct_export__1592;
+ (const struct RCTMethodInfo *)__rct_export__1261;
+ (const struct RCTMethodInfo *)__rct_export__890;
+ (void)load;
+ (id)moduleName;
+ (_Bool)requiresMainQueueSetup;
+ (id)getRCTBridge;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(retain) UIDocumentInteractionController *documentController; // @synthesize documentController;
@property(retain, nonatomic) NSString *filePathPrefix; // @synthesize filePathPrefix;
- (void).cxx_destruct;
- (void)emitExpiredEvent:(CDUnknownBlockType)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)df:(CDUnknownBlockType)arg1;
- (void)excludeFromBackupKey:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)openDocument:(id)arg1 scheme:(id)arg2 resolver:(CDUnknownBlockType)arg3 rejecter:(CDUnknownBlockType)arg4;
- (void)previewDocument:(id)arg1 scheme:(id)arg2 resolver:(CDUnknownBlockType)arg3 rejecter:(CDUnknownBlockType)arg4;
- (void)slice:(id)arg1 dest:(id)arg2 start:(id)arg3 end:(id)arg4 resolver:(CDUnknownBlockType)arg5 rejecter:(CDUnknownBlockType)arg6;
- (void)enableUploadProgressReport:(id)arg1 interval:(id)arg2 count:(id)arg3;
- (void)enableProgressReport:(id)arg1 interval:(id)arg2 count:(id)arg3;
- (void)cancelRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getEnvironmentDirs:(CDUnknownBlockType)arg1;
- (void)readStream:(id)arg1 withEncoding:(id)arg2 bufferSize:(int)arg3 tick:(int)arg4 streamId:(id)arg5;
- (void)hash:(id)arg1 algorithm:(id)arg2 resolver:(CDUnknownBlockType)arg3 rejecter:(CDUnknownBlockType)arg4;
- (void)readFile:(id)arg1 encoding:(id)arg2 resolver:(CDUnknownBlockType)arg3 rejecter:(CDUnknownBlockType)arg4;
- (void)mkdir:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)mv:(id)arg1 toPath:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)cp:(id)arg1 toPath:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)lstat:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)stat:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)ls:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)removeSession:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)unlink:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)closeStream:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writeChunk:(id)arg1 withData:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)writeArrayChunk:(id)arg1 withArray:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)writeStream:(id)arg1 withEncoding:(id)arg2 appendData:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)writeFileArray:(id)arg1 data:(id)arg2 append:(_Bool)arg3 resolver:(CDUnknownBlockType)arg4 rejecter:(CDUnknownBlockType)arg5;
- (void)writeFile:(id)arg1 encoding:(id)arg2 data:(id)arg3 append:(_Bool)arg4 resolver:(CDUnknownBlockType)arg5 rejecter:(CDUnknownBlockType)arg6;
- (void)exists:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)syncPathAppGroup:(id)arg1;
- (void)pathForAppGroup:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)createFileASCII:(id)arg1 data:(id)arg2 resolver:(CDUnknownBlockType)arg3 rejecter:(CDUnknownBlockType)arg4;
- (void)createFile:(id)arg1 data:(id)arg2 encoding:(id)arg3 resolver:(CDUnknownBlockType)arg4 rejecter:(CDUnknownBlockType)arg5;
- (void)fetchBlob:(id)arg1 taskId:(id)arg2 method:(id)arg3 url:(id)arg4 headers:(id)arg5 body:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)fetchBlobForm:(id)arg1 taskId:(id)arg2 method:(id)arg3 url:(id)arg4 headers:(id)arg5 form:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (id)constantsToExport;
- (id)init;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

