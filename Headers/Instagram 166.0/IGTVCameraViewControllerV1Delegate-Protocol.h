//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryCameraViewController, IGTVCameraViewControllerV1, NSArray;

@protocol IGTVCameraViewControllerV1Delegate <NSObject>
- (void)igtvCameraViewControllerDidStopRecordingAndCaptureVideo:(IGTVCameraViewControllerV1 *)arg1 withMediaCompositions:(NSArray *)arg2;
- (void)igtvCameraViewController:(IGTVCameraViewControllerV1 *)arg1 storyCameraViewControllerDidDismissFromSuccessfulBroadcast:(IGStoryCameraViewController *)arg2 shouldAnimatePostToFeed:(_Bool)arg3 sharedToIGTV:(_Bool)arg4;
- (void)igtvCameraViewControllerShouldCancelPostcapture:(IGTVCameraViewControllerV1 *)arg1;
- (void)igtvCameraViewController:(IGTVCameraViewControllerV1 *)arg1 storyCameraViewControllerDidStartRecording:(IGStoryCameraViewController *)arg2;
- (void)igtvCameraViewController:(IGTVCameraViewControllerV1 *)arg1 storyCameraViewController:(IGStoryCameraViewController *)arg2 didCreateMediaCompositions:(NSArray *)arg3;
- (void)igtvCameraViewController:(IGTVCameraViewControllerV1 *)arg1 storyCameraViewControllerDidTapOpenGallery:(IGStoryCameraViewController *)arg2;
- (void)igtvCameraViewController:(IGTVCameraViewControllerV1 *)arg1 storyCameraViewControllerDidTapCloseButton:(IGStoryCameraViewController *)arg2;
- (_Bool)igtvCameraViewController:(IGTVCameraViewControllerV1 *)arg1 storyCameraViewControllerHasInputAsset:(IGStoryCameraViewController *)arg2;
@end

