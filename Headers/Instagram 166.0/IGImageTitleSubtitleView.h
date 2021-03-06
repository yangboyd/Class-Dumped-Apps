//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectAvatarView, IGImageTitleSubtitleViewLayoutSpec, IGImageTitleSubtitleViewModel, UIImageView, UILabel;

@interface IGImageTitleSubtitleView : UIView
{
    IGDirectAvatarView *_avatarImageView;
    UIImageView *_imageView;
    UIView *_customLeftView;
    UIImageView *_verifiedBadgeView;
    IGImageTitleSubtitleViewModel *_viewModel;
    UIView *_accessoryView;
    UIView *_innerAccessoryView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_subtitleAccessoryView;
    IGImageTitleSubtitleViewLayoutSpec *_layoutSpec;
}

+ (struct CGSize)preferredSizeForConstrainingSize:(struct CGSize)arg1 viewModel:(id)arg2 accessoryViewWidth:(double)arg3 subtitleAccessoryViewWidth:(double)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGImageTitleSubtitleViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(retain, nonatomic) UIView *subtitleAccessoryView; // @synthesize subtitleAccessoryView=_subtitleAccessoryView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *innerAccessoryView; // @synthesize innerAccessoryView=_innerAccessoryView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)configureWithViewModel:(id)arg1;
- (id)avatarImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

