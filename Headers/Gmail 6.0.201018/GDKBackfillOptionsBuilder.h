//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GDKBackfillOptionsBuilder : NSObject
{
    _Bool _backfillQueries_hazzer;
    _Bool _queryItemLimit_hazzer;
    _Bool _standardBackfillItemLimit_hazzer;
    _Bool _maxSharedDriveBackfillCount_hazzer;
    _Bool _pageSize_hazzer;
    int _queryItemLimit_14;
    int _standardBackfillItemLimit_25;
    int _maxSharedDriveBackfillCount_27;
    int _pageSize_8;
    NSArray *_backfillQueries_15;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builder;
- (void).cxx_destruct;
@property(nonatomic) _Bool pageSize_hazzer; // @synthesize pageSize_hazzer=_pageSize_hazzer;
@property(nonatomic) _Bool maxSharedDriveBackfillCount_hazzer; // @synthesize maxSharedDriveBackfillCount_hazzer=_maxSharedDriveBackfillCount_hazzer;
@property(nonatomic) _Bool standardBackfillItemLimit_hazzer; // @synthesize standardBackfillItemLimit_hazzer=_standardBackfillItemLimit_hazzer;
@property(nonatomic) _Bool queryItemLimit_hazzer; // @synthesize queryItemLimit_hazzer=_queryItemLimit_hazzer;
@property(nonatomic) _Bool backfillQueries_hazzer; // @synthesize backfillQueries_hazzer=_backfillQueries_hazzer;
- (id)build;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize_8;
@property(nonatomic) int maxSharedDriveBackfillCount; // @synthesize maxSharedDriveBackfillCount=_maxSharedDriveBackfillCount_27;
@property(nonatomic) int standardBackfillItemLimit; // @synthesize standardBackfillItemLimit=_standardBackfillItemLimit_25;
@property(nonatomic) int queryItemLimit; // @synthesize queryItemLimit=_queryItemLimit_14;
@property(copy, nonatomic) NSArray *backfillQueries; // @synthesize backfillQueries=_backfillQueries_15;

@end

