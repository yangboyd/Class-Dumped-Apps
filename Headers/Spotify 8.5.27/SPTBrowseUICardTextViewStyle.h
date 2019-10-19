//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;

@interface SPTBrowseUICardTextViewStyle : NSObject <GLUEStyle>
{
    UIFont *_font;
    UIColor *_textColor;
    double _singleLineFontSizeThreshold;
    double _hyphenationFontSizeThreshold;
    double _minFontSize;
}

@property(nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property(nonatomic) double hyphenationFontSizeThreshold; // @synthesize hyphenationFontSizeThreshold=_hyphenationFontSizeThreshold;
@property(nonatomic) double singleLineFontSizeThreshold; // @synthesize singleLineFontSizeThreshold=_singleLineFontSizeThreshold;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCardTextViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithFont:(id)arg1 textColor:(id)arg2 singleLineFontSizeThreshold:(double)arg3 hyphenationFontSizeThreshold:(double)arg4 minFontSize:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

