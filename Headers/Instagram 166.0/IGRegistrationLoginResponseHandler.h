//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGAlertDialogViewDelegate-Protocol.h>

@class IGAuthenticator, IGRegistrationLogger, IGRetroRegistrationLoginAutoCompleteUser, NSString, NSURL, UIViewController;
@protocol IGAPIClient, IGRegistrationLoginResponseHandlerDelegate;

@interface IGRegistrationLoginResponseHandler : NSObject <IGAlertDialogViewDelegate>
{
    UIViewController *_hostViewController;
    IGRegistrationLogger *_logger;
    IGAuthenticator *_authenticator;
    NSString *_username;
    NSString *_stepName;
    id <IGAPIClient> _networker;
    _Bool _shouldHandleBadPasswordWithAlternativeLogin;
    NSURL *_dialogFooterLinkURL;
    IGRetroRegistrationLoginAutoCompleteUser *_autocompleteFBUser;
    id <IGRegistrationLoginResponseHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationLoginResponseHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGRetroRegistrationLoginAutoCompleteUser *autocompleteFBUser; // @synthesize autocompleteFBUser=_autocompleteFBUser;
- (void)_sendPasswordResetEmailForUser:(id)arg1;
- (void)_displayToastMessage:(id)arg1;
- (void)_lookupEmailForUsernameCallback;
- (void)_loginEmailCallback;
- (void)_signUpFailedUsernameButtonTapped;
- (void)_deletedAccountCallbackWithStopDeletionToken:(id)arg1;
- (void)_forgotPasswordFlowCallback;
- (void)_facebookLoginCallback;
- (void)_openURL:(id)arg1;
- (void)_showFBFirstPartyLoginDialog;
- (void)_callbackForButton:(id)arg1;
- (void)_showAlertDialogForError:(id)arg1;
- (void)_handleBadPasswordWithAlternativeLoginEnabledWithResponse:(id)arg1 error:(id)arg2;
- (void)_triggerAlternativeLoginFlowIfNecessaryWithResponse:(id)arg1 error:(id)arg2 username:(id)arg3;
- (void)_handleBadPasswordLoginWithResponse:(id)arg1 error:(id)arg2;
- (void)_handleDeletedAccountLoginWithResponse:(id)arg1 error:(id)arg2;
- (id)_getErrorButtonTitle:(id)arg1;
- (void)alertDialogViewDidTapFooterLabel:(id)arg1;
- (void)handleLoginErrors:(id)arg1 response:(id)arg2 notification:(id)arg3 currentUserSession:(id)arg4 username:(id)arg5 alternativeLoginEnabled:(_Bool)arg6;
- (void)handleLoginErrors:(id)arg1 response:(id)arg2 notification:(id)arg3 currentUserSession:(id)arg4 username:(id)arg5;
- (id)initWithHostViewController:(id)arg1 stepName:(id)arg2 autocompleteFBUser:(id)arg3 networker:(id)arg4 authenticator:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

