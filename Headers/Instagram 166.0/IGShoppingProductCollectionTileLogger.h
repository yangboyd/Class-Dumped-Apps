//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker, IGShoppingAdMetadata, IGShoppingNavigationAnalyticsContext, IGUserSession, NSString;

@interface IGShoppingProductCollectionTileLogger : NSObject
{
    IGUserSession *_userSession;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    NSString *_profileShopMerchantId;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingAdMetadata *_shoppingProductAdMetadata;
}

- (void).cxx_destruct;
- (struct USER_IGID)_merchantIdFromViewModel:(id)arg1;
- (void)logTileProfileNavigationWithMerchant:(id)arg1;
- (void)logTileTapWithViewModel:(id)arg1 isForHScroll:(_Bool)arg2;
- (void)logTileSubImpressionWithViewModel:(id)arg1 isForHScroll:(_Bool)arg2;
- (void)logTileImpressionWithViewModel:(id)arg1 isForHScroll:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 navigationAnalyticsContext:(id)arg2 profileShopMerchantId:(id)arg3 shoppingSessionTracker:(id)arg4 shoppingProductAdMetadata:(id)arg5;

@end

