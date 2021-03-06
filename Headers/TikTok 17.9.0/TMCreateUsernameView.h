//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class MASConstraint, NSString, UIImageView, UITextField;

@interface TMCreateUsernameView : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    UIImageView *_stateIconView;
    long long _state;
    CDUnknownBlockType _didChangeBlock;
    UIView *_bottomLine;
    NSString *_placeholder;
    long long _maxLength;
    long long _lastOperationType;
    MASConstraint *_textFieldRight;
    MASConstraint *_textFieldRightWithStateIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MASConstraint *textFieldRightWithStateIcon; // @synthesize textFieldRightWithStateIcon=_textFieldRightWithStateIcon;
@property(retain, nonatomic) MASConstraint *textFieldRight; // @synthesize textFieldRight=_textFieldRight;
@property(nonatomic) long long lastOperationType; // @synthesize lastOperationType=_lastOperationType;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(copy, nonatomic) CDUnknownBlockType didChangeBlock; // @synthesize didChangeBlock=_didChangeBlock;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIImageView *stateIconView; // @synthesize stateIconView=_stateIconView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)setBottomLineHidden:(_Bool)arg1;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (struct CGSize)intrinsicContentSize;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)editingChangedAction:(id)arg1;
- (id)getAttributedPlaceholder:(id)arg1;
- (id)initWithPlaceholder:(id)arg1 maxInputLength:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

