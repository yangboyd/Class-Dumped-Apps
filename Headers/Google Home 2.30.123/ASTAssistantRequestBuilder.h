//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTS3RequestBuilder-Protocol.h"

@class ASTAssistantServices, ASTQuery, NSString, PinholeParams;
@protocol ASTCCLProcessor;

@interface ASTAssistantRequestBuilder : NSObject <ASTS3RequestBuilder>
{
    ASTQuery *_query;
    ASTAssistantServices *_services;
    id <ASTCCLProcessor> _cclProcessor;
    PinholeParams *_pinholeParams;
    NSString *_requestID;
}

+ (id)defaultPinholeParams;
+ (id)clientVersionString;
+ (id)xGeoString;
+ (_Bool)isDuoEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) PinholeParams *pinholeParams; // @synthesize pinholeParams=_pinholeParams;
@property(nonatomic) __weak id <ASTCCLProcessor> cclProcessor; // @synthesize cclProcessor=_cclProcessor;
@property(nonatomic) __weak ASTAssistantServices *services; // @synthesize services=_services;
@property(retain, nonatomic) ASTQuery *query; // @synthesize query=_query;
- (_Bool)isUdcPermissionGranted;
- (_Bool)screenless;
- (id)languageParams;
- (id)appContextParams;
- (id)gwsRequestParams;
- (id)transactionsParams;
- (id)assistantSdkDeviceParams;
- (id)displayContextParams;
- (id)requestLoggingParams;
- (id)devicePropertiesForQuery:(id)arg1;
- (id)deviceID;
- (id)requestContextForQuery:(id)arg1;
- (id)searchRequestForQuery:(id)arg1;
- (id)userAgentForQuery:(id)arg1;
- (_Bool)isLockhartEnabled;
- (id)deviceCapabilitiesForQuery:(id)arg1;
- (id)assistantDeviceProperties;
- (id)assistantRequestForQuery:(id)arg1;
- (void)buildClientInfoInitialClientInfo:(id)arg1 forAssistantQuery:(id)arg2;
- (id)buildInitialRequestWithDefaultRequest:(id)arg1;
- (id)initWithServices:(id)arg1 cclProcessor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool keepsWeakReferenceToRequestBuilder;
@property(readonly) Class superclass;

@end

