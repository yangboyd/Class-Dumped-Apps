//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMediaViewerTransitionManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMessageCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListDisplayDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGZoomHandlerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGZoomLoggerProtocol-Protocol.h>

@class IGDirectMessageSectionComponents, IGZoomViewPresenter, NSString, UIView;
@protocol IGDirectMessageViewModelProtocol;

@interface IGDirectMessageSectionController : IGListBindingSingleSectionController <IGZoomLoggerProtocol, IGDirectMessageCellDelegate, IGCoreTextLinkHandler, IGDirectMediaViewerTransitionManagerDelegate, IGListDisplayDelegate, IGZoomHandlerDelegate>
{
    _Bool _didReceiveLikeWhileActive;
    NSString *_emojiUnicodeReceivedWhileActive;
    id <IGDirectMessageViewModelProtocol> _viewModelBeforeReceivingFirstEmojiUnicode;
    IGDirectMessageSectionComponents *_components;
    id <IGDirectMessageViewModelProtocol> _viewModel;
    IGZoomViewPresenter *_zoomViewPresenter;
    UIView *_zoomedViewParentView;
    long long _zoomedViewParentPosition;
}

@property(nonatomic) long long zoomedViewParentPosition; // @synthesize zoomedViewParentPosition=_zoomedViewParentPosition;
@property(nonatomic) __weak UIView *zoomedViewParentView; // @synthesize zoomedViewParentView=_zoomedViewParentView;
@property(retain, nonatomic) IGZoomViewPresenter *zoomViewPresenter; // @synthesize zoomViewPresenter=_zoomViewPresenter;
@property(retain, nonatomic) id <IGDirectMessageViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) IGDirectMessageSectionComponents *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (void)_animateReceivedRichReactionIfNecessaryOnCell:(id)arg1;
- (void)_animateReceivedLikeIfNecessaryOnCell:(id)arg1;
- (void)_presentFailedMessageRetryController;
- (_Bool)_messageDidFail;
- (void)logZoomDidEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomWillEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomWillBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)didEndZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)didStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)willStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (id)zoomViewControllerForZoomController:(id)arg1 frame:(struct CGRect)arg2;
- (double)headerHeightForZoomController:(id)arg1;
- (id)presentingController;
- (_Bool)shouldLaunchZoomingWithZoomController:(id)arg1 gestureRecognizer:(id)arg2;
- (void)didCalculateSourceRectForPresentation;
- (id)visibleMediaViewForMediaViewerProducer:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_performLikeOnCell:(id)arg1 liked:(_Bool)arg2 reactionActionSource:(long long)arg3;
- (void)messageCellDidTapRichReactionsView:(id)arg1;
- (void)messageCellDidTapReactionView:(id)arg1;
- (void)messageCellWillPerformFloatingReactionsAnimationWithLiveRect:(CDUnknownBlockType)arg1 emojiUnicode:(id)arg2;
- (void)messageCellDidStopScaleAnimation:(id)arg1;
- (void)messageCellWillStartScaleAnimation:(id)arg1;
- (_Bool)messageCellShouldStartScaleAnimation:(id)arg1;
- (void)messageCellDidLongPress:(id)arg1 gestureRecognizer:(id)arg2;
- (void)messageCellDidDoubleTap:(id)arg1 liked:(_Bool)arg2;
- (void)messageCellDidTapLikeButton:(id)arg1 liked:(_Bool)arg2;
- (void)messageCellDidLongPressAvatar:(id)arg1;
- (void)messageCellDidTapAvatar:(id)arg1;
- (void)messageCellDidSingleTapContent:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (struct UIEdgeInsets)inset;
- (void)didSelectItemWithCell:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)handleSingleTapOfSendingOrSentMessageCell:(id)arg1;
- (id)initWithComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

