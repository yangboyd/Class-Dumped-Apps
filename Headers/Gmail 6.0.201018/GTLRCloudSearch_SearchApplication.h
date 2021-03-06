//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCloudSearch_ScoringConfig, GTLRCloudSearch_SortOptions, NSArray, NSNumber, NSString;

@interface GTLRCloudSearch_SearchApplication : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *dataSourceRestrictions; // @dynamic dataSourceRestrictions;
@property(retain, nonatomic) NSArray *defaultFacetOptions; // @dynamic defaultFacetOptions;
@property(retain, nonatomic) GTLRCloudSearch_SortOptions *defaultSortOptions; // @dynamic defaultSortOptions;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSArray *operationIds; // @dynamic operationIds;
@property(retain, nonatomic) NSNumber *returnResultPreviewUrls; // @dynamic returnResultPreviewUrls;
@property(retain, nonatomic) NSNumber *returnResultThumbnailUrls; // @dynamic returnResultThumbnailUrls;
@property(retain, nonatomic) GTLRCloudSearch_ScoringConfig *scoringConfig; // @dynamic scoringConfig;
@property(retain, nonatomic) NSArray *sourceConfig; // @dynamic sourceConfig;

@end

