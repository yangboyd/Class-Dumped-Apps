//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CABasicAnimation, CAShapeLayer;

@interface YTReelProgressBar : UIView
{
    _Bool _isPaused;
    CABasicAnimation *_growingAnimation;
    double _duration;
    _Bool _current;
    double _progress;
    CAShapeLayer *_progressLayer;
}

+ (void)setDisableAnimation:(_Bool)arg1;
@property(readonly, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isCurrent) _Bool current; // @synthesize current=_current;
- (void).cxx_destruct;
- (id)whiteBackgroundColor;
- (void)reset;
- (void)fill;
- (id)initWithFrame:(struct CGRect)arg1;

@end

