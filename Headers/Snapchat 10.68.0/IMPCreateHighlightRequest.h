//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPBoltUploadObject, NSMutableArray, NSString;

@interface IMPCreateHighlightRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) IMPBoltUploadObject *coverThumbnailData; // @dynamic coverThumbnailData;
@property(readonly, nonatomic) int coverThumbnailOneOfCase; // @dynamic coverThumbnailOneOfCase;
@property(copy, nonatomic) NSString *coverThumbnailURL; // @dynamic coverThumbnailURL;
@property(copy, nonatomic) NSString *profileId; // @dynamic profileId;
@property(retain, nonatomic) NSMutableArray *snapsArray; // @dynamic snapsArray;
@property(readonly, nonatomic) unsigned long long snapsArray_Count; // @dynamic snapsArray_Count;
@property(nonatomic) int thumbnailSnapIndex; // @dynamic thumbnailSnapIndex;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

