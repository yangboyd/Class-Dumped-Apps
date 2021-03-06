//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (Airbnb)
+ (id)airbnbErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)airbnbErrorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;
+ (id)stp_cardErrorProcessingErrorUserMessage;
+ (id)stp_unexpectedErrorMessage;
+ (id)stp_cardErrorDeclinedUserMessage;
+ (id)stp_cardErrorExpiredCardUserMessage;
+ (id)stp_cardErrorInvalidExpYearUserMessage;
+ (id)stp_cardErrorInvalidExpMonthUserMessage;
+ (id)stp_cardInvalidCVCUserMessage;
+ (id)stp_cardErrorInvalidNumberUserMessage;
+ (id)stp_ephemeralKeyDecodingError;
+ (id)stp_genericConnectionError;
+ (id)stp_genericFailedToParseResponseError;
+ (id)stp_errorFromStripeResponse:(id)arg1;
+ (id)fbErrorWithSystemAccountStoreDeniedError:(id)arg1 isCancellation:(_Bool *)arg2;
+ (id)fbErrorFromServerError:(id)arg1;
+ (id)fbErrorFromReturnURLParameters:(id)arg1;
+ (id)fbErrorForSystemPasswordChange:(id)arg1;
+ (id)fbErrorForFailedLoginWithCode:(long long)arg1 innerError:(id)arg2;
+ (id)fbErrorForFailedLoginWithCode:(long long)arg1;
+ (id)_stds_jweError;
+ (id)_stds_timedOutError;
+ (id)_stds_missingJSONFieldError:(id)arg1;
+ (id)_stds_invalidJSONFieldError:(id)arg1;
+ (id)mtl_modelErrorWithException:(id)arg1;
+ (_Bool)bsg_fillError:(id *)arg1 withDomain:(id)arg2 code:(long long)arg3 description:(id)arg4;
+ (id)bsg_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)branchErrorWithCode:(long long)arg1 localizedMessage:(id)arg2;
+ (id)branchErrorWithCode:(long long)arg1 error:(id)arg2;
+ (id)branchErrorWithCode:(long long)arg1;
+ (id)branchErrorWithCode:(long long)arg1 error:(id)arg2 localizedMessage:(id)arg3;
+ (id)messageForCode:(long long)arg1;
+ (id)bncErrorDomain;
- (_Bool)isAirbnbErrorNamed:(id)arg1;
- (_Bool)isAirbnbPhoneNumberNotExistError;
- (_Bool)isAirbnbGhostedUserError;
- (_Bool)isAirbnbNoAccessError;
- (_Bool)isAirbnbExistingSocialAccountError;
- (_Bool)isAirbnbExistingAccountError;
- (_Bool)isAirbnbInvalidCredentialsError;
- (_Bool)isAirbnbIncorrectVerificationCodeError;
@property(nonatomic, readonly) _Bool isNoInternetConnectionError;
- (id)gt3_addGTErrorCodeToUserInfo:(long long)arg1;
@end

