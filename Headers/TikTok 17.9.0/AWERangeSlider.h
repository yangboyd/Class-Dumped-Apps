//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWESlider.h"

@class UIView;

@interface AWERangeSlider : AWESlider
{
    _Bool _showDefaultIndicator;
    double _defaultIndicatorPosition;
    double _originPosition;
    UIView *_defaultIndicator;
    UIView *_maskView;
    UIView *_backgroundTrackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundTrackView; // @synthesize backgroundTrackView=_backgroundTrackView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *defaultIndicator; // @synthesize defaultIndicator=_defaultIndicator;
@property(nonatomic) double originPosition; // @synthesize originPosition=_originPosition;
@property(nonatomic) double defaultIndicatorPosition; // @synthesize defaultIndicatorPosition=_defaultIndicatorPosition;
@property(nonatomic) _Bool showDefaultIndicator; // @synthesize showDefaultIndicator=_showDefaultIndicator;
- (void)reorderViewHierarchy;
- (void)p_updateRange;
- (void)handleValueChanged;
- (void)setValue:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

