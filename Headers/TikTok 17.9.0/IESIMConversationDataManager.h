//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESIMConversationDataManagerProtocol-Protocol.h"

@class NSString;

@interface IESIMConversationDataManager : NSObject <IESIMConversationDataManagerProtocol>
{
}

- (void)fetchConversationInfo:(long long)arg1 conversationID:(id)arg2 type:(unsigned long long)arg3 inInbox:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendMessageP2P:(long long)arg1 conversationId:(id)arg2 visibleUser:(id)arg3 messageType:(long long)arg4 content:(id)arg5 ext:(id)arg6 complection:(CDUnknownBlockType)arg7;
- (void)sendMessageP2P:(id)arg1 messageType:(long long)arg2 content:(id)arg3 ext:(id)arg4 toConversation:(id)arg5 complection:(CDUnknownBlockType)arg6;
- (void)setStickOnTop:(_Bool)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setMute:(_Bool)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enterConversation:(id)arg1 conversationType:(unsigned long long)arg2 shortID:(long long)arg3 inbox:(int)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setAliasForParticipant:(long long)arg1 alias:(id)arg2 ofConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBatchRoleForParticipant:(id)arg1 role:(long long)arg2 bizExt:(id)arg3 ofConversation:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setRoleForParticipant:(long long)arg1 role:(long long)arg2 ofConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissFromConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)leaveFromConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeParticipants:(id)arg1 options:(id)arg2 fromConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeParticipants:(id)arg1 fromConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addParticipants:(id)arg1 options:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addParticipants:(id)arg1 toConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAllMessagesWithMode:(unsigned long long)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteWithOptions:(unsigned long long)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteWithMode:(unsigned long long)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendUserAction:(long long)arg1 extra:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)markAsUnreadWithMode:(unsigned long long)arg1 unreadCount:(long long)arg2 ofConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)markAllMessagesBeforeMessage:(id)arg1 asReadWithMode:(unsigned long long)arg2 ofConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)markAllConversationsAsReadWithMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createConversationWithOtherParticipants:(id)arg1 type:(unsigned long long)arg2 inInbox:(int)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createConversationWithOtherParticipants:(id)arg1 type:(unsigned long long)arg2 inInbox:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setNotice:(id)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setIcon:(id)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDesc:(id)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setName:(id)arg1 ofConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)conversationForceSetUpdated:(id)arg1 at:(id)arg2;
- (void)conversationUpdateCurrentIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)conversationUpdateIfNeeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

