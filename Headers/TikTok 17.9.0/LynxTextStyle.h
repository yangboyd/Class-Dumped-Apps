//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSShadow, NSString, UIColor;

@interface LynxTextStyle : NSObject <NSCopying>
{
    double _fontSize;
    double _lineHeight;
    double _lineSpacing;
    double _letterSpacing;
    long long _textAlignment;
    double _fontWeight;
    long long _fontStyle;
    UIColor *_foregroundColor;
    UIColor *_backgroundColor;
    NSString *_fontFamilyName;
    NSString *_textDecoration;
    NSShadow *_textShadow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSShadow *textShadow; // @synthesize textShadow=_textShadow;
@property(retain, nonatomic) NSString *textDecoration; // @synthesize textDecoration=_textDecoration;
@property(retain, nonatomic) NSString *fontFamilyName; // @synthesize fontFamilyName=_fontFamilyName;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) double letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (id)toAttributesWithFontFaceeContext:(id)arg1;
- (id)fontWithFontFaceeContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyTextStyle:(id)arg1;
- (id)init;

@end

