//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol SCSnapchattersDataSearching
- (void)searchNonFriendLocalAndRemoteSnapchattersWithQuery:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(NSString *, NSArray *, NSArray *, NSError *))arg3;
- (void)searchNonFriendSnapchattersAndNonSnapchattersWithQuery:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (void)searchFriendSnapchattersWithQuery:(NSString *)arg1 fitler:(_Bool (^)(SCSnapchatter *, NSString *))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
@end

