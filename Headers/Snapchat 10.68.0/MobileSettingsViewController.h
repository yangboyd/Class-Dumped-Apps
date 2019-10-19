//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCCountryCodePickerViewDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSettingsPasswordReauthViewControllerDelegate-Protocol.h"
#import "SCVerificationCodeTextFieldDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSTimer, SCAuthenticatedPhoneManager, SCCountryCodePickerView, SCLoadingScreen, SCPhoneNumberDefaultFormatter, SCPhoneNumberPlaceholderTextField, SCUserSession, SCVerificationCodeTextField, TTTAttributedLabel, UIButton, UILabel, UIScrollView, UISwitch, UITextField, UIView, UIWindow;
@protocol SCMobileSettingsDelegate;

@interface MobileSettingsViewController : SCGenericSettingsViewController <SCCountryCodePickerViewDelegate, UITextFieldDelegate, SCVerificationCodeTextFieldDelegate, UIScrollViewDelegate, TTTAttributedLabelDelegate, SCSettingsPasswordReauthViewControllerDelegate, SCPageNameLogging>
{
    UIWindow *_loadingScreenWindow;
    SCUserSession *_userSession;
    SCAuthenticatedPhoneManager *_authenticatedPhoneManager;
    SCPhoneNumberDefaultFormatter *_phoneNumberFormatter;
    _Bool _countryCodePickerVisible;
    _Bool _keyboardVisible;
    _Bool _keyboardWillBeVisible;
    _Bool _shouldResendCode;
    _Bool _isReverifyingPhoneNumber;
    id <SCMobileSettingsDelegate> _mobileSettingsDelegate;
    SCVerificationCodeTextField *_confirmationField;
    UIView *_searchableSwitchRowView;
    UITextField *_countryCodeField;
    SCCountryCodePickerView *_countryCodePicker;
    SCLoadingScreen *_loadingScreen;
    UILabel *_infoLabel;
    TTTAttributedLabel *_unlockAccountLabel;
    unsigned long long _registerState;
    UIScrollView *_scrollView;
    UISwitch *_searchableSwitch;
    NSString *_selectedCountryCode;
    long long _type;
    SCPhoneNumberPlaceholderTextField *_textField;
    NSTimer *_timerForCode;
    NSString *_timerCountdownString;
    UIButton *_verifyPhoneNumberBar;
    UIButton *_verifyCodeBar;
    UIButton *_reverifyPhoneNumberBar;
    UIButton *_confirmPhoneNumberBar;
    long long _verifyCodeTimeLimit;
    NSString *_initialFormattedMobile;
}

