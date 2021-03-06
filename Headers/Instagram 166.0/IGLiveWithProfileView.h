//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGMultilineChevronButton, IGStackedProfilePicture, UIImageView, UILabel;

@interface IGLiveWithProfileView : UIControl
{
    IGStackedProfilePicture *_avatarView;
    UILabel *_subtitleLabel;
    UIImageView *_hostVerifiedBadgeView;
    UIImageView *_guestVerifiedBadgeView;
    IGMultilineChevronButton *_titleButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGMultilineChevronButton *titleButton; // @synthesize titleButton=_titleButton;
- (void)_configureTitleButton:(id)arg1 shouldShowChevron:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithHost:(id)arg1 guest:(id)arg2 supportsVerifiedBadge:(_Bool)arg3 shouldShowChevron:(_Bool)arg4 module:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

