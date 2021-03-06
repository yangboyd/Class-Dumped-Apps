//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAStsWebViewControllerDelegate-Protocol.h"

@class MSAConfigManager, MSACookieManager, MSAEnvironmentInternal, MSAOnlineIDConfiguration, MSAStorageCache, MSATicketManager, MSATokenCache, MSATransferTokenManager, MSAUserKeyManager, MSAUserKeyStorage, NSString;
@protocol OS_dispatch_queue;

@interface MSAAccountManager : NSObject <MSAStsWebViewControllerDelegate>
{
    MSAOnlineIDConfiguration *_configuration;
    MSAEnvironmentInternal *_environment;
    MSATicketManager *_ticketManager;
    MSAConfigManager *_configManager;
    MSAStorageCache *_storage;
    MSATokenCache *_tokenCache;
    MSAUserKeyManager *_keyManager;
    MSAUserKeyStorage *_userKeyStorage;
    MSACookieManager *_cookieManager;
    MSATransferTokenManager *_transferTokenManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (void)webViewController:(id)arg1 didFailSTSAuthenticationWithError:(id)arg2;
- (void)webViewController:(id)arg1 didSucceedSTSAuthenticationWithAccountInternal:(id)arg2 scope:(id)arg3 flowToken:(id)arg4 useNgc:(_Bool)arg5;
- (_Bool)updatedAccountReceivedFromWebView:(id)arg1 account:(id)arg2;
- (void)failWithError:(id)arg1 scope:(id)arg2 account:(id)arg3 existingWebView:(id)arg4 accountPickerAccounts:(id)arg5 failureDelegate:(id)arg6 accountSuccessBlock:(CDUnknownBlockType)arg7 ticketSuccessBlock:(CDUnknownBlockType)arg8 viewController:(id)arg9;
- (void)failWithError:(id)arg1 failureDelegate:(id)arg2;
- (void)failWithError:(id)arg1 failureDelegate:(id)arg2 viewController:(id)arg3;
- (void)failWithError:(id)arg1 scope:(id)arg2 failureDelegate:(id)arg3 ticketSuccessBlock:(CDUnknownBlockType)arg4;
- (void)failWithError:(id)arg1 accountPickerAccounts:(id)arg2 failureDelegate:(id)arg3 accountSuccessBlock:(CDUnknownBlockType)arg4;
- (void)failWithError:(id)arg1 failureDelegate:(id)arg2 accountSuccessBlock:(CDUnknownBlockType)arg3;
- (void)failWithError:(id)arg1 webView:(id)arg2;
- (void)getTicketImplementationWithOptions:(id)arg1 skipCache:(_Bool)arg2 webView:(id)arg3 failureDelegate:(id)arg4 successBlock:(CDUnknownBlockType)arg5;
- (void)getAccountFromTransferToken:(id)arg1 failureDelegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (_Bool)getProofOfPossessionTokensForAccount:(id)arg1 tokens:(out id *)arg2 error:(out id *)arg3;
- (void)getUserKeyForAccount:(id)arg1 KeyPurpose:(id)arg2 keyId:(id)arg3 loginProofToken:(id)arg4 failureDelegate:(id)arg5 successBlock:(CDUnknownBlockType)arg6;
- (void)getTicketForAccount:(id)arg1 scope:(id)arg2 failureDelegate:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (void)getAccountPickerInternalWithExclusionList:(id)arg1 scenario:(unsigned long long)arg2 failureDelegate:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (void)getAccountPickerForAuthenticatorWithExclusionList:(id)arg1 scenario:(unsigned long long)arg2 failureDelegate:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (void)getAccountPickerViewControllerWithExclusionList:(id)arg1 failureDelegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)getSignUpViewControllerWithSignUpOptions:(id)arg1 failureDelegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)getSignInViewControllerWithSignInOptions:(id)arg1 failureDelegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)getSignOutViewControllerForAccount:(id)arg1 customizedMessage:(id)arg2 failureDelegate:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (void)getSignOutViewControllerForAccount:(id)arg1 failureDelegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (_Bool)getAccountWithCid:(id)arg1 account:(out id *)arg2 error:(out id *)arg3;
- (void)getAccountWithFailureDelegate:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

