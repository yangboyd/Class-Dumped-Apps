//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRWCollectionViewCell.h"

#import "GRWAppCellProtocol-Protocol.h"

@class GRWApp, NSString, UIButton, UIColor, UIImageView, UILabel, UIView;

@interface GRWAppCollectionViewCell : GRWCollectionViewCell <GRWAppCellProtocol>
{
    _Bool _showRecommendedLabel;
    GRWApp *_app;
    CDUnknownBlockType accessoryButtonPressed;
    double _additionalBottomPadding;
    UIImageView *_accessoryImageView;
    UILabel *_appNameLabel;
    UILabel *_subtitleLabel;
    UILabel *_recommendedLabel;
    UILabel *_appDescriptionLabel;
    UIView *_textContainer;
    UIButton *_actionButton;
    UIView *_dimmedOverlayView;
    UIView *_appIconContainerView;
    UIView *_appIconView;
}

+ (id)yearMonthDayFormatter;
+ (struct CGSize)maximumActionButtonSizeBasedOnAllTitleStrings;
+ (double)heightForApp:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)verticalContentViewPadding;
@property(retain, nonatomic) UIView *appIconView; // @synthesize appIconView=_appIconView;
@property(retain, nonatomic) UIView *appIconContainerView; // @synthesize appIconContainerView=_appIconContainerView;
@property(retain, nonatomic) UIView *dimmedOverlayView; // @synthesize dimmedOverlayView=_dimmedOverlayView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(readonly, nonatomic) UILabel *appDescriptionLabel; // @synthesize appDescriptionLabel=_appDescriptionLabel;
@property(retain, nonatomic) UILabel *recommendedLabel; // @synthesize recommendedLabel=_recommendedLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(nonatomic) double additionalBottomPadding; // @synthesize additionalBottomPadding=_additionalBottomPadding;
@property(nonatomic, getter=shouldShowRecommendedLabel) _Bool showRecommendedLabel; // @synthesize showRecommendedLabel=_showRecommendedLabel;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonPressed; // @synthesize accessoryButtonPressed;
@property(readonly, nonatomic) GRWApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (void)buttonPressed:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (id)constraintsToConstrainView:(id)arg1 equalToView:(id)arg2;
- (void)setupConstraints;
@property(readonly, nonatomic) unsigned long long context;
- (id)appIconMaskingLayerForSize:(struct CGSize)arg1;
- (void)setApp:(id)arg1;
@property(readonly, nonatomic) UIColor *accessoryCheckColor;
- (void)applyStyle;
- (void)applyStyleColor;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) unsigned long long appStoreButtonFontStyle;
@property(readonly, nonatomic) unsigned long long appsListAccessoryViewType;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

