//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingDurationUnitViewModelDelegate-Protocol.h"
#import "SPTNowPlayingDurationViewV2DataSource-Protocol.h"
#import "SPTNowPlayingDurationViewV2Delegate-Protocol.h"
#import "SPTNowPlayingSliderV2DataSource-Protocol.h"

@class NSString, SPTNowPlayingDurationUnitViewModelImplementation, SPTNowPlayingDurationViewV2, SPTTheme, UIView;
@protocol SPTNowPlayingContainingViewController;

@interface SPTNowPlayingDurationUnitViewController : UIViewController <SPTNowPlayingSliderV2DataSource, SPTNowPlayingDurationViewV2DataSource, SPTNowPlayingDurationViewV2Delegate, SPTNowPlayingContainedViewController, SPTNowPlayingDurationUnitViewModelDelegate>
{
    _Bool _hasShownLabelsAfterTrackChange;
    SPTTheme *_theme;
    SPTNowPlayingDurationUnitViewModelImplementation *_viewModel;
    SPTNowPlayingDurationViewV2 *_durationView;
    UIView *_animationView;
}

@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) SPTNowPlayingDurationViewV2 *durationView; // @synthesize durationView=_durationView;
@property(nonatomic) _Bool hasShownLabelsAfterTrackChange; // @synthesize hasShownLabelsAfterTrackChange=_hasShownLabelsAfterTrackChange;
@property(readonly, nonatomic) SPTNowPlayingDurationUnitViewModelImplementation *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)trackMetadataDidFinishUpdating;
- (void)trackMetadataDidMove:(_Bool)arg1;
- (void)trackPositionDidChange;
- (void)updateLabelsVisibility;
- (void)hideLabelsAfterTemporarilyShowing;
- (void)showLabelsTemporarily;
- (void)nowPlayingDurationViewDidTapSlider:(id)arg1;
- (void)nowPlayingDurationViewDidEndScrubbing:(id)arg1;
- (void)nowPlayingDurationViewProgressDidChange:(id)arg1;
- (void)nowPlayingDurationViewDidBeginScrubbing:(id)arg1;
- (void)nowPlayingDurationViewToggleTimeRemainingLabel:(id)arg1;
- (void)nowPlayingDurationViewToggleAlwaysShowDurationLabels:(id)arg1;
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(id)arg1;
- (id)nowPlayingDurationView:(id)arg1 timeTakenTextForSliderValue:(float)arg2;
- (id)nowPlayingDurationView:(id)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)setupConstraints;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 animationView:(id)arg2 viewModel:(id)arg3;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

