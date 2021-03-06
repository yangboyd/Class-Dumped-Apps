//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEGeneralSearchExtraVerticalModel, AWERiskPreventModel, AWESearchCorrectModel, AWESearchFrequencyManager, AWESearchHarmfulCategoryManager, NSDictionary, NSNumber, NSString, UIViewController;

@interface AWESearchBaseManager : NSObject
{
    _Bool _hasMore;
    _Bool _isRecommend;
    _Bool _isRequestOnAir;
    _Bool _fromHotSearch;
    _Bool _shouldHideCorrection;
    _Bool _isFilterSearch;
    long long _count;
    NSString *_keyWord;
    NSNumber *_cursor;
    NSString *_correctName;
    AWERiskPreventModel *_riskPreventModel;
    NSString *_requestID;
    NSDictionary *_logPassback;
    AWESearchCorrectModel *_correctModel;
    AWEGeneralSearchExtraVerticalModel *_extraModel;
    NSString *_initialSearchSource;
    NSDictionary *_searchRequestLogQueries;
    UIViewController *_refViewController;
    AWESearchFrequencyManager *_frequencyManager;
    AWESearchHarmfulCategoryManager *_harmfulCategoryManager;
    unsigned long long _publishTime;
    unsigned long long _sortType;
    NSDictionary *_filterLogInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *filterLogInfo; // @synthesize filterLogInfo=_filterLogInfo;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) unsigned long long publishTime; // @synthesize publishTime=_publishTime;
@property(nonatomic) _Bool isFilterSearch; // @synthesize isFilterSearch=_isFilterSearch;
@property(retain, nonatomic) AWESearchHarmfulCategoryManager *harmfulCategoryManager; // @synthesize harmfulCategoryManager=_harmfulCategoryManager;
@property(retain, nonatomic) AWESearchFrequencyManager *frequencyManager; // @synthesize frequencyManager=_frequencyManager;
@property(nonatomic) __weak UIViewController *refViewController; // @synthesize refViewController=_refViewController;
@property(copy, nonatomic) NSDictionary *searchRequestLogQueries; // @synthesize searchRequestLogQueries=_searchRequestLogQueries;
@property(copy, nonatomic) NSString *initialSearchSource; // @synthesize initialSearchSource=_initialSearchSource;
@property(retain, nonatomic) AWEGeneralSearchExtraVerticalModel *extraModel; // @synthesize extraModel=_extraModel;
@property(retain, nonatomic) AWESearchCorrectModel *correctModel; // @synthesize correctModel=_correctModel;
@property(nonatomic) _Bool shouldHideCorrection; // @synthesize shouldHideCorrection=_shouldHideCorrection;
@property(retain, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(nonatomic) _Bool fromHotSearch; // @synthesize fromHotSearch=_fromHotSearch;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) AWERiskPreventModel *riskPreventModel; // @synthesize riskPreventModel=_riskPreventModel;
@property(copy, nonatomic) NSString *correctName; // @synthesize correctName=_correctName;
@property(nonatomic) _Bool isRequestOnAir; // @synthesize isRequestOnAir=_isRequestOnAir;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend=_isRecommend;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (id)init;

@end

