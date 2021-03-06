//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGMedia, IGShoppingChainingAnalyticsContext, IGShoppingExploreAnalyticsContext, IGShoppingMediaCarouselAnalyticsContext, NSDictionary, NSNumber, NSString;

@protocol IGFeedItemLoggingProviderDelegate <NSObject>
@property(readonly, copy, nonatomic) NSString *initialSessionId;
@property(readonly, copy, nonatomic) NSString *sessionId;
- (NSString *)surfaceCategoryId;
- (IGShoppingChainingAnalyticsContext *)chainingInfoForMedia:(IGMedia *)arg1;
- (IGShoppingMediaCarouselAnalyticsContext *)carouselInfoForMedia:(IGMedia *)arg1;
- (IGShoppingExploreAnalyticsContext *)exploreInfo;
- (NSNumber *)mediaIndexForMedia:(IGMedia *)arg1;
- (NSString *)followControllerContextStringForMedia:(IGMedia *)arg1;
- (NSString *)customModuleForMedia:(IGMedia *)arg1;
- (NSDictionary *)extraDictionaryForMedia:(IGMedia *)arg1;
@end

