//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentRequest.h>

@class NSString, WAPaymentUPIHandle;

@interface WAPaymentUPIEditDefaultCredentialRequest : WAPaymentRequest
{
    _Bool _defaultFlag;
    NSString *_bankCode;
    NSString *_providerType;
    NSString *_credentialId;
    NSString *_deviceId;
    NSString *_bankInfo;
    WAPaymentUPIHandle *_handle;
    NSString *_fbHandleId;
}

+ (id)identifier;
+ (long long)version;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *fbHandleId; // @synthesize fbHandleId=_fbHandleId;
@property(readonly, copy, nonatomic) WAPaymentUPIHandle *handle; // @synthesize handle=_handle;
@property(readonly, copy, nonatomic) NSString *bankInfo; // @synthesize bankInfo=_bankInfo;
@property(readonly, nonatomic) _Bool defaultFlag; // @synthesize defaultFlag=_defaultFlag;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
@property(readonly, copy, nonatomic) NSString *providerType; // @synthesize providerType=_providerType;
@property(readonly, copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDeviceId:(id)arg1 credentialId:(id)arg2 makeDefault:(_Bool)arg3 bankCode:(id)arg4 providerType:(id)arg5 bankInfo:(id)arg6 handle:(id)arg7 fbHandleId:(id)arg8;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

