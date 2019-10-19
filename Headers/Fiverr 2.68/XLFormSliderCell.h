//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLFormBaseCell.h"

@class UILabel, UISlider;

@interface XLFormSliderCell : XLFormBaseCell
{
    UILabel *_textLabel;
    UISlider *_slider;
    unsigned long long _steps;
}

+ (double)formDescriptorCellHeightForRowDescriptor:(id)arg1;
@property unsigned long long steps; // @synthesize steps=_steps;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)valueChanged:(id)arg1;
- (void)update;
- (void)configure;

@end

