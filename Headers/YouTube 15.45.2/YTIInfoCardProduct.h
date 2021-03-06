//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIInfoCardImage;

@interface YTIInfoCardProduct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *badgeText; // @dynamic badgeText;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasBadgeText; // @dynamic hasBadgeText;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasHeadline; // @dynamic hasHeadline;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasRating; // @dynamic hasRating;
@property(nonatomic) _Bool hasReviewText; // @dynamic hasReviewText;
@property(copy, nonatomic) NSString *headline; // @dynamic headline;
@property(retain, nonatomic) YTIInfoCardImage *image; // @dynamic image;
@property(retain, nonatomic) NSMutableArray *offerArray; // @dynamic offerArray;
@property(readonly, nonatomic) unsigned long long offerArray_Count; // @dynamic offerArray_Count;
@property(nonatomic) float rating; // @dynamic rating;
@property(copy, nonatomic) NSString *reviewText; // @dynamic reviewText;

@end

