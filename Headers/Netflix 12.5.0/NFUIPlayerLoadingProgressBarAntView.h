//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface NFUIPlayerLoadingProgressBarAntView : UIView
{
    _Bool _shouldAnimate;
    CALayer *_firstAnt;
    CALayer *_secondAnt;
    CALayer *_backgroundView;
}

@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(copy, nonatomic) CALayer *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CALayer *secondAnt; // @synthesize secondAnt=_secondAnt;
@property(copy, nonatomic) CALayer *firstAnt; // @synthesize firstAnt=_firstAnt;
- (void).cxx_destruct;
- (id)animateLayerPosition:(id)arg1 withPoint:(struct CGPoint)arg2 withDuration:(double)arg3;
- (void)animateIfPossible;
- (void)stopAnimation;
- (void)startAnimation;
- (void)resetAntPosition;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

