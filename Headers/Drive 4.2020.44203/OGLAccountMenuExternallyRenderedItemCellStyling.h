//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;
@protocol OGLTheming;

@interface OGLAccountMenuExternallyRenderedItemCellStyling : NSObject
{
    id <OGLTheming> _oglTheme;
    double _additionalHorizontalPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double additionalHorizontalPadding; // @synthesize additionalHorizontalPadding=_additionalHorizontalPadding;
@property(retain, nonatomic) id <OGLTheming> oglTheme; // @synthesize oglTheme=_oglTheme;
@property(readonly, nonatomic) UIColor *rippleColor;
@property(readonly, nonatomic) UIColor *imageTintColor;
@property(readonly, nonatomic) UIFont *subtitleFont;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) UIColor *subtitleColor;
@property(readonly, nonatomic) UIColor *titleColor;
@property(readonly, nonatomic) double imageCenterX;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) double minHorizontalSpaceBetweenImageAndText;
@property(readonly, nonatomic) double textLeadingSpace;
- (id)initWithOGLTheme:(id)arg1;

@end

