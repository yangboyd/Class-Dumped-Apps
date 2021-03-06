//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTReview, NSMutableArray;

@interface GMSx_GMTTReviewInfo : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHasMoreReviews; // @dynamic hasHasMoreReviews;
@property(nonatomic) _Bool hasMoreReviews; // @dynamic hasMoreReviews;
@property(nonatomic) _Bool hasOwnDraftReview; // @dynamic hasOwnDraftReview;
@property(nonatomic) _Bool hasOwnPublishedReview; // @dynamic hasOwnPublishedReview;
@property(nonatomic) _Bool hasReviewsFetchFailed; // @dynamic hasReviewsFetchFailed;
@property(nonatomic) _Bool hasUserSelfReviewFetchFailed; // @dynamic hasUserSelfReviewFetchFailed;
@property(retain, nonatomic) GMSx_GMTTReview *ownDraftReview; // @dynamic ownDraftReview;
@property(retain, nonatomic) GMSx_GMTTReview *ownPublishedReview; // @dynamic ownPublishedReview;
@property(retain, nonatomic) NSMutableArray *reviewArray; // @dynamic reviewArray;
@property(readonly, nonatomic) unsigned long long reviewArray_Count; // @dynamic reviewArray_Count;
@property(nonatomic) _Bool reviewsFetchFailed; // @dynamic reviewsFetchFailed;
@property(nonatomic) _Bool userSelfReviewFetchFailed; // @dynamic userSelfReviewFetchFailed;

@end

