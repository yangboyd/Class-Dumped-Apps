//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIButton, UILabel, UIView, _TtC8Chipotle22FloatingLabelTextField;

@interface _TtC8Chipotle28TextFieldAlertViewController : UIViewController
{
    // Error parsing type: , name: alertView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: bodyLabel
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: saveButton
    // Error parsing type: , name: textField
    // Error parsing type: , name: alertViewBottomConstraint
    // Error parsing type: , name: titleText
    // Error parsing type: , name: bodyText
    // Error parsing type: , name: cancelText
    // Error parsing type: , name: saveText
    // Error parsing type: , name: bodyAttributedText
    // Error parsing type: , name: positiveButtonClosure
    // Error parsing type: , name: cancelButtonClosure
    // Error parsing type: , name: viewDisplayType
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardWillShowWithNotification:(id)arg1;
- (void)keyboardWillHideWithNotification:(id)arg1;
- (void)didPressSaveButton:(id)arg1;
- (void)didPressCancelButton:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *alertViewBottomConstraint; // @synthesize alertViewBottomConstraint;
@property(nonatomic) __weak _TtC8Chipotle22FloatingLabelTextField *textField; // @synthesize textField;
@property(nonatomic) __weak UIButton *saveButton; // @synthesize saveButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak UILabel *bodyLabel; // @synthesize bodyLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIView *alertView; // @synthesize alertView;

@end

