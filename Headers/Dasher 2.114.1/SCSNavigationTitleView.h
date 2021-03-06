//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ServiceCore/SCAppearanceApplicator-Protocol.h>

@class NSLayoutConstraint, NSString, SCSNavigationTitleLabelContainerView, UIImageView, UILabel;

@interface SCSNavigationTitleView : UIView <SCAppearanceApplicator>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_presenceIndicatorView;
    double _titleImagePadding;
    SCSNavigationTitleLabelContainerView *_titleContainerView;
    NSLayoutConstraint *_subtitleTopConstraint;
    NSLayoutConstraint *_subtitleCenterXConstraint;
    NSLayoutConstraint *_titleContainerTopConstraint;
    NSLayoutConstraint *_titleContainerCenterYConstraint;
    NSLayoutConstraint *_titleImagePaddingConstraint;
    NSLayoutConstraint *_titleWidthConstraint;
}

+ (void)applyAppearanceForConfiguration:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleImagePaddingConstraint; // @synthesize titleImagePaddingConstraint=_titleImagePaddingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleContainerCenterYConstraint; // @synthesize titleContainerCenterYConstraint=_titleContainerCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleContainerTopConstraint; // @synthesize titleContainerTopConstraint=_titleContainerTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleCenterXConstraint; // @synthesize subtitleCenterXConstraint=_subtitleCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleTopConstraint; // @synthesize subtitleTopConstraint=_subtitleTopConstraint;
@property(retain, nonatomic) SCSNavigationTitleLabelContainerView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(nonatomic) double titleImagePadding; // @synthesize titleImagePadding=_titleImagePadding;
@property(retain, nonatomic) UIImageView *presenceIndicatorView; // @synthesize presenceIndicatorView=_presenceIndicatorView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupImageObserver;
- (void)setupView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

