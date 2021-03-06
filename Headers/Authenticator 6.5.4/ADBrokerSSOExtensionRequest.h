//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADBrokerAppRequesting-Protocol.h"

@class ADBOperation, ASAuthorizationProviderExtensionAuthorizationRequest, MSIDBaseBrokerOperationRequest, NSArray, NSString;

@interface ADBrokerSSOExtensionRequest : NSObject <ADBrokerAppRequesting>
{
    ASAuthorizationProviderExtensionAuthorizationRequest *_authorizationRequest;
    long long _ssoExtensionMode;
    MSIDBaseBrokerOperationRequest *_brokerOperationRequest;
    ADBOperation *_brokerOperation;
    NSArray *_bundleIdentifierWhiteList;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *bundleIdentifierWhiteList; // @synthesize bundleIdentifierWhiteList=_bundleIdentifierWhiteList;
@property(retain, nonatomic) ADBOperation *brokerOperation; // @synthesize brokerOperation=_brokerOperation;
@property(retain, nonatomic) MSIDBaseBrokerOperationRequest *brokerOperationRequest; // @synthesize brokerOperationRequest=_brokerOperationRequest;
@property(readonly, nonatomic) long long ssoExtensionMode; // @synthesize ssoExtensionMode=_ssoExtensionMode;
@property(retain, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
- (id)bundleIdWhiteListWithKey:(id)arg1 request:(id)arg2;
- (id)bundleIdWhiteListFromRequest:(id)arg1;
- (id)preProcessRequest:(id)arg1;
- (_Bool)needsUI;
- (_Bool)isCancellable;
- (void)logRequest;
- (_Bool)shouldShowAccountPicker;
- (id)initWithSSOExtensionRequest:(id)arg1 ssoExtensionMode:(long long)arg2 ssoModeForBrowser:(long long)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

