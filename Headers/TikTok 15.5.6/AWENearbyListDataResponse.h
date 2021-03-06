//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWECityModel, AWEPOIRankBannerModel, NSArray;

@interface AWENearbyListDataResponse : AWEBaseApiModel
{
    long long _hasMore;
    NSArray *_awemeList;
    AWECityModel *_currentCity;
    NSArray *_POIEntries;
    NSArray *_items;
    NSArray *_rankCards;
    NSArray *_operationCards;
    AWEPOIRankBannerModel *_rankBanner;
    NSArray *_marketingItems;
}

+ (id)operationCardsJSONTransformer;
+ (id)rankCardsJSONTransformer;
+ (id)marketingItemsJSONTransformer;
+ (id)rankBannerJSONTransformer;
+ (id)itemsJSONTransformer;
+ (id)POIEntriesJSONTransformer;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *marketingItems; // @synthesize marketingItems=_marketingItems;
@property(retain, nonatomic) AWEPOIRankBannerModel *rankBanner; // @synthesize rankBanner=_rankBanner;
@property(retain, nonatomic) NSArray *operationCards; // @synthesize operationCards=_operationCards;
@property(retain, nonatomic) NSArray *rankCards; // @synthesize rankCards=_rankCards;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *POIEntries; // @synthesize POIEntries=_POIEntries;
@property(retain, nonatomic) AWECityModel *currentCity; // @synthesize currentCity=_currentCity;
@property(retain, nonatomic) NSArray *awemeList; // @synthesize awemeList=_awemeList;
@property(nonatomic) long long hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;

@end

