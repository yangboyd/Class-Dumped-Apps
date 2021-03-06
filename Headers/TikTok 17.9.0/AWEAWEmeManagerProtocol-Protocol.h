//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, NSArray, NSDictionary, NSString;

@protocol AWEAWEmeManagerProtocol <NSObject>
+ (void)statisticsWatchOftenUserWithID:(NSString *)arg1 referString:(NSString *)arg2 awemeType:(long long)arg3;
+ (void)statisticsVideoViewedWithID:(NSString *)arg1 authorID:(NSString *)arg2 followStatus:(long long)arg3 followerStatus:(long long)arg4;
+ (void)requestI18NAddictionVideoId:(_Bool)arg1 completion:(void (^)(NSString *))arg2;
+ (void)requestAwemeItemsWithIDs:(NSString *)arg1 passThroughParam:(NSString *)arg2 params:(NSDictionary *)arg3 completion:(void (^)(id, NSError *))arg4;
+ (void)requestAwemeItemWithID:(NSString *)arg1 parameters:(NSDictionary *)arg2 completion:(void (^)(AWEAwemeModel *, NSError *))arg3;
+ (void)requestAwemeItemWithID:(NSString *)arg1 completion:(void (^)(AWEAwemeModel *, NSError *))arg2;
+ (void)requestTurnToPrivacyType:(unsigned long long)arg1 awemeID:(NSString *)arg2 enableExclusionSelected:(_Bool)arg3 isExclusionSelected:(_Bool)arg4 exclusionSecUidList:(NSArray *)arg5 isHideSearch:(_Bool)arg6 completion:(void (^)(AWEPrivateInfoResponseModel *, NSError *))arg7;
+ (void)requestTurnToPrivacyType:(unsigned long long)arg1 Video:(NSString *)arg2 completion:(void (^)(AWEPrivateInfoResponseModel *, NSError *))arg3;
+ (void)deleteAwemeItemWithID:(NSString *)arg1 completion:(void (^)(id, NSError *))arg2;
+ (void)requestTop:(AWEAwemeModel *)arg1 top:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
+ (void)requestDislikeVideo:(AWEAwemeModel *)arg1 referString:(NSString *)arg2 completion:(void (^)(AWEBaseApiModel *, NSError *))arg3;
+ (void)requestDislikeVideo:(AWEAwemeModel *)arg1 completion:(void (^)(AWEBaseApiModel *, NSError *))arg2;
+ (long long)channelTypeWithReferString:(NSString *)arg1;
+ (void)interactAwemeItemWithID:(NSString *)arg1 originItemWithID:(NSString *)arg2 isFamiliar:(_Bool)arg3 action:(long long)arg4 referString:(NSString *)arg5 completion:(void (^)(id, NSError *))arg6;
+ (void)interactAwemeItemWithID:(NSString *)arg1 originItemWithID:(NSString *)arg2 action:(long long)arg3 referString:(NSString *)arg4 completion:(void (^)(id, NSError *))arg5;
+ (void)statisticsNewPlayWithID:(NSString *)arg1 referString:(NSString *)arg2 awemeType:(long long)arg3 followStatus:(long long)arg4 followerStatus:(long long)arg5 extraLog:(NSDictionary *)arg6;
+ (void)statisticsNewPlayWithID:(NSString *)arg1 referString:(NSString *)arg2 awemeType:(long long)arg3;
@end

