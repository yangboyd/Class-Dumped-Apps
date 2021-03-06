//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RCTText/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField, UITextRange;
@protocol RCTBackedTextInputViewProtocol;

@interface RCTBackedTextFieldDelegateAdapter : NSObject <UITextFieldDelegate>
{
    UITextField<RCTBackedTextInputViewProtocol> *_backedTextInputView;
    _Bool _textDidChangeIsComing;
    UITextRange *_previousSelectedTextRange;
}

- (void).cxx_destruct;
- (void)textFieldProbablyDidChangeSelection;
- (void)selectedTextRangeWasSet;
- (void)skipNextTextInputDidChangeSelectionEventWithTextRange:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (void)textFieldDidEndEditingOnExit;
- (void)textFieldDidChange;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)dealloc;
- (id)initWithTextField:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

