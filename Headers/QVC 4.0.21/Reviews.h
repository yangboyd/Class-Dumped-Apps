//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseQVCItem.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString, ReviewsStatistics;

@interface Reviews : BaseQVCItem <NSCopying>
{
    NSString *reviewsNextPageLink;
    ReviewsStatistics *statistics;
    NSMutableArray *productReviews;
    _Bool hasMorePages;
}

- (void).cxx_destruct;
@property _Bool hasMorePages; // @synthesize hasMorePages;
@property(copy) NSMutableArray *productReviews; // @synthesize productReviews;
@property(retain, nonatomic) ReviewsStatistics *statistics; // @synthesize statistics;
@property(retain, nonatomic) NSString *reviewsNextPageLink; // @synthesize reviewsNextPageLink;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)checkForMoreReviewPagesAvailable;
- (void)appendAdditionalReviews:(id)arg1;
- (id)initWithJsonItem:(id)arg1 andAppSettings:(id)arg2;

@end

