//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGCoWatchPremiumContentDataSource;
@protocol IGCoWatchCatalogItem;

@protocol IGCoWatchPremiumContentDataSourceDelegate <NSObject>
- (void)premiumContentDataSource:(IGCoWatchPremiumContentDataSource *)arg1 didSelectCatalogItem:(id <IGCoWatchCatalogItem>)arg2;
- (void)premiumContentDataSource:(IGCoWatchPremiumContentDataSource *)arg1 didFailToLoadItemsIsInternetConnected:(_Bool)arg2;
- (void)premiumContentDataSourceDidFinishLoadingItems:(IGCoWatchPremiumContentDataSource *)arg1;
@end

