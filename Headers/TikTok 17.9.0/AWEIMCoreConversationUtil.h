//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEIMCoreConversationUtil : NSObject
{
}

+ (_Bool)aweim_isNameChanged:(id)arg1;
+ (void)aweim_setBusinessChat:(_Bool)arg1 on:(id)arg2;
+ (_Bool)aweim_businessChat:(id)arg1;
+ (_Bool)aweim_isCurrentGroupIsBanned:(id)arg1;
+ (_Bool)aweim_hasClosedStrangerGreetTip:(id)arg1;
+ (void)aweim_setHasClosedStrangerGreetTip:(_Bool)arg1 con:(id)arg2;
+ (id)aweim_groupEntryLimit:(id)arg1;
+ (void)aweim_setGroupEntryLimit:(id)arg1 con:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)aweim_allowGroupMemberInvite:(id)arg1;
+ (void)aweim_setAllowGroupMemberInvite:(_Bool)arg1 con:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (long long)aweim_groupMemberLimit:(id)arg1;
+ (void)aweim_setGroupMemberLimit:(long long)arg1 con:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)aweim_inputTextDraft:(id)arg1;
+ (void)aweim_setInputTextDraft:(id)arg1 con:(id)arg2;
+ (id)aweim_latestMessagePropertyItem:(id)arg1;
+ (void)aweim_setLatestMessgePropertyItem:(id)arg1 con:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)aweim_lastDisplayStrongTipsId:(id)arg1;
+ (void)aweim_setLastDisplayStrongTipsId:(id)arg1 con:(id)arg2;
+ (long long)aweim_lastDisplayStrongTipsTime:(id)arg1;
+ (void)aweim_setLastDisplayStrongTipsTime:(long long)arg1 con:(id)arg2;
+ (long long)aweim_lastReadGroupNoticeTime:(id)arg1;
+ (void)aweim_setLastReadGroupNoticeTime:(long long)arg1 con:(id)arg2;
+ (id)aweim_noticeSettingDict:(id)arg1;
+ (void)aweim_setNoticeSettingDict:(id)arg1 con:(id)arg2;
+ (_Bool)aweim_isAuthorService:(id)arg1;
+ (void)aweim_setIsAuthorService:(_Bool)arg1 con:(id)arg2;
+ (long long)aweim_sameGroupShowCount:(id)arg1;
+ (void)aweim_setSameGroupShowCount:(long long)arg1 con:(id)arg2;
+ (double)aweim_sameGroupLastShowTimestamp:(id)arg1;
+ (void)aweim_setSameGroupLastShowTimestamp:(double)arg1 con:(id)arg2;
+ (_Bool)aweim_inAppPushStateOpened:(id)arg1;
+ (void)aweim_setInAppPushState:(_Bool)arg1 con:(id)arg2;
+ (_Bool)aweim_isAlreadyShowGreetMsg:(id)arg1;
+ (void)aweim_syncAlreadyShowGreetMsgIfNeed:(id)arg1;
+ (void)aweim_setSyncedAlreadyShowGreetMsg:(id)arg1;
+ (void)aweim_setAlreadyShowGreetMsg:(id)arg1;
+ (long long)aweim_chatExplainType:(id)arg1;
+ (double)aweim_updateDate:(id)arg1;
+ (id)aweim_abGroupAvatar:(id)arg1;
+ (_Bool)aweim_greetedInChatList:(id)arg1;
+ (void)aweim_setGreetedInChatList:(_Bool)arg1 con:(id)arg2;
+ (_Bool)aweim_showedCloseInnerPushTips:(id)arg1;
+ (void)aweim_setShowedCloseInnerPushTips:(id)arg1;
+ (_Bool)aweim_visibleEvenNoMessagesFlag:(id)arg1;
+ (void)aweim_setVisibleEvenNoMessagesFlag:(_Bool)arg1 con:(id)arg2;
+ (_Bool)aweim_shouldDisplay:(id)arg1;
+ (id)awe_convertStrangerChatToChatModel:(id)arg1;
+ (long long)awe_convertToChatModelType:(id)arg1;
+ (id)awe_convertToChatModel:(id)arg1;

@end

