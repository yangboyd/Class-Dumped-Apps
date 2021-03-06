//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSData;

@interface PhotosMCItemsByContentHashQuery : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasItemStoragePolicy; // @dynamic hasItemStoragePolicy;
@property(nonatomic) _Bool hasMatchFullOriginal; // @dynamic hasMatchFullOriginal;
@property(nonatomic) _Bool hasSha1Hash; // @dynamic hasSha1Hash;
@property(nonatomic) _Bool hasSha1MediaType; // @dynamic hasSha1MediaType;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic) int itemStoragePolicy; // @dynamic itemStoragePolicy;
@property(nonatomic) _Bool matchFullOriginal; // @dynamic matchFullOriginal;
@property(copy, nonatomic) NSData *sha1Hash; // @dynamic sha1Hash;
@property(nonatomic) int sha1MediaType; // @dynamic sha1MediaType;
@property(nonatomic) int width; // @dynamic width;

@end

