//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/QTMCollectionViewController.h>

#import <Module_Framework/GHKPickerDelegate-Protocol.h>
#import <Module_Framework/GOOMultilineTextFieldDelegate-Protocol.h>
#import <Module_Framework/GOOTextFieldContentViewDelegate-Protocol.h>
#import <Module_Framework/GOOTextFieldValidator-Protocol.h>
#import <Module_Framework/QTMCollectionViewModelDelegate-Protocol.h>

@class GHKAppBar, GHKConfig, GHKLegalText, GHKPhoneNumberFieldContentViewObject, GHKPicker, GHKReceiverConfig, GHKRequestCallbackSubmitter, GHKUserStates, GOOMultilineTextFieldContentViewObject, GOOTextFieldContentViewObject, NSArray, NSString, SUPActivityIndicationView, SUPMetricsReporter, UIBarButtonItem;
@protocol GHKRequestCallbackViewControllerDelegate;

@interface GHKRequestCallbackViewController : QTMCollectionViewController <GHKPickerDelegate, GOOMultilineTextFieldDelegate, GOOTextFieldContentViewDelegate, GOOTextFieldValidator, QTMCollectionViewModelDelegate>
{
    UIBarButtonItem *_submitButton;
    NSArray *_contentViewObjects;
    double _keyboardHeight;
    _Bool _isCurrentUIPortrait;
    id <GHKRequestCallbackViewControllerDelegate> _delegate;
    GHKConfig *_config;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
    GHKRequestCallbackSubmitter *_requestCallbackSubmitter;
    GHKUserStates *_userStates;
    GOOTextFieldContentViewObject *_contactNameTextField;
    GHKPhoneNumberFieldContentViewObject *_phoneNumberTextField;
    GOOMultilineTextFieldContentViewObject *_issueDescriptionTextField;
    GHKPicker *_countryInfoPicker;
    SUPActivityIndicationView *_activityIndicationView;
    GHKLegalText *_legalText;
    GHKAppBar *_appBar;
}

+ (id)objectionRequires;
@property(retain, nonatomic) GHKAppBar *appBar; // @synthesize appBar=_appBar;
@property(retain, nonatomic) GHKLegalText *legalText; // @synthesize legalText=_legalText;
@property(retain, nonatomic) SUPActivityIndicationView *activityIndicationView; // @synthesize activityIndicationView=_activityIndicationView;
@property(retain, nonatomic) GHKPicker *countryInfoPicker; // @synthesize countryInfoPicker=_countryInfoPicker;
@property(retain, nonatomic) GOOMultilineTextFieldContentViewObject *issueDescriptionTextField; // @synthesize issueDescriptionTextField=_issueDescriptionTextField;
@property(retain, nonatomic) GHKPhoneNumberFieldContentViewObject *phoneNumberTextField; // @synthesize phoneNumberTextField=_phoneNumberTextField;
@property(retain, nonatomic) GOOTextFieldContentViewObject *contactNameTextField; // @synthesize contactNameTextField=_contactNameTextField;
@property(retain, nonatomic) GHKUserStates *userStates; // @synthesize userStates=_userStates;
@property(retain, nonatomic) GHKRequestCallbackSubmitter *requestCallbackSubmitter; // @synthesize requestCallbackSubmitter=_requestCallbackSubmitter;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <GHKRequestCallbackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initCountryPickerData;
- (void)updateSubmitButtonState;
- (void)updatePhoneNumber;
- (void)dismissCountryPicker;
- (void)dismissKeyboard;
- (void)deviceOrientationChanged:(id)arg1;
- (void)adjustScrollViewContentInsetForKeyboardHeight:(double)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)didTapBackButton;
- (void)didTapSubmitRequestButton;
- (void)layoutRequestCallbackForm;
- (id)phoneNumberWithDialingCode;
- (void)presentCountryPicker;
- (void)removeCountryPickerFromView;
- (void)handleSubmissionFailureWithError:(id)arg1;
- (void)handleSubmissionWithName:(id)arg1 phoneNumber:(id)arg2 issueDescription:(id)arg3;
- (void)handleExitFromViewControllerWithExitStatus:(long long)arg1;
- (void)setTextFieldValidationErrorResult:(id)arg1 errorText:(id)arg2;
- (_Bool)isValidContactName;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)validateEventsForTextField:(id)arg1;
- (id)validationResultsForTextField:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textFieldContentSizeChanged:(id)arg1 size:(struct CGSize)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)pickerEntrySelected:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

