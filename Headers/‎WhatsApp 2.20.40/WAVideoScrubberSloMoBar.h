//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAVideoScrubberPrecisionRangeSlider.h>

@class UIImageView, _WAVideoScrubberStripedBar;

@interface WAVideoScrubberSloMoBar : WAVideoScrubberPrecisionRangeSlider
{
    _WAVideoScrubberStripedBar *_leftBar;
    _WAVideoScrubberStripedBar *_centerBar;
    _WAVideoScrubberStripedBar *_rightBar;
    double _centerValue;
    UIImageView *_leftHandle;
    UIImageView *_rightHandle;
}

- (void).cxx_destruct;
- (void)getFramesForLeftHandle:(struct CGRect *)arg1 atPosition:(double)arg2 rightHandle:(struct CGRect *)arg3 atPosition:(double)arg4 leftMostVisiblePosition:(double)arg5 rightMostVisiblePosition:(double)arg6;
- (id)rightHandleView;
- (id)leftHandleView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

