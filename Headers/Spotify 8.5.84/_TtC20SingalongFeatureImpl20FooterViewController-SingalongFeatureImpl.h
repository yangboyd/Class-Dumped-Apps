//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC20SingalongFeatureImpl20FooterViewController.h"

#import "_TtP20SingalongFeatureImpl18DurationController_-Protocol.h"

@interface _TtC20SingalongFeatureImpl20FooterViewController (SingalongFeatureImpl) <_TtP20SingalongFeatureImpl18DurationController_>
- (void)updateSliderAccessibilityIncrementStep:(double)arg1;
- (void)trackMetadataDidFinishUpdating;
- (void)trackMetadataDidMove:(_Bool)arg1;
- (void)trackPositionDidChange;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (void)nowPlayingDurationViewProgressDidChange:(id)arg1;
- (void)nowPlayingDurationViewDidTapSlider:(id)arg1;
- (void)nowPlayingDurationViewDidEndScrubbing:(id)arg1;
- (void)nowPlayingDurationViewDidScrub:(id)arg1;
- (void)nowPlayingDurationViewDidBeginScrubbing:(id)arg1;
- (void)nowPlayingDurationViewToggleTimeRemainingLabel:(id)arg1;
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(id)arg1;
- (id)nowPlayingDurationView:(id)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (id)nowPlayingDurationView:(id)arg1 timeTakenTextForSliderValue:(float)arg2;
@end

