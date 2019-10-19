//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "GA11YMixinEmbedder.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTThumbnailMapping.h"

@class NSString, UIView, YTBadge, YTFormattedStringLabel, YTIRedCarpetPlaylistVideoRenderer, YTIThumbnailDetails, YTImageView, YTRedCarpetBadgeView, YTShadowView, YTTransferButton;

@interface YTRedCarpetPlaylistVideoCell : YTCollectionViewCell <GA11YMixinEmbedder, YTThumbnailMapping, YTCollectionViewCellProtocol>
{
    YTIRedCarpetPlaylistVideoRenderer *_entry;
    YTFormattedStringLabel *_title;
    YTFormattedStringLabel *_subtitle;
    YTRedCarpetBadgeView *_heavyBadge;
    YTFormattedStringLabel *_contentDescription;
    YTImageView *_thumbnailView;
    YTShadowView *_thumbnailOverlayScrim;
    YTImageView *_thumbnailIcon;
    YTIThumbnailDetails *_thumbnailIconDetails;
    YTBadge *_timeStatusOverlay;
    UIView *_belowTitleView;
    _Bool _isV2Details;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTRedCarpetPlaylistVideoCellDelegate> _delegate;
    YTTransferButton *_offlineButton;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) YTTransferButton *offlineButton; // @synthesize offlineButton=_offlineButton;
@property(nonatomic) __weak id <YTRedCarpetPlaylistVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)didTapOfflineButton;
- (void)setOfflineButtonVisible:(_Bool)arg1 dimmed:(_Bool)arg2;
- (void)layoutDescription;
- (double)thumbnailHeight;
- (double)descriptionHeight_compact:(struct CGSize)arg1;
- (double)descriptionHeight_regular:(struct CGSize)arg1;
- (double)descriptionHeight:(struct CGSize)arg1;
- (double)descriptionMaxWidth_compact;
- (double)descriptionMaxWidth_regular;
- (double)descriptionMaxWidth;
- (double)leadingAndTrailingPaddingForTabletV2;
- (double)contentViewWidthForTabletV2;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setOfflineVideo:(id)arg1 offlineabilityRenderer:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)thumbnailIconSize;
- (double)thumbnailWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

