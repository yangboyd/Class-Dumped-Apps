//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BTAPIHTTP, BTAnalyticsService, BTClientMetadata, BTClientToken, BTGraphQLHTTP, BTHTTP, BTPayPalUAT, NSString;
@protocol OS_dispatch_queue;

@interface BTAPIClient : NSObject
{
    NSObject<OS_dispatch_queue> *_configurationQueue;
    NSString *_tokenizationKey;
    BTClientToken *_clientToken;
    BTPayPalUAT *_payPalUAT;
    BTHTTP *_http;
    BTHTTP *_configurationHTTP;
    BTAPIHTTP *_braintreeAPI;
    BTGraphQLHTTP *_graphQL;
    BTClientMetadata *_metadata;
    BTAnalyticsService *_analyticsService;
}

+ (id)clientApiBasePathForMerchantID:(id)arg1;
+ (id)graphQLHostForEnvironmentString:(id)arg1;
+ (id)graphQLURLForEnvironment:(id)arg1;
+ (id)hostForEnvironmentString:(id)arg1;
+ (id)schemeForEnvironmentString:(id)arg1;
+ (id)baseURLFromTokenizationKey:(id)arg1;
+ (long long)authorizationTypeForAuthorization:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BTAnalyticsService *analyticsService; // @synthesize analyticsService=_analyticsService;
@property(readonly, nonatomic) BTClientMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) BTGraphQLHTTP *graphQL; // @synthesize graphQL=_graphQL;
@property(retain, nonatomic) BTAPIHTTP *braintreeAPI; // @synthesize braintreeAPI=_braintreeAPI;
@property(retain, nonatomic) BTHTTP *configurationHTTP; // @synthesize configurationHTTP=_configurationHTTP;
@property(retain, nonatomic) BTHTTP *http; // @synthesize http=_http;
@property(retain, nonatomic) BTPayPalUAT *payPalUAT; // @synthesize payPalUAT=_payPalUAT;
@property(retain, nonatomic) BTClientToken *clientToken; // @synthesize clientToken=_clientToken;
@property(copy, nonatomic) NSString *tokenizationKey; // @synthesize tokenizationKey=_tokenizationKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *configurationQueue; // @synthesize configurationQueue=_configurationQueue;
- (void)dealloc;
- (id)init;
- (id)httpForType:(long long)arg1;
- (void)POST:(id)arg1 parameters:(id)arg2 httpType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)GET:(id)arg1 parameters:(id)arg2 httpType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)POST:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)GET:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)metaParametersWithParameters:(id)arg1 forHTTPType:(long long)arg2;
- (id)graphQLMetadata;
- (id)metaParameters;
- (void)queueAnalyticsEvent:(id)arg1;
- (void)sendAnalyticsEvent:(id)arg1;
- (void)fetchOrReturnRemoteConfiguration:(CDUnknownBlockType)arg1;
- (void)fetchPaymentMethodNonces:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPaymentMethodNonces:(CDUnknownBlockType)arg1;
- (id)copyWithSource:(long long)arg1 integration:(long long)arg2;
- (id)initWithAuthorization:(id)arg1 sendAnalyticsEvent:(_Bool)arg2;
- (id)initWithAuthorization:(id)arg1;

@end

