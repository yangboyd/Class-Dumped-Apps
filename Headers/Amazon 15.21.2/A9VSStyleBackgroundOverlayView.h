//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIBezierPath;

@interface A9VSStyleBackgroundOverlayView : UIView
{
    _Bool _isValidDraw;
    CAShapeLayer *_maskLayer;
    UIBezierPath *_boxPath;
    CAShapeLayer *_boxGlowLayer;
    struct CGRect _boxFrame;
}

@property _Bool isValidDraw; // @synthesize isValidDraw=_isValidDraw;
@property(retain) CAShapeLayer *boxGlowLayer; // @synthesize boxGlowLayer=_boxGlowLayer;
@property(retain, nonatomic) UIBezierPath *boxPath; // @synthesize boxPath=_boxPath;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) struct CGRect boxFrame; // @synthesize boxFrame=_boxFrame;
- (void).cxx_destruct;
- (void)removeLayerAnimations;
- (id)getPathWithRect:(struct CGRect)arg1;
- (void)drawBoxesWithDuration:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

