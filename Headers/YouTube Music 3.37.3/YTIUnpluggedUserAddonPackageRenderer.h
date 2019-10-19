//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIRenderer, YTIThumbnailDetails, YTIUnpluggedPackageNotificationSupportedRenderers;

@interface YTIUnpluggedUserAddonPackageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *actionMessage; // @dynamic actionMessage;
@property(retain, nonatomic) NSMutableArray *confirmationsArray; // @dynamic confirmationsArray;
@property(readonly, nonatomic) unsigned long long confirmationsArray_Count; // @dynamic confirmationsArray_Count;
@property(retain, nonatomic) YTIUnpluggedPackageNotificationSupportedRenderers *failureNotification; // @dynamic failureNotification;
@property(nonatomic) _Bool hasActionMessage; // @dynamic hasActionMessage;
@property(nonatomic) _Bool hasFailureNotification; // @dynamic hasFailureNotification;
@property(nonatomic) _Bool hasIsPurchased; // @dynamic hasIsPurchased;
@property(nonatomic) _Bool hasOfferParams; // @dynamic hasOfferParams;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasShowCheckbox; // @dynamic hasShowCheckbox;
@property(nonatomic) _Bool hasSuccessNotification; // @dynamic hasSuccessNotification;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasThumbnailWhite; // @dynamic hasThumbnailWhite;
@property(nonatomic) _Bool hasThumbnailWhiteWithBackground; // @dynamic hasThumbnailWhiteWithBackground;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool isPurchased; // @dynamic isPurchased;
@property(copy, nonatomic) NSString *offerParams; // @dynamic offerParams;
@property(retain, nonatomic) YTIFormattedString *primaryText; // @dynamic primaryText;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(nonatomic) _Bool showCheckbox; // @dynamic showCheckbox;
@property(retain, nonatomic) YTIUnpluggedPackageNotificationSupportedRenderers *successNotification; // @dynamic successNotification;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnailWhite; // @dynamic thumbnailWhite;
@property(retain, nonatomic) YTIRenderer *thumbnailWhiteWithBackground; // @dynamic thumbnailWhiteWithBackground;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

