//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ELMPBAttributedString, ELMPBCommand, ELMPBImage, YTIThumbnailOverlayTimeStatusRenderer;

@interface YTIInlineMutedCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int contentMode; // @dynamic contentMode;
@property(nonatomic) _Bool hasContentMode; // @dynamic hasContentMode;
@property(nonatomic) _Bool hasInlineAudioControlUiStyle; // @dynamic hasInlineAudioControlUiStyle;
@property(nonatomic) _Bool hasInlinePlaybackEndpoint; // @dynamic hasInlinePlaybackEndpoint;
@property(nonatomic) _Bool hasInlinePlaybackFullscreenUiStyle; // @dynamic hasInlinePlaybackFullscreenUiStyle;
@property(nonatomic) _Bool hasInlineScrubbingUiStyle; // @dynamic hasInlineScrubbingUiStyle;
@property(nonatomic) _Bool hasIsLive; // @dynamic hasIsLive;
@property(nonatomic) _Bool hasIsPremieringNow; // @dynamic hasIsPremieringNow;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasPlaybackState; // @dynamic hasPlaybackState;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasThumbnailOverlayTimeStatusRenderer; // @dynamic hasThumbnailOverlayTimeStatusRenderer;
@property(nonatomic) int inlineAudioControlUiStyle; // @dynamic inlineAudioControlUiStyle;
@property(retain, nonatomic) ELMPBCommand *inlinePlaybackEndpoint; // @dynamic inlinePlaybackEndpoint;
@property(nonatomic) int inlinePlaybackFullscreenUiStyle; // @dynamic inlinePlaybackFullscreenUiStyle;
@property(nonatomic) int inlineScrubbingUiStyle; // @dynamic inlineScrubbingUiStyle;
@property(nonatomic) _Bool isLive; // @dynamic isLive;
@property(nonatomic) _Bool isPremieringNow; // @dynamic isPremieringNow;
@property(retain, nonatomic) ELMPBAttributedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) ELMPBCommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(nonatomic) int playbackState; // @dynamic playbackState;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(retain, nonatomic) ELMPBImage *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIThumbnailOverlayTimeStatusRenderer *thumbnailOverlayTimeStatusRenderer; // @dynamic thumbnailOverlayTimeStatusRenderer;

@end

