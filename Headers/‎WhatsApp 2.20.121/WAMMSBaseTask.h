//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAMMSTaskSessionTask.h>

@class NSData, NSOperationQueue, NSString, NSUUID, WAMMSTaskMetrics, WAMMSTaskSessionV4;

@interface WAMMSBaseTask : WAMMSTaskSessionTask
{
    WAMMSTaskSessionV4 *_session;
    NSString *_uploadToken;
    unsigned long long _taskType;
    NSString *_directPath;
    NSData *_hashIdentifierData;
    WAMMSTaskMetrics *_taskMetric;
    _Bool _didStopTask;
    unsigned long long _state;
    unsigned long long _mediaType;
    NSString *_loggingIdentifier;
    NSOperationQueue *_sessionOperationQueue;
    NSUUID *_connUUID;
}

+ (_Bool)isContentHotForMediaType:(unsigned long long)arg1 directPath:(id)arg2 catHotInterval:(unsigned long long)arg3;
+ (id)selectedAndFallbackEndpointsWithRoutingInfo:(id)arg1 forUpload:(_Bool)arg2 mediaType:(unsigned long long)arg3 hashIdentifier:(id)arg4 directPath:(id)arg5 vcaEnabled:(_Bool)arg6 catHotInterval:(double)arg7 downloadBucket:(out id *)arg8;
+ (_Bool)isProductCatalogUploadEndpointAvailableForType:(unsigned long long)arg1;
+ (_Bool)isOptimisticUploadEndpointAvailableForType:(unsigned long long)arg1;
+ (id)relativeMediaEndpointForType:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
+ (id)absoluteURLToMediaObjectWithHostname:(id)arg1 mediaType:(unsigned long long)arg2 hashIdentifier:(id)arg3 directPath:(id)arg4 uploadToken:(id)arg5 downloadBucket:(id)arg6 authToken:(id)arg7 allowsDirectIP:(_Bool)arg8 taskType:(unsigned long long)arg9 additionalQueryItems:(id)arg10;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *connUUID; // @synthesize connUUID=_connUUID;
@property(retain) NSOperationQueue *sessionOperationQueue; // @synthesize sessionOperationQueue=_sessionOperationQueue;
@property(readonly, nonatomic) _Bool didStopTask; // @synthesize didStopTask=_didStopTask;
@property(readonly, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_loggingIdentifier;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property unsigned long long state; // @synthesize state=_state;
- (id)additionalQueryItems;
- (_Bool)shouldCancel;
- (id)createURLSessionTaskWithBaseRequest:(id)arg1 MMSSession:(id)arg2;
- (void)failedToStartWithError:(id)arg1;
- (void)finish;
- (id)taskMetrics;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)stop;
- (void)cancel;
- (void)resumeWithPolicy:(id)arg1;
- (void)resume;
@property(readonly, nonatomic) _Bool upload;
- (id)initWithSession:(id)arg1 taskDescription:(id)arg2;

@end

