//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ItemListEntry, ComGoogleAppsBigtopDataItemsItemsProto_ViewType, ComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata;
@protocol JBTAdItem, JBTId;

@protocol ComGoogleAppsBigtopSyncClientImplAdsFactoryApiAdItemFactory <JavaObject>
- (id <JBTAdItem>)createAdItemWithJBTId:(id <JBTId>)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ItemListEntry:(ComGoogleAppsBigtopDataItemsItemsProto_ItemListEntry *)arg2 withComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata:(ComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata *)arg3 withComGoogleAppsBigtopDataItemsItemsProto_ViewType:(ComGoogleAppsBigtopDataItemsItemsProto_ViewType *)arg4;
@end

