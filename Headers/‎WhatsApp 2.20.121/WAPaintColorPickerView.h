//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, WAGradientView;
@protocol WAPaintColorPickerViewDelegate;

@interface WAPaintColorPickerView : UIView
{
    UIView *_containerView;
    WAGradientView *_gradientView;
    struct CGPoint _positionOnDragBegin;
    long long _hue;
    double _saturation;
    double _brightness;
    UIView *_pixelateView;
    UIView *_desaturateView;
    _Bool _showsPixelEffects;
    float _value;
    unsigned long long _currentEffect;
    id <WAPaintColorPickerViewDelegate> _delegate;
}

+ (id)desaturateEffectColor;
+ (id)pixelateEffectColor;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsPixelEffects; // @synthesize showsPixelEffects=_showsPixelEffects;
@property(nonatomic) __weak id <WAPaintColorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long currentEffect; // @synthesize currentEffect=_currentEffect;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetValue;
- (void)updatePropertiesFromPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) UIColor *color;
- (void)resetColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

