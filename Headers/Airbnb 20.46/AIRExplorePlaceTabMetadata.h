//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRExploreFiltersSection, NSNumber;

@interface AIRExplorePlaceTabMetadata : AIRModel
{
    NSNumber *_resultsCount;
    AIRExploreFiltersSection *_filters;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRExploreFiltersSection *filters; // @synthesize filters=_filters;
@property(readonly, copy, nonatomic) NSNumber *resultsCount; // @synthesize resultsCount=_resultsCount;

@end

