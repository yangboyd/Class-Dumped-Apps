//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface SXPopoverStyle : NSObject
{
    UIColor *_fillColorTop;
    UIColor *_fillColorBottom;
    double _arrowBase;
    double _arrowHeight;
    double _outerBorderWidth;
    UIColor *_outerShadowColor;
    UIColor *_outerBorderColor;
    double _outerShadowBlurRadius;
    double _outerCornerRadius;
    double _minOuterCornerRadius;
    UIColor *_overlayColor;
    UIColor *_bottomOverlayColor;
    struct CGSize _outerShadowOffset;
    struct UIEdgeInsets _viewContentInsets;
}

+ (id)iOS7ishStyle;
+ (id)subNavPopoverStyle;
+ (id)filtersPopoverStyle;
@property(retain, nonatomic) UIColor *bottomOverlayColor; // @synthesize bottomOverlayColor=_bottomOverlayColor;
@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(nonatomic) struct UIEdgeInsets viewContentInsets; // @synthesize viewContentInsets=_viewContentInsets;
@property(nonatomic) double minOuterCornerRadius; // @synthesize minOuterCornerRadius=_minOuterCornerRadius;
@property(nonatomic) double outerCornerRadius; // @synthesize outerCornerRadius=_outerCornerRadius;
@property(nonatomic) struct CGSize outerShadowOffset; // @synthesize outerShadowOffset=_outerShadowOffset;
@property(nonatomic) double outerShadowBlurRadius; // @synthesize outerShadowBlurRadius=_outerShadowBlurRadius;
@property(retain, nonatomic) UIColor *outerBorderColor; // @synthesize outerBorderColor=_outerBorderColor;
@property(retain, nonatomic) UIColor *outerShadowColor; // @synthesize outerShadowColor=_outerShadowColor;
@property(nonatomic) double outerBorderWidth; // @synthesize outerBorderWidth=_outerBorderWidth;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) double arrowBase; // @synthesize arrowBase=_arrowBase;
@property(retain, nonatomic) UIColor *fillColorBottom; // @synthesize fillColorBottom=_fillColorBottom;
@property(retain, nonatomic) UIColor *fillColorTop; // @synthesize fillColorTop=_fillColorTop;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets outerShadowInsets;

@end

