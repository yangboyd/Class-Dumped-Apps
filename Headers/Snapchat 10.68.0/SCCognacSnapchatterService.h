//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;
@protocol SCGroupManager, SCGroupSnapchatterRepository, SCSnapchatterPublicInfoFetcher, SCSnapchattersDataFetching, SCUsernameToSnapchatterFetching;

@interface SCCognacSnapchatterService : NSObject
{
    id <SCUsernameToSnapchatterFetching> _usernameToSnapchatterFetcher;
    id <SCSnapchattersDataFetching> _snapchattersDataProvider;
    id <SCSnapchatterPublicInfoFetcher> _snapchatterPublicInfoFetcher;
    id <SCGroupSnapchatterRepository> _groupSnapchatterRepository;
    id <SCGroupManager> _groupManager;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)groupParticipantAndSnapchattersWithGroupIds:(id)arg1 userIds:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)publicSnapchattersWithUserIds:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)snapchattersWithUserIds:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)snapchatterColorWithConversationId:(id)arg1 usernames:(id)arg2 currentUsername:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)snapchattersWithConversationId:(id)arg1 userIds:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)conversationNameWithConversationId:(id)arg1 currentUsername:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)snapchattersWithConversationId:(id)arg1 usernames:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)snapchattersWithConversationId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithSnapchattersDataProvider:(id)arg1 usernameToSnapchatterFetcher:(id)arg2 snapchatterPublicInfoFetcher:(id)arg3 groupSnapchatterRepository:(id)arg4 groupManager:(id)arg5;

@end

