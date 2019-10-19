//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SOJUDynamicContentSetting, SOJUGeofence, SOJUGeofilterImageMetadata, SOJUGeofilterPrompt, SOJULensData, SOJULensPlacementInfo, SOJUSponsoredSlugPosAndText, SOJUSponsoredSlugStyle, SOJUStickerPack, SOJUUnlockableTrackInfo, SOJUUnlockablesArSegmentationFilter, SOJUUnlockablesAttachment, SOJUUnlockablesAudio, SOJUUnlockablesAutoStacking, SOJUUnlockablesCaptionStyle, SOJUUnlockablesCarouselGroup, SOJUUnlockablesDebugInfo, SOJUUnlockablesDynamicContextProperties, SOJUUnlockablesPostCaptureLensData, SOJUUnlockablesScannableData, SOJUUnlockablesSchedule, SOJUUnlockablesTooltip, SOJUUnlockablesUnlockableContext;

@protocol SOJUGeofilterResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSData *checksum;
@property(readonly, copy, nonatomic) NSNumber *filterIdLong;
@property(readonly, copy, nonatomic) SOJUUnlockablesCaptionStyle *captionStyle;
@property(readonly, copy, nonatomic) SOJUUnlockablesPostCaptureLensData *postCaptureLensData;
@property(readonly, copy, nonatomic) SOJUUnlockablesAudio *audio;
@property(readonly, copy, nonatomic) NSString *contextHint;
@property(readonly, copy, nonatomic) SOJUUnlockablesTooltip *tooltip;
@property(readonly, copy, nonatomic) SOJUUnlockablesScannableData *scannableData;
@property(readonly, copy, nonatomic) SOJUUnlockablesDebugInfo *debugInfo;
@property(readonly, copy, nonatomic) SOJUUnlockablesAttachment *attachment;
@property(readonly, copy, nonatomic) SOJUUnlockablesArSegmentationFilter *arSegmentation;
@property(readonly, copy, nonatomic) SOJUUnlockablesCarouselGroup *carouselGroup;
@property(readonly, copy, nonatomic) NSNumber *hasContextCard;
@property(readonly, copy, nonatomic) NSArray *metaTags;
@property(readonly, copy, nonatomic) NSNumber *isMenuFilter;
@property(readonly, copy, nonatomic) SOJUSponsoredSlugStyle *sponsoredSlugStyle;
@property(readonly, copy, nonatomic) NSArray *populatedUnlockableContextTypes;
@property(readonly, copy, nonatomic) NSString *syncSensitivity;
@property(readonly, copy, nonatomic) NSNumber *isAnimated;
@property(readonly, copy, nonatomic) SOJUUnlockablesAutoStacking *autoStacking;
@property(readonly, copy, nonatomic) SOJUStickerPack *stickerPackData;
@property(readonly, copy, nonatomic) SOJUUnlockablesDynamicContextProperties *dynamicContextProperties;
@property(readonly, copy, nonatomic) NSNumber *eligibleForNotification;
@property(readonly, copy, nonatomic) NSArray *unlockableAttributes;
@property(readonly, copy, nonatomic) SOJUUnlockablesUnlockableContext *unlockableContext;
@property(readonly, copy, nonatomic) NSString *unlockableCategory;
@property(readonly, copy, nonatomic) SOJUUnlockableTrackInfo *unlockableTrackInfo;
@property(readonly, copy, nonatomic) NSNumber *isFrameFilter;
@property(readonly, copy, nonatomic) SOJULensPlacementInfo *lensPlacementInfo;
@property(readonly, copy, nonatomic) NSNumber *lensCarouselIndex;
@property(readonly, copy, nonatomic) NSArray *excludedByTags;
@property(readonly, copy, nonatomic) NSArray *exclusionTags;
@property(readonly, copy, nonatomic) NSNumber *guaranteeDelivery;
@property(readonly, copy, nonatomic) NSNumber *serverTimestamp;
@property(readonly, copy, nonatomic) NSArray *lensCategoriesData;
@property(readonly, copy, nonatomic) NSNumber *shouldSubsampleImage;
@property(readonly, copy, nonatomic) NSNumber *filterScore;
@property(readonly, copy, nonatomic) NSString *unlockDurationMessage;
@property(readonly, copy, nonatomic) SOJUUnlockablesSchedule *schedule;
@property(readonly, copy, nonatomic) SOJUGeofilterPrompt *geofilterPrompt;
@property(readonly, copy, nonatomic) NSString *encGeoData;
@property(readonly, copy, nonatomic) NSNumber *belowDrawingLayer;
@property(readonly, copy, nonatomic) NSString *targetingType;
@property(readonly, copy, nonatomic) NSString *gplayIapId;
@property(readonly, copy, nonatomic) NSString *appstoreIapId;
@property(readonly, copy, nonatomic) NSNumber *isFeatured;
@property(readonly, copy, nonatomic) NSString *section;
@property(readonly, copy, nonatomic) NSArray *lensCategories;
@property(readonly, copy, nonatomic) SOJULensData *lensData;
@property(readonly, copy, nonatomic) NSNumber *isLens;
@property(readonly, copy, nonatomic) SOJUDynamicContentSetting *dynamicContentSetting;
@property(readonly, copy, nonatomic) NSString *sponsoredSlugImgLink;
@property(readonly, copy, nonatomic) NSString *sponsoredSlugPosition;
@property(readonly, copy, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug;
@property(readonly, copy, nonatomic) NSNumber *isSponsored;
@property(readonly, copy, nonatomic) NSNumber *clientCacheTtlMinutes;
@property(readonly, copy, nonatomic) NSNumber *clientCacheExpirationDateTimeDeprecated;
@property(readonly, copy, nonatomic) NSNumber *isDynamicGeofilter;
@property(readonly, copy, nonatomic) NSArray *dynamicContent;
@property(readonly, copy, nonatomic) NSArray *position;
@property(readonly, copy, nonatomic) NSNumber *priority;
@property(readonly, copy, nonatomic) NSString *unlockableContentId;
@property(readonly, copy, nonatomic) NSString *unlockableContentType;
@property(readonly, copy, nonatomic) SOJUGeofence *geofence;
@property(readonly, copy, nonatomic) SOJUGeofilterImageMetadata *extraImageMetadata;
@property(readonly, copy, nonatomic) NSString *imageCroppedToVisible;
@property(readonly, copy, nonatomic) NSDictionary *urlParams;
@property(readonly, copy, nonatomic) NSString *image;
@property(readonly, copy, nonatomic) NSNumber *expiresCountdown;
@property(readonly, copy, nonatomic) NSString *filterId;
@end

