//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTStyledViewController.h"

#import "UINavigationControllerDelegate.h"
#import "YTEditCameraViewControllerDelegate.h"
#import "YTEditEffectTakeoverDelegate.h"
#import "YTGraftingViewController.h"
#import "YTReelCameraEffectControllerDelegate.h"
#import "YTReelCameraFlowCoordinatorDelegate.h"
#import "YTReelCameraOverlayViewControllerDelegate.h"
#import "YTReelCameraPreviewViewControllerDelegate.h"
#import "YTReelCameraResponseObserver.h"
#import "YTReelCreationPreviewOwner.h"
#import "YTReelLookingToListenControllerDelegate.h"
#import "YTSwipeLeftController.h"
#import "YTSystemNotificationsObserver.h"
#import "YTTopController.h"
#import "YTUploadCameraRollAssetFilter.h"
#import "YTUploadCameraRollDataSourceConfigurationProvider.h"

@class GIMMe, NSString, UIImage, UIView, UIViewController, UIViewController<YTEditFeatureUI>, YTConfirmDialogController, YTEditCameraEffectsButton, YTEditCameraProfile, YTICommand, YTReelCameraEffectController, YTReelCameraFlowCoordinator, YTReelCameraOverlayViewController, YTReelCameraPreviewViewController, YTReelCameraResponseRequestor, YTReelCameraViewControllerView, YTReelLibraryViewController, YTReelLookingToListenController, YTReelOnboardingOverlayViewController;

@interface YTReelCameraViewController : YTStyledViewController <UINavigationControllerDelegate, YTEditCameraViewControllerDelegate, YTEditEffectTakeoverDelegate, YTGraftingViewController, YTReelCameraEffectControllerDelegate, YTReelCameraFlowCoordinatorDelegate, YTReelCameraOverlayViewControllerDelegate, YTReelCameraPreviewViewControllerDelegate, YTReelCameraResponseObserver, YTReelCreationPreviewOwner, YTReelLookingToListenControllerDelegate, YTSwipeLeftController, YTSystemNotificationsObserver, YTUploadCameraRollDataSourceConfigurationProvider, YTUploadCameraRollAssetFilter, YTTopController>
{
    YTEditCameraProfile *_cameraProfile;
    id <YTPlaybackController> _playbackController;
    YTICommand *_model;
    UIImage *_previewImage;
    UIViewController<YTEditFeatureUI> *_activeViewController;
    YTConfirmDialogController *_confirmDialogController;
    YTReelCameraEffectController *_effectController;
    YTEditCameraEffectsButton *_effectsButton;
    YTReelLookingToListenController *_lookingToListenController;
    _Bool _showOnboardingOverlay;
    _Bool _isAnimatingBottomFeature;
    _Bool _isEffectAutoApplied;
    _Bool _cameraShown;
    _Bool _strikesShown;
    UIViewController *_contentOverlayViewController;
    UIViewController<YTEditFeatureUI> *_bottomFeatureViewController;
    unsigned long long _effectTrayMode;
    UIViewController *_childViewController;
    YTReelCameraPreviewViewController *_cameraViewController;
    YTReelCameraOverlayViewController *_overlayViewController;
    YTReelOnboardingOverlayViewController *_onboardingViewController;
    YTReelCameraResponseRequestor *_responseRequestor;
    YTReelLibraryViewController *_reelLibraryViewController;
    YTReelCameraFlowCoordinator *_flowCoordinator;
}

