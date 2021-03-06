//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UILabel, UIView;

@interface _TtC5Slack28SLKTeamSwitcherTableViewCell : UITableViewCell
{
    // Error parsing type: , name: buttonTappedAction
    // Error parsing type: , name: teamIconSize
    // Error parsing type: , name: teamIconSizeIPhone
    // Error parsing type: , name: teamIconSizeIPad
    // Error parsing type: , name: teamIconSizeCell
    // Error parsing type: , name: containerView
    // Error parsing type: , name: containerBottomConstraint
    // Error parsing type: , name: iconCenteringConstraint
    // Error parsing type: , name: buttonLeadingConstraint
    // Error parsing type: , name: activeTeamView
    // Error parsing type: , name: iconContentView
    // Error parsing type: , name: iconContentViewHeightConstraint
    // Error parsing type: , name: mainLabel
    // Error parsing type: , name: detailLabel
    // Error parsing type: , name: detailLabelHeightConstraint
    // Error parsing type: , name: detailLabelTopMarginConstraint
    // Error parsing type: , name: rightButton
    // Error parsing type: , name: addedLabel
    // Error parsing type: , name: rightButtonHeightConstraint
    // Error parsing type: , name: labelContainerTrailingConstraint
    // Error parsing type: , name: labelContainerHeightConstraint
    // Error parsing type: , name: iconBadgeView
    // Error parsing type: , name: $__lazy_storage_$_activityIndicator
    // Error parsing type: , name: disposable
    // Error parsing type: , name: detailLabelDefaultTopConstraint
    // Error parsing type: , name: detailLabelDefaultHeight
    // Error parsing type: , name: labelContainerDefaultHeightConstraint
    // Error parsing type: , name: translucentTextAlpha
    // Error parsing type: , name: offsetContent
    // Error parsing type: , name: showSignInLoadingIndicator
    // Error parsing type: , name: teamWasAdded
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: switcherModel
    // Error parsing type: , name: isTeamSelected
    // Error parsing type: , name: mentionCount
    // Error parsing type: , name: showLockIcon
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)buttonTappedWithSender:(id)arg1;
- (void)updateTheme;
- (void)updateMentions;
- (void)updateUnreads;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic) __weak NSLayoutConstraint *labelContainerHeightConstraint; // @synthesize labelContainerHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *labelContainerTrailingConstraint; // @synthesize labelContainerTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rightButtonHeightConstraint; // @synthesize rightButtonHeightConstraint;
@property(nonatomic) __weak UILabel *addedLabel; // @synthesize addedLabel;
@property(nonatomic) __weak UIButton *rightButton; // @synthesize rightButton;
@property(nonatomic, retain) NSLayoutConstraint *detailLabelTopMarginConstraint; // @synthesize detailLabelTopMarginConstraint;
@property(nonatomic, retain) NSLayoutConstraint *detailLabelHeightConstraint; // @synthesize detailLabelHeightConstraint;
@property(nonatomic, retain) UILabel *detailLabel; // @synthesize detailLabel;
@property(nonatomic, retain) UILabel *mainLabel; // @synthesize mainLabel;
@property(nonatomic, retain) NSLayoutConstraint *iconContentViewHeightConstraint; // @synthesize iconContentViewHeightConstraint;
@property(nonatomic, retain) UIView *iconContentView; // @synthesize iconContentView;
@property(nonatomic) __weak UIView *activeTeamView; // @synthesize activeTeamView;
@property(nonatomic, retain) NSLayoutConstraint *buttonLeadingConstraint; // @synthesize buttonLeadingConstraint;
@property(nonatomic, retain) NSLayoutConstraint *iconCenteringConstraint; // @synthesize iconCenteringConstraint;
@property(nonatomic, retain) NSLayoutConstraint *containerBottomConstraint; // @synthesize containerBottomConstraint;
@property(nonatomic, retain) UIView *containerView; // @synthesize containerView;

@end

