//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatBaseTableViewDelegate-Protocol.h"
#import "SCChatConversationUpdaterListener-Protocol.h"
#import "SCChatViewLifeCycleListener-Protocol.h"
#import "SCNewChatsAffordanceDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSIndexPath, NSMutableOrderedSet, NSOrderedSet, NSString, SCChatBaseTableView, SCChatTableContainerViewV3, UIView;
@protocol SCChatConversationViewModel, SCChatTableViewV3PresenterDelegate;

@interface SCChatTableViewV3Presenter : NSObject <SCTraceEnabled, SCChatBaseTableViewDelegate, SCChatViewLifeCycleListener, SCChatConversationUpdaterListener, SCNewChatsAffordanceDelegate>
{
    id <SCChatConversationViewModel> _conversationViewModel;
    id <SCChatConversationViewModel> _renderedConversationViewModel;
    _Bool _isFullyVisible;
    _Bool _wasScrollAtBottomBeforeUpdate;
    SCChatTableContainerViewV3 *_tableContainerView;
    NSMutableOrderedSet *_seenMessagesIds;
    NSOrderedSet *_newMessagesIds;
    NSIndexPath *_topKnownVisibleIndexPath;
    NSIndexPath *_bottomKnownVisibleIndexPath;
    _Bool _isMessageAddedAtTheEnd;
    _Bool _isLastMessageSentBySelf;
    _Bool _isNewConversation;
    _Bool _shouldScrollForBackwardPagination;
    _Bool _wasItemRemoved;
    unsigned long long _indexRowForPagination;
    _Bool _actionMenuShown;
    SCChatBaseTableView *_tableView;
    id <SCChatTableViewV3PresenterDelegate> _delegate;
}

+ (id)viewModelUpdatePaths:(id)arg1 newConversationViewModel:(id)arg2 oldViewModels:(id)arg3 newViewModels:(id)arg4;
+ (id)getIndexPathArrayFrom:(id)arg1 to:(id)arg2;
@property(nonatomic) _Bool actionMenuShown; // @synthesize actionMenuShown=_actionMenuShown;
@property(nonatomic) __weak id <SCChatTableViewV3PresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(retain, nonatomic) SCChatBaseTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updateTableContentInsetForPresenceWithHeight:(double)arg1;
- (_Bool)_newMessageAtTheBottom:(id)arg1;
- (_Bool)_isNewMessageMaybe:(id)arg1;
- (id)_getNewMessagesIds;
- (void)_markMessageAsSeenFrom:(id)arg1 to:(id)arg2;
- (void)_updateChatAffordance:(_Bool)arg1;
- (_Bool)_validIndexPath:(id)arg1;
- (void)chatAffordanceTappedOnTop:(_Bool)arg1;
- (void)_updateTableViewWithAddedPaths:(id)arg1 updatedPaths:(id)arg2 deletedPaths:(id)arg3;
- (void)_reloadRelevantTableCells;
- (void)_scrollTableViewIfNecessary;
- (void)didConversationViewModelChange:(id)arg1;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (unsigned long long)indexRowForPagination;
- (_Bool)scrollToBottomNeedsAnimation;
- (_Bool)shouldScrollToBottom;
- (_Bool)isChatVisible;
- (double)firstViewableChatOffset;
- (double)tableHeight;
- (void)scrollViewDidScroll;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

