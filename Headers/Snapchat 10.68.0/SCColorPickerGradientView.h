//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SCGradientView, SCShapeView, UIBezierPath;

@interface SCColorPickerGradientView : UIView
{
    _Bool _animateForCompact;
    _Bool _adjustingColorEnabled;
    _Bool _alphaEnabled;
    _Bool _useColorPickerV2;
    UIBezierPath *_maskPath;
    SCGradientView *_gradientView;
    SCGradientView *_gradientViewForColorLookup;
    SCShapeView *_shapeMaskView;
    NSArray *_currentColors;
    NSArray *_currentCGColors;
    double _adjustedBrightness;
    double _adjustedSaturation;
    double _adjustedAlpha;
    double _savedHue;
}

@property(nonatomic) _Bool useColorPickerV2; // @synthesize useColorPickerV2=_useColorPickerV2;
@property(nonatomic) double savedHue; // @synthesize savedHue=_savedHue;
@property(nonatomic) double adjustedAlpha; // @synthesize adjustedAlpha=_adjustedAlpha;
@property(nonatomic) double adjustedSaturation; // @synthesize adjustedSaturation=_adjustedSaturation;
@property(nonatomic) double adjustedBrightness; // @synthesize adjustedBrightness=_adjustedBrightness;
@property(retain, nonatomic) NSArray *currentCGColors; // @synthesize currentCGColors=_currentCGColors;
@property(retain, nonatomic) NSArray *currentColors; // @synthesize currentColors=_currentColors;
@property(retain, nonatomic) SCShapeView *shapeMaskView; // @synthesize shapeMaskView=_shapeMaskView;
@property(retain, nonatomic) SCGradientView *gradientViewForColorLookup; // @synthesize gradientViewForColorLookup=_gradientViewForColorLookup;
@property(retain, nonatomic) SCGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic, getter=isAlphaEnabled) _Bool alphaEnabled; // @synthesize alphaEnabled=_alphaEnabled;
@property(nonatomic, getter=isAdjustingColorEnabled) _Bool adjustingColorEnabled; // @synthesize adjustingColorEnabled=_adjustingColorEnabled;
@property(retain, nonatomic) UIBezierPath *maskPath; // @synthesize maskPath=_maskPath;
@property(nonatomic) _Bool animateForCompact; // @synthesize animateForCompact=_animateForCompact;
- (void).cxx_destruct;
- (void)reloadColorsFromPalette:(id)arg1;
- (void)_adjustColors;
- (struct CGPoint)locationForColor:(id)arg1;
- (id)gradientColorForLocation:(struct CGPoint)arg1;
- (void)adjustAlpha:(double)arg1;
- (void)adjustBrightness:(double)arg1;
- (void)adjustSaturation:(double)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_setupGradientView;
- (void)_setupColorsFromPalette:(id)arg1;
- (id)initWithPaletteModel:(id)arg1;

@end

