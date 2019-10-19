//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCImageProcessColorFilterSessionListener-Protocol.h"
#import "SCMotionManagerListener-Protocol.h"
#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaMagicMomentControllerDelegate-Protocol.h"
#import "SCOperaPinchGestureCompatibleViewController-Protocol.h"
#import "SCOperaRotatingLayerPinchControllerDelegate-Protocol.h"

@class NSString, SCCAEAGLView, SCFrameableContainerView, SCImageProcessColorFilterSession, SCOperaGLVideoLayerView, SCOperaMagicMomentController, SCOperaRotatingLayerPinchController, SCOperaRotatingViewTransformManipulator, UIImage, UIView;

@interface SCOperaGLImageLayerViewController : SCOperaLayerViewController <SCOperaRotatingLayerPinchControllerDelegate, SCMotionManagerListener, SCImageProcessColorFilterSessionListener, SCOperaMagicMomentControllerDelegate, SCOperaLayerViewControllerMediaContainer, SCOperaFadeTransitionCompatibleViewController, SCOperaPinchGestureCompatibleViewController>
{
    SCOperaGLVideoLayerView *_layerView;
    SCOperaRotatingViewTransformManipulator *_rotatingViewManipulator;
    SCFrameableContainerView *_containerView;
    SCCAEAGLView *_glView;
    UIImage *_imageAsset;
    _Bool _isRotatingImageLayout;
    _Bool _isListeningForMotionUpdates;
    SCImageProcessColorFilterSession *_imageProcessPixelSession;
    SCOperaRotatingLayerPinchController *_pinchController;
    SCOperaMagicMomentController *_magicMomentController;
    _Bool _shouldRestoreToOppositeState;
    _Bool _hasFullyAppearedOnScreen;
    _Bool _playbackStarted;
    _Bool _hasSentImageStartsToPlayEvent;
    UIView *_pinchGestureTarget;
}

@property(nonatomic) __weak UIView *pinchGestureTarget; // @synthesize pinchGestureTarget=_pinchGestureTarget;
- (void).cxx_destruct;
- (void)magicMomentController:(id)arg1 didSendOperaEvent:(id)arg2 params:(id)arg3;
- (void)magicMomentController:(id)arg1 didChangeMagicMomentEnabled:(_Bool)arg2;
- (void)_pinchForMagicMomentEnabled:(_Bool)arg1;
- (void)_setupMagicMomentControllerIfNeeded;
- (void)didUpdateRotation:(double)arg1 translation:(struct CGVector)arg2;
- (void)_stopListeningToMotionManagerIfNecessary;
- (void)_startListeningToMotionManagerIfNecessary;
- (void)colorFilterSessionDidRenderImage:(id)arg1;
- (_Bool)isOverlay;
- (struct CGSize)_contentSize;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (id)fadingViewsForFadeTransition;
- (id)movingViewsForFadeTransition;
- (void)_setupImageProcessSessionIfNecessary;
- (id)_glCommandsForKey:(id)arg1;
- (void)_setupPinchController;
- (void)operaRotatingLayerPinchController:(id)arg1 updateTransformWithScale:(double)arg2;
- (void)operaRotatingLayerPinchController:(id)arg1 didFinishPinchWithScale:(double)arg2;
- (void)_resetHorizontalPageOffset;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (id)currentViewParameters;
- (void)teardown;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)_stopPlaybackIfNecessary;
- (void)_startPlaybackIfNecessary;
- (void)_resetTrackingParams;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)viewWillFullyAppear;
- (void)resume;
- (void)pause;
- (void)_updateLayerLayout:(_Bool)arg1;
- (void)_updateImageProcessSessionWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

