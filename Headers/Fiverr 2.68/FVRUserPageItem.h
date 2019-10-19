//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseDataObject.h"

@class NSArray, NSDate, NSMutableArray, NSNumber, NSString, NSURL;

@interface FVRUserPageItem : FVRBaseDataObject
{
    NSString *_userType;
    NSString *_userName;
    NSString *_userDescription;
    NSString *_country;
    NSURL *_bgImageUrl;
    NSURL *_userImageUrl;
    NSNumber *_userId;
    NSNumber *_rating;
    NSNumber *_level;
    NSArray *_gigs;
    NSNumber *_isOnline;
    NSNumber *_isVacationMode;
    NSMutableArray *_gigRatings;
    NSNumber *_ratingsNextPageAvailable;
    NSArray *_gigRatingsPages;
    NSNumber *_ratingCount;
    NSNumber *_avgResponseTimeInHours;
    NSString *_languages;
    NSString *_countryName;
    NSDate *_sellerLastActive;
    NSNumber *_sellerUtcOffset;
    NSArray *_proSubCategories;
}

+ (id)userLevelImageWithSellerLevel:(id)arg1;
@property(retain, nonatomic) NSArray *proSubCategories; // @synthesize proSubCategories=_proSubCategories;
@property(retain, nonatomic) NSNumber *sellerUtcOffset; // @synthesize sellerUtcOffset=_sellerUtcOffset;
@property(retain, nonatomic) NSDate *sellerLastActive; // @synthesize sellerLastActive=_sellerLastActive;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *languages; // @synthesize languages=_languages;
@property(retain, nonatomic) NSNumber *avgResponseTimeInHours; // @synthesize avgResponseTimeInHours=_avgResponseTimeInHours;
@property(retain, nonatomic) NSNumber *ratingCount; // @synthesize ratingCount=_ratingCount;
@property(retain, nonatomic) NSArray *gigRatingsPages; // @synthesize gigRatingsPages=_gigRatingsPages;
@property(retain, nonatomic) NSNumber *ratingsNextPageAvailable; // @synthesize ratingsNextPageAvailable=_ratingsNextPageAvailable;
@property(retain, nonatomic) NSMutableArray *gigRatings; // @synthesize gigRatings=_gigRatings;
@property(retain, nonatomic) NSNumber *isVacationMode; // @synthesize isVacationMode=_isVacationMode;
@property(retain, nonatomic) NSNumber *isOnline; // @synthesize isOnline=_isOnline;
@property(retain, nonatomic) NSArray *gigs; // @synthesize gigs=_gigs;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSURL *userImageUrl; // @synthesize userImageUrl=_userImageUrl;
@property(retain, nonatomic) NSURL *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
- (void).cxx_destruct;
- (id)userLevelImage;
- (id)splitArrayWithArray:(id)arg1;
- (void)setupGigRatingWithElement:(id)arg1;
- (void)setupUserGigsArray:(id)arg1;
- (void)setupProSubCategories:(id)arg1;
- (id)initWithElement:(id)arg1;

@end

