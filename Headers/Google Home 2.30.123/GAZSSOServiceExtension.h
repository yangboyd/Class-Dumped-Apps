//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GAZConfiguration, GAZDateProvider, GAZService, NSData, NSDate, NSMutableArray;
@protocol SSOService;

@interface GAZSSOServiceExtension : NSObject
{
    GAZDateProvider *_dateProvider;
    NSDate *_nextEnrollmentCheckDate;
    _Bool _delayedEnrollment;
    NSMutableArray *_delayedEnrollmentCompletionBlocks;
    _Bool _expectsDeviceToken;
    GAZService *_authzenService;
    id <SSOService> _SSOService;
    GAZConfiguration *_configuration;
}

+ (id)extensionWithSSOService:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) GAZConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(nonatomic) _Bool expectsDeviceToken; // @synthesize expectsDeviceToken=_expectsDeviceToken;
@property(retain, nonatomic) GAZService *authzenService; // @synthesize authzenService=_authzenService;
- (void)expungeDelayedEnrollmentCompletionBlocks;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)identityListChanged:(id)arg1;
@property(copy, nonatomic) NSData *deviceToken;
- (void)startFailureRecoveryEnrollmentForUserIDs:(id)arg1;
- (void)updateAuthzenEnrollments;
- (void)updateAuthzenEnrollmentsWithCompletion:(CDUnknownBlockType)arg1;
- (id)appSpecificOTPForUserID:(id)arg1 package:(id)arg2;
- (id)initWithSSOService:(id)arg1 authzenService:(id)arg2;
- (long long)timeSinceScreenlockEnable;
- (long long)incrementAuthzenCounterForUserID:(id)arg1 error:(id *)arg2;
- (id)identityAssertionMessageFromPayload:(id)arg1 usingKeysForUser:(id)arg2;
@property(readonly, nonatomic) NSData *encodedUserPublicKey;

@end

