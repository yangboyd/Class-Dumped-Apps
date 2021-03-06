//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseQVCItem.h"

#import "RefineResultProtocol-Protocol.h"

@class Filter, NSArray, NSDictionary, NSString, SearchResultProductList, SearchResultRelatedTerms;

@interface SearchResult : BaseQVCItem <RefineResultProtocol>
{
    _Bool hasSingleResult;
    _Bool hasResults;
    NSDictionary *_jsonDataModel;
    NSArray *_navigationRefineArray;
    NSString *_currentRefinement;
    NSString *_currentSort;
    NSString *_searchTerm;
    NSString *_totalNumberOfPages;
    SearchResultRelatedTerms *_relatedTerms;
    SearchResultProductList *_resultProductList;
    NSArray *_categoryOptions;
    Filter *_initialRefinementFilterCategory;
    NSArray *_initialRefinementFilters;
    NSArray *_sortOptions;
    NSArray *_breadcrumbs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *breadcrumbs; // @synthesize breadcrumbs=_breadcrumbs;
@property(retain, nonatomic) NSArray *sortOptions; // @synthesize sortOptions=_sortOptions;
@property(retain) NSArray *initialRefinementFilters; // @synthesize initialRefinementFilters=_initialRefinementFilters;
@property(retain) Filter *initialRefinementFilterCategory; // @synthesize initialRefinementFilterCategory=_initialRefinementFilterCategory;
@property(copy) NSArray *categoryOptions; // @synthesize categoryOptions=_categoryOptions;
@property(retain, nonatomic) SearchResultProductList *resultProductList; // @synthesize resultProductList=_resultProductList;
@property(retain, nonatomic) SearchResultRelatedTerms *relatedTerms; // @synthesize relatedTerms=_relatedTerms;
@property(retain, nonatomic) NSString *totalNumberOfPages; // @synthesize totalNumberOfPages=_totalNumberOfPages;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) NSString *currentSort; // @synthesize currentSort=_currentSort;
@property(retain, nonatomic) NSString *currentRefinement; // @synthesize currentRefinement=_currentRefinement;
@property(copy) NSArray *navigationRefineArray; // @synthesize navigationRefineArray=_navigationRefineArray;
@property(copy, nonatomic) NSDictionary *jsonDataModel; // @synthesize jsonDataModel=_jsonDataModel;
- (_Bool)topProductHierarphy;
- (_Bool)shouldShowZeroSearchResult;
- (id)resultsLabel;
- (void)printValues;
- (id)descriptionForRefinedGridLabel:(id)arg1 andSelectedOption:(id)arg2;
- (id)descriptionForGridLabel;
- (id)fetchSingleProductResult;
- (void)addAdditionalPageSeachResult:(id)arg1;
- (_Bool)hasResults;
- (_Bool)hasSingleResult;
- (_Bool)hasCategories;
- (long long)nextResultPageNumber;
@property(readonly, nonatomic) _Bool isSortEnable;
@property(readonly, nonatomic) _Bool isFilterEnable;
- (_Bool)hasMoreResultsPages;
- (_Bool)isFilterSelected;
- (long long)numberOfSelectedFilters;
- (_Bool)isBreadcrumbsFilterValid:(id)arg1;
- (id)mergedCategoryList;
- (void)mergeWithRefineResult:(id)arg1 andNavigationData:(id)arg2;
- (id)initWithFullSearchResult:(id)arg1 andAppSettings:(id)arg2;
- (id)filterWithDictionary:(id)arg1 filterOption:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

