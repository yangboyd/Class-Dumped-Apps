//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIMediaPlaybackSiriShortcut_SiriShortcutMediaItem;

@interface YTIMediaPlaybackSiriShortcut : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSiriShortcutMediaItem; // @dynamic hasSiriShortcutMediaItem;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIMediaPlaybackSiriShortcut_SiriShortcutMediaItem *siriShortcutMediaItem; // @dynamic siriShortcutMediaItem;

@end

