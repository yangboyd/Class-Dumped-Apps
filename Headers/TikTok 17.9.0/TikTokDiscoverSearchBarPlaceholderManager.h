//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TikTokDiscoverSearchBarPlaceholderWordModel;

@interface TikTokDiscoverSearchBarPlaceholderManager : NSObject
{
    _Bool _hasSuccessfullyFetched;
    _Bool _canDirectlyUsePlaceholderAsQuery;
    _Bool _isFetching;
    _Bool _hasDynamicFetched;
    NSString *_placeholderImprId;
    unsigned long long _style;
    NSArray *_marqueePlaceholders;
    unsigned long long _dynamicIndex;
    TikTokDiscoverSearchBarPlaceholderWordModel *_fixedModel;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasDynamicFetched; // @synthesize hasDynamicFetched=_hasDynamicFetched;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) TikTokDiscoverSearchBarPlaceholderWordModel *fixedModel; // @synthesize fixedModel=_fixedModel;
@property(nonatomic) unsigned long long dynamicIndex; // @synthesize dynamicIndex=_dynamicIndex;
@property(copy, nonatomic) NSArray *marqueePlaceholders; // @synthesize marqueePlaceholders=_marqueePlaceholders;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool canDirectlyUsePlaceholderAsQuery; // @synthesize canDirectlyUsePlaceholderAsQuery=_canDirectlyUsePlaceholderAsQuery;
@property(nonatomic) _Bool hasSuccessfullyFetched; // @synthesize hasSuccessfullyFetched=_hasSuccessfullyFetched;
@property(copy, nonatomic) NSString *placeholderImprId; // @synthesize placeholderImprId=_placeholderImprId;
- (void)p_updateStyle:(_Bool)arg1;
- (void)fetchPlaceholderSet:(CDUnknownBlockType)arg1;
- (id)fetchDynamicPlaceholder;
@property(readonly, nonatomic) TikTokDiscoverSearchBarPlaceholderWordModel *currentFixedWord;
@property(readonly, nonatomic) _Bool showMarqueePlaceholder;
@property(readonly, nonatomic) _Bool showFixedPlaceholder;
@property(readonly, nonatomic) _Bool shouldFetchPlaceholder;
- (id)init;

@end

