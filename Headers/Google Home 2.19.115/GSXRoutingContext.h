//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSXAnalytics, GSXAnalyticsService, GSXShoppingListService;

@interface GSXRoutingContext : NSObject
{
    GSXAnalyticsService *_analyticsService;
    GSXAnalytics *_analytics;
    GSXShoppingListService *_shoppingListService;
}

@property(readonly, nonatomic) GSXShoppingListService *shoppingListService; // @synthesize shoppingListService=_shoppingListService;
@property(readonly, nonatomic) GSXAnalytics *analytics; // @synthesize analytics=_analytics;
@property(readonly, nonatomic) GSXAnalyticsService *analyticsService; // @synthesize analyticsService=_analyticsService;
- (void).cxx_destruct;
- (id)init;

@end

