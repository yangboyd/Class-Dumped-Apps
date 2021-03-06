//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEGeneralSearchModel, AWEGeneralSearchResponseModel, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol AWEGeneralSearchDataControllerAdapter <NSObject>
- (void)addLoactionParams:(NSMutableDictionary *)arg1;
- (void)updateMonitorData:(NSMutableDictionary *)arg1 withModel:(AWEGeneralSearchResponseModel *)arg2 pullType:(long long)arg3;
- (NSString *)fetchStatusMsg:(AWEGeneralSearchResponseModel *)arg1;
- (void)showEggIfNeed:(AWEGeneralSearchResponseModel *)arg1;
- (void)addNecessaryPullParams:(NSMutableDictionary *)arg1;
- (void)addTopUserMixVideoModelToSeparated:(NSMutableArray *)arg1 searchModel:(AWEGeneralSearchModel *)arg2;
- (void)addUserModelToSpeparatedModels:(NSMutableArray *)arg1 searchModel:(AWEGeneralSearchModel *)arg2;
- (NSArray *)appendDataSourceFromList:(NSArray *)arg1;
@end

