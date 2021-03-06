//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTHomeControlBodyView.h"

@class ASTRadialSlider, UIButton, UILabel;

@interface ASTHomeControlLightView : ASTHomeControlBodyView
{
    UILabel *_brightnessLabel;
    ASTRadialSlider *_brightnessSlider;
    long long _brightness;
    UIButton *_onOffButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *onOffButton; // @synthesize onOffButton=_onOffButton;
@property(nonatomic) long long brightness; // @synthesize brightness=_brightness;
@property(retain, nonatomic) ASTRadialSlider *brightnessSlider; // @synthesize brightnessSlider=_brightnessSlider;
@property(retain, nonatomic) UILabel *brightnessLabel; // @synthesize brightnessLabel=_brightnessLabel;
- (void)deviceStatusUpdated;
- (id)onOfButtonTitle;
- (void)onOffButtonTapped;
- (void)sliderValueDidChange;
- (id)primaryColor;
- (double)labelFontSize;
- (void)updateBrightnessLabel;
- (void)createSubviews;

@end

