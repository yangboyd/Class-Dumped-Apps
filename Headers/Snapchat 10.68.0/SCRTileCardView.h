//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCRHtml, SCRImage, SCRStoryElementReference;

@interface SCRTileCardView : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float aspectRatio; // @dynamic aspectRatio;
@property(copy, nonatomic) NSString *color; // @dynamic color;
@property(readonly, nonatomic) int contentOneOfCase; // @dynamic contentOneOfCase;
@property(nonatomic) _Bool hasLogo; // @dynamic hasLogo;
@property(copy, nonatomic) NSString *headline; // @dynamic headline;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) SCRHtml *html; // @dynamic html;
@property(retain, nonatomic) SCRImage *image; // @dynamic image;
@property(retain, nonatomic) SCRImage *logo; // @dynamic logo;
@property(copy, nonatomic) NSString *logoText; // @dynamic logoText;
@property(readonly, nonatomic) int sizingOneOfCase; // @dynamic sizingOneOfCase;
@property(retain, nonatomic) SCRStoryElementReference *storyElement; // @dynamic storyElement;
@property(nonatomic) int type; // @dynamic type;

@end

