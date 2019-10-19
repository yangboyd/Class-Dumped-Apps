//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCOAuth2ContentViewDelegate-Protocol.h"

@class NSArray, NSString, SCCFSOAuthParamsRequestCoordinator, SCLoadingIndicatorView, SCSnapKitLogger, SCUserSession;

@interface SCOAuth2ApprovalViewController : UIViewController <SCOAuth2ContentViewDelegate>
{
    NSString *_approvalToken;
    NSString *_clientId;
    NSString *_oauth2ClientName;
    NSString *_redirectUrl;
    _Bool _isConnected;
    NSString *_appIconUrl;
    NSArray *_scopesRequested;
    NSString *_codeVerifier;
    _Bool _isCFSFlow;
    SCUserSession *_userSession;
    SCSnapKitLogger *_logger;
    SCLoadingIndicatorView *_loadingIndicatorView;
    CDUnknownBlockType _completionHandler;
    SCCFSOAuthParamsRequestCoordinator *_oauthParamsRequestCoordinator;
}

- (void).cxx_destruct;
- (void)didPressOtherButton:(id)arg1 view:(id)arg2 permissions:(id)arg3;
- (void)didPressContinueButton:(id)arg1 view:(id)arg2 permissions:(id)arg3;
- (void)_stopLoadingIndicator;
- (void)_startLoadingIndicator;
- (id)_largeBitmojiNetworkImage;
- (id)_smallBitmojiNetworkImage;
- (id)_createViewModel;
- (id)_createCellViewModels;
- (void)_goToOAuth2ClientAppWithRedirectUrl:(id)arg1 authCode:(id)arg2 state:(id)arg3 isSuccess:(_Bool)arg4;
- (void)_snapKitConnectWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_sendDenialRequestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_sendOAuthParamsRequestWithClientId:(id)arg1 state:(id)arg2 codeVerifier:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)_handleApprovalRequestResponse:(id)arg1 responseDictionary:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)_sendApprovalRequestWithPermissions:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_showErrorMessage:(id)arg1;
- (void)_didDenialAuthorizationWithPermissions:(id)arg1;
- (void)_didConfirmAuthorizationWithPermissions:(id)arg1;
- (void)loadView;
- (id)initWithDataModel:(id)arg1 userSession:(id)arg2 logger:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

