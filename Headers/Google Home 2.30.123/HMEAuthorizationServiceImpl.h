//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAuthorizationService-Protocol.h"

@class NSString;
@protocol GIPAccountID, SSOAuthorization, SSOIdentity, SSOService;

@interface HMEAuthorizationServiceImpl : NSObject <HMEAuthorizationService>
{
    id <SSOService> _SSOService;
    id <GIPAccountID> _accountID;
    id <SSOIdentity> _identity;
    id <SSOAuthorization> _authorization;
}

+ (id)SSOScopes;
- (void).cxx_destruct;
@property(retain) id <SSOAuthorization> authorization; // @synthesize authorization=_authorization;
@property(retain) id <SSOIdentity> identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
- (id)authorizationWithDefaultScopes;
- (id)initWithIdentity:(id)arg1 SSOService:(id)arg2;
- (id)initWithAccountID:(id)arg1 SSOService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

