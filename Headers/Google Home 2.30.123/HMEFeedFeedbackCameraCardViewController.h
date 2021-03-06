//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarViewController.h"

#import "HMEFeedCheckboxViewDelegate-Protocol.h"
#import "HMEFeedRadioButtonPickerViewDelegate-Protocol.h"

@class HMEFeedCheckboxView, HMEFeedFeedbackCameraCardViewModel, HMEFeedImageView, HMEFeedRadioButtonPickerView, HMEStatusViewController, MDCMultilineTextField, MDCTextInputControllerOutlinedTextArea, NSLayoutConstraint, NSString, UILabel, UIScrollView, UIStackView, UITapGestureRecognizer, UIView;
@protocol HMEFeedFeedbackCameraCardViewControllerDelegate;

@interface HMEFeedFeedbackCameraCardViewController : HMEAppBarViewController <HMEFeedRadioButtonPickerViewDelegate, HMEFeedCheckboxViewDelegate>
{
    id <HMEFeedFeedbackCameraCardViewControllerDelegate> _delegate;
    HMEFeedFeedbackCameraCardViewModel *_cameraCardViewModel;
    UIScrollView *_scrollView;
    UIStackView *_verticalStackView;
    UILabel *_feedbackTitleLabel;
    HMEFeedImageView *_feedbackImageView;
    UIStackView *_infoCorrectFormStackView;
    UILabel *_infoFormTitleLabel;
    HMEFeedRadioButtonPickerView *_infoFormCorrectConfirmationPickerView;
    UILabel *_infoFormOptionLabel;
    HMEFeedCheckboxView *_infoFormOptionContentCheckboxView;
    HMEFeedCheckboxView *_infoFormOptionOtherCheckboxView;
    MDCMultilineTextField *_infoFormFeedbackInputTextField;
    MDCTextInputControllerOutlinedTextArea *_infoFormFeedbackInputTextFieldController;
    UIView *_infoFormFooterDividerView;
    UIStackView *_infoIncorrectFormStackView;
    UILabel *_foundUsefulInfoFormLabel;
    HMEFeedRadioButtonPickerView *_foundUsefulInfoFormPickerView;
    UILabel *_additionalFeedbackTitleLabel;
    MDCMultilineTextField *_additionalFeedbackTextField;
    MDCTextInputControllerOutlinedTextArea *_additionalFeedbackTextFieldController;
    UIView *_foundUsefulFormFooterDividerView;
    UILabel *_donateClipLabel;
    HMEFeedCheckboxView *_donateClipCheckboxView;
    NSLayoutConstraint *_verticalStackViewBottomConstraint;
    HMEStatusViewController *_statusViewController;
    UITapGestureRecognizer *_keyboardDismissTapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *keyboardDismissTapGesture; // @synthesize keyboardDismissTapGesture=_keyboardDismissTapGesture;
@property(readonly, nonatomic) HMEStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) NSLayoutConstraint *verticalStackViewBottomConstraint; // @synthesize verticalStackViewBottomConstraint=_verticalStackViewBottomConstraint;
@property(readonly, nonatomic) HMEFeedCheckboxView *donateClipCheckboxView; // @synthesize donateClipCheckboxView=_donateClipCheckboxView;
@property(readonly, nonatomic) UILabel *donateClipLabel; // @synthesize donateClipLabel=_donateClipLabel;
@property(readonly, nonatomic) UIView *foundUsefulFormFooterDividerView; // @synthesize foundUsefulFormFooterDividerView=_foundUsefulFormFooterDividerView;
@property(readonly, nonatomic) MDCTextInputControllerOutlinedTextArea *additionalFeedbackTextFieldController; // @synthesize additionalFeedbackTextFieldController=_additionalFeedbackTextFieldController;
@property(readonly, nonatomic) MDCMultilineTextField *additionalFeedbackTextField; // @synthesize additionalFeedbackTextField=_additionalFeedbackTextField;
@property(readonly, nonatomic) UILabel *additionalFeedbackTitleLabel; // @synthesize additionalFeedbackTitleLabel=_additionalFeedbackTitleLabel;
@property(readonly, nonatomic) HMEFeedRadioButtonPickerView *foundUsefulInfoFormPickerView; // @synthesize foundUsefulInfoFormPickerView=_foundUsefulInfoFormPickerView;
@property(readonly, nonatomic) UILabel *foundUsefulInfoFormLabel; // @synthesize foundUsefulInfoFormLabel=_foundUsefulInfoFormLabel;
@property(readonly, nonatomic) UIStackView *infoIncorrectFormStackView; // @synthesize infoIncorrectFormStackView=_infoIncorrectFormStackView;
@property(readonly, nonatomic) UIView *infoFormFooterDividerView; // @synthesize infoFormFooterDividerView=_infoFormFooterDividerView;
@property(readonly, nonatomic) MDCTextInputControllerOutlinedTextArea *infoFormFeedbackInputTextFieldController; // @synthesize infoFormFeedbackInputTextFieldController=_infoFormFeedbackInputTextFieldController;
@property(readonly, nonatomic) MDCMultilineTextField *infoFormFeedbackInputTextField; // @synthesize infoFormFeedbackInputTextField=_infoFormFeedbackInputTextField;
@property(readonly, nonatomic) HMEFeedCheckboxView *infoFormOptionOtherCheckboxView; // @synthesize infoFormOptionOtherCheckboxView=_infoFormOptionOtherCheckboxView;
@property(readonly, nonatomic) HMEFeedCheckboxView *infoFormOptionContentCheckboxView; // @synthesize infoFormOptionContentCheckboxView=_infoFormOptionContentCheckboxView;
@property(readonly, nonatomic) UILabel *infoFormOptionLabel; // @synthesize infoFormOptionLabel=_infoFormOptionLabel;
@property(readonly, nonatomic) HMEFeedRadioButtonPickerView *infoFormCorrectConfirmationPickerView; // @synthesize infoFormCorrectConfirmationPickerView=_infoFormCorrectConfirmationPickerView;
@property(readonly, nonatomic) UILabel *infoFormTitleLabel; // @synthesize infoFormTitleLabel=_infoFormTitleLabel;
@property(readonly, nonatomic) UIStackView *infoCorrectFormStackView; // @synthesize infoCorrectFormStackView=_infoCorrectFormStackView;
@property(readonly, nonatomic) HMEFeedImageView *feedbackImageView; // @synthesize feedbackImageView=_feedbackImageView;
@property(readonly, nonatomic) UILabel *feedbackTitleLabel; // @synthesize feedbackTitleLabel=_feedbackTitleLabel;
@property(readonly, nonatomic) UIStackView *verticalStackView; // @synthesize verticalStackView=_verticalStackView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) HMEFeedFeedbackCameraCardViewModel *cameraCardViewModel; // @synthesize cameraCardViewModel=_cameraCardViewModel;
@property(nonatomic) __weak id <HMEFeedFeedbackCameraCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissKeyboard:(id)arg1;
- (long long)selectedIndexForRadioButtonPickerView:(id)arg1;
- (void)loadFeedbackImage;
- (void)willHideKeyboard:(id)arg1;
- (void)willShowKeyboard:(id)arg1;
- (void)checkboxView:(id)arg1 didChangeCheckedState:(_Bool)arg2;
- (void)pickerView:(id)arg1 didChangeSelectionToIndex:(long long)arg2;
- (void)didTapSendButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initializeLayoutConstraints;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

