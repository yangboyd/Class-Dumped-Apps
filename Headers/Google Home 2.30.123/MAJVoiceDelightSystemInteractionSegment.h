//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MAJResourceSet, MAJVoiceDelightCard, NSString, STTSText;

@interface MAJVoiceDelightSystemInteractionSegment : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MAJVoiceDelightCard *cardToShow; // @dynamic cardToShow;
@property(nonatomic) _Bool hasCardToShow; // @dynamic hasCardToShow;
@property(nonatomic) _Bool hasResourceSet; // @dynamic hasResourceSet;
@property(nonatomic) _Bool hasStickerURL; // @dynamic hasStickerURL;
@property(nonatomic) _Bool hasTtsMarkup; // @dynamic hasTtsMarkup;
@property(retain, nonatomic) MAJResourceSet *resourceSet; // @dynamic resourceSet;
@property(copy, nonatomic) NSString *stickerURL; // @dynamic stickerURL;
@property(retain, nonatomic) STTSText *ttsMarkup; // @dynamic ttsMarkup;

@end

