//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <ServiceCore/SFCRequestContext-Protocol.h>

@class NSArray, NSData, NSDictionary, NSError, NSHTTPURLResponse, NSMutableData, NSMutableDictionary, NSNumber, NSObject, NSProgress, NSString, NSURL, NSURLSessionDownloadTask, NSURLSessionTask, SFCCredential, SFCNetwork, SFCParameterStorage;
@protocol SFCActionModel;

@interface SFCAction : NSOperation <SFCRequestContext>
{
    _Bool _ready;
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
    SFCParameterStorage *_parameters;
    NSMutableDictionary *_HTTPHeaders;
    NSMutableDictionary *_timingValues;
    NSData *_jsonData;
    _Bool _enqueueIfNoNetwork;
    CDUnknownBlockType _responseBlock;
    struct os_activity_scope_state_s _activity_state;
    NSProgress *_progress;
    NSURL *_absoluteUrl;
    NSError *_error;
    id _outputContent;
    NSHTTPURLResponse *_httpResponse;
    NSString *_verb;
    NSNumber *_shouldCacheResponse;
    SFCNetwork *_enqueuedNetwork;
    _Bool _programmatic;
    _Bool _requiresAuthentication;
    _Bool _requireBackgroundSession;
    _Bool _pendingCoalescence;
    NSString *_serviceType;
    id _context;
    unsigned long long _executionCapType;
    NSURL *_baseURL;
    NSString *_method;
    NSDictionary *_userInfo;
    NSObject<SFCActionModel> *_outputModel;
    NSURL *_downloadLocation;
    Class _modelClass;
    double _timeoutInterval;
    unsigned long long _retryCount;
    unsigned long long _maxRetryCount;
    SFCCredential *_credential;
    NSMutableData *_responseData;
    unsigned long long _coalescenceType;
    NSURLSessionTask *_sessionTask;
    NSURLSessionDownloadTask *_downloadTask;
}

+ (id)actionWithHTTPMethod:(id)arg1 onURL:(id)arg2 withResponseBlock:(CDUnknownBlockType)arg3;
+ (id)keyPathsForValuesAffectingBaseURL;
+ (id)keyPathsForValuesAffectingVerb;
+ (id)keyPathsForValuesAffectingUrl;
+ (id)keyPathsForValuesAffectingIsDuplicateAction;
+ (id)keyPathsForValuesAffectingIsChildAction;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(retain, nonatomic) id outputContent; // @synthesize outputContent=_outputContent;
@property(nonatomic, getter=isPendingCoalescence) _Bool pendingCoalescence; // @synthesize pendingCoalescence=_pendingCoalescence;
@property(nonatomic) unsigned long long coalescenceType; // @synthesize coalescenceType=_coalescenceType;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool requireBackgroundSession; // @synthesize requireBackgroundSession=_requireBackgroundSession;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) SFCCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(retain, nonatomic) NSURL *downloadLocation; // @synthesize downloadLocation=_downloadLocation;
@property(retain, nonatomic) NSObject<SFCActionModel> *outputModel; // @synthesize outputModel=_outputModel;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) unsigned long long executionCapType; // @synthesize executionCapType=_executionCapType;
@property(nonatomic) _Bool enqueueIfNoNetwork; // @synthesize enqueueIfNoNetwork=_enqueueIfNoNetwork;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic, getter=isProgrammatic) _Bool programmatic; // @synthesize programmatic=_programmatic;
@property(nonatomic) __weak SFCNetwork *enqueuedNetwork; // @synthesize enqueuedNetwork=_enqueuedNetwork;
- (void).cxx_destruct;
- (id)computedURLWithError:(id *)arg1;
- (id)createURLRequest:(id *)arg1;
- (_Bool)shouldCompleteAfterAuthenticationError:(id)arg1;
- (_Bool)cacheCompletedOperation;
- (void)completeOperationWithResponse:(id)arg1;
- (id)contentFromData:(id)arg1 fromResponse:(id)arg2 error:(id *)arg3;
- (id)errorFromData:(id)arg1 response:(id)arg2;
- (void)completeOperationWithError:(id)arg1;
- (void)retry;
- (_Bool)shouldRetryWithError:(id)arg1;
- (_Bool)overrideRequest:(id)arg1 withResponseData:(id *)arg2 andHTTPResponse:(id *)arg3;
@property(nonatomic, getter=shouldCacheResponse) _Bool cacheResponse;
@property(readonly, nonatomic) _Bool supportsCoalescence;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSData *outputData;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)schedulingIsReady;
- (_Bool)isReady;
- (_Bool)isAsynchronous;
- (void)cancel;
- (void)start;
- (void)updateProgress;
- (_Bool)shouldUseHTTPCacheForSessionDataTask:(id)arg1;
- (void)sessionDataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)sessionDownloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)sessionUploadTask:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)sessionDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)sessionTaskToProcessRequest:(id)arg1 session:(id)arg2;
- (void)actionDidBeginWithSessionTask:(id)arg1;
- (void)actionWillBeginWithRequest:(id)arg1;
- (id)credentialsToUseForContainer:(id)arg1;
- (id)valueTransformerForParameter:(id)arg1 withKey:(id)arg2;
- (void)triggerActionAfterTokenRefresh;
@property(readonly, copy, nonatomic) NSString *basePath;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToAction:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool requiresCredentials;
- (_Bool)shouldReportProgressToParent;
- (void)removeValueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)valueForHTTPHeaderField:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property(copy, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSMutableDictionary *timingValues;
@property(readonly, nonatomic) SFCParameterStorage *parameters;
- (void)dealloc;
- (id)initWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)headersForAction;
- (id)urlForActionWithError:(id *)arg1;
- (double)intervalForTimingKey:(id)arg1;
- (id)debugCurlCommand;
- (_Bool)supportsDuplicateDetection;
@property(readonly, nonatomic) _Bool isDuplicateAction;
@property(readonly, nonatomic) _Bool isChildAction;
- (void)completeBatchOperation;
- (void)completeDuplicateOperation;
@property(nonatomic) __weak SFCAction *parentAction;
- (void)setChildActions:(id)arg1;
@property(readonly) NSArray *childActions;

// Remaining properties
@property(readonly) Class superclass;

@end

