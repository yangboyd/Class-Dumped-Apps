//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <drive_extension_framework/GHKChatMessageInputView-Protocol.h>
#import <drive_extension_framework/GOOMultilineTextFieldDelegate-Protocol.h>

@class GHKMessageInputShadowView, GOOMultilineTextField, NSString, UIButton;
@protocol GHKChatMessageInputViewDelegate;

@interface GHKChatMessageInputViewGM2 : UIView <GOOMultilineTextFieldDelegate, GHKChatMessageInputView>
{
    UIView *_filledBackgroundView;
    GHKMessageInputShadowView *_containerShadowView;
    GOOMultilineTextField *_textField;
    UIButton *_sendButton;
    double _keyboardHeight;
    _Bool _animating;
    id <GHKChatMessageInputViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GHKChatMessageInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resolveBackgroundColor;
- (void)updateFrameWithKeyboardHeight:(double)arg1;
- (void)didTapSendButton;
- (struct UIEdgeInsets)superViewSafeAreaInsets;
- (void)textFieldContentSizeChanged:(id)arg1 size:(struct CGSize)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)uiView;
- (_Bool)hasTextEntered;
- (void)animateToOffset:(double)arg1 duration:(double)arg2 animationCurve:(long long)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

