//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "GA11YMixinEmbedder.h"
#import "UIGestureRecognizerDelegate.h"
#import "YTReusableView.h"
#import "YTSubscribeSwitchContainer.h"
#import "YTThumbnailMapping.h"

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, YTImageView, YTLabel, YTNotificationMultiToggleButton, YTNotificationOptionsButton, YTNotificationPreferenceToggleButton, YTQTMButton, YTSubscribeSwitch;

@interface YTGameCardView : UIControl <GA11YMixinEmbedder, UIGestureRecognizerDelegate, YTReusableView, YTSubscribeSwitchContainer, YTThumbnailMapping>
{
    double _cachedHeight;
    YTSubscribeSwitch *_subscribeSwitch;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTVideoCardModel> _model;
    id <YTGameCardCellDelegate> _delegate;
    UITapGestureRecognizer *_cardTapRecognizer;
    YTImageView *_boxArt;
    YTLabel *_titleLabel;
    YTLabel *_attributionLabel;
    YTLabel *_metadataLabel;
    YTQTMButton *_overflowButton;
    UILongPressGestureRecognizer *_longPressRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) YTQTMButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(retain, nonatomic) YTLabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) YTLabel *attributionLabel; // @synthesize attributionLabel=_attributionLabel;
@property(retain, nonatomic) YTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YTImageView *boxArt; // @synthesize boxArt=_boxArt;
@property(retain, nonatomic) UITapGestureRecognizer *cardTapRecognizer; // @synthesize cardTapRecognizer=_cardTapRecognizer;
@property(nonatomic) __weak id <YTGameCardCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <YTVideoCardModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
- (void).cxx_destruct;
- (double)titleLabelPaddingY;
- (double)cardHeightForWidth:(double)arg1;
- (double)cardWidthForUnspecifiedAvailableWidth;
- (_Bool)hasSubscribeButton;
- (_Bool)shouldHideSubscribeButton;
- (void)setTapTargets;
- (void)resetTapTargets;
- (void)didLongPressView:(id)arg1;
- (void)didTapOverflowButton:(id)arg1;
- (void)didTapCard:(id)arg1;
- (id)subviewsForRTL;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)thumbnailMappings;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton;
@property(readonly, nonatomic) YTNotificationOptionsButton *notificationOptionsButton;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

