//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CALayerDelegate-Protocol.h"

@class MDCRippleLayer;

@protocol MDCRippleLayerDelegate <CALayerDelegate>
- (void)rippleLayerTouchUpAnimationDidEnd:(MDCRippleLayer *)arg1;
- (void)rippleLayerTouchUpAnimationDidBegin:(MDCRippleLayer *)arg1;
- (void)rippleLayerTouchDownAnimationDidEnd:(MDCRippleLayer *)arg1;
- (void)rippleLayerTouchDownAnimationDidBegin:(MDCRippleLayer *)arg1;
@end

