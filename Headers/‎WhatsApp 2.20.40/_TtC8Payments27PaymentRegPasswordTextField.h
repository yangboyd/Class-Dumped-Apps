//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/_TtC8Payments19PaymentRegTextField.h>

@protocol UITextFieldDelegate;

@interface _TtC8Payments27PaymentRegPasswordTextField : _TtC8Payments19PaymentRegTextField
{
    // Error parsing type: , name: $__lazy_storage_$_visibilityToggleButton
}

- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)tappedVisibilityToggleButton;
@property(nonatomic, retain) id <UITextFieldDelegate> delegate;
@property(nonatomic) _Bool secureTextEntry;
- (_Bool)isSecureTextEntry;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

