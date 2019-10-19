//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSNumber, NSString, UIActivityIndicatorView, UILabel, UILocalizedTextField, UIStackView;
@protocol NFUISearchBarDelegateProtocol><UITextFieldDelegate;

@interface NFUISearchBar : UIView <UITextFieldDelegate>
{
    _Bool _isSearching;
    _Bool _legacyMode;
    _Bool _textFieldHasFocus;
    _Bool _searchIsActive;
    id <NFUISearchBarDelegateProtocol><UITextFieldDelegate> _delegate;
    double _debounceTime;
    UIView *_container;
    UIStackView *_outerStackView;
    UIStackView *_stackView;
    UILabel *_searchIconLabel;
    UILocalizedTextField *_textField;
    UILabel *_hintLabel;
    UILabel *_clearLabel;
    UILabel *_cancelLabel;
    UIActivityIndicatorView *_activityIndicator;
    NSString *_lastInputKeyCode;
    NSNumber *_lastCommandId;
    NSNumber *_lastFocusId;
    double _centerOffset;
    struct CGSize _searchIconSize;
    struct CGSize _hintLabelSize;
}

@property(nonatomic) _Bool searchIsActive; // @synthesize searchIsActive=_searchIsActive;
@property(nonatomic) _Bool textFieldHasFocus; // @synthesize textFieldHasFocus=_textFieldHasFocus;
@property(nonatomic) double centerOffset; // @synthesize centerOffset=_centerOffset;
@property(nonatomic) struct CGSize hintLabelSize; // @synthesize hintLabelSize=_hintLabelSize;
@property(nonatomic) struct CGSize searchIconSize; // @synthesize searchIconSize=_searchIconSize;
@property(retain, nonatomic) NSNumber *lastFocusId; // @synthesize lastFocusId=_lastFocusId;
@property(retain, nonatomic) NSNumber *lastCommandId; // @synthesize lastCommandId=_lastCommandId;
@property(retain, nonatomic) NSString *lastInputKeyCode; // @synthesize lastInputKeyCode=_lastInputKeyCode;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UILabel *clearLabel; // @synthesize clearLabel=_clearLabel;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILocalizedTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *searchIconLabel; // @synthesize searchIconLabel=_searchIconLabel;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIStackView *outerStackView; // @synthesize outerStackView=_outerStackView;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) _Bool legacyMode; // @synthesize legacyMode=_legacyMode;
@property(nonatomic) double debounceTime; // @synthesize debounceTime=_debounceTime;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) __weak id <NFUISearchBarDelegateProtocol><UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toggleSearchIfNeeded;
@property(copy, nonatomic) NSString *searchTerm;
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)clearText;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)shouldShowClearLabel:(_Bool)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)informDelegateEditingChanged:(id)arg1;
- (void)searchFieldEditingChanged:(id)arg1;
- (void)shouldShowCancelLabel:(_Bool)arg1;
- (void)setTextFieldColor:(id)arg1;
- (void)shouldCenterSearchLabel:(_Bool)arg1;
- (void)shouldShowActivityIndicator:(_Bool)arg1;
- (void)searchFieldEditingDidEnd:(id)arg1;
- (void)searchFieldEditingDidBegin:(id)arg1;
- (void)handleCancelButtonTapped:(id)arg1;
- (void)handleClearLabelTapped:(id)arg1;
- (void)handleStackviewTapped:(id)arg1;
- (void)handleImageTapped:(id)arg1;
- (void)setupConstraints;
- (void)centerSearchLabels;
- (void)layoutActivityIndicator;
- (void)commonInit;
- (void)setBlurEffect:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

