//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIColor, UIFont, UILabel;

@interface JVFloatLabeledTextField : UITextField
{
    _Bool _isFloatingLabelFontDefault;
    _Bool _animateEvenIfNotFirstResponder;
    _Bool _adjustsClearButtonRect;
    _Bool _alwaysFloatLabel;
    UILabel *_floatingLabel;
    double _floatingLabelYPadding;
    double _floatingLabelXPadding;
    double _placeholderYPadding;
    UIFont *_floatingLabelFont;
    UIColor *_floatingLabelTextColor;
    UIColor *_floatingLabelActiveTextColor;
    double _floatingLabelShowAnimationDuration;
    double _floatingLabelHideAnimationDuration;
    struct CGRect _editingRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect editingRect; // @synthesize editingRect=_editingRect;
@property(nonatomic) _Bool alwaysFloatLabel; // @synthesize alwaysFloatLabel=_alwaysFloatLabel;
@property(nonatomic) _Bool adjustsClearButtonRect; // @synthesize adjustsClearButtonRect=_adjustsClearButtonRect;
@property(nonatomic) double floatingLabelHideAnimationDuration; // @synthesize floatingLabelHideAnimationDuration=_floatingLabelHideAnimationDuration;
@property(nonatomic) double floatingLabelShowAnimationDuration; // @synthesize floatingLabelShowAnimationDuration=_floatingLabelShowAnimationDuration;
@property(nonatomic) _Bool animateEvenIfNotFirstResponder; // @synthesize animateEvenIfNotFirstResponder=_animateEvenIfNotFirstResponder;
@property(retain, nonatomic) UIColor *floatingLabelActiveTextColor; // @synthesize floatingLabelActiveTextColor=_floatingLabelActiveTextColor;
@property(retain, nonatomic) UIColor *floatingLabelTextColor; // @synthesize floatingLabelTextColor=_floatingLabelTextColor;
@property(retain, nonatomic) UIFont *floatingLabelFont; // @synthesize floatingLabelFont=_floatingLabelFont;
@property(nonatomic) double placeholderYPadding; // @synthesize placeholderYPadding=_placeholderYPadding;
@property(nonatomic) double floatingLabelXPadding; // @synthesize floatingLabelXPadding=_floatingLabelXPadding;
@property(nonatomic) double floatingLabelYPadding; // @synthesize floatingLabelYPadding=_floatingLabelYPadding;
@property(readonly, nonatomic) UILabel *floatingLabel; // @synthesize floatingLabel=_floatingLabel;
- (void)layoutSubviews;
- (void)setTextAlignment:(long long)arg1;
- (double)maxTopInset;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setPlaceholder:(id)arg1 floatingTitle:(id)arg2;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFloatingLabelText:(id)arg1;
- (void)setLabelOriginForTextAlignment;
- (void)hideFloatingLabel:(_Bool)arg1;
- (void)showFloatingLabel:(_Bool)arg1;
- (id)labelActiveColor;
- (void)updateDefaultFloatingLabelFont;
- (id)defaultFloatingLabelFont;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

