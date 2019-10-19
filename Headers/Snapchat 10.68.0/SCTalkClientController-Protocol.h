//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatViewLifeCycleListener-Protocol.h"

@class NSString, SCChatInputViewController, SCTV3FullscreenStateListenerAnnouncer;
@protocol SCTalkSession;

@protocol SCTalkClientController <SCChatViewLifeCycleListener>
- (void)setupCallButtonsIfNeeded;
- (_Bool)shouldSuppressKeyboard;
- (void)chatMediaDidCloseFullscreen;
- (void)chatMediaWillEnterFullscreen;
- (SCTV3FullscreenStateListenerAnnouncer *)fullscreenAnnouncer;
- (void)setChatInputController:(SCChatInputViewController *)arg1 shouldAttachAsListener:(_Bool)arg2;
- (id <SCTalkSession>)talkSession;
- (void)refreshParticipants;
- (void)activateTalkPostGroupCreation;
- (void)setActiveTalkSessionForConversationWithId:(NSString *)arg1;
- (NSString *)activeConvoId;
@end

