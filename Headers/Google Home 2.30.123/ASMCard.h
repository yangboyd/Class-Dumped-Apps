//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMClpCard, ASMOneGoogleCard, ASMProductProfileCard, ASMPromptCarouselCard, ASMSearchResultCard, ASMSummaryCard;

@interface ASMCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASMClpCard *clp; // @dynamic clp;
@property(retain, nonatomic) ASMOneGoogleCard *oneGoogle; // @dynamic oneGoogle;
@property(retain, nonatomic) ASMProductProfileCard *productProfile; // @dynamic productProfile;
@property(retain, nonatomic) ASMPromptCarouselCard *promptCarousel; // @dynamic promptCarousel;
@property(retain, nonatomic) ASMSearchResultCard *searchResultCard; // @dynamic searchResultCard;
@property(retain, nonatomic) ASMSummaryCard *summary; // @dynamic summary;
@property(readonly, nonatomic) int typeOneOfCase; // @dynamic typeOneOfCase;

@end

