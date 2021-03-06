//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMADebugProperties, AMMetricTracker, NSMutableDictionary, NSString;
@protocol AMAWebRequestDelegate;

@interface AMAWebRequest : NSObject
{
    _Bool _shouldLogUrl;
    _Bool _shouldLogRequestBody;
    _Bool _shouldLogResponse;
    _Bool _shouldUseSecure;
    _Bool _shouldHandleCookies;
    _Bool _returnResponseInMainThread;
    int _port;
    int _timeout;
    int _metricTimerType;
    id <AMAWebRequestDelegate> _delegate;
    NSMutableDictionary *_headers;
    unsigned long long _httpMethod;
    NSString *_host;
    NSString *_path;
    NSString *_urlString;
    NSString *_requestBodyString;
    NSString *_contentType;
    NSString *_charset;
    AMMetricTracker *_metricTracker;
    NSObject *_metricObject;
    NSMutableDictionary *_queryParameters;
    AMADebugProperties *_sharedDebugProperties;
}

@property(retain, nonatomic) AMADebugProperties *sharedDebugProperties; // @synthesize sharedDebugProperties=_sharedDebugProperties;
@property(retain, nonatomic) NSMutableDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(nonatomic) _Bool returnResponseInMainThread; // @synthesize returnResponseInMainThread=_returnResponseInMainThread;
@property(nonatomic) _Bool shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property(nonatomic) __weak NSObject *metricObject; // @synthesize metricObject=_metricObject;
@property(nonatomic) int metricTimerType; // @synthesize metricTimerType=_metricTimerType;
@property(nonatomic) __weak AMMetricTracker *metricTracker; // @synthesize metricTracker=_metricTracker;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *charset; // @synthesize charset=_charset;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *requestBodyString; // @synthesize requestBodyString=_requestBodyString;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) int port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) _Bool shouldUseSecure; // @synthesize shouldUseSecure=_shouldUseSecure;
@property(nonatomic) unsigned long long httpMethod; // @synthesize httpMethod=_httpMethod;
@property(nonatomic) _Bool shouldLogResponse; // @synthesize shouldLogResponse=_shouldLogResponse;
@property(nonatomic) _Bool shouldLogRequestBody; // @synthesize shouldLogRequestBody=_shouldLogRequestBody;
@property(nonatomic) _Bool shouldLogUrl; // @synthesize shouldLogUrl=_shouldLogUrl;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) __weak id <AMAWebRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)processData:(id)arg1 withStatusCode:(long long)arg2 withStatus:(id)arg3;
- (void)appendQuery:(id)arg1;
- (id)getPath;
- (id)getScheme;
- (id)getUrl;
- (id)getHttpMethod;
- (void)addContentTypeHeaders;
- (void)stopLatencyMetric;
- (void)startLatencyMetric;
- (void)makeCallWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)makeCall;
- (id)toString;
- (void)setAcceptContentType:(id)arg1;
- (void)putHeader:(id)arg1 forKey:(id)arg2;
- (void)putUnencodedQueryParameter:(id)arg1 forKey:(id)arg2;
- (void)putUrlEncodedQueryParameter:(id)arg1 forKey:(id)arg2;
- (void)enableAllLogs:(_Bool)arg1;
- (void)convertToJSONRequest;
- (void)convertToJSONPostRequest;
- (id)init;

@end

