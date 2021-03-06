//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <LinkKit/PLKCustomizable-Protocol.h>
#import <LinkKit/PLKDevelopmentModeInfoDataSource-Protocol.h>
#import <LinkKit/PLKExitHandler-Protocol.h>
#import <LinkKit/PLKFlowCoordinated-Protocol.h>
#import <LinkKit/UITextFieldDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PLKCredentialPaneViewModel, PLKFlowContext, PLKStepBar, PLKTextField, UIBarButtonItem, UIControl, UILabel, UIScrollView, UITextField, UIView;
@protocol PLKFlowCoordinator;

@interface PLKCredentialPaneViewController : UIViewController <UITextFieldDelegate, PLKCustomizable, PLKFlowCoordinated, PLKExitHandler, PLKDevelopmentModeInfoDataSource>
{
    _Bool _didChangeInputField;
    _Bool _isSmallScreen;
    id <PLKFlowCoordinator> _flowCoordinator;
    PLKFlowContext *_flowContext;
    PLKCredentialPaneViewModel *_viewModel;
    PLKTextField *_usernameField;
    PLKTextField *_passwordField;
    PLKTextField *_pinField;
    PLKStepBar *_stepBar;
    UIBarButtonItem *_nextFieldButton;
    UIBarButtonItem *_previousFieldButton;
    UIBarButtonItem *_submitButton;
    UIBarButtonItem *_resetPasswordButton;
    UIScrollView *_scrollView;
    UIControl *_passwordManagerControl;
    UILabel *_poweredByPlaidLabel;
    NSLayoutConstraint *_poweredByPlaidToPasswordConstraint;
    NSLayoutConstraint *_poweredByPlaidToPinConstraint;
    UITextField *_currentField;
    UIView *_inputAccessoryStepBar;
    id _plk_showKeyboardObserver;
    id _plk_hideKeyboardObserver;
    id _plk_willChangeKeyboardObserver;
    id _plk_didChangeKeyboardObserver;
}

- (void).cxx_destruct;
@property(retain) id plk_didChangeKeyboardObserver; // @synthesize plk_didChangeKeyboardObserver=_plk_didChangeKeyboardObserver;
@property(retain) id plk_willChangeKeyboardObserver; // @synthesize plk_willChangeKeyboardObserver=_plk_willChangeKeyboardObserver;
@property(retain) id plk_hideKeyboardObserver; // @synthesize plk_hideKeyboardObserver=_plk_hideKeyboardObserver;
@property(retain) id plk_showKeyboardObserver; // @synthesize plk_showKeyboardObserver=_plk_showKeyboardObserver;
@property __weak UIView *inputAccessoryStepBar; // @synthesize inputAccessoryStepBar=_inputAccessoryStepBar;
@property _Bool isSmallScreen; // @synthesize isSmallScreen=_isSmallScreen;
@property _Bool didChangeInputField; // @synthesize didChangeInputField=_didChangeInputField;
@property __weak UITextField *currentField; // @synthesize currentField=_currentField;
@property(retain, nonatomic) NSLayoutConstraint *poweredByPlaidToPinConstraint; // @synthesize poweredByPlaidToPinConstraint=_poweredByPlaidToPinConstraint;
@property(retain, nonatomic) NSLayoutConstraint *poweredByPlaidToPasswordConstraint; // @synthesize poweredByPlaidToPasswordConstraint=_poweredByPlaidToPasswordConstraint;
@property(retain, nonatomic) UILabel *poweredByPlaidLabel; // @synthesize poweredByPlaidLabel=_poweredByPlaidLabel;
@property(retain, nonatomic) UIControl *passwordManagerControl; // @synthesize passwordManagerControl=_passwordManagerControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIBarButtonItem *resetPasswordButton; // @synthesize resetPasswordButton=_resetPasswordButton;
@property(retain, nonatomic) UIBarButtonItem *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UIBarButtonItem *previousFieldButton; // @synthesize previousFieldButton=_previousFieldButton;
@property(retain, nonatomic) UIBarButtonItem *nextFieldButton; // @synthesize nextFieldButton=_nextFieldButton;
@property(retain, nonatomic) PLKStepBar *stepBar; // @synthesize stepBar=_stepBar;
@property(retain, nonatomic) PLKTextField *pinField; // @synthesize pinField=_pinField;
@property(retain, nonatomic) PLKTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) PLKTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(retain, nonatomic) PLKCredentialPaneViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PLKFlowContext *flowContext; // @synthesize flowContext=_flowContext;
@property(nonatomic) __weak id <PLKFlowCoordinator> flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
- (void)didExitLinkFlow;
- (void)willShowExitPane;
- (void)submitCredentials;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)adjustContentOffsetForTextField:(id)arg1;
- (_Bool)enablePreviousButtonForTextField:(id)arg1;
- (_Bool)enableNextButtonForTextField:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)findLoginFrom1Password:(id)arg1;
- (void)selectPreviousField:(id)arg1;
- (void)selectNextField:(id)arg1;
- (void)didTapForgotPassword:(id)arg1;
- (void)didTapSubmit:(id)arg1;
- (void)customizeWithConfiguration:(id)arg1;
- (id)devModeLabels;
- (id)devModeInfo;
- (void)setPinHidden:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

