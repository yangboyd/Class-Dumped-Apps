//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface YTIYTCodeData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *codeBytes; // @dynamic codeBytes;
@property(nonatomic) _Bool hasCodeBytes; // @dynamic hasCodeBytes;
@property(nonatomic) _Bool hasImageBytes; // @dynamic hasImageBytes;
@property(nonatomic) _Bool hasMetadataBytes; // @dynamic hasMetadataBytes;
@property(copy, nonatomic) NSData *imageBytes; // @dynamic imageBytes;
@property(copy, nonatomic) NSData *metadataBytes; // @dynamic metadataBytes;

@end

