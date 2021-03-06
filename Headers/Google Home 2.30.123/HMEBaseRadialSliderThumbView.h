//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface HMEBaseRadialSliderThumbView : UIView
{
    _Bool _highlighted;
    _Bool _disabled;
    UIColor *_thumbColor;
    UIColor *_thumbBorderColor;
    double _thumbRadius;
    double _thumbBorderRadius;
    CAShapeLayer *_thumbInnerLayer;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAShapeLayer *thumbInnerLayer; // @synthesize thumbInnerLayer=_thumbInnerLayer;
@property(nonatomic) double thumbBorderRadius; // @synthesize thumbBorderRadius=_thumbBorderRadius;
@property(nonatomic) double thumbRadius; // @synthesize thumbRadius=_thumbRadius;
@property(retain, nonatomic) UIColor *thumbBorderColor; // @synthesize thumbBorderColor=_thumbBorderColor;
@property(retain, nonatomic) UIColor *thumbColor; // @synthesize thumbColor=_thumbColor;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (double)innerRadius;
- (void)updateThumbShape;
- (id)pathForRadius:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)thumbBorderLayer;

@end

