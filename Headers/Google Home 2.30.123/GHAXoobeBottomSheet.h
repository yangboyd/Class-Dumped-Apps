//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHAXoobeContent, GHAXoobeFooter, GHAXoobeHeader, GHAXoobeHero;

@interface GHAXoobeBottomSheet : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHAXoobeContent *content; // @dynamic content;
@property(retain, nonatomic) GHAXoobeFooter *footer; // @dynamic footer;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasFooter; // @dynamic hasFooter;
@property(retain, nonatomic) GHAXoobeHeader *header; // @dynamic header;
@property(readonly, nonatomic) int headingOneOfCase; // @dynamic headingOneOfCase;
@property(retain, nonatomic) GHAXoobeHero *hero; // @dynamic hero;

@end

