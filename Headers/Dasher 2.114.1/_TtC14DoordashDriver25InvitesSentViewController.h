//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel, _TtC3DLS6Button;

@interface _TtC14DoordashDriver25InvitesSentViewController : UIViewController
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: keepSharingLabel
    // Error parsing type: , name: doneButton
    // Error parsing type: , name: referralURL
    // Error parsing type: , name: referralURLSMS
    // Error parsing type: , name: referralURLFacebook
    // Error parsing type: , name: referralURLTwitter
    // Error parsing type: , name: numRequiredDeliveries
    // Error parsing type: , name: submarketRewardForReferreeInDollars
    // Error parsing type: , name: onDismiss
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)shareToMessenger:(id)arg1;
- (void)shareToTwitter:(id)arg1;
- (void)shareToFacebook:(id)arg1;
- (void)shareThroughSMS:(id)arg1;
- (void)dismissSelf:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferralURL:(id)arg1 referralURLSMS:(id)arg2 referralURLFacebook:(id)arg3 referralURLTwitter:(id)arg4 numRequiredDeliveries:(long long)arg5 submarketRewardForReferree:(long long)arg6 onDismiss:(CDUnknownBlockType)arg7;
@property(nonatomic) __weak _TtC3DLS6Button *doneButton; // @synthesize doneButton;
@property(nonatomic) __weak UILabel *keepSharingLabel; // @synthesize keepSharingLabel;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;

@end

