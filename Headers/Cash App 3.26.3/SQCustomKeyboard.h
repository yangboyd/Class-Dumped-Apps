//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIInputViewAudioFeedback-Protocol.h"

@class NSArray, NSDictionary, NSString, NSTimer, SQCustomKeyboardPlaceholderInputView, UITextField;
@protocol SQKeyboardContentView;

@interface SQCustomKeyboard : UIView <UIInputViewAudioFeedback>
{
    _Bool _enabled;
    _Bool _playsInputClicks;
    _Bool _secureTextEntry;
    _Bool _nibLoaded;
    _Bool _restoringSystemKeyboard;
    _Bool _superviewWasClippingToBounds;
    _Bool _keyboardClicksEnabledInSettings;
    UIView<SQKeyboardContentView> *_contentView;
    UITextField *_exclusiveTextField;
    NSDictionary *_keyboardAttributes;
    NSTimer *_backspaceTimer;
    NSArray *_keyboardKeyControls;
    NSString *_lastChangeText;
    SQCustomKeyboardPlaceholderInputView *_placeholderInputView;
    UITextField *_textField;
}

+ (id)defaultCustomKeyboard;
@property(nonatomic) _Bool keyboardClicksEnabledInSettings; // @synthesize keyboardClicksEnabledInSettings=_keyboardClicksEnabledInSettings;
@property(nonatomic) _Bool superviewWasClippingToBounds; // @synthesize superviewWasClippingToBounds=_superviewWasClippingToBounds;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool restoringSystemKeyboard; // @synthesize restoringSystemKeyboard=_restoringSystemKeyboard;
@property(retain, nonatomic) SQCustomKeyboardPlaceholderInputView *placeholderInputView; // @synthesize placeholderInputView=_placeholderInputView;
@property(retain, nonatomic) NSString *lastChangeText; // @synthesize lastChangeText=_lastChangeText;
@property(retain, nonatomic) NSArray *keyboardKeyControls; // @synthesize keyboardKeyControls=_keyboardKeyControls;
@property(retain, nonatomic) NSTimer *backspaceTimer; // @synthesize backspaceTimer=_backspaceTimer;
@property(nonatomic) _Bool nibLoaded; // @synthesize nibLoaded=_nibLoaded;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(copy, nonatomic) NSDictionary *keyboardAttributes; // @synthesize keyboardAttributes=_keyboardAttributes;
@property(nonatomic) _Bool playsInputClicks; // @synthesize playsInputClicks=_playsInputClicks;
@property(retain, nonatomic) UITextField *exclusiveTextField; // @synthesize exclusiveTextField=_exclusiveTextField;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIView<SQKeyboardContentView> *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_calculateKeyboardClicksEnabledInSettings;
- (void)_playInputClick;
- (void)_updatePlaceholderInputViewFrame;
- (void)_dismissKeyboard;
- (void)_updateTextFieldWithTappedKeyboardKey:(id)arg1;
- (void)_backspaceTimerFired;
- (void)_releasedBackspaceButton:(id)arg1;
- (void)_pressedDownBackspaceButton:(id)arg1;
- (void)_tappedKeyboardKey:(id)arg1;
- (void)_reloadInterfaceFromTextFieldIfTextChanged;
- (void)_textFieldDidChangeTextNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (_Bool)isAccessibilityEnabledForButton:(id)arg1;
- (_Bool)unpairWithTextField:(id)arg1 restoreSystemKeyboard:(_Bool)arg2;
- (_Bool)pairWithTextField:(id)arg1;
@property(readonly, nonatomic) _Bool enableInputClicksWhenVisible;
- (_Bool)showsSystemKeyboardShadow;
- (void)didTapClearButton;
- (void)didTapDismissButton;
- (void)didTapReturnButton;
- (void)didTapBackspaceButton;
- (void)didTapButton:(id)arg1;
- (void)restoreSystemKeyboard;
- (void)reloadInterfaceFromTextField;
- (id)defaultKeyboardAttributes;
@property(readonly, nonatomic) struct CGRect keyboardWindowFrame;
- (void)willMoveToSuperview:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)SQCustomKeyboard_loaded;
- (void)awakeFromNib;
- (void)_SQCustomKeyboard_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

