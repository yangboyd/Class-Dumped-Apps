//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRSelectListing, NSArray;

@interface AIRSelectListingResponse : AIRModel
{
    AIRSelectListing *_listing;
    NSArray *_selectAmenities;
}

+ (id)customTransformers;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *selectAmenities; // @synthesize selectAmenities=_selectAmenities;
@property(readonly, copy, nonatomic) AIRSelectListing *listing; // @synthesize listing=_listing;

@end

