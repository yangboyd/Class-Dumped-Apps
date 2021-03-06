//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGSundialViewerVideoCell, IGUser, NSArray, NSString, NSURL;
@protocol IGSundialAudioAssetProtocol;

@protocol IGSundialViewerVideoCellDelegate <NSObject>
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didUpdatePlaybackState:(CDStruct_7b7c8ae7)arg2;
- (void)sundialViewerVideoCellDidTapTranslation:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapSave:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapLike:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCelldidTapLearnMore:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCelldidTapRevealSensitiveMedia:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapUnhideMedia:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapShowPost:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapAudioAttribution:(id <IGSundialAudioAssetProtocol>)arg2;
- (void)sundialViewerVideoCellDidTapViewProductsEntryPoint:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapEffectAttribution:(NSArray *)arg2;
- (void)sundialViewerVideoCellDidTapSendButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialVideoCell:(IGSundialViewerVideoCell *)arg1 didTapHashtag:(NSString *)arg2;
- (void)sundialVideoCell:(IGSundialViewerVideoCell *)arg1 didTapViewsAndLikesForSundialVideoPk:(NSString *)arg2;
- (void)sundialVideoCell:(IGSundialViewerVideoCell *)arg1 didTapCommentForSundialVideoPk:(NSString *)arg2;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapProfileURL:(NSURL *)arg2;
- (void)sundialViewerVidepCellDidTapRemixButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapSponsorPartner:(IGUser *)arg2;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapUser:(IGUser *)arg2;
- (void)sundialViewerVideoCellDidStartPlaying:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapMoreOptionsButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidLoadPreviewImage:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidLongPressEnd:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidLongPressBegin:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidDoubleTap:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidSingleTap:(IGSundialViewerVideoCell *)arg1;
@end

