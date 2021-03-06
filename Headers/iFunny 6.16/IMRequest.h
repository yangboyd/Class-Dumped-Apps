//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface IMRequest : NSObject
{
    _Bool _followRedirect;
    _Bool _shouldAddConsent;
    int _requestMethod;
    NSString *_requestURL;
    long long _timeout;
    NSData *_postBody;
    NSString *_requestParam;
    NSMutableDictionary *_reqParams;
    NSMutableDictionary *_header;
    long long _retryCount;
    long long _retryInterval;
    NSMutableArray *_eventsUUID;
}

@property(nonatomic) _Bool shouldAddConsent; // @synthesize shouldAddConsent=_shouldAddConsent;
@property(retain, nonatomic) NSMutableArray *eventsUUID; // @synthesize eventsUUID=_eventsUUID;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSMutableDictionary *header; // @synthesize header=_header;
@property(retain, nonatomic) NSMutableDictionary *reqParams; // @synthesize reqParams=_reqParams;
@property(retain, nonatomic) NSString *requestParam; // @synthesize requestParam=_requestParam;
@property(retain, nonatomic) NSData *postBody; // @synthesize postBody=_postBody;
@property _Bool followRedirect; // @synthesize followRedirect=_followRedirect;
@property long long timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) int requestMethod; // @synthesize requestMethod=_requestMethod;
@property(retain, nonatomic) NSString *requestURL; // @synthesize requestURL=_requestURL;
- (void).cxx_destruct;
- (void)addHeader:(id)arg1;
- (void)addReqParamsIfNotAlreadyPresent:(id)arg1;
- (void)addReqParams:(id)arg1;
- (id)getRequestMethod;
- (id)convertToString;
- (void)makeRequestParam;
- (void)makePostJSONBody;
- (void)makePostBody;
- (id)initWithURL:(id)arg1 requestMethod:(int)arg2 withIncludeIds:(id)arg3 shouldAddConsent:(_Bool)arg4;
- (id)initWithURL:(id)arg1 requestMethod:(int)arg2 withIncludeIds:(id)arg3;

@end

