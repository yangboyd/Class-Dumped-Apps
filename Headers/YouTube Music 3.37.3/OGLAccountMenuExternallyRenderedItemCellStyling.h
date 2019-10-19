//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;
@protocol OGLTheming;

@interface OGLAccountMenuExternallyRenderedItemCellStyling : NSObject
{
    id <OGLTheming> _oglTheme;
}

@property(retain, nonatomic) id <OGLTheming> oglTheme; // @synthesize oglTheme=_oglTheme;
- (void).cxx_destruct;
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

