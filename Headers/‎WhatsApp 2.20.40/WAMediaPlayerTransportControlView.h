//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexSet, UILabel, WAMediaPlayerSlider, WAMediaPlayerTrack;
@protocol WAMediaPlayerTransportControlViewDelegate;

@interface WAMediaPlayerTransportControlView : UIView
{
    WAMediaPlayerTrack *_track;
    WAMediaPlayerSlider *_slider;
    UILabel *_currentTimeLabel;
    UILabel *_remainingTimeLabel;
    UIView *_backgroundView;
    _Bool _scrubbingInProgress;
    id <WAMediaPlayerTransportControlViewDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isScrubbingInProgress) _Bool scrubbingInProgress; // @synthesize scrubbingInProgress=_scrubbingInProgress;
@property(nonatomic) __weak id <WAMediaPlayerTransportControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sliderTouchEnd:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)updateTimeLabels;
- (void)setLoadedSet:(id)arg1 size:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long loadedSetSize;
@property(readonly, nonatomic) NSIndexSet *loadedSet;
@property(nonatomic) double currentTime;
@property(nonatomic) double duration;
- (void)reset;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

