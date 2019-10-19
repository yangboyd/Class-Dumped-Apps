//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, SCSessionRequestManager, SOJUIdentityCreateMischiefsRequest, SOJUIdentityMischiefRequest;
@protocol OS_dispatch_queue;

@protocol SCGroupManagerAPI <NSObject>
- (void)updateGroupBlockedParticipantExceptionsWithGroupId:(NSString *)arg1 newBlockedParticipantExceptions:(NSString *)arg2 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)updateGroupMentionNotificationWithGroupId:(NSString *)arg1 notificationOn:(_Bool)arg2 requestManager:(SCSessionRequestManager *)arg3 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg4 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg5 callbackQueue:(NSObject<OS_dispatch_queue> *)arg6;
- (void)updateGroupNotificationWithGroupId:(NSString *)arg1 notificationOn:(_Bool)arg2 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)updateGroupMuteStateTo:(_Bool)arg1 forGroupId:(NSString *)arg2;
- (void)leaveGroupWithGroupId:(NSString *)arg1 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)updateGroupNameWithGroupId:(NSString *)arg1 groupName:(NSString *)arg2 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)deleteGroupInvitesWithGroupId:(NSString *)arg1 groupInviteType:(long long)arg2 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)joinGroupWithGroupInviteId:(NSString *)arg1 groupId:(NSString *)arg2 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)createGroupInviteWithGroupInviteId:(NSString *)arg1 groupInviteType:(long long)arg2 groupId:(NSString *)arg3 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg4 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg5 callbackQueue:(NSObject<OS_dispatch_queue> *)arg6;
- (void)joinDolphinGroupWithGroupId_DEPRECATED:(NSString *)arg1 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)addToGroupWithGroupId:(NSString *)arg1 participantIds:(NSString *)arg2 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)fetchGroupWithConversationId:(NSString *)arg1 mischiefRequest:(SOJUIdentityMischiefRequest *)arg2 successBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)createGroupsWithMischiefRequest:(SOJUIdentityCreateMischiefsRequest *)arg1 successBlock:(void (^)(NSHTTPURLResponse *, SOJUIdentityCreateMischiefsResponse *))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
@end

