//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BVRecsAnalyticsHelper : NSObject
{
}

+ (id)getPrivateAnalyticInfoForProduct:(id)arg1;
+ (void)queueEmbeddedRecommendationsPageViewEvent:(id)arg1 withWidgetType:(long long)arg2;
+ (void)queueEmbeddedRecommendationsPageViewEvent:(id)arg1 pageType:(Class)arg2 withWidgetType:(long long)arg3;
+ (void)queueAnalyticsEventForProductTapped:(id)arg1;
+ (void)queueAnalyticsEventForWidgetScroll:(long long)arg1;
+ (void)queueAnalyticsEventForRecommendationsOnPage:(long long)arg1;
+ (id)getWidgetTypeString:(long long)arg1;
+ (id)getFieldForWidgetType:(long long)arg1;
+ (id)getPageViewEmbeddedEventParams;
+ (id)getUsedFeatureParams;
+ (id)getRelavantInfoForRecommendationType:(id)arg1 isVisible:(_Bool)arg2;

@end

