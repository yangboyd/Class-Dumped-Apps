//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel, UIStackView, UISwitch, UIView;

@interface _TtC8LastPass28EnableBiometryViewController : UIViewController
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: textLabel
    // Error parsing type: , name: warningLabel
    // Error parsing type: , name: biometryImage
    // Error parsing type: , name: nextButton
    // Error parsing type: , name: enableRecoveryView
    // Error parsing type: , name: enableBiometryLabel
    // Error parsing type: , name: enableBiometrySwitch
    // Error parsing type: , name: enableRecoveryLabel
    // Error parsing type: , name: enableRecoverySwitch
    // Error parsing type: , name: enableBiometryContainerStackView
    // Error parsing type: , name: enableRecoveryContainerStackView
    // Error parsing type: , name: isFaceID
    // Error parsing type: , name: biometryChecked
    // Error parsing type: , name: isAccountRecoveryAvailable
    // Error parsing type: , name: isExistingUserOnboarding
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)nextTapped;
- (void)biometrySwitchValueChanged;
- (void)viewDidLoad;
@property(nonatomic) __weak UIStackView *enableRecoveryContainerStackView; // @synthesize enableRecoveryContainerStackView;
@property(nonatomic) __weak UIStackView *enableBiometryContainerStackView; // @synthesize enableBiometryContainerStackView;
@property(nonatomic) __weak UISwitch *enableRecoverySwitch; // @synthesize enableRecoverySwitch;
@property(nonatomic) __weak UILabel *enableRecoveryLabel; // @synthesize enableRecoveryLabel;
@property(nonatomic) __weak UISwitch *enableBiometrySwitch; // @synthesize enableBiometrySwitch;
@property(nonatomic) __weak UILabel *enableBiometryLabel; // @synthesize enableBiometryLabel;
@property(nonatomic) __weak UIView *enableRecoveryView; // @synthesize enableRecoveryView;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton;
@property(nonatomic) __weak UIImageView *biometryImage; // @synthesize biometryImage;
@property(nonatomic) __weak UILabel *warningLabel; // @synthesize warningLabel;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;

@end

