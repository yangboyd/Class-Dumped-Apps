//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTThumbnailDetailsModel.h"

@class NSArray, NSData, YTAccessibilitySupportedDatasModel;

@interface YTMutableThumbnailDetailsModel : YTThumbnailDetailsModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) _Bool isReelsVideo; // @dynamic isReelsVideo;
@property(retain, nonatomic) NSData *lowResJpeg; // @dynamic lowResJpeg;
@property(nonatomic) _Bool logAsMovingThumbnail; // @dynamic logAsMovingThumbnail;
@property(retain, nonatomic) YTAccessibilitySupportedDatasModel *accessibility; // @dynamic accessibility;
@property(nonatomic) _Bool enableLoadedLogging; // @dynamic enableLoadedLogging;
@property(nonatomic) unsigned int placeholderColor; // @dynamic placeholderColor;
@property(retain, nonatomic) NSArray *thumbnailsArray; // @dynamic thumbnailsArray;
- (id)initWithEntityStore:(id)arg1;

@end

