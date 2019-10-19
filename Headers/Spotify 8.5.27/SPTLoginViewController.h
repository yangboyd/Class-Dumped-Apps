//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTLoginViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginTheme, SPTLoginView, SPTLoginViewModel, SPTProgressView;
@protocol SPTPageContainer;

@interface SPTLoginViewController : UIViewController <SPTNavigationControllerNavigationBarState, UITextFieldDelegate, SPTLoginViewModelDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTLoginTheme *_theme;
    SPTLoginViewModel *_viewModel;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) SPTLoginViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (void)hideRequestLoginLinkInProgressState;
- (void)showRequestLoginLinkInProgressState;
- (void)loginWithoutPasswordButtonTap:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)viewModelDidSucceedRequestMagicLink:(id)arg1;
- (void)viewModel:(id)arg1 shouldShowKeyboard:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailRequestMagicLinkWithError:(id)arg2;
- (void)viewModelDidStartRequestMagicLink:(id)arg1;
- (void)viewModelDidCompleteLoginWithSuccess:(id)arg1;
- (void)viewModel:(id)arg1 didCompleteLoginWithError:(id)arg2;
- (void)viewModelDidCompleteLoginWithNetworkDisabledError:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)enableLoginButtonIfNeeded;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)hideLoginInProgressState;
- (void)showLoginInProgressState;
- (void)login;
- (void)updateLoginFormWithUserName:(id)arg1 password:(id)arg2;
- (void)onePasswordLoginButtonTapped:(id)arg1;
- (void)loginButtonTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLoginView *view; // @dynamic view;

@end

