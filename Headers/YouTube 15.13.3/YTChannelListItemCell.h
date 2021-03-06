//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class MDCInkTouchController, NSString, UIView, YTFormattedStringLabel, YTIButtonRenderer, YTIChannelListItemRenderer, YTISubscriptionNotificationToggleButtonRenderer, YTIToggleButtonRenderer, YTImageView, YTNotificationMultiToggleButton, YTNotificationPreferenceToggleButton, YTQTMButton;
@protocol GA11YMixinImpl, YTChannelListItemCellDelegate, YTResponder;

@interface YTChannelListItemCell : YTCollectionViewCell <MDCInkTouchControllerDelegate, YTPageStyling, YTThumbnailMapping, GA11YMixinEmbedder, YTCollectionViewCellProtocol>
{
    YTIChannelListItemRenderer *_entry;
    YTImageView *_thumbnailImageView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_activityLabel;
    YTNotificationPreferenceToggleButton *_notificationToggleButton;
    YTIToggleButtonRenderer *_notificationToggleRenderer;
    YTISubscriptionNotificationToggleButtonRenderer *_subscriptionNotificationToggleButtonRenderer;
    YTQTMButton *_swipeToRevealButton;
    YTIButtonRenderer *_swipeToRevealButtonRenderer;
    YTQTMButton *_editButton;
    YTIButtonRenderer *_editButtonRenderer;
    UIView *_unsubscribedIndicatorView;
    UIView *_unreadIndicatorView;
    MDCInkTouchController *_inkTouchController;
    _Bool _allowInk;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTChannelListItemCellDelegate> _delegate;
    YTNotificationMultiToggleButton *_notificationMultiToggleButton;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (double)thumbnailSize;
@property(retain, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton; // @synthesize notificationMultiToggleButton=_notificationMultiToggleButton;
@property(nonatomic) __weak id <YTChannelListItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)inkTouchController:(id)arg1 insertInkView:(id)arg2 intoView:(id)arg3;
- (_Bool)inkTouchController:(id)arg1 shouldProcessInkTouchesAtTouchLocation:(struct CGPoint)arg2;
- (id)thumbnailMappings;
- (void)greyOutCellWithUnsubscribed:(_Bool)arg1;
- (void)didPressEditModeButton;
- (void)didPressSwipeToRevealButton;
- (void)didPressNotificationMultiToggleButton;
- (void)didPressNotificationToggleButton;
- (id)cellNavigationTitle;
- (id)entry;
- (void)updateVisibilityWithEditMode:(_Bool)arg1;
- (void)setEntry:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)hideUnreadIndicator;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)paddingX;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

