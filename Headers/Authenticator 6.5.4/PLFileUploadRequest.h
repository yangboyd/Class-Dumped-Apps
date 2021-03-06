//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PowerLiftKit/PLBackgroundRequest-Protocol.h>

@class NSDate, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface PLFileUploadRequest : NSObject <PLBackgroundRequest>
{
    NSUUID *_incidentID;
    NSURL *_requestFileURL;
    NSString *_apiKey;
    NSString *_fileName;
    NSDate *_startTime;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_completionHandlerLock;
}

+ (id)chunkedRequestWithIncidentID:(id)arg1 fileURL:(id)arg2 fileData:(id)arg3 fileName:(id)arg4 fileSize:(id)arg5 contentType:(id)arg6 apiKey:(id)arg7 completionHandler:(CDUnknownBlockType)arg8 error:(id *)arg9;
+ (id)multipartRequestWithIncidentID:(id)arg1 fileURL:(id)arg2 fileData:(id)arg3 fileName:(id)arg4 fileSize:(id)arg5 contentType:(id)arg6 apiKey:(id)arg7 completionHandler:(CDUnknownBlockType)arg8 error:(id *)arg9;
+ (id)requestWithIncidentID:(id)arg1 fileURL:(id)arg2 contentType:(id)arg3 apiKey:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 error:(id *)arg6;
+ (id)requestWithIncidentID:(id)arg1 fileData:(id)arg2 fileName:(id)arg3 contentType:(id)arg4 apiKey:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 error:(id *)arg7;
+ (id)requestWithState:(id)arg1;
+ (_Bool)shouldUseChunkUploads:(unsigned long long)arg1;
+ (id)requestTypeName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionHandlerLock; // @synthesize completionHandlerLock=_completionHandlerLock;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(readonly) NSURL *requestFileURL; // @synthesize requestFileURL=_requestFileURL;
@property(readonly) NSUUID *incidentID; // @synthesize incidentID=_incidentID;
- (id)persistableState;
- (id)createUploadTaskForSession:(id)arg1;
- (id)backgroundTask:(id)arg1 didCompleteWithData:(id)arg2 response:(id)arg3 error:(id)arg4 session:(id)arg5;
- (void)completeWithError:(id)arg1;
- (id)mutablePersistableState;
- (id)initWithIncidentID:(id)arg1 requestFileURL:(id)arg2 apiKey:(id)arg3 fileName:(id)arg4 startTime:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

