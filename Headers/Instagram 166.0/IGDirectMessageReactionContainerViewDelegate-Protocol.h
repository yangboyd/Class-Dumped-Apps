//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectMessageReactionContainerView;

@protocol IGDirectMessageReactionContainerViewDelegate <NSObject>
- (void)reactionContainerView:(IGDirectMessageReactionContainerView *)arg1 didChangeLongPressToPosition:(struct CGPoint)arg2;
- (void)reactionContainerView:(IGDirectMessageReactionContainerView *)arg1 didSelectEmojiAtIndex:(long long)arg2;
- (void)reactionContainerView:(IGDirectMessageReactionContainerView *)arg1 didEndLongPressAtIndex:(long long)arg2;
- (void)reactionContainerView:(IGDirectMessageReactionContainerView *)arg1 didLongPressAtIndex:(long long)arg2;
- (void)reactionContainerViewDidTapActionButton:(IGDirectMessageReactionContainerView *)arg1 type:(long long)arg2;
@end

