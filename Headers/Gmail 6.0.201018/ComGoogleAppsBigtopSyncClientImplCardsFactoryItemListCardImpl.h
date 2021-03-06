//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplItemsCommonItemImpl.h"

#import "ComGoogleAppsBigtopSyncClientImplCardsApiInternalItemListCard-Protocol.h"
#import "JBTItemListCard-Protocol.h"

@class NSString;
@protocol JBTCardLayout, JBTId;

@interface ComGoogleAppsBigtopSyncClientImplCardsFactoryItemListCardImpl : ComGoogleAppsBigtopSyncClientImplItemsCommonItemImpl <JBTItemListCard, ComGoogleAppsBigtopSyncClientImplCardsApiInternalItemListCard>
{
    id <JBTId> id__;
    id <JBTCardLayout> cardLayout_;
    NSString *loggingId_;
    NSString *rank_;
}

- (void)dealloc;
- (id)markAsShown;
- (_Bool)canMarkAsShown;
- (id)getLoggingId;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewMode:(id)arg1;
- (_Bool)hasLayoutForViewModeWithJBTSmartMailComponent_ViewMode:(id)arg1;
- (id)getRank;
- (id)getItemType;
- (id)getId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

