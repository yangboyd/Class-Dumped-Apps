//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMSessionFetcherService, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GDKDownloadService : NSObject
{
    GTMSessionFetcherService *_sessionFetcherService;
    NSMutableDictionary *_fileIDToFetcher;
    NSMutableDictionary *_fileIDToFileHandle;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)sanitizedFilenameWithTitle:(id)arg1 identifier:(id)arg2 mimeType:(id)arg3;
+ (_Bool)removeFileAtURL:(id)arg1 fileManager:(id)arg2;
+ (_Bool)validateDownloadRequestParamsForFile:(id)arg1 withMimeType:(id)arg2 fromURL:(id)arg3 toDirectory:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSMutableDictionary *fileIDToFileHandle; // @synthesize fileIDToFileHandle=_fileIDToFileHandle;
@property(readonly, nonatomic) NSMutableDictionary *fileIDToFetcher; // @synthesize fileIDToFetcher=_fileIDToFetcher;
@property(retain, nonatomic) GTMSessionFetcherService *sessionFetcherService; // @synthesize sessionFetcherService=_sessionFetcherService;
- (void)stopFetchingFile:(id)arg1;
- (void)addSessionFetcher:(id)arg1 forFileID:(id)arg2 withFileHandle:(id)arg3;
- (void)downloadContentForFile:(id)arg1 asMimeType:(id)arg2 fromURLRequest:(id)arg3 toDirectory:(id)arg4 downloadProgressBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)downloadContentForFile:(id)arg1 asMimeType:(id)arg2 fromURL:(id)arg3 toDirectory:(id)arg4 downloadProgressBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithSessionFetcherService:(id)arg1;

@end

