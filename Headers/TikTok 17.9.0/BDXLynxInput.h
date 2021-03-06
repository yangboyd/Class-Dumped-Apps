//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LynxUI.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface BDXLynxInput : LynxUI <UITextFieldDelegate>
{
    _Bool _readonly;
    _Bool _autoHideKeyboard;
    _Bool _smartScroll;
    long long _maxLength;
    NSMutableDictionary *_placeholderAttributes;
    NSString *_placeHolderValue;
}

+ (id)__lynx_prop_config__28313;
+ (id)__lynx_prop_config__27912;
+ (id)__lynx_prop_config__27511;
+ (id)__lynx_prop_config__26710;
+ (id)__lynx_prop_config__2429;
+ (id)__lynx_prop_config__2368;
+ (id)__lynx_prop_config__2327;
+ (id)__lynx_prop_config__2286;
+ (id)__lynx_prop_config__2245;
+ (id)__lynx_prop_config__2204;
+ (id)__lynx_prop_config__2103;
+ (id)__lynx_prop_config__2062;
+ (id)__lynx_prop_config__1941;
+ (id)__lynx_prop_config__1890;
+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) _Bool smartScroll; // @synthesize smartScroll=_smartScroll;
@property(nonatomic) _Bool autoHideKeyboard; // @synthesize autoHideKeyboard=_autoHideKeyboard;
@property(retain, nonatomic) NSString *placeHolderValue; // @synthesize placeHolderValue=_placeHolderValue;
@property(retain, nonatomic) NSMutableDictionary *placeholderAttributes; // @synthesize placeholderAttributes=_placeholderAttributes;
@property(nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)emitEvent:(id)arg1 detail:(id)arg2;
- (void)setCaretColor:(id)arg1 requestReset:(_Bool)arg2;
- (void)setSmartScroll:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)setAutoHideKeyboard:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)setFocus:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)setPlaceHolderStyle:(id)arg1 requestReset:(_Bool)arg2;
- (void)setFontSize:(double)arg1 requestReset:(_Bool)arg2;
- (void)setColor:(id)arg1 requestReset:(_Bool)arg2;
- (void)setReadOnly:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)setMaxLen:(int)arg1 requestReset:(_Bool)arg2;
- (void)setDisabled:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)setPlaceHolder:(id)arg1 requestReset:(_Bool)arg2;
- (void)setPassword:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)setType:(id)arg1 requestReset:(_Bool)arg2;
- (void)setValue:(id)arg1 requestReset:(_Bool)arg2;
- (void)updateFrame:(struct CGRect)arg1 withPadding:(struct UIEdgeInsets)arg2 border:(struct UIEdgeInsets)arg3 withLayoutAnimation:(_Bool)arg4;
- (void)frameDidChange;
- (void)updateScrollView:(id)arg1 bottomInset:(double)arg2 notification:(id)arg3;
- (void)onWillShowKeyboardChanged:(_Bool)arg1 notification:(id)arg2;
- (void)onWillHideKeyboard:(id)arg1;
- (void)onWillShowKeyboard:(id)arg1;
- (id)createView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

