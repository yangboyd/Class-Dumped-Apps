//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString;

@interface YTICompactEpisodeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(nonatomic) _Bool hasPlayAllButton; // @dynamic hasPlayAllButton;
@property(nonatomic) _Bool hasPlayAllText; // @dynamic hasPlayAllText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIButtonSupportedRenderers *playAllButton; // @dynamic playAllButton;
@property(retain, nonatomic) YTIFormattedString *playAllText; // @dynamic playAllText;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

