//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSSEntity.h"

@class NSArray;

@interface FeaturedReviewContent : QSSEntity
{
    NSArray *_featuredReviews;
    NSArray *_secondaryRatings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *secondaryRatings; // @synthesize secondaryRatings=_secondaryRatings;
@property(retain, nonatomic) NSArray *featuredReviews; // @synthesize featuredReviews=_featuredReviews;
- (id)initWithDictionary:(id)arg1;

@end

