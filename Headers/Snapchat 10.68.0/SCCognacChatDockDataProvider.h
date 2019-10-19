//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCTV3ActiveConversationsListener-Protocol.h"

@class NSDictionary, NSString, SCCognacChatDockEntryInfo, SCCognacDataStorage, SCCognacServiceCoordinator, SCCognacSnapchatterService, SCQueuePerformer, SCUpdateListenerAnnouncer;
@protocol SCTalkManager;

@interface SCCognacChatDockDataProvider : NSObject <SCTV3ActiveConversationsListener, SCEventListener>
{
    SCCognacDataStorage *_dataStorage;
    SCCognacServiceCoordinator *_serviceCoordinator;
    SCQueuePerformer *_performer;
    NSString *_conversationId;
    SCCognacSnapchatterService *_snapchatterService;
    id <SCTalkManager> _talkManager;
    NSString *_currentUsername;
    _Bool _activated;
    SCCognacChatDockEntryInfo *_activeEntry;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    NSDictionary *_appInstanceIdToParticipants;
}

+ (id)announcerIdentifier;
@property _Bool activated; // @synthesize activated=_activated;
@property(copy) NSDictionary *appInstanceIdToParticipants; // @synthesize appInstanceIdToParticipants=_appInstanceIdToParticipants;
@property(readonly, nonatomic) SCUpdateListenerAnnouncer *updateAnnouncer; // @synthesize updateAnnouncer=_updateAnnouncer;
@property(copy) SCCognacChatDockEntryInfo *activeEntry; // @synthesize activeEntry=_activeEntry;
- (void).cxx_destruct;
- (id)_createAppInstanceIdToParticipantsDict;
- (void)_clearChatDockEntryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_buildChatDockEntryInfoWithConversationId:(id)arg1 appInstanceDataModel:(id)arg2 participants:(id)arg3 snapchatters:(id)arg4 colors:(id)arg5 triggerType:(unsigned long long)arg6;
- (void)_buildChatDockEntryInfoWithConversationId:(id)arg1 appInstanceDataModel:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)_buildChatDockEntryInfoWithConversationId:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)_buildChatDockEntryForDataStorageUpdateWithConversationId:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)_buildChatDockEntry;
- (void)_fetchChatDockEntryWithConversationId:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)onActiveConversationsChanged;
- (void)setChatDockActivated:(_Bool)arg1;
- (void)clear;
- (void)updateConversationId:(id)arg1;
- (id)initWithDataStorage:(id)arg1 serviceCoordinator:(id)arg2 snapchatterService:(id)arg3 talkManager:(id)arg4 currentUsername:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

