//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCFilterCacheViewModel, ACCFilterEffectViewModel, AWEFilterCategoryWrapper, AWEFilterEffectWrapper, NSArray, NSDictionary, NSString, RACSignal;
@protocol ACCFilterApplyProtocol, ACCFilterBuildInDataSourceProtocol;

@interface ACCFilterPanelViewModel : NSObject
{
    _Bool _tabIsFixed;
    _Bool _disableSlider;
    _Bool _hasNewFilter;
    ACCFilterEffectViewModel *_effectViewModel;
    ACCFilterCacheViewModel *_cacheManager;
    NSArray *_filtersArray;
    NSArray *_allAvailableFilters;
    AWEFilterEffectWrapper *_selectedFilter;
    NSDictionary *_filterIndexPathMap;
    NSDictionary *_filterTabNameMap;
    NSDictionary *_categoryMap;
    AWEFilterCategoryWrapper *_selectedTabCategory;
    id <ACCFilterBuildInDataSourceProtocol> _buildInDataSource;
    NSString *_businessName;
    AWEFilterEffectWrapper *_incomingEffect;
    id <ACCFilterApplyProtocol> _cameraService;
    AWEFilterEffectWrapper *_downloadStatusChangedFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEFilterEffectWrapper *downloadStatusChangedFilter; // @synthesize downloadStatusChangedFilter=_downloadStatusChangedFilter;
@property(retain, nonatomic) id <ACCFilterApplyProtocol> cameraService; // @synthesize cameraService=_cameraService;
@property(retain, nonatomic) AWEFilterEffectWrapper *incomingEffect; // @synthesize incomingEffect=_incomingEffect;
@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(retain, nonatomic) id <ACCFilterBuildInDataSourceProtocol> buildInDataSource; // @synthesize buildInDataSource=_buildInDataSource;
@property(nonatomic) _Bool hasNewFilter; // @synthesize hasNewFilter=_hasNewFilter;
@property(nonatomic) _Bool disableSlider; // @synthesize disableSlider=_disableSlider;
@property(nonatomic) _Bool tabIsFixed; // @synthesize tabIsFixed=_tabIsFixed;
@property(retain, nonatomic) AWEFilterCategoryWrapper *selectedTabCategory; // @synthesize selectedTabCategory=_selectedTabCategory;
@property(copy, nonatomic) NSDictionary *categoryMap; // @synthesize categoryMap=_categoryMap;
@property(copy, nonatomic) NSDictionary *filterTabNameMap; // @synthesize filterTabNameMap=_filterTabNameMap;
@property(copy, nonatomic) NSDictionary *filterIndexPathMap; // @synthesize filterIndexPathMap=_filterIndexPathMap;
@property(retain, nonatomic) AWEFilterEffectWrapper *selectedFilter; // @synthesize selectedFilter=_selectedFilter;
@property(copy, nonatomic) NSArray *allAvailableFilters; // @synthesize allAvailableFilters=_allAvailableFilters;
@property(copy, nonatomic) NSArray *filtersArray; // @synthesize filtersArray=_filtersArray;
@property(retain, nonatomic) ACCFilterCacheViewModel *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) ACCFilterEffectViewModel *effectViewModel; // @synthesize effectViewModel=_effectViewModel;
@property(readonly, nonatomic) RACSignal *downloadStatusChangedFilterSignal;
@property(readonly, nonatomic) RACSignal *hasNewFilterSignal;
@property(readonly, nonatomic) RACSignal *filtersArraySignal;
@property(readonly, nonatomic) RACSignal *selectedFilterSignal;
- (id)findFilterWithEffect:(id)arg1;
- (void)updateAvailableEffects;
- (void)updateHasNewFilterFlag:(id)arg1;
- (void)updateHasNewFilter;
- (void)markAsSelectedEffect:(id)arg1;
- (id)findFilterWithIndexPath:(id)arg1;
- (id)findIndexPathWithFilter:(id)arg1;
- (void)onEffectUpdated:(id)arg1;
- (void)onEffectListUpdated:(id)arg1;
- (void)registerNotifications;
- (void)applyFilter:(id)arg1 withIntensity:(float)arg2;
- (void)resetFilter;
- (void)reapplyCachedFilter;
- (void)updateCachedRatioForFilter:(id)arg1;
- (void)switchFilterWithLeft:(id)arg1 right:(id)arg2 progress:(double)arg3;
- (void)switchToFilter:(id)arg1;
- (void)fetchEffectList;
- (void)dealloc;
- (id)initWithPanelName:(id)arg1 businessName:(id)arg2 cacheManager:(id)arg3 effectApplyService:(id)arg4 migrationHandler:(id)arg5;
- (id)initWithPanelName:(id)arg1 businessName:(id)arg2 effectApplyService:(id)arg3 migrationHandler:(id)arg4;

@end

