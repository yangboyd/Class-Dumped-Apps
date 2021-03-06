//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC7Reviews14ReviewsAPIMock : NSObject
{
    // Error parsing type: , name: mockNumberOfReviews
    // Error parsing type: , name: mockNumberOfComments
}

- (id)init;
- (void)trackReviewsAnalyticsEvent:(long long)arg1 productName:(id)arg2 itemId:(id)arg3 totalRatings:(long long)arg4 totalReviews:(long long)arg5;
- (id)registerCheckoutFooterCellForTableView:(id)arg1;
- (id)registerCheckoutHeaderCellForTableView:(id)arg1;
- (id)registerCheckoutCommentCellForTableView:(id)arg1;
- (id)registerReviewHistogramCellForTableView:(id)arg1;
- (id)registerReviewExcerptCellForTableView:(id)arg1;
- (id)commentsListViewControllerWithProductInfo:(id)arg1;
- (id)reviewPhotosViewControllerWithList:(id)arg1 selectedIndex:(long long)arg2;
- (id)reviewPastPurchasesViewControllerWithCid:(id)arg1 productId:(id)arg2 orderId:(id)arg3;
- (id)reviewsListViewControllerWithProductInfo:(id)arg1 config:(id)arg2;
- (id)warViewControllerWithProductInfo:(id)arg1;
- (long long)totalNumberOfRatings;
- (long long)numberOfReviewExcerpts;
- (long long)totalNumberOfCheckoutComments;
- (long long)totalNumberOfReviews;
- (_Bool)hasReviews;
- (long long)numCustomerReviews;
- (double)overallRating;
- (_Bool)hasRelevancyReviews;
- (_Bool)hasRatings;
- (long long)fiveStarRatingPercentage;
- (long long)fiveStarRatingCount;
- (long long)fourStarRatingPercentage;
- (long long)fourStarRatingCount;
- (long long)threeStarRatingPercentage;
- (long long)threeStarRatingCount;
- (long long)twoStarRatingPercentage;
- (long long)twoStarRatingCount;
- (long long)oneStarRatingPercentage;
- (long long)oneStarRatingCount;
- (_Bool)isCommentFlaggedWithCommentID:(id)arg1;
- (void)setCommentFlaggedWithCommentID:(id)arg1;
- (id)currentProduct;
- (id)allReviews;
- (id)commentAtIndexWithIndex:(long long)arg1;
- (id)reviewAtIndexWithIndex:(long long)arg1;
- (void)clearReviewsAndProductInfo;
- (void)loadMockDataWithNumberOfReviews:(long long)arg1;
- (void)submitCxoCommentWithItemId:(id)arg1 usrId:(id)arg2 nickname:(id)arg3 comment:(id)arg4 cb:(CDUnknownBlockType)arg5;
- (void)loadInitialCheckoutCommentsForProductId:(id)arg1 cb:(CDUnknownBlockType)arg2;
- (void)clearCache;
- (void)loadFromCacheWithProductId:(id)arg1;
- (void)loadInitialReviewsForProduct:(id)arg1 cb:(CDUnknownBlockType)arg2;
- (id)registerAspectsCellForTableView:(id)arg1;
- (_Bool)checkoutCommentsEnabled;
- (_Bool)warEnabled;
- (_Bool)hasAspects;
- (_Bool)reviewPastPurchasesEnabled;

@end

