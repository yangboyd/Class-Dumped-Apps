//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGProfilePictureImageView, UIImageView, UILabel;

@interface IGLiveBroadcasterProfileView : UIControl
{
    UIImageView *_emptyStoryBadgeView;
    IGProfilePictureImageView *_profilePicView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_internalLabel;
    UIImageView *_verifiedBadgeView;
}

@property(readonly, nonatomic) UIImageView *verifiedBadgeView; // @synthesize verifiedBadgeView=_verifiedBadgeView;
@property(readonly, nonatomic) UILabel *internalLabel; // @synthesize internalLabel=_internalLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePicView; // @synthesize profilePicView=_profilePicView;
@property(readonly, nonatomic) UIImageView *emptyStoryBadgeView; // @synthesize emptyStoryBadgeView=_emptyStoryBadgeView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)profileImageView;
- (void)configureWithUser:(id)arg1 profileTitle:(id)arg2 profileSubtitle:(id)arg3 showEmptyStoryBadge:(_Bool)arg4 showInternalOnly:(_Bool)arg5 supportsVerifiedBadge:(_Bool)arg6 module:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1;

@end

