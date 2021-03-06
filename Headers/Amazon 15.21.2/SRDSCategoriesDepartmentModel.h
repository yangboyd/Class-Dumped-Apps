//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, SRDSCategoriesLinkModel;
@protocol Optional, SRDSCategoriesRefinementModel><Optional;

@interface SRDSCategoriesDepartmentModel : JSONModel
{
    SRDSCategoriesLinkModel<Optional> *_allLink;
    NSArray<SRDSCategoriesRefinementModel><Optional> *_ancestry;
    NSArray<SRDSCategoriesRefinementModel><Optional> *_categories;
    NSNumber<Optional> *_expandCategories;
}

@property(retain, nonatomic) NSNumber<Optional> *expandCategories; // @synthesize expandCategories=_expandCategories;
@property(retain, nonatomic) NSArray<SRDSCategoriesRefinementModel><Optional> *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSArray<SRDSCategoriesRefinementModel><Optional> *ancestry; // @synthesize ancestry=_ancestry;
@property(retain, nonatomic) SRDSCategoriesLinkModel<Optional> *allLink; // @synthesize allLink=_allLink;
- (void).cxx_destruct;

@end

