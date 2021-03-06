//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGNavigationControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVCameraViewControllerV1Delegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVGalleryViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVPostCaptureEditingViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVVideoCompositionUploadFlowDelegate-Protocol.h>

@class IGNavigationController, IGTVCameraViewControllerV1, IGTVCameraViewControllerV2, IGTVCreationAnalyticsSession, IGTVGalleryViewController, IGTVPostCaptureEditingViewController, IGTVVideoCompositionUploadFlow, IGUserSession, NSString, UIViewController;
@protocol IGTVCreationFlowViewControllerDelegate;

@interface IGTVCreationFlowViewController : IGViewController <IGNavigationControllerDelegate, IGTVGalleryViewControllerDelegate, IGTVVideoCompositionUploadFlowDelegate, IGTVCameraViewControllerV1Delegate, IGTVPostCaptureEditingViewControllerDelegate>
{
    _Bool _isCameraInCreationFlowEnabled;
    IGUserSession *_userSession;
    long long _creationStartAction;
    IGTVCreationAnalyticsSession *_creationAnalytics;
    double _minimumVideoDuration;
    double _maximumVideoDuration;
    double _forgivenessDuration;
    IGNavigationController *_navigationController;
    IGTVGalleryViewController *_galleryViewController;
    IGTVVideoCompositionUploadFlow *_uploadFlow;
    IGTVCameraViewControllerV1 *_cameraViewControllerV1;
    IGTVCameraViewControllerV2 *_cameraViewControllerV2;
    IGTVPostCaptureEditingViewController *_editingViewController;
    UIViewController *_lastViewController;
    id <IGTVCreationFlowViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVCreationFlowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_loadPostCaptureEditingViewControllerWithMediaCompositions:(id)arg1 isFromGallery:(_Bool)arg2;
- (void)_setIGTVGalleryViewController;
- (void)igtvPostCaptureEditingDidSaveToCameraRoll:(id)arg1;
- (void)igtvPostCaptureEditingDidCancel:(id)arg1;
- (void)igtvPostCaptureEditingDidCreateVideoComposition:(id)arg1 videoComposition:(id)arg2;
- (void)igtvCameraViewControllerDidStopRecordingAndCaptureVideo:(id)arg1 withMediaCompositions:(id)arg2;
- (void)igtvCameraViewController:(id)arg1 storyCameraViewControllerDidDismissFromSuccessfulBroadcast:(id)arg2 shouldAnimatePostToFeed:(_Bool)arg3 sharedToIGTV:(_Bool)arg4;
- (void)igtvCameraViewControllerShouldCancelPostcapture:(id)arg1;
- (void)igtvCameraViewController:(id)arg1 storyCameraViewControllerDidStartRecording:(id)arg2;
- (void)igtvCameraViewController:(id)arg1 storyCameraViewController:(id)arg2 didCreateMediaCompositions:(id)arg3;
- (void)igtvCameraViewController:(id)arg1 storyCameraViewControllerDidTapOpenGallery:(id)arg2;
- (void)igtvCameraViewController:(id)arg1 storyCameraViewControllerDidTapCloseButton:(id)arg2;
- (_Bool)igtvCameraViewController:(id)arg1 storyCameraViewControllerHasInputAsset:(id)arg2;
- (void)videoCompositionUploadFlowDidTapSaveAsDraft;
- (void)videoCompositionUploadFlowDidTapPost;
- (void)galleryViewController:(id)arg1 didSelectAsset:(id)arg2 withThumbnail:(id)arg3 fromView:(id)arg4;
- (void)galleryViewControllerDidTapClose:(id)arg1;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 startAction:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

