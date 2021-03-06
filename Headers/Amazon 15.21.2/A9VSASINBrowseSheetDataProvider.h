//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "A9VSBrowseSheetNetworkDelegate-Protocol.h"

@class A9VSBrowseSheetCategory, A9VSBrowseSheetNetworkManager, NSCache, NSIndexPath, NSMutableArray, NSString, PisaARCategoryDataRequest;
@protocol A9VSBrowseSheetVCDelegate;

@interface A9VSASINBrowseSheetDataProvider : NSObject <A9VSBrowseSheetNetworkDelegate>
{
    _Bool _isRelatedItemsIncluded;
    id <A9VSBrowseSheetVCDelegate> _viewDelegate;
    A9VSBrowseSheetNetworkManager *_networkManager;
    NSCache *_imageCache;
    PisaARCategoryDataRequest *_categoryDataRequest;
    NSMutableArray *_categoryList;
    A9VSBrowseSheetCategory *_relatedItemsCategory;
    A9VSBrowseSheetCategory *_topPicksCategory;
    NSIndexPath *_selectedASINIndexPath;
    NSIndexPath *_currentCategoryIndexPath;
}

+ (void)setGlobalImageCache:(id)arg1;
+ (id)globalImageCache;
@property(retain, nonatomic) NSIndexPath *currentCategoryIndexPath; // @synthesize currentCategoryIndexPath=_currentCategoryIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedASINIndexPath; // @synthesize selectedASINIndexPath=_selectedASINIndexPath;
@property(retain, nonatomic) A9VSBrowseSheetCategory *topPicksCategory; // @synthesize topPicksCategory=_topPicksCategory;
@property(nonatomic) _Bool isRelatedItemsIncluded; // @synthesize isRelatedItemsIncluded=_isRelatedItemsIncluded;
@property(retain, nonatomic) A9VSBrowseSheetCategory *relatedItemsCategory; // @synthesize relatedItemsCategory=_relatedItemsCategory;
@property(retain, nonatomic) NSMutableArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) PisaARCategoryDataRequest *categoryDataRequest; // @synthesize categoryDataRequest=_categoryDataRequest;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) A9VSBrowseSheetNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(nonatomic) __weak id <A9VSBrowseSheetVCDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void).cxx_destruct;
- (id)categoryListData;
- (void)startCategoryDataDownloadWithManager:(id)arg1;
- (_Bool)removeCategory:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)reloadBrowseSheet;
- (id)getBrowseSheetCategoryAtIndex:(unsigned long long)arg1;
- (id)getBrowseSheetASINObjectAtIndex:(unsigned long long)arg1 forCategory:(unsigned long long)arg2;
- (void)didFinishDownloadWithError:(id)arg1;
- (void)didFinishDownloadWithData:(id)arg1;
- (void)updateIndexPathsWithDelta:(long long)arg1 forCategoryAt:(long long)arg2;
- (void)updateCurrentCategoryIndexPathWithDelta:(long long)arg1 forCategoryAt:(long long)arg2;
- (void)updateCurrentCategoryIndexPathWithIndexPath:(id)arg1;
- (id)indexPathForCurrentCategory;
- (void)updateSelctedASINIndexPathWithDelta:(long long)arg1 forCategoryAt:(long long)arg2;
- (void)updateSelectedASINIndexPathWithIndexPath:(id)arg1;
- (id)indexPathForSelectedASIN;
- (id)getDeeplinkCategoryIndexPath;
- (id)indexPathForCategoryId:(id)arg1;
- (_Bool)asinFinishedLoadingAtIndex:(long long)arg1 forCategory:(long long)arg2;
- (_Bool)hasMoreASINDataToLoadForCategory:(long long)arg1;
- (void)getNewBrowseSheetContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)getNextSetOfASINForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getNextSetOfASINForCategoryIndex:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)getASINMetadataAtIndex:(unsigned long long)arg1 forCategory:(unsigned long long)arg2;
- (id)getASINInfoAtIndex:(unsigned long long)arg1 forCategory:(unsigned long long)arg2;
- (id)getCategoryDisplayNameAtIndex:(unsigned long long)arg1;
- (void)getASINImageAtIndex:(unsigned long long)arg1 forCategory:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)getPrimeAvailabilityAtIndex:(unsigned long long)arg1 forCategory:(unsigned long long)arg2;
- (id)getASINPriceAtIndex:(unsigned long long)arg1 forCategory:(unsigned long long)arg2;
- (id)getASINImageAtIndex:(unsigned long long)arg1 forCategory:(unsigned long long)arg2;
- (unsigned long long)getCategoryCount;
- (unsigned long long)getASINCountForCategory:(unsigned long long)arg1;
- (void)showSelectedASIN:(_Bool)arg1;
- (_Bool)isRelatedItemsCategory:(unsigned long long)arg1;
- (void)hideRelatedItemsCategory;
- (void)getRelatedItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)startCategoryDataDownload;
- (id)init;
- (void)clearImageCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

