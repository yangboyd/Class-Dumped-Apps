//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "OGLPrivacyPolicyToSFooterButtonDelegate-Protocol.h"

@class OGLPrivacyPolicyToSFooterButton, UIColor;
@protocol OGLPrivacyPolicyToSFooterViewDelegate;

@interface OGLPrivacyPolicyToSFooterView : UIView <OGLPrivacyPolicyToSFooterButtonDelegate>
{
    OGLPrivacyPolicyToSFooterButton *_privacyPolicyButton;
    OGLPrivacyPolicyToSFooterButton *_termsOfServiceButton;
    OGLPrivacyPolicyToSFooterButton *_customLinkButton;
    UIView *_dividerView;
    UIView *_firstCircleView;
    UIView *_secondCircleView;
    UIView *_buttonsView;
    _Bool _fixedTopInset;
    _Bool _showDivider;
    id <OGLPrivacyPolicyToSFooterViewDelegate> _delegate;
    UIColor *_buttonHighlightColor;
    UIColor *_textColor;
}

+ (id)buttonWithFont:(id)arg1 titleStringId:(int)arg2 horizontalAlignment:(long long)arg3;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *buttonHighlightColor; // @synthesize buttonHighlightColor=_buttonHighlightColor;
@property(nonatomic) _Bool showDivider; // @synthesize showDivider=_showDivider;
@property(nonatomic) _Bool fixedTopInset; // @synthesize fixedTopInset=_fixedTopInset;
@property(nonatomic) __weak id <OGLPrivacyPolicyToSFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapButton:(id)arg1 buttonType:(int)arg2;
- (_Bool)isButtonAnimating:(id)arg1;
- (_Bool)hasCustomLinkButton;
- (void)didTapCustomLinkForView:(id)arg1;
- (void)didTapTermsOfService:(id)arg1;
- (void)didTapPrivacyPolicy:(id)arg1;
- (void)applyTheme;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *dividerColor;
- (void)setTitleColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

