//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSData, NSDictionary, NSMutableData, NSString;

@interface NPFSDKHttpClient : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _retry;
    NSString *_method;
    NSString *_scheme;
    NSString *_host;
    NSString *_path;
    NSDictionary *_headers;
    NSDictionary *_queryParam;
    NSString *_contentType;
    NSData *_data;
    CDUnknownBlockType _callback;
    long long _statusCode;
    NSDictionary *_responseHeaders;
    NSMutableData *_receivedData;
}

+ (id)makeUrlEncodedQueryString:(id)arg1;
+ (id)urlEncode:(id)arg1;
+ (id)makeAcceptLanguageHeader:(id)arg1;
+ (id)makeAcceptLanguageHeader;
@property(retain) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property long long statusCode; // @synthesize statusCode=_statusCode;
@property _Bool retry; // @synthesize retry=_retry;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain) NSDictionary *queryParam; // @synthesize queryParam=_queryParam;
@property(retain) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) NSString *host; // @synthesize host=_host;
@property(retain) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain) NSString *method; // @synthesize method=_method;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)updateAccessToken;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendRequest;
- (void)execute:(id)arg1 withScheme:(id)arg2 andHost:(id)arg3 andPath:(id)arg4 andHeaders:(id)arg5 andQueryParam:(id)arg6 andContentType:(id)arg7 andData:(id)arg8 andCallback:(CDUnknownBlockType)arg9 andRetry:(_Bool)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

