//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsXplatServicesGeneratedServiceDispatcher.h"

#import "ComGoogleAppsBigtopDataItemsItemlistsApiItemListsService-Protocol.h"

@class NSString;

@interface ComGoogleAppsBigtopDataItemsItemlistsApiItemListsService_ServiceDispatcher : ComGoogleAppsXplatServicesGeneratedServiceDispatcher <ComGoogleAppsBigtopDataItemsItemlistsApiItemListsService>
{
}

- (id)changeItemListRankLockedItemsWithComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListRankLockedItemsRequest:(id)arg1;
- (id)setPriorityWithComGoogleAppsBigtopDataItemsItemsProto_SetPriorityRequest:(id)arg1;
- (id)getItemListWithNSString:(id)arg1;
- (id)refreshItemListWithComGoogleAppsBigtopDataItemsItemsProto_RefreshItemListRequest:(id)arg1;
- (id)changeItemListItemServerPermIdsWithComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListItemServerPermIdsRequest:(id)arg1;
- (id)changeItemListSizeWithComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListSizeRequest:(id)arg1;
- (id)stopItemListWithComGoogleAppsBigtopDataItemsItemsProto_StopItemListRequest:(id)arg1;
- (id)startItemListWithComGoogleAppsBigtopDataItemsItemsProto_StartItemListRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

