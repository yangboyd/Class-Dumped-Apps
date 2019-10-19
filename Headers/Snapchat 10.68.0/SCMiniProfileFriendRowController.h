//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

#import "SCMiniProfileFriendCollectionViewCellDelegate-Protocol.h"

@class Friend, NSString, SCUserSession;
@protocol SCMiniProfileFriendRowControllerDelegate;

@interface SCMiniProfileFriendRowController : SCMiniProfileRowController <SCMiniProfileFriendCollectionViewCellDelegate>
{
    Friend *_friend;
    SCUserSession *_userSession;
    long long _rowType;
    _Bool _hideStory;
    id <SCMiniProfileFriendRowControllerDelegate> _delegate;
    long long _cellColorStyle;
}

- (void).cxx_destruct;
- (void)friendCollectionViewCell:(id)arg1 didTapStoryIconView:(id)arg2;
- (void)friendCollectionViewCellDidLongPress:(id)arg1;
- (void)friendCollectionViewCell:(id)arg1 didTapAddFriend:(id)arg2;
- (void)didSelectCell;
- (_Bool)shouldSelectCell;
- (void)willDisplayCell:(id)arg1;
- (double)cellHeight;
- (Class)cellClass;
- (void)setCellColorStyle:(long long)arg1;
- (id)rowFriend;
- (id)initWithFriend:(id)arg1 userSession:(id)arg2 rowType:(long long)arg3 hideStory:(_Bool)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

