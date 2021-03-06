//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MDCInkView, MDCShapedShadowLayer, NSMutableDictionary, UIColor;
@protocol MDCShapeGenerating;

@interface MDCCard : UIControl
{
    NSMutableDictionary *_shadowElevations;
    NSMutableDictionary *_shadowColors;
    NSMutableDictionary *_borderWidths;
    NSMutableDictionary *_borderColors;
    UIColor *_backgroundColor;
    struct CGPoint _lastTouch;
    _Bool _interactable;
    MDCInkView *_inkView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic, getter=isInteractable) _Bool interactable; // @synthesize interactable=_interactable;
@property(readonly, nonatomic) MDCInkView *inkView; // @synthesize inkView=_inkView;
- (void)updateBackgroundColor;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)updateInkForShape;
@property(retain, nonatomic) id <MDCShapeGenerating> shapeGenerator;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (id)shadowColorForState:(unsigned long long)arg1;
- (void)updateShadowColor;
- (void)setShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)borderColorForState:(unsigned long long)arg1;
- (void)updateBorderColor;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (double)borderWidthForState:(unsigned long long)arg1;
- (void)updateBorderWidth;
- (void)setBorderWidth:(double)arg1 forState:(unsigned long long)arg2;
- (void)updateShadowElevation;
- (void)setShadowElevation:(double)arg1 forState:(unsigned long long)arg2;
- (double)shadowElevationForState:(unsigned long long)arg1;
- (id)boundingPath;
@property(nonatomic) double cornerRadius;
- (void)layoutSubviews;
- (void)commonMDCCardInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MDCShapedShadowLayer *layer; // @dynamic layer;

@end

