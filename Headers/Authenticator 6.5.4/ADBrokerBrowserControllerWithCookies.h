//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADBrokerBrowserPRTRequestControlling-Protocol.h"

@class ADBNetworkRequestsFactory, MSIDRequestParameters, NSData, NSDictionary, NSString, NSURL;
@protocol ADBrokerBrowserSSOURLProcessing;

@interface ADBrokerBrowserControllerWithCookies : NSObject <ADBrokerBrowserPRTRequestControlling>
{
    MSIDRequestParameters *_requestParameters;
    NSURL *_requestURL;
    NSData *_httpBody;
    NSDictionary *_headers;
    ADBNetworkRequestsFactory *_networkRequestsFactory;
    id <ADBrokerBrowserSSOURLProcessing> _browserURLProcessor;
}

+ (_Bool)shouldHandleRequestWithURL:(id)arg1 headers:(id)arg2 body:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id <ADBrokerBrowserSSOURLProcessing> browserURLProcessor; // @synthesize browserURLProcessor=_browserURLProcessor;
@property(retain, nonatomic) ADBNetworkRequestsFactory *networkRequestsFactory; // @synthesize networkRequestsFactory=_networkRequestsFactory;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) MSIDRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
- (void)sendRequestWithHeaders:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)browserSSOSessionManager;
- (void)executeWithCompletion:(CDUnknownBlockType)arg1;
- (id)processedRequestURL:(id)arg1;
- (id)initWithRequestParams:(id)arg1 requestURL:(id)arg2 body:(id)arg3 headers:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

