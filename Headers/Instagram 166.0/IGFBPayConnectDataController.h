//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBPayConnectNetworking-Protocol.h>

@class IGUserSession, NSString;

@interface IGFBPayConnectDataController : NSObject <FBPayConnectNetworking>
{
    IGUserSession *_session;
    _Bool _shouldUseSharedResponseFragment;
    _Bool _shouldUseSharedQuery;
}

- (void).cxx_destruct;
- (void)convertPayPalConvertMutationWithLoggingSessionID:(id)arg1 paymentType:(id)arg2 billingAgreementID:(id)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)unlinkFBPayAccountMutationWithLoggingSessionID:(id)arg1 paymentType:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)linkFBPayAccountMutationWithLoggingSessionID:(id)arg1 paymentType:(id)arg2 targetAccountID:(id)arg3 platformTrustToken:(id)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)fetchBottomSheetWithLoggingSessionID:(id)arg1 bottomSheetType:(long long)arg2 paymentType:(id)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)_fetchPayPalConsentBottomSheetWithLoggingSessionID:(id)arg1 paymentType:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)_fetchDisconnectBottomSheetWithLoggingSessionID:(id)arg1 paymentType:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)_fetchConnectBottomSheetWithLoggingSessionID:(id)arg1 paymentType:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (id)initWithIGUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

