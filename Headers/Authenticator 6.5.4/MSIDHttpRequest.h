//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MSAL/MSIDHttpRequestProtocol-Protocol.h>

@class MSIDURLSessionManager, NSDictionary, NSString, NSURLCache, NSURLRequest;
@protocol MSIDHttpRequestErrorHandling, MSIDHttpRequestServerTelemetryHandling, MSIDHttpRequestTelemetryHandling, MSIDRequestContext, MSIDRequestSerialization, MSIDResponseSerialization;

@interface MSIDHttpRequest : NSObject <MSIDHttpRequestProtocol>
{
    NSDictionary *_parameters;
    NSURLRequest *_urlRequest;
    NSDictionary *_headers;
    id <MSIDRequestSerialization> _requestSerializer;
    id <MSIDResponseSerialization> _responseSerializer;
    id <MSIDHttpRequestTelemetryHandling> _telemetry;
    id <MSIDHttpRequestErrorHandling> _errorHandler;
    id <MSIDRequestContext> _context;
    id <MSIDHttpRequestServerTelemetryHandling> _serverTelemetry;
    _Bool _shouldCacheResponse;
    MSIDURLSessionManager *_sessionManager;
    id <MSIDResponseSerialization> _errorResponseSerializer;
    long long _retryCounter;
    double _retryInterval;
    double _requestTimeoutInterval;
    NSURLCache *_cache;
}

+ (double)requestTimeoutInterval;
+ (void)setRequestTimeoutInterval:(double)arg1;
+ (void)setRetryIntervalSetting:(double)arg1;
+ (double)retryIntervalSetting;
+ (void)setRetryCountSetting:(long long)arg1;
+ (long long)retryCountSetting;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLCache *cache; // @synthesize cache=_cache;
@property(nonatomic) double requestTimeoutInterval; // @synthesize requestTimeoutInterval=_requestTimeoutInterval;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCounter; // @synthesize retryCounter=_retryCounter;
@property(retain, nonatomic) id <MSIDRequestContext> context; // @synthesize context=_context;
@property(retain, nonatomic) id <MSIDHttpRequestErrorHandling> errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) id <MSIDHttpRequestServerTelemetryHandling> serverTelemetry; // @synthesize serverTelemetry=_serverTelemetry;
@property(retain, nonatomic) id <MSIDHttpRequestTelemetryHandling> telemetry; // @synthesize telemetry=_telemetry;
@property(retain, nonatomic) id <MSIDResponseSerialization> errorResponseSerializer; // @synthesize errorResponseSerializer=_errorResponseSerializer;
@property(retain, nonatomic) id <MSIDResponseSerialization> responseSerializer; // @synthesize responseSerializer=_responseSerializer;
@property(retain, nonatomic) id <MSIDRequestSerialization> requestSerializer; // @synthesize requestSerializer=_requestSerializer;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) MSIDURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
- (void)setCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponse;
- (void)sendWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

