//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCFeedTableViewCell, SCFriendsFeedSwipeableTableViewCell, Snap, UIView;

@protocol SCFeedGestureDelegate
- (void)cellHandleCognacButtonPressed:(SCFriendsFeedSwipeableTableViewCell *)arg1 sourceView:(UIView *)arg2;
- (void)cellHandleStoryIconPressed:(SCFriendsFeedSwipeableTableViewCell *)arg1;
- (void)cellHandleTapOnUnopenedReceivedMedia:(SCFriendsFeedSwipeableTableViewCell *)arg1;
- (void)cellHandleCallingButtonPressed:(SCFriendsFeedSwipeableTableViewCell *)arg1;
- (void)cellHandleSnapButtonPressed:(SCFriendsFeedSwipeableTableViewCell *)arg1;
- (void)cellHandleReplyButtonPressed:(SCFriendsFeedSwipeableTableViewCell *)arg1;
- (void)handleTapOnSnap:(Snap *)arg1 cell:(SCFeedTableViewCell *)arg2;
- (void)cell:(SCFeedTableViewCell *)arg1 didLongPressOnSnap:(NSString *)arg2 inConversation:(NSString *)arg3;
- (void)cell:(SCFriendsFeedSwipeableTableViewCell *)arg1 attachFeedToChatTapDetectionViewWithLocationInCell:(struct CGPoint)arg2;
- (void)cellHandleTapOnBitmoji:(SCFeedTableViewCell *)arg1 identifier:(NSString *)arg2;
- (void)cellHandleLongPressOnCell:(SCFeedTableViewCell *)arg1 identifier:(NSString *)arg2;
- (void)cellHandleTapOnChat:(SCFriendsFeedSwipeableTableViewCell *)arg1;
- (void)cellHandleDoubleTapOnChat:(SCFriendsFeedSwipeableTableViewCell *)arg1;
@end

