//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGTextFieldDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGLabel, IGTextButton, IGTextField, NSString, UILabel;
@protocol IGRegistrationAgeFallbackContainerViewDelegate;

@interface IGRegistrationAgeFallbackContainerView : UIView <IGTextFieldDelegate, UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    IGTextButton *_nextButton;
    IGTextButton *_enterDOBButton;
    IGLabel *_inlineErrorLabel;
    IGTextField *_ageField;
    UIView *_separatorView;
    struct CGRect _keyboardFrame;
    _Bool _isKeyboardShown;
    id <IGRegistrationAgeFallbackContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationAgeFallbackContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapEnterDOBButton;
- (void)_nextButtonTapped;
- (void)_hideInlineErrorMessage;
- (void)_showAgeInlineErrorMessage:(id)arg1;
- (void)_didTapBackgroundView;
- (id)_stringToDate:(id)arg1;
- (id)_ageToDOBCalculator:(id)arg1;
- (CDUnknownBlockType)_keyboardAnimationBlockWithShowKeyboard:(_Bool)arg1;
- (void)showKeyboard;
- (void)toggleKeyboardWithAnimationModel:(id)arg1 isKeyboardShown:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

