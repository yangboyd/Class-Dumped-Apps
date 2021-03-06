//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "Roomba900SetupAdvancedWiFiSettingsViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CheckboxView, NSString, PrimaryLinkButton, UILabel, UIStackView, UITextField, UIView;
@protocol WrongWifiPasswordDelegate;

@interface WifiPasswordViewController : BaseViewController <UITextFieldDelegate, Roomba900SetupAdvancedWiFiSettingsViewControllerDelegate>
{
    _Bool _showWrongPasswordError;
    id <WrongWifiPasswordDelegate> _wrongPasswordDelegate;
    UILabel *_headerLabel;
    UILabel *_wifiNameLabel;
    UIStackView *_stackView;
    UIView *_invalidPasswordContainerView;
    UILabel *_invalidPasswordLabel;
    UITextField *_passwordField;
    CheckboxView *_checkboxView;
    UILabel *_noPasswordLabel;
    PrimaryLinkButton *_advancedSettingsButton;
    UIStackView *_noPasswordStackView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIStackView *noPasswordStackView; // @synthesize noPasswordStackView=_noPasswordStackView;
@property(nonatomic) __weak PrimaryLinkButton *advancedSettingsButton; // @synthesize advancedSettingsButton=_advancedSettingsButton;
@property(nonatomic) __weak UILabel *noPasswordLabel; // @synthesize noPasswordLabel=_noPasswordLabel;
@property(nonatomic) __weak CheckboxView *checkboxView; // @synthesize checkboxView=_checkboxView;
@property(nonatomic) __weak UITextField *passwordField; // @synthesize passwordField=_passwordField;
@property(nonatomic) __weak UILabel *invalidPasswordLabel; // @synthesize invalidPasswordLabel=_invalidPasswordLabel;
@property(nonatomic) __weak UIView *invalidPasswordContainerView; // @synthesize invalidPasswordContainerView=_invalidPasswordContainerView;
@property(nonatomic) __weak UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak UILabel *wifiNameLabel; // @synthesize wifiNameLabel=_wifiNameLabel;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) _Bool showWrongPasswordError; // @synthesize showWrongPasswordError=_showWrongPasswordError;
@property(nonatomic) __weak id <WrongWifiPasswordDelegate> wrongPasswordDelegate; // @synthesize wrongPasswordDelegate=_wrongPasswordDelegate;
- (void)configureAccessibility;
- (void)handleApplicationBecameActive;
- (void)handleApplicationResignActive;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)cancel;
- (void)confirmCancelWrongPassword;
- (void)advancedWiFiSettingsViewController:(id)arg1 didFinishWithWiFiInfo:(id)arg2;
- (void)dismissAdvancedSettings;
- (void)goToAdvancedSettings;
- (void)updateWifiPassword:(id)arg1;
- (void)handleContinue;
- (void)handleCheckboxSelected;
- (void)textFieldValueDidChange:(id)arg1;
- (void)hideInvalidPasswordView;
- (void)showInvalidPasswordView;
- (void)initUIValues;
- (void)initUIStyles;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

