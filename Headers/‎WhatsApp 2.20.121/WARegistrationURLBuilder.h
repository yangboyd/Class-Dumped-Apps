//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, WAPhoneNumber;

@interface WARegistrationURLBuilder : NSObject
{
    WAPhoneNumber *_phoneNumber;
    _Bool _encryptQueryParams;
    NSURL *_proxyURL;
    NSArray *_baseParams;
}

+ (id)registrationDomainProbeURL;
+ (id)twoFactorAuthenticationURL;
+ (id)sameDeviceCheckURL;
+ (id)codeRequestURL;
+ (id)registrationURL;
+ (id)encodedWAUUID:(id)arg1;
- (void).cxx_destruct;
- (id)twoFactorResetWithWipeTokenRequestURL:(id)arg1;
- (id)twoFactorResetViaEmailRequestURL;
- (id)twoFactorVerifyRequestURLWithCode:(id)arg1;
- (id)registrationRequestURLWithVerificationCode:(id)arg1 entryMethod:(int)arg2;
- (id)verificationCodeRequestURLWithMethod:(id)arg1 mcc:(id)arg2 mnc:(id)arg3 jailbroken:(_Bool)arg4;
- (id)sameDeviceCheckRequestURLWithOfflineExposures:(id)arg1 offlineMetrics:(id)arg2;
- (void)disableProxying;
- (void)enableProxyingWithProxyURL:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 language:(id)arg2 locale:(id)arg3 fbUUID:(id)arg4 waUUID:(id)arg5 chatPrivateKey:(id)arg6 e2eKeyBundle:(id)arg7 smbClientSignedVNameCertData:(id)arg8;

@end

