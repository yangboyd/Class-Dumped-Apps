//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC5Slack27SLKGenericBaseTableViewCell.h"

@class NSLayoutConstraint, SLKDependencies, UIButton, UIImageView, UILabel, _TtC5Slack18SLKAsyncAvatarView;
@protocol SLKUserGenerics;

@interface _TtC5Slack20SLKUserTableViewCell : _TtC5Slack27SLKGenericBaseTableViewCell
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: operation
    // Error parsing type: , name: avatarView
    // Error parsing type: , name: mainLabel
    // Error parsing type: , name: detailLabel
    // Error parsing type: , name: onlineStatusLabel
    // Error parsing type: , name: chevron
    // Error parsing type: , name: radioCheckmarkButton
    // Error parsing type: , name: fullnameRightConstraint
    // Error parsing type: , name: accessoryRightConstraint
    // Error parsing type: , name: compactMode
    // Error parsing type: , name: unifiedDisplayStyle
    // Error parsing type: , name: userView
    // Error parsing type: , name: $__lazy_storage_$_radioCheckNormal
    // Error parsing type: , name: $__lazy_storage_$_radioCheckSelected
    // Error parsing type: , name: user
    // Error parsing type: , name: cellViewModel
    // Error parsing type: , name: accessory
    // Error parsing type: , name: isRadioButtonOn
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithViewModel:(id)arg1 dependencies:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)radioCheckTapped:(id)arg1;
@property(nonatomic) long long accessory; // @synthesize accessory;
@property(nonatomic, retain) id <SLKUserGenerics> user; // @synthesize user;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic) _Bool compactMode; // @synthesize compactMode;
@property(nonatomic) __weak NSLayoutConstraint *accessoryRightConstraint; // @synthesize accessoryRightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *fullnameRightConstraint; // @synthesize fullnameRightConstraint;
@property(nonatomic) __weak UIButton *radioCheckmarkButton; // @synthesize radioCheckmarkButton;
@property(nonatomic) __weak UIImageView *chevron; // @synthesize chevron;
@property(nonatomic) __weak UILabel *onlineStatusLabel; // @synthesize onlineStatusLabel;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel;
@property(nonatomic) __weak UILabel *mainLabel; // @synthesize mainLabel;
@property(nonatomic) __weak _TtC5Slack18SLKAsyncAvatarView *avatarView; // @synthesize avatarView;
@property(nonatomic) __weak SLKDependencies *dependencies; // @synthesize dependencies;

@end

