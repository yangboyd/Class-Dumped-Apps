//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

@class MDCButton, UILabel, UIStackView, UISwitch;
@protocol HMEEmailNotificationsSettingsCellDelegate;

@interface HMEEmailNotificationsSettingsCell : MDCCollectionViewCell
{
    id <HMEEmailNotificationsSettingsCellDelegate> _delegate;
    UILabel *_confirmationEmailSentLabel;
    MDCButton *_sendAgainButton;
    UIStackView *_containerStackView;
    UILabel *_notificationNameLabel;
    UISwitch *_notificationSwitch;
}

@property(readonly, nonatomic) UISwitch *notificationSwitch; // @synthesize notificationSwitch=_notificationSwitch;
@property(readonly, nonatomic) UILabel *notificationNameLabel; // @synthesize notificationNameLabel=_notificationNameLabel;
@property(readonly, nonatomic) UIStackView *containerStackView; // @synthesize containerStackView=_containerStackView;
@property(readonly, nonatomic) MDCButton *sendAgainButton; // @synthesize sendAgainButton=_sendAgainButton;
@property(readonly, nonatomic) UILabel *confirmationEmailSentLabel; // @synthesize confirmationEmailSentLabel=_confirmationEmailSentLabel;
@property(nonatomic) __weak id <HMEEmailNotificationsSettingsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapResendEmailButton:(id)arg1;
- (void)notificationSwitchWasToggled:(id)arg1;
- (void)prepareForReuse;
- (void)configureCellForOptedInUnconfirmedLayoutWithNotificationName:(id)arg1 andEmail:(id)arg2;
- (void)configureCellForOptedOutLayoutWithNotificationName:(id)arg1;
- (void)configureCellForOptedInLayoutWithNotificationName:(id)arg1;
- (void)configureLayoutForNoEmailConfirmationMessageWithNotificationName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

