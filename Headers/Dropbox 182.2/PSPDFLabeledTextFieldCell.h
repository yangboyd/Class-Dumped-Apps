//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFLabelValueBaseCell.h>

#import <PSPDFKitUI/UITextViewDelegate-Protocol.h>

@class NSString, PSPDFTextView, UIButton;

@interface PSPDFLabeledTextFieldCell : PSPDFLabelValueBaseCell <UITextViewDelegate>
{
    _Bool _readOnly;
    CDUnknownBlockType _valueDidChangeHandler;
    PSPDFTextView *_textView;
    UIButton *_clearButton;
}

@property(readonly, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) PSPDFTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) CDUnknownBlockType valueDidChangeHandler; // @synthesize valueDidChangeHandler=_valueDidChangeHandler;
- (void).cxx_destruct;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)clearButtonPressed:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)defaultValueView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

