//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CRPTService;

@interface CRPTSmartSetupService : NSObject
{
    id <CRPTService> _cryptauthService;
    _Bool _useEnrollment2;
    _Bool _useFailureRecovery;
}

+ (id)smartSetupService;
- (void).cxx_destruct;
@property(nonatomic) _Bool useFailureRecovery; // @synthesize useFailureRecovery=_useFailureRecovery;
@property(readonly, nonatomic) _Bool useEnrollment2; // @synthesize useEnrollment2=_useEnrollment2;
- (void)startFailureRecoveryEnrollment;
- (void)ensureEnrollmentWithCallback:(CDUnknownBlockType)arg1;
- (long long)timeSinceScreenlockEnable;
- (long long)incrementCounterForUserID:(id)arg1 error:(id *)arg2;
- (id)identityAssertionMessageFromPayload:(id)arg1 userID:(id)arg2;
- (id)encodedPublicKeyForUserID:(id)arg1;
- (id)initWithService:(id)arg1;

@end

