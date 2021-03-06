//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGProfilePictureImageView, IGTapButton, UILabel;

@interface IGLiveInvitePreLiveOverlayView : UIView
{
    IGProfilePictureImageView *_userProfileImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_countLabel;
    IGTapButton *_confirmButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTapButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) IGProfilePictureImageView *userProfileImageView; // @synthesize userProfileImageView=_userProfileImageView;
- (void)setUser:(id)arg1 context:(id)arg2 module:(id)arg3 shouldUseRoomsBrandingString:(_Bool)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

