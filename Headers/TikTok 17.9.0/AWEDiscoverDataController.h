//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSMutableSet;

@interface AWEDiscoverDataController : AWEListDataController
{
    _Bool _hasMore;
    long long _isComplete;
    long long _cursor;
    NSMutableSet *_filterSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *filterSet; // @synthesize filterSet=_filterSet;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) long long isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (id)getExpectedSizeInfo;
- (void)resetData;
- (id)_filterUniqueWithArray:(id)arg1;
- (void)_fetchCategoryListWithCursor:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

