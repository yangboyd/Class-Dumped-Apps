//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC25FCFuncorpNetworkingiFunny23NetworkChatsServiceImpl : NSObject
{
    // Error parsing type: , name: networkClient
}

- (void).cxx_destruct;
- (id)init;
- (void)createNewChannelWithTitle:(id)arg1 permalink:(id)arg2 description:(id)arg3 coverFile:(id)arg4 users:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)createNewChatWithChatType:(id)arg1 users:(id)arg2 title:(id)arg3 coverFile:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)removeChatOperatorsWithChatId:(id)arg1 operatorIds:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateChatOperatorListWithChatId:(id)arg1 operatorIds:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setOpenChatSignMessagesWithChatId:(id)arg1 isSignMessages:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setOpenChatFrozenWithChatId:(id)arg1 isFrozen:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateOpenChatPermalinkWithChatId:(id)arg1 permalink:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)leaveOpenChatWithChatId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)joinOpenChatWithChatId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getLastMessagesWithChatId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)searchOpenChatsWithQuery:(id)arg1 limit:(long long)arg2 nextCursor:(id)arg3 prevCursor:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getTrendingChannelsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getOpenChatsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)inviteUsers:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMessengerContactsWithQueryString:(id)arg1 limit:(id)arg2 nextCursor:(id)arg3 prevCursor:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)getOpenChatsWithPermalinkWithPermalink:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateCoverInChannelWithChatId:(id)arg1 coverFile:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)deleteCoverInChannelWithChatId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)changePublicGroupNameWithChatId:(id)arg1 chatTitle:(id)arg2 chatDescription:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)changePublicGroupAdminWithAdminId:(id)arg1 chatUrl:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

