//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMInAppPushViewDelegate-Protocol.h"
#import "AWELiveRoomMessage-Protocol.h"
#import "TIMOChangeObserverDelegate-Protocol.h"

@class AWEIMInAppPushView, NSMutableArray, NSMutableDictionary, NSString;

@interface AWEIMInnerPushManager : NSObject <AWELiveRoomMessage, TIMOChangeObserverDelegate, AWEIMInAppPushViewDelegate>
{
    _Bool _shouldCollectingMessages;
    _Bool _isLive;
    AWEIMInAppPushView *_pushView;
    NSMutableArray *_polymericMessagesFromLongConnection;
    NSMutableArray *_polymericMessagesForDeactivePeriod;
    NSMutableDictionary *_conPushMsgCountDict;
    NSString *_changeObserverToken;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *changeObserverToken; // @synthesize changeObserverToken=_changeObserverToken;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) NSMutableDictionary *conPushMsgCountDict; // @synthesize conPushMsgCountDict=_conPushMsgCountDict;
@property(retain, nonatomic) NSMutableArray *polymericMessagesForDeactivePeriod; // @synthesize polymericMessagesForDeactivePeriod=_polymericMessagesForDeactivePeriod;
@property(retain, nonatomic) NSMutableArray *polymericMessagesFromLongConnection; // @synthesize polymericMessagesFromLongConnection=_polymericMessagesFromLongConnection;
@property(retain, nonatomic) AWEIMInAppPushView *pushView; // @synthesize pushView=_pushView;
@property(nonatomic) _Bool shouldCollectingMessages; // @synthesize shouldCollectingMessages=_shouldCollectingMessages;
- (void).cxx_destruct;
- (_Bool)p_checkSceneValid;
- (_Bool)p_checkChatValidation:(id)arg1;
- (void)anchorEndLive;
- (void)anchorStartLive;
- (void)audienceQuitLiveRoom;
- (void)audienceEnterLiveRoom;
- (void)handleResignActive;
- (void)handleBecomeActive;
- (void)handleNewBroadcastNotification:(id)arg1;
- (void)handleShowPolymericMessagesNotification:(id)arg1;
- (void)handleIMLogoutNotification:(id)arg1;
- (void)handleIMLoginNotification:(id)arg1;
- (void)innerPushViewDidTapped:(id)arg1 chat:(id)arg2;
- (void)didInsertNewMessagesWithMessageIdentifiers:(id)arg1 belongingConversationMap:(id)arg2 reason:(unsigned long long)arg3;
- (void)showChatWithPolymericMessagesIfNeedsFrom:(unsigned long long)arg1;
- (void)handleChatWithConversitionPullFromServer:(id)arg1;
- (void)showChatWithConversitionFromLongConnection:(id)arg1;
- (void)handleChatWith:(id)arg1 reason:(unsigned long long)arg2;
- (void)showPushViewWithLiveModel:(id)arg1;
- (void)delayPerformWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isLivePushShowing;
- (_Bool)isNoticePushViewShowing;
- (void)hideInnerPushView:(_Bool)arg1;
- (void)hideLiveInnerPushView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

