//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCCollectionId_LegacyAlbumId, PhotosMCCollectionId_LegacyCollectionId;

@interface PhotosMCCollectionId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLegacyAlbumId; // @dynamic hasLegacyAlbumId;
@property(nonatomic) _Bool hasLegacyCollectionId; // @dynamic hasLegacyCollectionId;
@property(nonatomic) _Bool hasMediaKey; // @dynamic hasMediaKey;
@property(retain, nonatomic) PhotosMCCollectionId_LegacyAlbumId *legacyAlbumId; // @dynamic legacyAlbumId;
@property(retain, nonatomic) PhotosMCCollectionId_LegacyCollectionId *legacyCollectionId; // @dynamic legacyCollectionId;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;

@end

