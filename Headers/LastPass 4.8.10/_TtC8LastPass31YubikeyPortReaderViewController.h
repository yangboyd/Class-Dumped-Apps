//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface _TtC8LastPass31YubikeyPortReaderViewController : UIViewController
{
    // Error parsing type: , name: presentingAlpha
    // Error parsing type: , name: presentingDuration
    // Error parsing type: , name: touchBorderColor
    // Error parsing type: , name: yubikeyReader
    // Error parsing type: , name: isObservingSessionStateUpdates
    // Error parsing type: , name: delegate
    // Error parsing type: , name: actionBorder
    // Error parsing type: , name: keyActionView
    // Error parsing type: , name: actionTitle
    // Error parsing type: , name: actionText
    // Error parsing type: , name: yubikeyImage
    // Error parsing type: , name: cancelButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)cancelButtonAction:(id)arg1;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak UIImageView *yubikeyImage; // @synthesize yubikeyImage;
@property(nonatomic) __weak UILabel *actionText; // @synthesize actionText;
@property(nonatomic) __weak UILabel *actionTitle; // @synthesize actionTitle;
@property(nonatomic) __weak UIView *keyActionView; // @synthesize keyActionView;
@property(nonatomic) __weak UIView *actionBorder; // @synthesize actionBorder;

@end

