//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUContextFilterMetadata, SOJUGalleryStreakFilter, SOJUGalleryVenueFilter;

@protocol SOJUGalleryFilters <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *geoFilterSelectedIds;
@property(readonly, copy, nonatomic) NSString *contextFilterSelectedId;
@property(readonly, copy, nonatomic) SOJUContextFilterMetadata *contextFilters;
@property(readonly, copy, nonatomic) NSNumber *streakFilterSelected;
@property(readonly, copy, nonatomic) SOJUGalleryStreakFilter *streakFilter;
@property(readonly, copy, nonatomic) NSNumber *venueFilterSelected;
@property(readonly, copy, nonatomic) SOJUGalleryVenueFilter *venueFilter;
@property(readonly, copy, nonatomic) NSString *geoFilterSelectedId;
@property(readonly, copy, nonatomic) NSArray *geoFilters;
@property(readonly, copy, nonatomic) NSNumber *reverseMotionFilterSelected;
@property(readonly, copy, nonatomic) NSNumber *reverseMotionFilterEnabled;
@property(readonly, copy, nonatomic) NSString *speedMotionFilterSelectedType;
@property(readonly, copy, nonatomic) NSArray *speedMotionFilters;
@property(readonly, copy, nonatomic) NSString *infoFilterSelectedType;
@property(readonly, copy, nonatomic) NSArray *infoFilters;
@property(readonly, copy, nonatomic) NSString *visualFilterSelectedType;
@property(readonly, copy, nonatomic) NSArray *visualFilters;
@end

