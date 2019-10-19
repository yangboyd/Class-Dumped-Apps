//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUELabelStyle, UIColor;
@protocol GLUETheme;

@interface SPTPodcastUIDiscoverCardStyle : NSObject
{
    double _imageViewCornerRadius;
    UIColor *_imageViewBackgroundColor;
    double _margin;
    double _titleTopMargin;
    double _minimumScaleFactor;
    double _highlightedAlpha;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) double highlightedAlpha; // @synthesize highlightedAlpha=_highlightedAlpha;
@property(readonly, nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(readonly, nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(readonly, nonatomic) double margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) UIColor *imageViewBackgroundColor; // @synthesize imageViewBackgroundColor=_imageViewBackgroundColor;
@property(readonly, nonatomic) double imageViewCornerRadius; // @synthesize imageViewCornerRadius=_imageViewCornerRadius;
- (void).cxx_destruct;
@property(readonly, nonatomic) GLUELabelStyle *subtitleLabelStyle;
@property(readonly, nonatomic) GLUELabelStyle *titleLabelStyle;
- (id)initWithTheme:(id)arg1;

@end

