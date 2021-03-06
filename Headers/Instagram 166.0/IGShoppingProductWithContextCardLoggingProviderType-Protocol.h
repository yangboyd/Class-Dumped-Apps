//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDiscoveryTopicModel, IGSessionTracker, IGShoppingFiltersAnalyticsContext, IGShoppingMediaCarouselAnalyticsContext, IGShoppingNavigationAnalyticsContext, IGShoppingPDPAnalyticsContext, NSDictionary, NSString;
@protocol IGShoppingProductViewModel;

@protocol IGShoppingProductWithContextCardLoggingProviderType <NSObject>
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property(readonly, nonatomic) IGShoppingMediaCarouselAnalyticsContext *mediaCarouselInfo;
@property(readonly, nonatomic) IGDiscoveryTopicModel *discoveryTopicModel;
@property(readonly, nonatomic) IGShoppingPDPAnalyticsContext *pdpInfo;
@property(readonly, nonatomic) IGShoppingFiltersAnalyticsContext *filtersInfo;
@property(readonly, nonatomic) IGShoppingNavigationAnalyticsContext *navigationInfo;
- (void)logProductCardDismissForViewModel:(id <IGShoppingProductViewModel>)arg1 extras:(NSDictionary *)arg2;
- (void)logProductCardTapForViewModel:(id <IGShoppingProductViewModel>)arg1 entryPoint:(NSString *)arg2 extras:(NSDictionary *)arg3;
- (long long)levelForImpression;
- (void)logProductCardSubImpressionForViewModel:(id <IGShoppingProductViewModel>)arg1 extras:(NSDictionary *)arg2;
- (void)logProductCardImpressionForViewModel:(id <IGShoppingProductViewModel>)arg1 extras:(NSDictionary *)arg2;
@end