@property(copy, nonatomic) NSString *initialFormattedMobile; // @synthesize initialFormattedMobile=_initialFormattedMobile;
@property(nonatomic) _Bool isReverifyingPhoneNumber; // @synthesize isReverifyingPhoneNumber=_isReverifyingPhoneNumber;
@property(nonatomic) long long verifyCodeTimeLimit; // @synthesize verifyCodeTimeLimit=_verifyCodeTimeLimit;
@property(retain, nonatomic) UIButton *confirmPhoneNumberBar; // @synthesize confirmPhoneNumberBar=_confirmPhoneNumberBar;
@property(retain, nonatomic) UIButton *reverifyPhoneNumberBar; // @synthesize reverifyPhoneNumberBar=_reverifyPhoneNumberBar;
@property(retain, nonatomic) UIButton *verifyCodeBar; // @synthesize verifyCodeBar=_verifyCodeBar;
@property(retain, nonatomic) UIButton *verifyPhoneNumberBar; // @synthesize verifyPhoneNumberBar=_verifyPhoneNumberBar;
@property(retain, nonatomic) NSString *timerCountdownString; // @synthesize timerCountdownString=_timerCountdownString;
@property(retain, nonatomic) NSTimer *timerForCode; // @synthesize timerForCode=_timerForCode;
@property(retain, nonatomic) SCPhoneNumberPlaceholderTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool shouldResendCode; // @synthesize shouldResendCode=_shouldResendCode;
@property(retain, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
@property(retain, nonatomic) UISwitch *searchableSwitch; // @synthesize searchableSwitch=_searchableSwitch;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long registerState; // @synthesize registerState=_registerState;
@property(retain, nonatomic) TTTAttributedLabel *unlockAccountLabel; // @synthesize unlockAccountLabel=_unlockAccountLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) SCLoadingScreen *loadingScreen; // @synthesize loadingScreen=_loadingScreen;
@property(nonatomic) _Bool keyboardWillBeVisible; // @synthesize keyboardWillBeVisible=_keyboardWillBeVisible;
@property(nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) _Bool countryCodePickerVisible; // @synthesize countryCodePickerVisible=_countryCodePickerVisible;
@property(retain, nonatomic) SCCountryCodePickerView *countryCodePicker; // @synthesize countryCodePicker=_countryCodePicker;
@property(retain, nonatomic) UITextField *countryCodeField; // @synthesize countryCodeField=_countryCodeField;
@property(retain, nonatomic) UIView *searchableSwitchRowView; // @synthesize searchableSwitchRowView=_searchableSwitchRowView;
@property(retain, nonatomic) SCVerificationCodeTextField *confirmationField; // @synthesize confirmationField=_confirmationField;
@property(nonatomic) __weak id <SCMobileSettingsDelegate> mobileSettingsDelegate; // @synthesize mobileSettingsDelegate=_mobileSettingsDelegate;
- (void).cxx_destruct;
- (_Bool)shouldHideForgotPasswordButton;
- (id)getSettingsPasswordReauthTitle;
- (void)passwordCheckDidSucceed;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)checkIfExistingUserMobile:(id)arg1;
- (void)hideUnlockAccountLabel:(_Bool)arg1;
- (void)hideConfirmationField:(_Bool)arg1;
- (void)resetTimerCountdownText;
- (void)setVerifyCodeBarTitleForStates:(id)arg1;
- (_Bool)isSpecialType;
- (void)loadOntoNavigationController:(id)arg1;
- (void)handleTextFieldNormalState:(id)arg1;
- (void)handleTextFieldErrorState:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (_Bool)_phoneNumberTextField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3 countryCode:(id)arg4;
- (_Bool)phoneNumberUnchanged;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)countryCodePickerView:(id)arg1 didStopOnCountryCode:(id)arg2;
- (void)countryCodePickerView:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)hideCountryCodePicker;
- (void)showCountryCodePicker;
- (void)_clearLoadingScreenWindow;
- (void)_setLoadingScreenWindow;
- (void)hideLoadingScreen;
- (void)showLoadingScreen;
- (void)updateCountdownLabel:(id)arg1;
- (void)saveSuccess;
- (void)resetViewForVerifyFail;
- (id)getConfirmationCode;
- (void)verifyActivationCode;
- (void)verifyCodeBarPressed;
- (void)goToPasswordReauthScreen;
- (void)goToPasswordConfirmationScreen;
- (void)confirmPhoneNumberBarPressed;
- (void)verifyPhoneNumberBarPressed;
- (void)_setMobile:(_Bool)arg1;
- (void)presentVerificationCodeAlertView;
- (void)_updateSearchableAfterPhoneVerify;
- (void)verifyNumberDidSucceed:(id)arg1;
- (void)verifyNumberDidFail:(id)arg1;
- (void)registerNumberDidSucceed:(id)arg1;
- (void)registerNumberTentativeDidSucced:(id)arg1;
- (void)registerNumberDidFail:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeKeyboardObservers;
- (void)addKeyboardObservers;
- (void)leftButtonPressed;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)updateSearchSwitchState;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)getInitialSelectedCountryCode;
- (void)createCountryCodePicker;
- (void)createVerifyConfirmationCodeBar;
- (void)createConfirmationCodeTextFieldRow;
- (void)createConfirmPhoneNumberBar;
- (void)createReverifyPhoneNumberBar;
- (void)createVerifyPhoneNumberBar;
- (void)createPhoneNumberTextFieldRow;
- (void)createCountryCodeFieldRow;
- (void)_updateCountryCodeField;
- (void)createSearchableSwitchRow;
- (void)createBottomInfoLabel;
- (id)pageViewName;
- (id)initForType:(long long)arg1 userSession:(id)arg2 authenticatedPhoneManager:(id)arg3;
- (id)initWithUserSession:(id)arg1 authenticatedPhoneManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

