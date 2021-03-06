//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/GOOTextFieldValidator-Protocol.h>
#import <Module_Framework/YTChannelCreationFormResponderProvider-Protocol.h>
#import <Module_Framework/YTChannelCreationFormResponseViewDelegate-Protocol.h>
#import <Module_Framework/YTPageStyleControllerObserver-Protocol.h>
#import <Module_Framework/YTRendererController-Protocol.h>

@class GIMMe, NSDateComponents, NSDateFormatter, NSMutableArray, NSString, YTChannelCreationFormResponseView, YTDatePickerView, YTIChannelCreationFormRenderer, YTIDropdownRenderer, YTIFormattedString, YTPageStyleController;
@protocol YTResponder;

@interface YTChannelCreationFormResponseViewController : UIViewController <GOOTextFieldValidator, YTChannelCreationFormResponderProvider, YTChannelCreationFormResponseViewDelegate, YTPageStyleControllerObserver, YTRendererController>
{
    YTIChannelCreationFormRenderer *_channelCreationFormRenderer;
    YTChannelCreationFormResponseView *_responseView;
    NSMutableArray *_thumbnailControllers;
    NSDateComponents *_birthdayComponents;
    NSDateFormatter *_dateFormatter;
    YTDatePickerView *_datePicker;
    YTIDropdownRenderer *_genderDropdownOptions;
    NSString *_selectedGender;
    YTIFormattedString *_missingNameErrorMessage;
    YTIFormattedString *_missingBirthdayErrorMessage;
    _Bool _pendingRequest;
    YTPageStyleController *_pageStyleController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (_Bool)inputFieldsHaveValidationErrors;
- (_Bool)areBirthdayGenderInputsVisible;
- (_Bool)areNameInputsVisible;
- (void)performActionForButtonRenderer:(id)arg1;
- (void)handleChannelCreationResponseEvent:(id)arg1;
- (void)setPendingRequest:(_Bool)arg1;
- (void)setChannelCreationFormErrorMessage:(id)arg1;
- (void)loadThumbnails;
- (void)pageStyleControllerPageStyleDidChange;
- (id)validationResultsForTextField:(id)arg1;
- (void)datePickerDidSelectDone;
- (void)datePickerDidSelectCancel;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)showGenderActionSheet;
- (void)selectGender:(id)arg1;
- (void)showBirthdayDatePicker;
- (void)loadWithModel:(id)arg1;
- (id)gender;
- (unsigned long long)birthYear;
- (unsigned long long)birthMonth;
- (unsigned long long)birthDay;
- (id)lastName;
- (id)firstName;
- (_Bool)shouldShowGender;
- (_Bool)shouldShowBirthYear;
- (_Bool)shouldShowBirthday;
- (_Bool)shouldShowName;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

