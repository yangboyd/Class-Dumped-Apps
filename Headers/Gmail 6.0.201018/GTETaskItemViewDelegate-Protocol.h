//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTETaskItemView, NSURL;

@protocol GTETaskItemViewDelegate <NSObject>
- (void)taskItemView:(GTETaskItemView *)arg1 didPerformSwipeAction:(long long)arg2;
- (void)taskItemView:(GTETaskItemView *)arg1 willPerformSwipeAction:(long long)arg2;
- (void)taskItemViewDidEndSwipeGesture:(GTETaskItemView *)arg1;
- (void)taskItemViewDidBeginSwipeGesture:(GTETaskItemView *)arg1;
- (void)taskItemView:(GTETaskItemView *)arg1 didTapURL:(NSURL *)arg2;
- (void)taskItemViewDidTapAttachmentChip:(GTETaskItemView *)arg1;
- (void)taskItemViewDidTapRoomChip:(GTETaskItemView *)arg1;
- (void)taskItemViewDidTapAssigneeChip:(GTETaskItemView *)arg1;
- (void)taskItemViewDidTapDateTimeChip:(GTETaskItemView *)arg1;
- (void)taskItemViewDidCancelTapCheckView:(GTETaskItemView *)arg1;
- (void)taskItemViewDidEndTapCheckView:(GTETaskItemView *)arg1;
- (void)taskItemViewDidBeginTapCheckView:(GTETaskItemView *)arg1;
- (void)taskItemViewDidTapFullCell:(GTETaskItemView *)arg1;
- (long long)taskItemViewSortOrder:(GTETaskItemView *)arg1;
- (long long)taskItemViewSubTasksCount:(GTETaskItemView *)arg1;
@end

