//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker, IGShoppingAdMetadata, IGShoppingNavigationAnalyticsContext, IGShoppingProductCollectionTileLogger, IGUserSession, NSString;

@interface IGShoppingProductCollectionTileHScrollLogger : NSObject
{
    IGUserSession *_userSession;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    IGSessionTracker *_shoppingSessionTracker;
    NSString *_merchantId;
    IGShoppingAdMetadata *_shoppingProductAdMetadata;
    IGShoppingProductCollectionTileLogger *_tileLogger;
}

- (void).cxx_destruct;
- (void)logTileProfileNavigationWithMerchant:(id)arg1;
- (void)logTileTapWithViewModel:(id)arg1;
- (void)logTileSubImpressionWithViewModel:(id)arg1;
- (void)logTileImpressionWithViewModel:(id)arg1;
- (void)logHscrollSubImpression;
- (void)logHscrollImpression;
- (id)initWithUserSession:(id)arg1 navigationAnalyticsContext:(id)arg2 shoppingSessionTracker:(id)arg3 merchantId:(id)arg4 shoppingProductAdMetadata:(id)arg5;

@end

