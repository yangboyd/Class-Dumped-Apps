//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSDictionary, NSString, TKNTypeStyle, UIColor, UIFont;

@interface GLUELabelStyle : NSObject <GLUEStyle>
{
    _Bool _upperCase;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    long long _numberOfLines;
    long long _lineBreakMode;
    double _lineHeightMultiple;
    double _kerning;
    long long _verticalAlignment;
    double _lineSpacing;
    double _hyphenationFactor;
    TKNTypeStyle *_typeStyle;
}

+ (id)labelStyleFromTypeStyle:(id)arg1;
@property(retain, nonatomic) TKNTypeStyle *typeStyle; // @synthesize typeStyle=_typeStyle;
@property(nonatomic) double hyphenationFactor; // @synthesize hyphenationFactor=_hyphenationFactor;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) _Bool upperCase; // @synthesize upperCase=_upperCase;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) double kerning; // @synthesize kerning=_kerning;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToLabelStyle:(id)arg1;
@property(nonatomic) double lineHeightPoints;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFont:(id)arg1;
- (id)attributesIncludingLineBreakMode:(_Bool)arg1;
- (id)attributedStringFromText:(id)arg1 includingLineBreakMode:(_Bool)arg2;
- (id)paragraphStyleIncludingLineBreakMode:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSDictionary *attributedStringAttributes;
- (struct CGSize)sizeForText:(id)arg1 maxWidth:(double)arg2;
- (id)attributedStringFromText:(id)arg1;
- (id)labelStyleWithTypeStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

