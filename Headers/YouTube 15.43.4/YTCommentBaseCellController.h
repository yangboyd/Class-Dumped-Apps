//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import <Module_Framework/YTCollectionViewScrollObserver-Protocol.h>
#import <Module_Framework/YTCommentViewDelegate-Protocol.h>

@class NSString, YTCommentBaseCell, YTConfirmDialogController, YTICommentRenderer;

@interface YTCommentBaseCellController : YTInnerTubeCellController <YTCollectionViewScrollObserver, YTCommentViewDelegate>
{
    _Bool _shouldHighlightCellWhenSet;
    YTConfirmDialogController *_confirmDialogController;
}

- (void).cxx_destruct;
- (void)restoreParentResponderForCreateCommentViewController;
- (void)sendHintResponderEvent;
- (void)registerEventHandlersWithCommentService:(id)arg1;
- (void)handlePollChoice:(id)arg1;
- (void)expandComment:(id)arg1;
- (void)cleanUpDialogController;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)didTapReplyInStoryButton:(id)arg1;
- (void)didTapVideoViewButton:(id)arg1;
- (void)didTapVideoView:(id)arg1;
- (void)didTapCompactVideoViewButton:(id)arg1;
- (void)didTapCompactVideoView:(id)arg1;
- (void)didTapPollChoiceButton:(id)arg1;
- (void)didTapExpandCommentTextButton:(id)arg1;
- (void)didTapCommentText:(id)arg1;
- (void)didTapBackstageImageView:(id)arg1;
- (void)didTapAuthorButton:(id)arg1;
- (void)collectionViewControllerDidEndDecelerating:(id)arg1;
- (void)collectionViewControllerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)shouldHighlightItem;
@property(nonatomic) __weak YTCommentBaseCell *cell; // @dynamic cell;
- (void)cellDidBecomeHiddenWithVisibilityEventType:(int)arg1;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (void)thumbnailController:(id)arg1 imageLoadDidFailWithError:(id)arg2;
- (_Bool)handleUpdateEntryEvent:(id)arg1;
- (_Bool)handleRemoveEntryEvent:(id)arg1;
- (_Bool)handleNavigationEvent:(id)arg1;
- (_Bool)handleCommentActionCompletedEvent:(id)arg1;
- (_Bool)handleTogglePinnedState:(id)arg1 syncType:(long long)arg2;
- (_Bool)handleCellReloadEvent:(id)arg1;
- (_Bool)handleAddEntryEvent:(id)arg1;
- (void)updateVisibilityForCommentViewSubviews:(id)arg1 eventType:(int)arg2;
- (id)renderingModel;
@property(readonly, nonatomic) YTICommentRenderer *commentRenderer;
- (void)highlightCell;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

