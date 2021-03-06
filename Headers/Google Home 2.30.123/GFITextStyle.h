//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFIFontStyle, GTPColor, NSString;

@interface GFITextStyle : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int baselineOffset; // @dynamic baselineOffset;
@property(retain, nonatomic) GTPColor *color; // @dynamic color;
@property(copy, nonatomic) NSString *fontName; // @dynamic fontName;
@property(readonly, nonatomic) int fontOneOfCase; // @dynamic fontOneOfCase;
@property(nonatomic) int fontSize; // @dynamic fontSize;
@property(retain, nonatomic) GFIFontStyle *fontStyle; // @dynamic fontStyle;
@property(nonatomic) _Bool hasBaselineOffset; // @dynamic hasBaselineOffset;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasFontSize; // @dynamic hasFontSize;
@property(nonatomic) _Bool hasHighlightColor; // @dynamic hasHighlightColor;
@property(nonatomic) _Bool hasLineHeight; // @dynamic hasLineHeight;
@property(nonatomic) _Bool hasStrikeThrough; // @dynamic hasStrikeThrough;
@property(nonatomic) _Bool hasUnderline; // @dynamic hasUnderline;
@property(retain, nonatomic) GTPColor *highlightColor; // @dynamic highlightColor;
@property(nonatomic) int lineHeight; // @dynamic lineHeight;
@property(nonatomic) _Bool strikeThrough; // @dynamic strikeThrough;
@property(nonatomic) _Bool underline; // @dynamic underline;

@end

