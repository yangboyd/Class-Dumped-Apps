//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAttributedRenderer_ContentPadding, YTIRenderer;

@interface YTIAttributedRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int alignment; // @dynamic alignment;
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) _Bool hasAlignment; // @dynamic hasAlignment;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasPadding; // @dynamic hasPadding;
@property(nonatomic) _Bool hasRenderer; // @dynamic hasRenderer;
@property(retain, nonatomic) YTIAttributedRenderer_ContentPadding *padding; // @dynamic padding;
@property(retain, nonatomic) YTIRenderer *renderer; // @dynamic renderer;

@end

