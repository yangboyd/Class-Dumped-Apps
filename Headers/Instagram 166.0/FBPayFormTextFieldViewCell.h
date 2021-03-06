//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBPayFormCellBase.h>

#import <FBSharedFramework/UITextFieldDelegate-Protocol.h>

@class FBPayFormCellViewModel, NSString, UITextField;

@interface FBPayFormTextFieldViewCell : FBPayFormCellBase <UITextFieldDelegate>
{
    UITextField *_textField;
    FBPayFormCellViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)viewModel;
- (unsigned long long)accessibilityTraits;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)_setFieldValue:(id)arg1;
- (void)_setFieldName:(id)arg1;
- (void)_setupTextField;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)setViewModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

