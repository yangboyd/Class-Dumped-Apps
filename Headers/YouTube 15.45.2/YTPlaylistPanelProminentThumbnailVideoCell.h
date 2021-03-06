//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTCellActionProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTOfflineVideoItem-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"
#import "YTWatchTransitionViewProtocol-Protocol.h"

@class NSArray, NSString, UILongPressGestureRecognizer, UIView, YTFormattedStringLabel, YTIPlaylistPanelVideoRenderer, YTISlimMetadataToggleButtonRenderer, YTQTMButton, YTStandaloneBadgeView, YTVideoThumbnailView;
@protocol GA11YMixinImpl, YTAttributedLabel, YTPlaylistPanelProminentThumbnailVideoCellDelegate, YTResponder;

@interface YTPlaylistPanelProminentThumbnailVideoCell : YTCollectionViewCell <GA11YMixinEmbedder, YTPageStyling, YTCellActionProtocol, YTCollectionViewCellProtocol, YTOfflineVideoItem, YTThumbnailMapping, YTWatchTransitionViewProtocol>
{
    YTIPlaylistPanelVideoRenderer *_video;
    YTVideoThumbnailView *_thumbnailView;
    UIView *_thumbnailBorderView;
    UIView<YTAttributedLabel> *_subtitleLabel;
    YTFormattedStringLabel *_offlineStateLabel;
    YTQTMButton *_actionButton;
    struct CGRect _actionButtonHitArea;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    YTStandaloneBadgeView *_topStandaloneBadge;
    UIView *_bottomBadgesView;
    YTStandaloneBadgeView *_standaloneBadge;
    NSArray *_metadataLayoutArray;
    NSArray *_bottomBadgesViewLayoutArray;
    UIView<YTAttributedLabel> *_videoInfoLabel;
    YTISlimMetadataToggleButtonRenderer *_likeButtonRenderer;
    YTISlimMetadataToggleButtonRenderer *_dislikeButtonRenderer;
    YTQTMButton *_likeButton;
    YTQTMButton *_dislikeButton;
    long long _pageStyle;
    int _likeStatus;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTPlaylistPanelProminentThumbnailVideoCellDelegate> _delegate;
    UIView<YTAttributedLabel> *_titleLabel;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (_Bool)isExpandedForWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView<YTAttributedLabel> *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) int likeStatus; // @synthesize likeStatus=_likeStatus;
@property(nonatomic) __weak id <YTPlaylistPanelProminentThumbnailVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)didTapDislikeButton:(id)arg1;
- (void)didTapLikeButton:(id)arg1;
- (id)buttonColorForSlimMetadataToggleButtonRenderer:(id)arg1 pageStyle:(long long)arg2;
- (id)buttonImageForSlimMetadataToggleButtonRenderer:(id)arg1 selected:(_Bool)arg2 expanded:(_Bool)arg3;
- (void)layoutThumbnailBorderViewWithPaddingX:(double)arg1;
- (id)attributedLabel;
- (void)updateBottomBadgesViewVisibilityAndSize;
- (void)setNeedsBottomBadgesViewsLayoutArrayUpdate;
- (id)bottomBadgesViewLayoutArray;
- (void)updateMetadataVisibilityWithViewMarginArray:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (struct CGSize)thumbnailBorderViewSizeForEntry:(id)arg1;
- (struct CGSize)thumbnailSizeForEntry:(id)arg1;
- (void)updateButton:(id)arg1 withSlimMetadataToggleButtonRenderer:(id)arg2 expanded:(_Bool)arg3;
- (void)layoutSentimentButtons;
- (void)updateSentimentButtons;
- (void)updateBackgroundColor;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setSelected:(_Bool)arg1;
- (void)setInlineDownloadedIndicatorVisible:(_Bool)arg1;
- (void)updateWithOfflineStatus:(int)arg1 downloadProgress:(double)arg2 videoThumbnailStatus:(unsigned long long)arg3 transferButtonDelegate:(id)arg4;
- (void)setSpaceUsageString:(id)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1 withTypeVariant:(long long)arg2;
- (void)setMetadataLabelsAlpha:(double)arg1;
- (id)thumbnailMappings;
- (id)fromWatchTransitionImageView;
- (id)entry;
- (void)setEntry:(id)arg1;
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
- (void)prepareForReuse;
- (void)layoutSubviews_narrow;
- (void)layoutSubviews_expanded;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

