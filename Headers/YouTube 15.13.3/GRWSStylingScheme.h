//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GRWSColorScheme, GRWSImageScheme;

@interface GRWSStylingScheme : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GRWSColorScheme *color; // @dynamic color;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasTheme; // @dynamic hasTheme;
@property(retain, nonatomic) GRWSImageScheme *image; // @dynamic image;
@property(nonatomic) int theme; // @dynamic theme;

@end

