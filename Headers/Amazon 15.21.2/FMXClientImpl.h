//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMXClient-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol FMXMetricsDelegate, FMXWebLabAdapter;

@interface FMXClientImpl : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate, UIAlertViewDelegate, FMXClient>
{
    _Bool _freshMenuAvailable;
    _Bool _ignoreCachedGlobalNavResponse;
    NSString *_currentMarketplace;
    NSString *_userAgent;
    id <FMXMetricsDelegate> _metricsDelegate;
    id <FMXWebLabAdapter> _weblabAdapter;
    NSString *_landingPageUrl;
    NSString *_browseUrl;
    NSString *_menuTitle;
    NSString *_subNavSearchAlias;
    NSString *_subNavSearchFilter;
    NSString *_retainedSearchAlias;
    NSDictionary *_eligibleAlmBrandMetadata;
    NSString *_subNavServicePath;
    NSDictionary *_almBrandMetadata;
    NSDictionary *_apiDomains;
    NSDictionary *_globalDomains;
    NSMutableDictionary *_activeConnections;
    unsigned long long _requestId;
    NSString *_freshAPIDomain;
    NSString *_globalAPIDomain;
    NSMutableDictionary *_metricsEvents;
}

+ (id)sharedClient;
@property(nonatomic) _Bool ignoreCachedGlobalNavResponse; // @synthesize ignoreCachedGlobalNavResponse=_ignoreCachedGlobalNavResponse;
@property(retain, nonatomic) NSMutableDictionary *metricsEvents; // @synthesize metricsEvents=_metricsEvents;
@property(retain, nonatomic) NSString *globalAPIDomain; // @synthesize globalAPIDomain=_globalAPIDomain;
@property(retain, nonatomic) NSString *freshAPIDomain; // @synthesize freshAPIDomain=_freshAPIDomain;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSMutableDictionary *activeConnections; // @synthesize activeConnections=_activeConnections;
@property(retain, nonatomic) NSDictionary *globalDomains; // @synthesize globalDomains=_globalDomains;
@property(retain, nonatomic) NSDictionary *apiDomains; // @synthesize apiDomains=_apiDomains;
@property(copy, nonatomic) NSDictionary *almBrandMetadata; // @synthesize almBrandMetadata=_almBrandMetadata;
@property(copy, nonatomic) NSString *subNavServicePath; // @synthesize subNavServicePath=_subNavServicePath;
@property(copy, nonatomic) NSDictionary *eligibleAlmBrandMetadata; // @synthesize eligibleAlmBrandMetadata=_eligibleAlmBrandMetadata;
@property(copy, nonatomic) NSString *retainedSearchAlias; // @synthesize retainedSearchAlias=_retainedSearchAlias;
@property(copy, nonatomic) NSString *subNavSearchFilter; // @synthesize subNavSearchFilter=_subNavSearchFilter;
@property(copy, nonatomic) NSString *subNavSearchAlias; // @synthesize subNavSearchAlias=_subNavSearchAlias;
@property(copy, nonatomic) NSString *menuTitle; // @synthesize menuTitle=_menuTitle;
@property(copy, nonatomic) NSString *browseUrl; // @synthesize browseUrl=_browseUrl;
@property(copy, nonatomic) NSString *landingPageUrl; // @synthesize landingPageUrl=_landingPageUrl;
@property(nonatomic, getter=isFreshMenuAvailable) _Bool freshMenuAvailable; // @synthesize freshMenuAvailable=_freshMenuAvailable;
@property(retain, nonatomic) id <FMXWebLabAdapter> weblabAdapter; // @synthesize weblabAdapter=_weblabAdapter;
@property(nonatomic) __weak id <FMXMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *currentMarketplace; // @synthesize currentMarketplace=_currentMarketplace;
- (void).cxx_destruct;
- (_Bool)doesSearchAliasHaveASubNav:(id)arg1;
- (id)retainedSearchPlaceholderFor:(id)arg1;
- (_Bool)isRetainedSearchAlias:(id)arg1;
- (_Bool)isAlmRetainedSearchAlias:(id)arg1;
- (_Bool)isFreshLegacyRetainedSearchAlias:(id)arg1;
- (id)queryStringFromDictionary:(id)arg1;
- (id)requestWithUrl:(id)arg1;
- (id)triggerForMetric:(id)arg1;
- (id)keyForConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)dictionaryForConnection:(id)arg1;
- (void)setParameters:(id)arg1 parameters:(id)arg2 method:(unsigned long long)arg3;
- (void)callUrl:(id)arg1 useGlobal:(_Bool)arg2 httpMethod:(unsigned long long)arg3 parameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)callServiceWithPath:(id)arg1 useGlobal:(_Bool)arg2 httpMethod:(unsigned long long)arg3 parameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)invokeCompletionForConnection:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)updateAvailabilityWithDictionary:(id)arg1;
@property(readonly, nonatomic, getter=getEligibleAlmBrands) NSDictionary *eligibleAlmBrands;
- (id)sessionToken:(_Bool)arg1;
- (void)userChanged;
- (id)parseCartThresholdData:(id)arg1;
- (id)parseJSONSubnavResponse:(id)arg1;
- (id)parseTVBlockSubnavResponse:(id)arg1;
- (id)constructSubNavUrlWithPropertyName:(id)arg1 withPropertyValue:(id)arg2;
- (void)updateSubNav:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAvailability:(CDUnknownBlockType)arg1;
- (void)resume;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

