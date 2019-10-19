//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingViewController.h"

#import "AttributedLabelDelegate-Protocol.h"
#import "CommentComposeViewControllerDelegate-Protocol.h"
#import "MessageHeaderViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class BaseCollectionView, CommentComposePlaceHolderView, FeedViewFlowLayout, Message, NSArray, NSIndexPath, NSString, ThreadedMessageManager;
@protocol MessagesRepliesViewControllerProcotol;

@interface MessageRepliesViewController : ListingViewController <UICollectionViewDataSource, UICollectionViewDelegate, UITextViewDelegate, AttributedLabelDelegate, CommentComposeViewControllerDelegate, MessageHeaderViewDelegate>
{
    id <MessagesRepliesViewControllerProcotol> _delegate;
    Message *_rootMessage;
    BaseCollectionView *_feedCollectionView;
    FeedViewFlowLayout *_feedViewFlowLayout;
    NSArray *_previousMessageVisuals;
    NSArray *_currentMessageVisuals;
    ThreadedMessageManager *_objectManager;
    CommentComposePlaceHolderView *_replyTextView;
    NSIndexPath *_indexPathOfFirstUnread;
}

@property(retain, nonatomic) NSIndexPath *indexPathOfFirstUnread; // @synthesize indexPathOfFirstUnread=_indexPathOfFirstUnread;
@property(retain, nonatomic) CommentComposePlaceHolderView *replyTextView; // @synthesize replyTextView=_replyTextView;
@property(retain, nonatomic) ThreadedMessageManager *objectManager; // @synthesize objectManager=_objectManager;
@property(copy, nonatomic) NSArray *currentMessageVisuals; // @synthesize currentMessageVisuals=_currentMessageVisuals;
@property(copy, nonatomic) NSArray *previousMessageVisuals; // @synthesize previousMessageVisuals=_previousMessageVisuals;
@property(retain, nonatomic) FeedViewFlowLayout *feedViewFlowLayout; // @synthesize feedViewFlowLayout=_feedViewFlowLayout;
@property(retain, nonatomic) BaseCollectionView *feedCollectionView; // @synthesize feedCollectionView=_feedCollectionView;
@property(retain, nonatomic) Message *rootMessage; // @synthesize rootMessage=_rootMessage;
@property(nonatomic) __weak id <MessagesRepliesViewControllerProcotol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messageHeaderView:(id)arg1 didTapLinkURL:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)commentComposeViewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2 newItem:(id)arg3;
- (void)commentComposeViewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2 editedItem:(id)arg3;
- (void)didTapSendMessageButton;
- (_Bool)shouldDisableSendMessageButton;
- (id)firstMessageThatRespondedToMe;
- (void)highlightCommentsInRect:(struct CGRect)arg1 duration:(double)arg2;
- (void)reloadMessagesCollectionViewWithCompletion:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 highlight:(_Bool)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)majorContentView;
- (struct UIEdgeInsets)preferredContentInset;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateContentViewsWhenLoadingMoreFinishes;
- (void)reloadDataSafely;
- (void)updateContentViewsWhenReloadFinishes;
- (id)majorContentScrollView;
- (void)configureWithMessageID:(id)arg1;
- (void)configureWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isSingleCommentThread;
@property(readonly) Class superclass;

@end

