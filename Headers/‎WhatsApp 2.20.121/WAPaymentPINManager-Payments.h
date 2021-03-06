//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentPINManager.h>

@interface WAPaymentPINManager (Payments)
- (void)commitStagedBiometricKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)signWithBiometry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createBiometricKeyWithCompletion:(CDUnknownBlockType)arg1;
- (id)constructSignaturePayloadWithArgs:(id)arg1;
- (void)deleteBiometricKeyWithNotification:(_Bool)arg1 deleteUnderlyingKey:(_Bool)arg2;
- (void)deleteStagedBiometricKeyWithNotification:(_Bool)arg1;
- (void)deletePINExistenceWithNotification:(_Bool)arg1;
- (void)deleteAllKeys;
- (void)saveBiometryExistence;
- (void)savePINExistence;
@end

