//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryCameraViewController, IGStoryCreationModel, IGStoryMusicTrackClip, NSArray, NSSet;
@protocol IGQuickCamInputAsset;

@protocol IGStoryCameraViewControllerDelegate <NSObject>
- (void)storyCameraViewControllerDidStartRecording:(IGStoryCameraViewController *)arg1;
- (void)storyCameraViewControllerDidTapOpenGallery:(IGStoryCameraViewController *)arg1;
- (void)storyCameraViewController:(IGStoryCameraViewController *)arg1 didSelectMusicClip:(IGStoryMusicTrackClip *)arg2;
- (void)storyCameraViewControllerShouldCancelPostcapture:(IGStoryCameraViewController *)arg1;
- (void)storyCameraViewController:(IGStoryCameraViewController *)arg1 didCreateMediaCompositions:(NSArray *)arg2;
- (void)storyCameraViewController:(IGStoryCameraViewController *)arg1 didDismissWithStoryTarget:(long long)arg2 exitPoint:(long long)arg3 directRecipients:(NSSet *)arg4 storyModelArray:(NSArray *)arg5 metadataArray:(NSArray *)arg6;
- (_Bool)storyCameraViewControllerHasInputAsset:(IGStoryCameraViewController *)arg1;
- (void)storyCameraViewController:(IGStoryCameraViewController *)arg1 shouldUpdateInputAsset:(id <IGQuickCamInputAsset>)arg2 storyModel:(IGStoryCreationModel *)arg3;
- (void)storyCameraViewControllerDidBeginPhotoCapture:(IGStoryCameraViewController *)arg1;
- (void)storyCameraViewControllerDidDismissFromSuccessfulBroadcast:(IGStoryCameraViewController *)arg1 shouldAnimatePostToFeed:(_Bool)arg2 sharedToIGTV:(_Bool)arg3;
- (void)storyCameraViewControllerDidTapCloseButton:(IGStoryCameraViewController *)arg1;
@end

