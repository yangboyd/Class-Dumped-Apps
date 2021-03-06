//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface GDKCollectionTextStyler : NSObject
{
    UIFont *_font;
    double _minimumScaleFactor;
    UIColor *_textColor;
    long long _numberOfLines;
}

+ (void)resetLabelToSystemDefaults:(id)arg1;
+ (id)defaultSubtitleStyler;
+ (id)defaultTitleStyler;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)applyToLabel:(id)arg1;
- (id)stylerWithNumberOfLines:(long long)arg1;
- (id)stylerWithTextColor:(id)arg1;
- (id)stylerWithMinimumScaleFactor:(double)arg1;
- (id)stylerWithFont:(id)arg1;
- (id)initWithFont:(id)arg1 minimumScaleFactor:(double)arg2 textColor:(id)arg3 numberOfLines:(long long)arg4;

@end

