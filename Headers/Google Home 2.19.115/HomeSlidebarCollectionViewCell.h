//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

@class MDCSlider, UIImageView;

@interface HomeSlidebarCollectionViewCell : MDCCollectionViewCell
{
    MDCSlider *_slider;
    UIImageView *_imageView;
    CDUnknownBlockType _callback;
    struct CGSize _imageSize;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MDCSlider *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
- (void)volumeSliderValueDidChange:(id)arg1;
- (void)setSliderValue:(float)arg1 image:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)initializeLayoutConstraintsWithViews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

