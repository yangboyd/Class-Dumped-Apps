//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGLiveBroadcast, IGLiveCommentModel, IGLiveViewerActionSheetController, IGUser;

@protocol IGLiveViewerActionSheetControllerDelegate <NSObject>
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didSelectViewBroadcasterProfile:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didTapDeleteComment:(IGLiveCommentModel *)arg2 broadcast:(IGLiveBroadcast *)arg3;
- (void)actionSheetControllerDidCancel:(IGLiveViewerActionSheetController *)arg1;
- (void)actionSheetControllerDidDeletePostLiveBroadcast:(IGLiveBroadcast *)arg1;
- (void)actionSheetControllerDidTapInviteToWatch:(IGLiveViewerActionSheetController *)arg1;
- (void)actionSheetControllerDidTapStorySettings:(IGLiveViewerActionSheetController *)arg1;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didSFPLTBroadcast:(IGLiveBroadcast *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didReportComment:(IGLiveCommentModel *)arg2 inBroadcast:(IGLiveBroadcast *)arg3 isSpam:(_Bool)arg4;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didReportBroadcast:(IGLiveBroadcast *)arg2 isSpam:(_Bool)arg3;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didReportBroadcast:(IGLiveBroadcast *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didTapReportBroadcast:(IGLiveBroadcast *)arg2;
@end

