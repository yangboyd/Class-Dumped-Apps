//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIActivityIndicatorView, UIButton, UIDatePicker, UILabel, UIPickerView, UIScrollView, UIStackView, UISwitch, UITextField, UITextView, UIToolbar, UIView;

@interface _TtC4Hulu33ProfileEditCreationViewController : UIViewController
{
    // Error parsing type: , name: timedPageImpressionState
    // Error parsing type: , name: pageInstanceId
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: nameContainer
    // Error parsing type: , name: nameTextField
    // Error parsing type: , name: nameSubtitleLabel
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: createOrUpdateButton
    // Error parsing type: , name: kidsModeLabel
    // Error parsing type: , name: kidsModeSwitch
    // Error parsing type: , name: dateOfBirthContainer
    // Error parsing type: , name: dateOfBirthTextField
    // Error parsing type: , name: dateOfBirthSubtitleLabel
    // Error parsing type: , name: datePicker
    // Error parsing type: , name: genderContainer
    // Error parsing type: , name: genderTextField
    // Error parsing type: , name: genderSubtitleLabel
    // Error parsing type: , name: genderInputView
    // Error parsing type: , name: parentalPermissionContainer
    // Error parsing type: , name: parentalPermissionButton
    // Error parsing type: , name: parentalPermissionLabel
    // Error parsing type: , name: agreementTextView
    // Error parsing type: , name: editingInputAccessoryView
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: kidsModeStackView
    // Error parsing type: , name: kidsModeSubtitleLabel
    // Error parsing type: , name: profileEditCreationStackView
    // Error parsing type: , name: deleteButton
    // Error parsing type: , name: primaryProfileRestrictionLabel
    // Error parsing type: , name: inputFieldsStackView
    // Error parsing type: , name: titleSpacerView
    // Error parsing type: , name: middleSpacerViewHeightConstraint
    // Error parsing type: , name: bottomStackView
    // Error parsing type: , name: mode
    // Error parsing type: , name: accountManager
    // Error parsing type: , name: notificationCenter
    // Error parsing type: , name: editingProfile
    // Error parsing type: , name: backgroundGradient
    // Error parsing type: , name: birthDate
    // Error parsing type: , name: activeTextFieldRect
    // Error parsing type: , name: $__lazy_storage_$_dateFormatter
    // Error parsing type: , name: name
    // Error parsing type: , name: isKids
    // Error parsing type: , name: gender
    // Error parsing type: , name: previousGender
    // Error parsing type: , name: hasParentalPermission
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)textFieldDidChangeTextWithNotification:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShowWithNotification:(id)arg1;
- (void)birthDateInfoButtoPressed:(id)arg1;
- (void)genderInfoButtoPressed:(id)arg1;
- (void)parentalPermissionButtonPressed:(id)arg1;
- (void)editingDoneButtonPressed:(id)arg1;
- (void)editingCancelButtonPressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)datePickerValueChanged:(id)arg1;
- (void)createPressed:(id)arg1;
- (void)kidsModeSwitchChanged:(id)arg1;
- (void)deletePressed:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) UIStackView *bottomStackView; // @synthesize bottomStackView;
@property(nonatomic, retain) NSLayoutConstraint *middleSpacerViewHeightConstraint; // @synthesize middleSpacerViewHeightConstraint;
@property(nonatomic, retain) UIView *titleSpacerView; // @synthesize titleSpacerView;
@property(nonatomic, retain) UIStackView *inputFieldsStackView; // @synthesize inputFieldsStackView;
@property(nonatomic, retain) UILabel *primaryProfileRestrictionLabel; // @synthesize primaryProfileRestrictionLabel;
@property(nonatomic, retain) UIButton *deleteButton; // @synthesize deleteButton;
@property(nonatomic, retain) UIStackView *profileEditCreationStackView; // @synthesize profileEditCreationStackView;
@property(nonatomic, retain) UILabel *kidsModeSubtitleLabel; // @synthesize kidsModeSubtitleLabel;
@property(nonatomic, retain) UIStackView *kidsModeStackView; // @synthesize kidsModeStackView;
@property(nonatomic, retain) UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic, retain) UIToolbar *editingInputAccessoryView; // @synthesize editingInputAccessoryView;
@property(nonatomic, retain) UITextView *agreementTextView; // @synthesize agreementTextView;
@property(nonatomic, retain) UILabel *parentalPermissionLabel; // @synthesize parentalPermissionLabel;
@property(nonatomic, retain) UIButton *parentalPermissionButton; // @synthesize parentalPermissionButton;
@property(nonatomic, retain) UIStackView *parentalPermissionContainer; // @synthesize parentalPermissionContainer;
@property(nonatomic, retain) UIPickerView *genderInputView; // @synthesize genderInputView;
@property(nonatomic, retain) UILabel *genderSubtitleLabel; // @synthesize genderSubtitleLabel;
@property(nonatomic, retain) UITextField *genderTextField; // @synthesize genderTextField;
@property(nonatomic, retain) UIStackView *genderContainer; // @synthesize genderContainer;
@property(nonatomic, retain) UIDatePicker *datePicker; // @synthesize datePicker;
@property(nonatomic, retain) UILabel *dateOfBirthSubtitleLabel; // @synthesize dateOfBirthSubtitleLabel;
@property(nonatomic, retain) UITextField *dateOfBirthTextField; // @synthesize dateOfBirthTextField;
@property(nonatomic, retain) UIStackView *dateOfBirthContainer; // @synthesize dateOfBirthContainer;
@property(nonatomic, retain) UISwitch *kidsModeSwitch; // @synthesize kidsModeSwitch;
@property(nonatomic, retain) UILabel *kidsModeLabel; // @synthesize kidsModeLabel;
@property(nonatomic, retain) UIButton *createOrUpdateButton; // @synthesize createOrUpdateButton;
@property(nonatomic, retain) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator;
@property(nonatomic, retain) UILabel *nameSubtitleLabel; // @synthesize nameSubtitleLabel;
@property(nonatomic, retain) UITextField *nameTextField; // @synthesize nameTextField;
@property(nonatomic, retain) UIStackView *nameContainer; // @synthesize nameContainer;
@property(nonatomic, retain) UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, retain) UILabel *titleLabel; // @synthesize titleLabel;

@end

