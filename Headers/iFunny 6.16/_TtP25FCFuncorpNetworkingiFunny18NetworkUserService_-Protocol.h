//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol _TtP25FCFuncorpNetworkingiFunny18NetworkUserService_ <NSObject>
- (void)cancelLoadUsersList;
- (void)sendSocialStatWithUserId:(NSString *)arg1 params:(NSDictionary *)arg2 success:(void (^)(IFNetworkStatusResponse *))arg3 failure:(void (^)(NSError *))arg4;
- (void)loadUserListByPath:(NSString *)arg1 nextCursor:(NSString *)arg2 success:(void (^)(FNROUsersList *))arg3 failure:(void (^)(NSError *))arg4;
- (void)abuseUserWithReasonWithAbuseType:(NSString *)arg1 userId:(NSString *)arg2 success:(void (^)(IFNetworkStatusResponse *))arg3 failure:(void (^)(NSError *))arg4;
- (void)unsubscribeFromUserUpdatesWithUserId:(NSString *)arg1 success:(void (^)(IFNetworkStatusResponse *))arg2 failure:(void (^)(NSError *))arg3;
- (void)subscribeToUserUpdatesWithUserId:(NSString *)arg1 success:(void (^)(IFNetworkStatusResponse *))arg2 failure:(void (^)(NSError *))arg3;
- (void)getUserById:(NSString *)arg1 success:(void (^)(FNROUser *))arg2 failure:(void (^)(NSError *))arg3;
- (void)getUserByNick:(NSString *)arg1 success:(void (^)(FNROUser *))arg2 failure:(void (^)(NSError *))arg3;
@end

