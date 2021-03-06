//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, RCTTouchHandler, UILabel, UIView;

@interface DCDChatInput : UITextView
{
    _Bool _shouldShowCursor;
    _Bool _isSettingText;
    _Bool _isRefreshingFirstResponder;
    CDUnknownBlockType _onBeginFocus;
    CDUnknownBlockType _onEndBlur;
    CDUnknownBlockType _onSelectionChange;
    CDUnknownBlockType _onChangeText;
    CDUnknownBlockType _onChangeContentSize;
    CDUnknownBlockType _onPasteImage;
    UILabel *_placeholderLabel;
    NSString *_markAsSpoilerTitle;
    UIView *_customKeyboard;
    RCTTouchHandler *_customKeyboardTouchHandler;
}

@property(retain, nonatomic) RCTTouchHandler *customKeyboardTouchHandler; // @synthesize customKeyboardTouchHandler=_customKeyboardTouchHandler;
@property(retain, nonatomic) UIView *customKeyboard; // @synthesize customKeyboard=_customKeyboard;
@property(nonatomic) _Bool isRefreshingFirstResponder; // @synthesize isRefreshingFirstResponder=_isRefreshingFirstResponder;
@property(nonatomic) _Bool isSettingText; // @synthesize isSettingText=_isSettingText;
@property(nonatomic) _Bool shouldShowCursor; // @synthesize shouldShowCursor=_shouldShowCursor;
@property(retain, nonatomic) NSString *markAsSpoilerTitle; // @synthesize markAsSpoilerTitle=_markAsSpoilerTitle;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(copy, nonatomic) CDUnknownBlockType onPasteImage; // @synthesize onPasteImage=_onPasteImage;
@property(copy, nonatomic) CDUnknownBlockType onChangeContentSize; // @synthesize onChangeContentSize=_onChangeContentSize;
@property(copy, nonatomic) CDUnknownBlockType onChangeText; // @synthesize onChangeText=_onChangeText;
@property(copy, nonatomic) CDUnknownBlockType onSelectionChange; // @synthesize onSelectionChange=_onSelectionChange;
@property(copy, nonatomic) CDUnknownBlockType onEndBlur; // @synthesize onEndBlur=_onEndBlur;
@property(copy, nonatomic) CDUnknownBlockType onBeginFocus; // @synthesize onBeginFocus=_onBeginFocus;
- (void).cxx_destruct;
- (void)markAsSpoiler;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)setText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)paste:(id)arg1;
- (_Bool)shouldChangeTextInRange;
- (void)didChangeSelection;
- (void)didEndEditing:(id)arg1;
- (void)didBeginEditing:(id)arg1;
- (void)didChangeText:(id)arg1;
- (void)openSystemKeyboard;
- (void)closeCustomKeyboard;
- (void)openCustomKeyboard;
- (void)refreshFirstResponder;
- (void)refreshCaretRectForCurrentPosition;
- (void)checkPlaceholder;
- (_Bool)shouldHidePlaceholder;
- (struct CGRect)placeholderRectThatFits:(struct CGRect)arg1;
- (void)invalidate;
- (_Bool)isValid;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (void)resetFrame:(double)arg1;
- (void)layoutSubviews;
- (void)setupPlaceholder;
- (id)init;

@end

