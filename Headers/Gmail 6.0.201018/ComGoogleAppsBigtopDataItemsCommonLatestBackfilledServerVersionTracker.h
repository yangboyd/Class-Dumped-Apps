//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig;

@interface ComGoogleAppsBigtopDataItemsCommonLatestBackfilledServerVersionTracker : NSObject
{
    long long serverVersion_;
    ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig *itemListConfig_;
}

+ (void)initialize;
- (void)dealloc;
- (void)updateServerVersionForItemListConfigWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg2;
- (long long)updateItemListConfigAndGetServerVersionWithComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg1;

@end

