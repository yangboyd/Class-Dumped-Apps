//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGLiveBroadcastView, IGLiveCommentModel, IGLiveTappablePinnedViewModel, NSDictionary, NSString, UICollectionViewCell, UIPanGestureRecognizer, UITapGestureRecognizer;

@protocol IGLiveBroadcastViewDelegate <NSObject>
- (void)broadcastViewDidChangeTopBannerVisibility:(IGLiveBroadcastView *)arg1;
- (void)broadcastViewDidToggleCommentsHeight:(IGLiveBroadcastView *)arg1 withSwipe:(_Bool)arg2;
- (void)broadcastView:(IGLiveBroadcastView *)arg1 didTapPinnedViewWithViewModel:(IGLiveTappablePinnedViewModel *)arg2;
- (void)broadcastView:(IGLiveBroadcastView *)arg1 didTapPinnedButtonWithViewModel:(IGLiveTappablePinnedViewModel *)arg2;
- (void)broadcastViewDidRequestToHideTrays:(IGLiveBroadcastView *)arg1;
- (void)broadcastViewDidTapAREffectButton:(IGLiveBroadcastView *)arg1;
- (void)broadcastViewDidTapLiveResourceTooltip:(IGLiveBroadcastView *)arg1;
- (void)broadcastViewDidTapLiveResourceButton:(IGLiveBroadcastView *)arg1;
- (void)broadcastViewDidTapDismissGuestButton:(IGLiveBroadcastView *)arg1;
- (void)broadcastView:(IGLiveBroadcastView *)arg1 didPan:(UIPanGestureRecognizer *)arg2;
- (void)broadcastViewDidExpandViewerList:(IGLiveBroadcastView *)arg1;
- (void)broadcastViewDidTapCancelCallButton:(IGLiveBroadcastView *)arg1;
- (void)broadcastView:(IGLiveBroadcastView *)arg1 didTapWithGestureRecognizer:(UITapGestureRecognizer *)arg2;
- (void)shoppingButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)galleryButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)soundButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)liveQuestionRemovedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)liveQuestionOverlayTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)liveQuestionButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)viewerInviteButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)liveRoomsButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)switchCameraButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)closeButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)moreButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)userListButtonTappedInBroadcastView:(IGLiveBroadcastView *)arg1;
- (void)broadcastView:(IGLiveBroadcastView *)arg1 didChangeZoomScaleWithDelta:(double)arg2;
- (void)broadcastView:(IGLiveBroadcastView *)arg1 didReceiveTapOnComment:(IGLiveCommentModel *)arg2 isPinned:(_Bool)arg3 shouldExpandViewerList:(_Bool)arg4 cell:(UICollectionViewCell *)arg5;
- (void)broadcastView:(IGLiveBroadcastView *)arg1 didReceiveUnpinTapOnComment:(IGLiveCommentModel *)arg2;
- (void)broadcastView:(IGLiveBroadcastView *)arg1 didEnterCommentText:(NSString *)arg2 commentLoggingExtras:(NSDictionary *)arg3;
- (_Bool)broadcastViewCanShowKeyboard:(IGLiveBroadcastView *)arg1;
- (void)broadcastViewDidUnpinCurrentComment:(IGLiveCommentModel *)arg1;
- (_Bool)broadcastViewCanToggleCommentsHeight:(IGLiveBroadcastView *)arg1;
- (_Bool)broadcastViewCanPanMedia:(IGLiveBroadcastView *)arg1 panGesture:(UIPanGestureRecognizer *)arg2;
@end

