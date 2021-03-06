//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGVideoTimelineThumbnailsViewDelegate-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGVideoTimelineRange, IGVideoTimelineRangeView, IGVideoTimelineThumbnailsView, NSArray, NSString, UIColor, UIGestureRecognizer, UIImpactFeedbackGenerator;
@protocol IGVideoTimelineThumbnailProvider, IGVideoTimelineViewDelegate;

@interface IGVideoTimelineView : UIView <IGVideoTimelineThumbnailsViewDelegate, UIGestureRecognizerDelegate>
{
    IGVideoTimelineThumbnailsView *_thumbnailsView;
    UIView *_leftDimmingView;
    UIView *_rightDimmingView;
    IGVideoTimelineRangeView *_rangeView;
    IGVideoTimelineRange *_initialScrubSelectedRange;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _Bool _isSnappedToClipBounds;
    double _newRangeBound;
    _Bool _isScrubbing;
    _Bool _playheadConstrainedToSelectedRange;
    _Bool _playheadInteractionDisabled;
    _Bool _snappingEnabled;
    _Bool _thumbnailShadowVisible;
    id <IGVideoTimelineThumbnailProvider> _thumbnailProvider;
    id <IGVideoTimelineViewDelegate> _delegate;
    double _playheadProgress;
    IGVideoTimelineRange *_selectedRange;
    long long _activeRangeDragHandle;
    double _minimumSelectedRangeDuration;
    double _maximumSelectedRangeDuration;
    UIView *_thumbnailOverlayView;
    UIView *_playheadView;
    NSArray *_snapTimestamps;
    UIGestureRecognizer *_scrubbingGesture;
    struct UIEdgeInsets _tapPadding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIGestureRecognizer *scrubbingGesture; // @synthesize scrubbingGesture=_scrubbingGesture;
@property(nonatomic, getter=isThumbnailShadowVisible) _Bool thumbnailShadowVisible; // @synthesize thumbnailShadowVisible=_thumbnailShadowVisible;
@property(retain, nonatomic) NSArray *snapTimestamps; // @synthesize snapTimestamps=_snapTimestamps;
@property(nonatomic) _Bool snappingEnabled; // @synthesize snappingEnabled=_snappingEnabled;
@property(readonly, nonatomic) UIView *playheadView; // @synthesize playheadView=_playheadView;
@property(nonatomic) _Bool playheadInteractionDisabled; // @synthesize playheadInteractionDisabled=_playheadInteractionDisabled;
@property(nonatomic) _Bool playheadConstrainedToSelectedRange; // @synthesize playheadConstrainedToSelectedRange=_playheadConstrainedToSelectedRange;
@property(retain, nonatomic) UIView *thumbnailOverlayView; // @synthesize thumbnailOverlayView=_thumbnailOverlayView;
@property(nonatomic) double maximumSelectedRangeDuration; // @synthesize maximumSelectedRangeDuration=_maximumSelectedRangeDuration;
@property(nonatomic) double minimumSelectedRangeDuration; // @synthesize minimumSelectedRangeDuration=_minimumSelectedRangeDuration;
@property(nonatomic) long long activeRangeDragHandle; // @synthesize activeRangeDragHandle=_activeRangeDragHandle;
@property(retain, nonatomic) IGVideoTimelineRange *selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) struct UIEdgeInsets tapPadding; // @synthesize tapPadding=_tapPadding;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic) double playheadProgress; // @synthesize playheadProgress=_playheadProgress;
@property(nonatomic) __weak id <IGVideoTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IGVideoTimelineThumbnailProvider> thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
- (void)_updateSubviewVisibility;
- (void)timelineThumbnailsViewDidGenerateThumbnails:(id)arg1;
- (void)timelineThumbnailsViewWillGenerateThumbnails:(id)arg1;
@property(retain, nonatomic) UIColor *dimmingColor;
- (void)_handleScrubbingGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

