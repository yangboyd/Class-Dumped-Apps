//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIThumbnailDetails;

@interface YTIMusicArtistEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *androidMediaStoreContentUri; // @dynamic androidMediaStoreContentUri;
@property(copy, nonatomic) NSString *details; // @dynamic details;
@property(copy, nonatomic) NSString *externalChannelId; // @dynamic externalChannelId;
@property(nonatomic) _Bool hasAndroidMediaStoreContentUri; // @dynamic hasAndroidMediaStoreContentUri;
@property(nonatomic) _Bool hasDetails; // @dynamic hasDetails;
@property(nonatomic) _Bool hasExternalChannelId; // @dynamic hasExternalChannelId;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasThumbnailDetails; // @dynamic hasThumbnailDetails;
@property(nonatomic) _Bool hasTrackCount; // @dynamic hasTrackCount;
@property(nonatomic) _Bool hasUserDetails; // @dynamic hasUserDetails;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnailDetails; // @dynamic thumbnailDetails;
@property(nonatomic) long long trackCount; // @dynamic trackCount;
@property(copy, nonatomic) NSString *userDetails; // @dynamic userDetails;

@end

