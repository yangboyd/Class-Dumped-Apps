//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class SHSPhoneLogic, SHSPhoneNumberFormatter;

@interface SHSPhoneTextField : UITextField
{
    SHSPhoneLogic *logicDelegate;
    SHSPhoneNumberFormatter *_formatter;
    CDUnknownBlockType _textDidChangeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType textDidChangeBlock; // @synthesize textDidChangeBlock=_textDidChangeBlock;
@property(readonly) SHSPhoneNumberFormatter *formatter; // @synthesize formatter=_formatter;
- (id)phoneNumberWithoutPrefix;
- (id)phoneNumber;
- (void)setFormattedText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)logicInitialization;

@end

