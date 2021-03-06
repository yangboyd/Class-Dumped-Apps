//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TWTRUserAPIClient;
@protocol TWTRAPIServiceConfig;

@interface TWTRWebAuthenticationTokenRequestor : NSObject
{
    TWTRUserAPIClient *_APIClient;
    id <TWTRAPIServiceConfig> _serviceConfig;
}

@property(readonly, nonatomic) id <TWTRAPIServiceConfig> serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(readonly, nonatomic) TWTRUserAPIClient *APIClient; // @synthesize APIClient=_APIClient;
- (void).cxx_destruct;
- (id)unknownLoginErrorWithMessage:(id)arg1;
- (void)didFailToReceiveOAuthToken:(id)arg1;
- (id)dictionaryFromTokenResponseData:(id)arg1;
- (id)tokenFromTokenData:(id)arg1;
- (void)handleRequestTokenResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAuthenticationToken:(CDUnknownBlockType)arg1;
- (id)initWithAuthConfig:(id)arg1 serviceConfig:(id)arg2;

@end

