//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSString, NSURLResponse, SPTDataLoaderRequest;

@interface SPTDataLoaderResponse : NSObject
{
    SPTDataLoaderRequest *_request;
    NSError *_error;
    NSDictionary *_responseHeaders;
    NSDate *_retryAfter;
    NSData *_body;
    double _requestTime;
    long long _statusCode;
    NSURLResponse *_response;
}

+ (id)dataLoaderResponseWithRequest:(id)arg1 response:(id)arg2;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSDate *retryAfter; // @synthesize retryAfter=_retryAfter;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) SPTDataLoaderRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)description;
- (id)retryAfterForHeaders:(id)arg1;
- (_Bool)shouldRetry;
- (id)initWithRequest:(id)arg1 response:(id)arg2;
- (long long)spt_browseViewModelFetcherErrorCode;
- (long long)spt_podcastBrowseViewModelFetcherErrorCode;
@property(readonly, nonatomic) NSString *searchAutocompleteRequestId;
@property(readonly, nonatomic) NSArray *suggestions;

@end

