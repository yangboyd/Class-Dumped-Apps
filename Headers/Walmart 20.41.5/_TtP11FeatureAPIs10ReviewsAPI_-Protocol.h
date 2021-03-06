//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, UITableView, UIViewController, _TtC11FeatureAPIs15FormattedReview, _TtC11FeatureAPIs18ReviewsProductInfo, _TtC11FeatureAPIs24FormattedCheckoutComment, _TtC11FeatureAPIs9SARConfig;

@protocol _TtP11FeatureAPIs10ReviewsAPI_
- (void)trackReviewsAnalyticsEvent:(long long)arg1 productName:(NSString *)arg2 itemId:(NSString *)arg3 totalRatings:(long long)arg4 totalReviews:(long long)arg5;
- (NSString *)registerCheckoutFooterCellForTableView:(UITableView *)arg1;
- (NSString *)registerCheckoutHeaderCellForTableView:(UITableView *)arg1;
- (NSString *)registerCheckoutCommentCellForTableView:(UITableView *)arg1;
- (NSString *)registerAspectsCellForTableView:(UITableView *)arg1;
- (NSString *)registerReviewHistogramCellForTableView:(UITableView *)arg1;
- (NSString *)registerReviewExcerptCellForTableView:(UITableView *)arg1;
- (UIViewController *)reviewPhotosViewControllerWithList:(NSArray *)arg1 selectedIndex:(long long)arg2;
- (UIViewController *)reviewPastPurchasesViewControllerWithCid:(NSString *)arg1 productId:(NSString *)arg2 orderId:(NSString *)arg3;
- (UIViewController *)commentsListViewControllerWithProductInfo:(_TtC11FeatureAPIs18ReviewsProductInfo *)arg1;
- (UIViewController *)reviewsListViewControllerWithProductInfo:(_TtC11FeatureAPIs18ReviewsProductInfo *)arg1 config:(_TtC11FeatureAPIs9SARConfig *)arg2;
- (UIViewController *)warViewControllerWithProductInfo:(_TtC11FeatureAPIs18ReviewsProductInfo *)arg1;
- (long long)totalNumberOfRatings;
- (long long)totalNumberOfCheckoutComments;
- (long long)totalNumberOfReviews;
- (_Bool)reviewPastPurchasesEnabled;
- (_Bool)checkoutCommentsEnabled;
- (_Bool)warEnabled;
- (_Bool)hasAspects;
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
- (void)submitCxoCommentWithItemId:(NSString *)arg1 usrId:(NSString *)arg2 nickname:(NSString *)arg3 comment:(NSString *)arg4 cb:(void (^)(_Bool, NSError *))arg5;
- (long long)numberOfReviewExcerpts;
- (_TtC11FeatureAPIs18ReviewsProductInfo *)currentProduct;
- (void)setCommentFlaggedWithCommentID:(NSString *)arg1;
- (_Bool)isCommentFlaggedWithCommentID:(NSString *)arg1;
- (NSArray *)allReviews;
- (_TtC11FeatureAPIs24FormattedCheckoutComment *)commentAtIndexWithIndex:(long long)arg1;
- (_TtC11FeatureAPIs15FormattedReview *)reviewAtIndexWithIndex:(long long)arg1;
- (void)clearReviewsAndProductInfo;
- (void)loadMockDataWithNumberOfReviews:(long long)arg1;
- (void)loadInitialCheckoutCommentsForProductId:(NSString *)arg1 cb:(void (^)(_Bool))arg2;
- (void)clearCache;
- (void)loadFromCacheWithProductId:(NSString *)arg1;
- (void)loadInitialReviewsForProduct:(_TtC11FeatureAPIs18ReviewsProductInfo *)arg1 cb:(void (^)(_Bool))arg2;
@end

