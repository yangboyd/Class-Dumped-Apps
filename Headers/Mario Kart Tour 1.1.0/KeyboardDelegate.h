//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSLayoutConstraint, NSString, UITextField, UITextView, UIToolbar, UIView;

@interface KeyboardDelegate : NSObject <UITextFieldDelegate, UITextViewDelegate>
{
    UITextView *textView;
    UIToolbar *viewToolbar;
    NSArray *viewToolbarItems;
    NSLayoutConstraint *widthConstraint;
    UITextField *textField;
    UIToolbar *fieldToolbar;
    NSArray *fieldToolbarItems;
    UIView *inputView;
    UIView *editView;
    struct CGRect _area;
    NSString *initialText;
    long long keyboardType;
    _Bool _multiline;
    _Bool _inputHidden;
    _Bool _active;
    int _status;
    _Bool _rotating;
    _Bool _canGetSelection;
    NSString *text;
    struct _NSRange selection;
    struct CGRect area;
}

+ (void)FinishReorientation;
+ (void)StartReorientation;
+ (id)Instance;
+ (void)Initialize;
@property(readonly, nonatomic) _Bool canGetSelection; // @synthesize canGetSelection=_canGetSelection;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)shouldHideInput:(_Bool)arg1;
@property(retain, nonatomic, getter=getText, setter=setText:) NSString *text; // @synthesize text;
- (void)setTextWorkaround:(id)arg1 text:(id)arg2;
@property(readonly, nonatomic, getter=querySelection) struct _NSRange selection; // @synthesize selection;
@property(readonly, nonatomic, getter=queryArea) struct CGRect area; // @synthesize area;
- (void)positionInput:(struct CGRect)arg1 x:(float)arg2 y:(float)arg3;
- (void)updateInputHidden;
- (void)hide;
- (void)show;
- (void)systemHideKeyboard;
- (void)hideUI;
- (void)showUI;
- (void)setKeyboardParams:(CDStruct_4c437055)arg1;
- (void)setTextInputTraits:(id)arg1 withParam:(CDStruct_4c437055)arg2 withCap:(long long)arg3;
- (id)init;
- (struct CreateToolbarResult)createToolbarWithView:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textInputLostFocus;
- (void)textInputCancel:(id)arg1;
- (void)textInputDone:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

