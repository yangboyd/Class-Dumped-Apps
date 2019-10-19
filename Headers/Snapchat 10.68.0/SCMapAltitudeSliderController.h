//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapViewportListener-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, SCMapAltitudeSliderView, UIPanGestureRecognizer;
@protocol SCLocationProvider, SCMapConfiguration, SCMapGestures, SCMapViewport;

@interface SCMapAltitudeSliderController : NSObject <UIGestureRecognizerDelegate, SCMapViewportListener>
{
    id <SCLocationProvider> _locationProvider;
    id <SCMapViewport> _mapViewport;
    id <SCMapConfiguration> _mapConfiguration;
    id <SCMapGestures> _mapGestures;
    NSArray *_zoomAffectingGestureRecognizers;
    UIPanGestureRecognizer *_gestureRecognizer;
    SCMapAltitudeSliderView *_sliderView;
    double _lastZoomLevel;
    _Bool _sliderIsVisible;
    NSTimer *_sliderHideTimer;
    struct CLLocationCoordinate2D _startingScrubCoordinate;
    double _percentageAdjustment;
    _Bool _manualPercentage;
}

- (void).cxx_destruct;
- (void)_onAltitudeGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_isUserInteracting;
- (_Bool)_isUserScrubbing;
- (void)_hideSliderTick;
- (void)_updateZoomLevel;
- (void)mapViewport:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewportIsChanging:(id)arg1;
- (void)mapViewport:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
@property(readonly, nonatomic) SCMapAltitudeSliderView *sliderView;
@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
- (id)initWithLocationProvider:(id)arg1 mapViewport:(id)arg2 mapConfiguration:(id)arg3 mapGestures:(id)arg4 zoomAffectingGestureRecognizers:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

