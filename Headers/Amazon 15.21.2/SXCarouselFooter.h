//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SXCarouselFooter : UIControl
{
    unsigned long long _imageCount;
    unsigned long long _currentIndex;
    unsigned long long _activeIndex;
    NSMutableArray *_balloons;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *balloons; // @synthesize balloons=_balloons;
@property(nonatomic) unsigned long long activeIndex; // @synthesize activeIndex=_activeIndex;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) unsigned long long imageCount; // @synthesize imageCount=_imageCount;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)panGestureRecognized:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)touchLocationChanged:(struct CGPoint)arg1;
- (void)setActiveCarouselIndex:(unsigned long long)arg1;
- (id)init;

@end

