//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCPBCoordinate, SCPBGalleryMultiSnapSegment, SCPBGalleryServletSensorBlob, SCPBGallerySnapSource, SCPBStoryFrame;

@interface SCPBGalleryServletGallerySnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double battery; // @dynamic battery;
@property(nonatomic) _Bool cameraFrontFacing; // @dynamic cameraFrontFacing;
@property(nonatomic) int cameraHardwareMountingDegrees; // @dynamic cameraHardwareMountingDegrees;
@property(nonatomic) long long captureTime; // @dynamic captureTime;
@property(nonatomic) double contentScore; // @dynamic contentScore;
@property(nonatomic) long long createTime; // @dynamic createTime;
@property(nonatomic) _Bool defunct; // @dynamic defunct;
@property(copy, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(nonatomic) double duration; // @dynamic duration;
@property(copy, nonatomic) NSString *encryption; // @dynamic encryption;
@property(retain, nonatomic) SCPBStoryFrame *framing; // @dynamic framing;
@property(nonatomic) _Bool gzippedOverlay; // @dynamic gzippedOverlay;
@property(nonatomic) _Bool hasDepthEffect; // @dynamic hasDepthEffect;
@property(nonatomic) _Bool hasFraming; // @dynamic hasFraming;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasMultiSnapSegment; // @dynamic hasMultiSnapSegment;
@property(nonatomic) _Bool hasOverlayImage; // @dynamic hasOverlayImage;
@property(nonatomic) _Bool hasSensorBlob; // @dynamic hasSensorBlob;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasSpectaclesMetadata; // @dynamic hasSpectaclesMetadata;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(copy, nonatomic) NSString *hdMediaDownloadURL; // @dynamic hdMediaDownloadURL;
@property(copy, nonatomic) NSString *hdMediaRedirectUri; // @dynamic hdMediaRedirectUri;
@property(nonatomic) long long hdMediaSize; // @dynamic hdMediaSize;
@property(nonatomic) int hdMediaStatus; // @dynamic hdMediaStatus;
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic) _Bool infiniteDuration; // @dynamic infiniteDuration;
@property(nonatomic) _Bool isInfiniteDuration; // @dynamic isInfiniteDuration;
@property(retain, nonatomic) SCPBCoordinate *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *mediaAttributesArray; // @dynamic mediaAttributesArray;
@property(readonly, nonatomic) unsigned long long mediaAttributesArray_Count; // @dynamic mediaAttributesArray_Count;
@property(copy, nonatomic) NSString *mediaDownloadURL; // @dynamic mediaDownloadURL;
@property(copy, nonatomic) NSString *mediaFormat; // @dynamic mediaFormat;
@property(copy, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(copy, nonatomic) NSString *mediaRedirectUri; // @dynamic mediaRedirectUri;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSString *miniThumbnailBytes; // @dynamic miniThumbnailBytes;
@property(copy, nonatomic) NSString *multiSnapGroupId; // @dynamic multiSnapGroupId;
@property(retain, nonatomic) SCPBGalleryMultiSnapSegment *multiSnapSegment; // @dynamic multiSnapSegment;
@property(nonatomic) int orientation; // @dynamic orientation;
@property(copy, nonatomic) NSString *overlay; // @dynamic overlay;
@property(copy, nonatomic) NSString *overlayDownloadURL; // @dynamic overlayDownloadURL;
@property(nonatomic) long long overlayImageSize; // @dynamic overlayImageSize;
@property(nonatomic) int overlayOrientation; // @dynamic overlayOrientation;
@property(copy, nonatomic) NSString *overlayRedirectUri; // @dynamic overlayRedirectUri;
@property(retain, nonatomic) SCPBGalleryServletSensorBlob *sensorBlob; // @dynamic sensorBlob;
@property(nonatomic) long long size; // @dynamic size;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(retain, nonatomic) SCPBGallerySnapSource *source; // @dynamic source;
@property(copy, nonatomic) NSString *spectaclesMetadataRedirectUri; // @dynamic spectaclesMetadataRedirectUri;
@property(copy, nonatomic) NSString *spectaclesMetadataURL; // @dynamic spectaclesMetadataURL;
@property(nonatomic) double speed; // @dynamic speed;
@property(nonatomic) int statusCode; // @dynamic statusCode;
@property(copy, nonatomic) NSString *tags; // @dynamic tags;
@property(nonatomic) int tagsVersion; // @dynamic tagsVersion;
@property(nonatomic) double temperature; // @dynamic temperature;
@property(copy, nonatomic) NSString *thumbnailDownloadURL; // @dynamic thumbnailDownloadURL;
@property(copy, nonatomic) NSString *thumbnailRedirectURL; // @dynamic thumbnailRedirectURL;
@property(copy, nonatomic) NSString *thumbnailRedirectUri; // @dynamic thumbnailRedirectUri;
@property(nonatomic) long long thumbnailSize; // @dynamic thumbnailSize;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) NSMutableArray *toolVersionsArray; // @dynamic toolVersionsArray;
@property(readonly, nonatomic) unsigned long long toolVersionsArray_Count; // @dynamic toolVersionsArray_Count;
@property(nonatomic) int width; // @dynamic width;

@end

