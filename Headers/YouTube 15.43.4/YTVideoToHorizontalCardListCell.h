//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "CAAnimationDelegate-Protocol.h"
#import "YTCellActionProtocol-Protocol.h"
#import "YTCellLinkProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTDismissableCellProtocol-Protocol.h"
#import "YTFeedActionBarProtocol-Protocol.h"
#import "YTFeedActionBarViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTScrollFocusItem-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"
#import "YTWatchTransitionViewProtocol-Protocol.h"

@class NSString, UIButton, UIView, YTHorizontalCardListView, YTIHorizontalCardListRenderer, YTSwipeToRevealButtonsView, YTVideoThumbnailView, YTVideoView;
@protocol YTCellLinkDelegate, YTFeedActionBarDelegate, YTResponder, YTScrollFocusItem, YTScrollFocusUpdater, YTSwipeToRevealButtonsDelegate;

@interface YTVideoToHorizontalCardListCell : YTCollectionViewCell <CAAnimationDelegate, YTPageStyling, YTCollectionViewCellProtocol, YTCellActionProtocol, YTCellLinkProtocol, YTDismissableCellProtocol, YTFeedActionBarProtocol, YTFeedActionBarViewCellProtocol, YTResponder, YTScrollFocusItem, YTThumbnailMapping, YTWatchTransitionViewProtocol>
{
    YTIHorizontalCardListRenderer *_horizontalCardListRenderer;
    YTHorizontalCardListView *_horizontalCardListView;
    YTVideoView *_videoView;
    YTVideoThumbnailView *_videoThumbnailView;
    _Bool _swipeEnabled;
    UIView *_slideForActionsContentView;
    YTSwipeToRevealButtonsView *_swipeToRevealButtonsView;
    UIView *_slideForActionsViewSnapshot;
    long long _pageStyle;
    _Bool _feedActionBarViewHidden;
    UIView *_dismissedCellOverlayView;
    id <YTResponder> _parentResponder;
    id <YTScrollFocusUpdater> _scrollFocusUpdater;
    id <YTScrollFocusItem> _scrollFocusItemDelegate;
    id <YTSwipeToRevealButtonsDelegate> _swipeToRevealButtonsDelegate;
    NSString *_moreLikeThisBarOpenStyle;
    id _videoRenderer;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id videoRenderer; // @synthesize videoRenderer=_videoRenderer;
@property(readonly, nonatomic) NSString *moreLikeThisBarOpenStyle; // @synthesize moreLikeThisBarOpenStyle=_moreLikeThisBarOpenStyle;
@property(nonatomic) __weak id <YTSwipeToRevealButtonsDelegate> swipeToRevealButtonsDelegate; // @synthesize swipeToRevealButtonsDelegate=_swipeToRevealButtonsDelegate;
@property(readonly, nonatomic) __weak id <YTScrollFocusItem> scrollFocusItemDelegate; // @synthesize scrollFocusItemDelegate=_scrollFocusItemDelegate;
@property(nonatomic) __weak id <YTScrollFocusUpdater> scrollFocusUpdater; // @synthesize scrollFocusUpdater=_scrollFocusUpdater;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) _Bool feedActionBarViewHidden; // @synthesize feedActionBarViewHidden=_feedActionBarViewHidden;
@property(retain, nonatomic) UIView *dismissedCellOverlayView; // @synthesize dismissedCellOverlayView=_dismissedCellOverlayView;
- (void)removeSlideForActionsViewSnapshot;
- (struct CGRect)swipeToRevealButtonsViewFrame;
- (void)setupVideoThumbnailView;
- (void)resetVideoThumbnailView;
- (void)fadeOutLayer:(id)arg1 duration:(double)arg2 timingFunctionType:(id)arg3 animationType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fadeOutVideoThumbnailViewWithFadeAnimationDuration:(double)arg1;
- (void)fadeOutVideoViewWithBackgroundColor:(id)arg1 animationDuration:(double)arg2;
- (void)performVideoThumbnailTransformationGroupAnimationWithDuration:(double)arg1;
- (void)dismissalPrepareForReuse;
- (id)accessibilitySwipeCustomActions;
- (id)visibilityCriteria;
- (void)scrollFocusDidChangeWithContext:(id)arg1;
- (_Bool)isScrollFocusSelectableForTypes:(id)arg1;
- (void)setScrollFocusItemDelegate:(id)arg1;
@property(readonly, nonatomic) long long scrollFocusItemType;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)slideForActionsViewWillEnterConfirmationMode:(id)arg1;
- (void)slideForActionsViewDidEnterConfirmationMode:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)performSlideDemo;
@property(nonatomic) __weak id <YTFeedActionBarDelegate> feedActionBarDelegate;
- (double)feedActionBarViewHeight;
- (id)dismissableView;
- (id)thumbnailMappings;
- (id)fromWatchTransitionImageView;
@property(nonatomic) __weak id <YTCellLinkDelegate> cellLinkDelegate;
- (void)animateToHorizontalCardListScrollToSecondCell:(_Bool)arg1;
- (void)setCollectionView:(id)arg1 hideVideoView:(_Bool)arg2;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) UIButton *callToActionButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)scrollHorizontalCardListToBeginningAnimated:(_Bool)arg1;
- (void)exitSwipeMode;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hiddenEnclosed;
@property(readonly) Class superclass;

@end

