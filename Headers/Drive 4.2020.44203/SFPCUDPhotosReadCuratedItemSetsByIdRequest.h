//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCMediaCuratedItemSetMask, PhotosMCMediaItemMask, SFPCUDReadCuratedItemSetsByIdQuery;

@interface SFPCUDPhotosReadCuratedItemSetsByIdRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCMediaCuratedItemSetMask *curatedItemSetMask; // @dynamic curatedItemSetMask;
@property(nonatomic) _Bool hasCuratedItemSetMask; // @dynamic hasCuratedItemSetMask;
@property(nonatomic) _Bool hasItemMask; // @dynamic hasItemMask;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(retain, nonatomic) PhotosMCMediaItemMask *itemMask; // @dynamic itemMask;
@property(retain, nonatomic) SFPCUDReadCuratedItemSetsByIdQuery *query; // @dynamic query;

@end

