//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class DocosMentioningTextView, MDCButton, NSString, UILabel, UIStackView;
@protocol DocosPEDraftCommentViewDelegate;

@interface DocosPEDraftCommentView : UIView <UITextViewDelegate>
{
    _Bool _shouldExcludeBottomSafeAreaInset;
    _Bool _shouldIgnoreKeyboardHeight;
    _Bool _isMentionDropdownVisible;
    id <DocosPEDraftCommentViewDelegate> delegate;
    MDCButton *_assignmentCheckbox;
    UIStackView *_footerStackView;
    UIStackView *_draftStackView;
    UIView *_backgroundView;
    UIStackView *_mainStackView;
    UILabel *_assignToLabel;
    MDCButton *_saveCommentButton;
    DocosMentioningTextView *_textView;
    UILabel *_placeholderLabel;
    MDCButton *_addPersonButton;
    MDCButton *_assigneeDropdownButton;
    UIView *_addPersonButtonContainer;
    unsigned long long _maximumNumberOfLines;
}

+ (id)assigneeDropdownButton;
+ (id)saveCommentButton;
+ (id)addPersonButton;
+ (id)placeholderLabel;
+ (id)docosMentioningTextView;
+ (id)assignmentCheckbox;
+ (id)assignToLabel;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMentionDropdownVisible; // @synthesize isMentionDropdownVisible=_isMentionDropdownVisible;
@property(nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(retain, nonatomic) UIView *addPersonButtonContainer; // @synthesize addPersonButtonContainer=_addPersonButtonContainer;
@property(retain, nonatomic) MDCButton *assigneeDropdownButton; // @synthesize assigneeDropdownButton=_assigneeDropdownButton;
@property(retain, nonatomic) MDCButton *addPersonButton; // @synthesize addPersonButton=_addPersonButton;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) DocosMentioningTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MDCButton *saveCommentButton; // @synthesize saveCommentButton=_saveCommentButton;
@property(retain, nonatomic) UILabel *assignToLabel; // @synthesize assignToLabel=_assignToLabel;
@property(retain, nonatomic) UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIStackView *draftStackView; // @synthesize draftStackView=_draftStackView;
@property(retain, nonatomic) UIStackView *footerStackView; // @synthesize footerStackView=_footerStackView;
@property(retain, nonatomic) MDCButton *assignmentCheckbox; // @synthesize assignmentCheckbox=_assignmentCheckbox;
@property(nonatomic) _Bool shouldIgnoreKeyboardHeight; // @synthesize shouldIgnoreKeyboardHeight=_shouldIgnoreKeyboardHeight;
@property(nonatomic) _Bool shouldExcludeBottomSafeAreaInset; // @synthesize shouldExcludeBottomSafeAreaInset=_shouldExcludeBottomSafeAreaInset;
@property(nonatomic) __weak id <DocosPEDraftCommentViewDelegate> delegate; // @synthesize delegate;
- (void)textViewDidChange:(id)arg1;
- (void)assigneeDropdownButtonTapped:(id)arg1;
- (void)addPersonButtonTapped:(id)arg1;
- (void)saveCommentButtonTapped:(id)arg1;
- (void)adjustBottomInset;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)adjustTextViewHeight;
- (void)makeConstraints;
- (void)reloadInputViews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setAssigneeDropdownButtonVisible:(_Bool)arg1;
- (void)setMentionDropdownVisible:(_Bool)arg1;
- (void)setPlaceholderLabelText:(id)arg1;
- (void)setDocosMentionVC:(id)arg1;
- (void)setAssignToLabelText:(id)arg1 checked:(_Bool)arg2;
- (_Bool)isAssigmentCheckboxChecked;
@property(nonatomic, getter=isSaveCommentButtonEnabled) _Bool saveCommentButtonEnabled;
- (_Bool)hasProvisionallyEnteredText;
@property(retain, nonatomic) NSString *text;
- (_Bool)isAssignmentCheckboxSelected;
- (void)setAssignmentCheckboxSelected:(_Bool)arg1;
- (id)accessibilityElements;
- (void)toggleAssignmentCheckbox:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

