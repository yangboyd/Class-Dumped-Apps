//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SQTextField, UIColor;
@protocol SQTextFieldDelegate;

@interface SCPrefixTextEntryView : UIView
{
    // Error parsing type: , name: prefixLabel
    // Error parsing type: , name: placeholderLabel
    // Error parsing type: , name: tapToBeginEditingGestureRecognizer
    // Error parsing type: , name: textField
    // Error parsing type: , name: horizontalContentInset
    // Error parsing type: , name: prefixToTextFieldSpacing
    // Error parsing type: , name: shouldScrollPrefixLabelAwayWhenContentIsLargeEnough
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewTapGestureRecognized;
- (void)updateUIForCurrentText;
- (void)textFieldDidBeginEditing;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(nonatomic, retain) id <SQTextFieldDelegate> delegate;
@property(nonatomic, retain) UIColor *tintColor;
@property(nonatomic, copy) NSString *text;
@property(nonatomic, copy) NSString *placeholder;
@property(nonatomic, copy) NSString *prefixText;
@property(nonatomic, readonly) SQTextField *textField; // @synthesize textField;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

