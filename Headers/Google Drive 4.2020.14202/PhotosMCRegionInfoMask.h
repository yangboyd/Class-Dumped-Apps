//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCFaceRegionInfoMask, PhotosMCImagePropertiesMask, PhotosMCNormalizedRectMask;

@interface PhotosMCRegionInfoMask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCFaceRegionInfoMask *faceRegionInfo; // @dynamic faceRegionInfo;
@property(nonatomic) _Bool hasFaceRegionInfo; // @dynamic hasFaceRegionInfo;
@property(nonatomic) _Bool hasNormalizedBoundingBox; // @dynamic hasNormalizedBoundingBox;
@property(nonatomic) _Bool hasThumbnailInfo; // @dynamic hasThumbnailInfo;
@property(retain, nonatomic) PhotosMCNormalizedRectMask *normalizedBoundingBox; // @dynamic normalizedBoundingBox;
@property(retain, nonatomic) PhotosMCImagePropertiesMask *thumbnailInfo; // @dynamic thumbnailInfo;

@end

