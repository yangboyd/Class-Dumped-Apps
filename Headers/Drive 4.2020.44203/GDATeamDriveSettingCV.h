//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

#import "GDATeamDriveSettingCVOUpdateDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;
@protocol GDATeamDriveSettingCVDelegate;

@interface GDATeamDriveSettingCV : GOOBaseContentView <GDATeamDriveSettingCVOUpdateDelegate>
{
    UIImageView *_rightArrowImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIView *_a11yView;
    id <GDATeamDriveSettingCVDelegate> _delegate;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (_Bool)requiresConstraintBasedLayout;
+ (void)setUpLabelForDetail:(id)arg1;
+ (void)setUpLabelForTitle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GDATeamDriveSettingCVDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *a11yView; // @synthesize a11yView=_a11yView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
- (void)viewObjectWasUpdated:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)updateConstraints;
- (void)settingPressed;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

