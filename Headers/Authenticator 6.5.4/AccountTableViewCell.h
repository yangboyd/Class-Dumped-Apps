//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthenticatorAuthSDK/ASDKAccountTableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class CircularCountdownView, NSLayoutConstraint, NSString, UILabel, UserAccount;
@protocol AccountTableViewCellDelegate;

@interface AccountTableViewCell : ASDKAccountTableViewCell <UITextFieldDelegate>
{
    unsigned int _codeDigits;
    NSLayoutConstraint *_progressIndicatorHeightConstraint;
    UILabel *_actionRequiredLabel;
    NSString *_oathCode;
    UILabel *_codeLabel;
    CircularCountdownView *_progressIndicator;
    NSLayoutConstraint *_CollapseTOTPViewConstraint;
    id <AccountTableViewCellDelegate> _delegate;
    UserAccount *_account;
}

- (void).cxx_destruct;
@property(readonly) UserAccount *account; // @synthesize account=_account;
@property __weak id <AccountTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSLayoutConstraint *CollapseTOTPViewConstraint; // @synthesize CollapseTOTPViewConstraint=_CollapseTOTPViewConstraint;
@property(nonatomic) __weak CircularCountdownView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(readonly) NSString *oathCode; // @synthesize oathCode=_oathCode;
@property(nonatomic) __weak UILabel *actionRequiredLabel; // @synthesize actionRequiredLabel=_actionRequiredLabel;
- (void)refreshOathCode;
- (void)stopGeneratingCodes;
- (void)startGeneratingCodes;
- (void)loadValuesFromAccount:(id)arg1 shouldDisplayOathCode:(unsigned long long)arg2 mode:(unsigned long long)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)accessibilityLabel;
- (void)onOathCodeTapped:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

