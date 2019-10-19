//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTCellActionProtocol-Protocol.h"
#import "YTCellLinkProtocol-Protocol.h"
#import "YTFeedActionBarProtocol-Protocol.h"
#import "YTInlineMutedPlaybackProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTReusableView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"
#import "YTWatchTransitionViewProtocol-Protocol.h"

@class FLXLayout, NSArray, NSString, UILongPressGestureRecognizer, YTBadge, YTBadgesView, YTEngagementToolbarView, YTFeedActionBarView, YTFormattedStringLabel, YTImageView, YTLabel, YTPostFeedEntryView, YTQTMButton, YTStandaloneBadgeView, YTVideoSubtitleView, YTVideoThumbnailView;
@protocol GA11YMixinImpl, YTCellLinkDelegate, YTFeedActionBarDelegate, YTVideoViewModel;

@interface YTVideoView : UIView <GA11YMixinEmbedder, UIGestureRecognizerDelegate, YTCellActionProtocol, YTCellLinkProtocol, YTFeedActionBarProtocol, YTInlineMutedPlaybackProtocol, YTPageStyling, YTReusableView, YTThumbnailMapping, YTWatchTransitionViewProtocol>
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    FLXLayout *_layout;
    _Bool _needsLayoutBinding;
    struct CGSize _lastLayoutSize;
    UIView *_snapshotView;
    NSString *_layoutVariant;
    NSArray *_activeStateProfileProcessingHelpers;
    _Bool _inlineMutedPlaybackEnabled;
    _Bool _feedActionBarViewHidden;
    id <YTCellLinkDelegate> _cellLinkDelegate;
    id <YTFeedActionBarDelegate> _feedActionBarDelegate;
    UIView *_playerViewContainer;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTVideoViewModel> _model;
    YTFeedActionBarView *_feedActionBarView;
    YTPostFeedEntryView *_optionalInfoView;
    YTQTMButton *_callToActionButton;
    YTEngagementToolbarView *_toolbarView;
    double _preferredMaxLayoutWidth;
    YTVideoThumbnailView *_thumbnailView;
    YTLabel *_titleLabel;
    YTQTMButton *_actionButton;
    YTBadgesView *_badgesView;
    YTImageView *_channelThumbnailView;
    YTLabel *_channelLabel;
    YTFormattedStringLabel *_contextLabel;
    UIView *_optionalInfoSeparatorView;
    YTQTMButton *_channelTapArea;
    YTStandaloneBadgeView *_topStandaloneBadge;
    YTStandaloneBadgeView *_bottomStandaloneBadge;
    YTBadge *_adBadge;
    YTLabel *_descriptionLabel;
    UIView *_contentView;
    UIView *_overlayView;
    YTVideoSubtitleView *_subtitleView;
}

@property(retain, nonatomic) YTVideoSubtitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) YTLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) YTBadge *adBadge; // @synthesize adBadge=_adBadge;
@property(retain, nonatomic) YTStandaloneBadgeView *bottomStandaloneBadge; // @synthesize bottomStandaloneBadge=_bottomStandaloneBadge;
@property(retain, nonatomic) YTStandaloneBadgeView *topStandaloneBadge; // @synthesize topStandaloneBadge=_topStandaloneBadge;
@property(retain, nonatomic) YTQTMButton *channelTapArea; // @synthesize channelTapArea=_channelTapArea;
@property(retain, nonatomic) UIView *optionalInfoSeparatorView; // @synthesize optionalInfoSeparatorView=_optionalInfoSeparatorView;
@property(retain, nonatomic) YTFormattedStringLabel *contextLabel; // @synthesize contextLabel=_contextLabel;
@property(retain, nonatomic) YTLabel *channelLabel; // @synthesize channelLabel=_channelLabel;
@property(retain, nonatomic) YTImageView *channelThumbnailView; // @synthesize channelThumbnailView=_channelThumbnailView;
@property(retain, nonatomic) YTBadgesView *badgesView; // @synthesize badgesView=_badgesView;
@property(retain, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) YTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) YTVideoThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) _Bool feedActionBarViewHidden; // @synthesize feedActionBarViewHidden=_feedActionBarViewHidden;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) YTEngagementToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(readonly, nonatomic) YTQTMButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(nonatomic) __weak YTPostFeedEntryView *optionalInfoView; // @synthesize optionalInfoView=_optionalInfoView;
@property(retain, nonatomic) YTFeedActionBarView *feedActionBarView; // @synthesize feedActionBarView=_feedActionBarView;
@property(retain, nonatomic) id <YTVideoViewModel> model; // @synthesize model=_model;
@property(nonatomic) _Bool inlineMutedPlaybackEnabled; // @synthesize inlineMutedPlaybackEnabled=_inlineMutedPlaybackEnabled;
@property(nonatomic) __weak UIView *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(nonatomic) __weak id <YTCellLinkDelegate> cellLinkDelegate; // @synthesize cellLinkDelegate=_cellLinkDelegate;
- (void).cxx_destruct;
- (void)didTapChannelTapArea;
- (id)subviewsForRTL;
- (_Bool)isExpandedLayoutForWidth:(double)arg1;
- (void)prepareLayoutWithSize_narrow:(struct CGSize)arg1;
- (void)prepareLayoutWithSize_wide:(struct CGSize)arg1;
- (void)prepareLayoutWithSize:(struct CGSize)arg1;
- (void)resetLayoutWithSizeIfNeeded:(struct CGSize)arg1;
- (void)bindLayoutIfNeeded;
- (struct CGPoint)contentPaddingForWidth:(double)arg1;
- (void)layoutSubsStyle;
- (id)cacheKey;
- (void)cacheLayout;
- (id)layoutFromCache;
- (id)menuRenderer;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)transitionToThumbnailViewWithSnapshotView:(id)arg1;
- (id)root;
@property(nonatomic) __weak id <YTFeedActionBarDelegate> feedActionBarDelegate; // @synthesize feedActionBarDelegate=_feedActionBarDelegate;
- (double)feedActionBarViewHeight;
- (id)thumbnailMappings;
- (id)fromWatchTransitionImageView;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)accessibilityVideoViewCustomActions;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, getter=shouldShowInlineDownloadedIndicator) _Bool showInlineDownloadedIndicator;
- (void)prepareForReuse;
- (void)setTypesForLayout;
- (void)setLayoutVariant:(id)arg1;
- (void)shouldUseBoldLabelForDurationBadge;
- (void)layoutSubviews_narrow;
- (void)layoutSubviews_wide;
- (void)layoutSubviews;
- (id)activeStateProfileProcessingHelpers;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

