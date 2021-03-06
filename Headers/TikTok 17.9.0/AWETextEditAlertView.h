//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class AWEQuickEditBottomView, NSString, UIButton, UILabel, UITextField;

@interface AWETextEditAlertView : UIView <UITextFieldDelegate>
{
    _Bool _isAnimating;
    UIView *_baseView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_textBackgroundView;
    UITextField *_textField;
    UILabel *_tipLabel;
    AWEQuickEditBottomView *_bottomView;
    NSString *_defaultValue;
    NSString *_emptyToast;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _cancelBlock;
    UIButton *_clearButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) NSString *emptyToast; // @synthesize emptyToast=_emptyToast;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) AWEQuickEditBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *textBackgroundView; // @synthesize textBackgroundView=_textBackgroundView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)clickClearBtn:(id)arg1;
- (void)clickConfirmBtn;
- (void)clickCancelBtn;
- (void)_dismiss;
- (void)dismiss;
- (void)showOnView:(id)arg1;
- (void)didUpdateKeyboardFrame:(struct CGRect)arg1 willShowKeyboard:(_Bool)arg2;
- (void)handleKeyboardHideNoti:(id)arg1;
- (void)handleKeyboardShowNoti:(id)arg1;
- (void)handlePanViewGes:(id)arg1;
- (void)handleTapViewGes:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (void)p_setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

