//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UITextField;

@interface _TtC11PhoneFactor20SharedDeviceModeView : UIView
{
    // Error parsing type: , name: sharedDeviceModeImageView
    // Error parsing type: , name: sharedDeviceModeTitleLabel
    // Error parsing type: , name: sharedDeviceModeDescriptionLabel
    // Error parsing type: , name: upnTextField
    // Error parsing type: , name: deviceIdLabel
    // Error parsing type: , name: appVersionLabel
    // Error parsing type: , name: registerAsSharedDeviceButton
    // Error parsing type: , name: sendLogsButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)refreshDeviceRegistrationUI;
- (void)emailTextFieldTextDidChange:(id)arg1;
- (void)emailTextFieldKeyboardReturnButtonPressed:(id)arg1;
- (void)sharedDeviceRegistrationButtonPressed:(id)arg1;
- (void)addSendLogsButtonCallbackWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)awakeFromNib;
@property(nonatomic) __weak UIButton *sendLogsButton; // @synthesize sendLogsButton;
@property(nonatomic) __weak UIButton *registerAsSharedDeviceButton; // @synthesize registerAsSharedDeviceButton;
@property(nonatomic) __weak UILabel *appVersionLabel; // @synthesize appVersionLabel;
@property(nonatomic) __weak UILabel *deviceIdLabel; // @synthesize deviceIdLabel;
@property(nonatomic) __weak UITextField *upnTextField; // @synthesize upnTextField;
@property(nonatomic) __weak UILabel *sharedDeviceModeDescriptionLabel; // @synthesize sharedDeviceModeDescriptionLabel;
@property(nonatomic) __weak UILabel *sharedDeviceModeTitleLabel; // @synthesize sharedDeviceModeTitleLabel;
@property(nonatomic) __weak UIImageView *sharedDeviceModeImageView; // @synthesize sharedDeviceModeImageView;

@end

