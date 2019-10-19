//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCDRPCService-Protocol.h"

@class FCDRPCContext, GOOProvider, NSArray, NSString;
@protocol FCDRPCAuthorizer, FCDRPCManager, FCDRPCServiceInterceptorsProvider, FCDTransport;

@interface FCDRPCService : NSObject <FCDRPCService>
{
    id <FCDRPCManager> _rpcManager;
    id <FCDRPCAuthorizer> _authorizer;
    id <FCDTransport> _transport;
    FCDRPCContext *_rpcContext;
    id <FCDRPCServiceInterceptorsProvider> _globalInterceptorsProvider;
    GOOProvider *_serviceInterceptorsProvider;
}

+ (id)preferredHostName;
+ (id)oauthScopesForRPCID:(id)arg1;
+ (id)serviceHostNames;
+ (id)servicePackage;
+ (id)serviceName;
@property(readonly, nonatomic) FCDRPCContext *rpcContext; // @synthesize rpcContext=_rpcContext;
@property(readonly, nonatomic) id <FCDTransport> transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) id <FCDRPCAuthorizer> authorizer; // @synthesize authorizer=_authorizer;
@property(readonly, nonatomic) id <FCDRPCManager> rpcManager; // @synthesize rpcManager=_rpcManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *interceptors; // @dynamic interceptors;
- (id)initWithRPCManager:(id)arg1 authorizer:(id)arg2 transport:(id)arg3 globalInterceptorsProvider:(id)arg4 serviceInterceptorsProvider:(id)arg5 context:(id)arg6;
- (id)initWithRPCManager:(id)arg1 authorizer:(id)arg2 interceptorsProvider:(id)arg3 transport:(id)arg4 context:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

