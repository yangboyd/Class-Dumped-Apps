//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWERecordTutorialBaseListDataController.h"

@class NSNumber;

@interface AWERecordTutorialListDataController : AWERecordTutorialBaseListDataController
{
    NSNumber *_tutorialType;
}

@property(copy, nonatomic) NSNumber *tutorialType; // @synthesize tutorialType=_tutorialType;
- (void).cxx_destruct;
- (void)p_initPlaceholderModels;
- (_Bool)hasInitFetchBefore;
- (void)setHasInitFetchBefore:(_Bool)arg1;
- (id)createCacheQuery;
- (void)requestWithCursor:(long long)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)queryCount;
- (void)setListDataCache:(id)arg1 withCacheQuery:(id)arg2;
- (id)initWithTutorialType:(id)arg1;

@end

