//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGProfilePictureImageView, IGStoryBadgeView, UIControl, UIImageView, UILabel;

@interface IGDirectReshareMessageHeaderView : UIView
{
    UIImageView *_chevron;
    UIView *_followButton;
    _Bool _shouldForceChevronHidden;
    long long _layoutType;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGProfilePictureImageView *_profilePicture;
    IGStoryBadgeView *_storyBadgeView;
}

+ (double)heightForHeightWithLayoutType:(long long)arg1 imageURL:(id)arg2 title:(id)arg3 subtitle:(id)arg4 viewWidth:(double)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryBadgeView *storyBadgeView; // @synthesize storyBadgeView=_storyBadgeView;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)_isFollowButtonVisible;
- (void)reset;
- (void)configureWithViewModel:(id)arg1 followButtonProvider:(id)arg2;
- (void)layoutSubviews;
- (void)_setUpStoryBadgeView;
- (void)_setupProfilePicture;
- (void)_setupChevron;
- (void)_setupSubtitleLabel;
- (void)_setupTitleLabel;
- (void)_setupSubviews;
@property(readonly, nonatomic) UIControl *followButton;
- (void)setFollowButtonHidden:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

