//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, SOJUGalleryAltitudeInfoFilterStyle, SOJUGalleryDateInfoFilter, SOJUGalleryGroupInfoFilterStyle, SOJUGalleryMentionStickerStyle, SOJUGalleryRatingStickerStyle, SOJUGalleryRequestStickerStyle, SOJUGallerySnapcodeStickerStyle, SOJUGalleryTopicStickerStyle, SOJUGalleryVenueFilterInfoStyle;

@protocol SOJUGalleryInfoStickerStyle <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUGalleryTopicStickerStyle *topic;
@property(readonly, copy, nonatomic) SOJUGallerySnapcodeStickerStyle *snapcode;
@property(readonly, copy, nonatomic) SOJUGalleryRequestStickerStyle *request;
@property(readonly, copy, nonatomic) SOJUGalleryMentionStickerStyle *mention;
@property(readonly, copy, nonatomic) SOJUGalleryGroupInfoFilterStyle *group;
@property(readonly, copy, nonatomic) SOJUGalleryVenueFilterInfoStyle *venue;
@property(readonly, copy, nonatomic) SOJUGalleryRatingStickerStyle *rating;
@property(readonly, copy, nonatomic) SOJUGalleryAltitudeInfoFilterStyle *altitude;
@property(readonly, copy, nonatomic) NSString *weather;
@property(readonly, copy, nonatomic) SOJUGalleryDateInfoFilter *date;
@end