@property(retain, nonatomic) YTReelCameraFlowCoordinator *flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
@property(retain, nonatomic) YTReelLibraryViewController *reelLibraryViewController; // @synthesize reelLibraryViewController=_reelLibraryViewController;
@property(retain, nonatomic) YTReelCameraResponseRequestor *responseRequestor; // @synthesize responseRequestor=_responseRequestor;
@property(retain, nonatomic) YTReelOnboardingOverlayViewController *onboardingViewController; // @synthesize onboardingViewController=_onboardingViewController;
@property(retain, nonatomic) YTReelCameraOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(retain, nonatomic) YTReelCameraPreviewViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) unsigned long long effectTrayMode; // @synthesize effectTrayMode=_effectTrayMode;
@property(retain, nonatomic) UIViewController<YTEditFeatureUI> *bottomFeatureViewController; // @synthesize bottomFeatureViewController=_bottomFeatureViewController;
@property(retain, nonatomic) UIViewController *contentOverlayViewController; // @synthesize contentOverlayViewController=_contentOverlayViewController;
- (void).cxx_destruct;
- (void)didTapCameraRoll:(id)arg1;
- (void)setGalleryThumbnailButtonIfNeeded;
- (void)setPresetsButtonSelected:(_Bool)arg1;
- (void)setEffectsButtonSelected:(_Bool)arg1;
- (void)updateButtonStatesForEffectTrayMode:(unsigned long long)arg1;
- (void)animateHidden:(_Bool)arg1;
- (void)didCompleteTransitionFeature:(id)arg1 isPresenting:(_Bool)arg2;
- (void)transitioningWithFeature:(id)arg1 isPresenting:(_Bool)arg2;
- (id)activeFeature;
- (void)requestDismiss;
- (_Bool)isFeatureActive;
- (void)transitionToViewController:(id)arg1;
- (void)animateBottomFeatureViewShown:(_Bool)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (_Bool)canReloadWithModel:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (double)timeLimit;
- (id)destinationEndpoint;
- (_Bool)hasEqualModel:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)relogScreen;
- (id)navEndpoint;
- (void)lookingToListenController:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)hideEffectPicker;
- (void)onRecordTouchDown;
- (void)didSwipeCameraPreviewDown;
- (void)didTapRecordButton;
- (void)cameraOverlayDidTapCommentsPicker:(id)arg1;
- (void)cameraOverlayTogglePresetsPicker:(id)arg1;
- (void)setAccessoryViewsTransparent:(_Bool)arg1;
@property(retain, nonatomic) UIView *previewView;
- (void)setPreviewViewTransparent:(_Bool)arg1;
- (void)cameraViewControllerFailedToRecord:(id)arg1;
- (void)cameraViewControllerDidLongPress;
- (void)cameraViewControllerRecordingEnded:(id)arg1;
- (void)cameraViewControllerRecordingBegan:(id)arg1;
- (void)cameraViewControllerOrientationChanged:(long long)arg1;
- (void)cameraResponseRequestor:(id)arg1 didReceiveResponse:(id)arg2 error:(id)arg3;
- (void)presentCommentsPicker;
- (void)maybeFetchRenderer;
- (void)loadOverlayViewsFromModel;
- (id)newCameraProfile;
- (void)updateCameraViewController;
- (void)updateLibraryViewController;
- (void)updateRecordButton;
- (id)overlayView;
- (void)dismissOutstandingModals;
- (unsigned long long)effectTrayModeForActiveFeature:(id)arg1;
- (id)effectTrayForEffectTrayMode:(unsigned long long)arg1;
- (void)transitionToFeatureWithEffectTrayMode:(unsigned long long)arg1;
- (void)togglePresetsEffectsPicker;
- (void)toggleExpressiveEffectsPicker;
- (void)effectController:(id)arg1 didSelectEffect:(id)arg2;
- (void)effectControllerEffectProccessorDidChange:(id)arg1;
- (void)willMakeRequestWithDataSource:(id)arg1;
- (_Bool)shouldFilterOutCameraRollAsset:(id)arg1;
- (_Bool)shouldIncludePhotos;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)takeoverDidClose:(id)arg1;
- (void)setContentOverlayViewController:(id)arg1 fromCoordinator:(id)arg2;
- (void)setContentViewController:(id)arg1 fromCoordinator:(id)arg2;
- (id)contentOverlayViewControllerForCoordinator:(id)arg1;
- (id)contentViewControllerForCoordinator:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)navigateToEditorWithEvent:(id)arg1 shouldLogEffects:(_Bool)arg2;
- (_Bool)showStrikesRenderer;
- (_Bool)handleExternalCommandResponderEvent:(id)arg1;
- (_Bool)handleNavigationResponderEvent:(id)arg1;
- (void)setUpResponderEventHandlers;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 playbackController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTReelCameraViewControllerView *view; // @dynamic view;

@end

