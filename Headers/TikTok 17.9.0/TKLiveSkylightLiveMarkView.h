//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer;

@interface TKLiveSkylightLiveMarkView : UIView
{
    CAShapeLayer *_markClipLayer;
    CAGradientLayer *_markColorLayer;
    CAShapeLayer *_markClipLayerForAniamtion;
    CAGradientLayer *_markColorLayerForAnimation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *markColorLayerForAnimation; // @synthesize markColorLayerForAnimation=_markColorLayerForAnimation;
@property(retain, nonatomic) CAShapeLayer *markClipLayerForAniamtion; // @synthesize markClipLayerForAniamtion=_markClipLayerForAniamtion;
@property(retain, nonatomic) CAGradientLayer *markColorLayer; // @synthesize markColorLayer=_markColorLayer;
@property(retain, nonatomic) CAShapeLayer *markClipLayer; // @synthesize markClipLayer=_markClipLayer;
- (void)_addSlowerAnimationToMarkClipLayer:(float)arg1 timeOffset:(double)arg2;
- (void)_addAnimationToMarkClipLayer:(float)arg1;
- (void)stopAnimationWithView:(id)arg1;
- (void)startSlowerAnimationWithView:(id)arg1 syncStartTime:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

