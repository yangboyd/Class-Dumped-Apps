//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@interface AWEConcernDataController : AWEListDataController
{
    double _lastEnterTabTimeStamp;
}

+ (CDUnknownBlockType)_didGetDuplicatedArrayBlock;
@property(nonatomic) double lastEnterTabTimeStamp; // @synthesize lastEnterTabTimeStamp=_lastEnterTabTimeStamp;
- (id)transferAwemeModelForLive:(id)arg1;
- (CDUnknownBlockType)isEqualBlock;
- (id)transferAwemeListIfNeededWithArray:(id)arg1;
- (void)updateConcernCardListInfo:(id)arg1 feedType:(long long)arg2 awemeBlock:(CDUnknownBlockType)arg3;
- (id)addressBookAccess;
- (id)filterDuplicatedDatasourceWithArray:(id)arg1 requestId:(id)arg2 isEqual:(CDUnknownBlockType)arg3 didGetDuplicatedArray:(CDUnknownBlockType)arg4;
- (id)loadmoreDataSourceWithArray:(id)arg1 requestId:(id)arg2;
- (id)refreshDataSourceWithArray:(id)arg1 cleanRefresh:(_Bool)arg2 requestId:(id)arg3;

@end

