//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveMessageSubscriber-Protocol.h"
#import "IESLiveMTAppLifeCycleActions-Protocol.h"
#import "IESLiveMTRedEnvelopeActions-Protocol.h"
#import "IESLiveMTRoomRemoteActions-Protocol.h"

@class HTSEventContext, IESLiveComponentContext, IESLiveMTRedEnvelopeApi, IESLiveMTRedEnvelopeModel, IESLiveMTRedEnvelopePriorityQueue, LiveRoomModel, NSString, RACDisposable;
@protocol HTSLiveMessageDispatchProvider, IESLiveMTAuthorizationService, IESLiveMTInternalRouter, IESLiveMTMessageListActions, IESLiveSettings, IESLiveTracker, IESLiveUserService, IESLiveWebImageService;

@interface IESLiveMTRedEnvelopeStore : NSObject <HTSLiveMessageSubscriber, IESLiveMTRedEnvelopeActions, IESLiveMTAppLifeCycleActions, IESLiveMTRoomRemoteActions>
{
    _Bool _shouldShowRedEnvelope;
    _Bool _isLastRedEnvelope;
    _Bool _isLastRedEnvelopeOpened;
    _Bool _shouldShowRedEnvelopeApi;
    LiveRoomModel *_roomModel;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    IESLiveMTRedEnvelopeModel *_currentRedEnvelope;
    IESLiveMTRedEnvelopePriorityQueue *_redEnvelopeQueue;
    IESLiveMTRedEnvelopeApi *_api;
    RACDisposable *_disposable;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESLiveTracker> _tracker;
    id <IESLiveWebImageService> _webImageService;
    id <IESLiveMTMessageListActions> _messageListActionsCreator;
    id <IESLiveUserService> _userService;
    id <IESLiveMTAuthorizationService> _authService;
    id <IESLiveSettings> _settings;
    id <IESLiveMTInternalRouter> _internalRouter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMTInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveMTAuthorizationService> authService; // @synthesize authService=_authService;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveMTMessageListActions> messageListActionsCreator; // @synthesize messageListActionsCreator=_messageListActionsCreator;
@property(retain, nonatomic) id <IESLiveWebImageService> webImageService; // @synthesize webImageService=_webImageService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) IESLiveMTRedEnvelopeApi *api; // @synthesize api=_api;
@property(retain, nonatomic) IESLiveMTRedEnvelopePriorityQueue *redEnvelopeQueue; // @synthesize redEnvelopeQueue=_redEnvelopeQueue;
@property(nonatomic) _Bool shouldShowRedEnvelopeApi; // @synthesize shouldShowRedEnvelopeApi=_shouldShowRedEnvelopeApi;
@property(nonatomic) _Bool isLastRedEnvelopeOpened; // @synthesize isLastRedEnvelopeOpened=_isLastRedEnvelopeOpened;
@property(nonatomic) _Bool isLastRedEnvelope; // @synthesize isLastRedEnvelope=_isLastRedEnvelope;
@property(retain, nonatomic) IESLiveMTRedEnvelopeModel *currentRedEnvelope; // @synthesize currentRedEnvelope=_currentRedEnvelope;
@property(nonatomic) _Bool shouldShowRedEnvelope; // @synthesize shouldShowRedEnvelope=_shouldShowRedEnvelope;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (id)mapModel:(id)arg1;
- (void)observeValues:(id)arg1 message:(id)arg2;
- (void)calculateRemainTime:(id)arg1;
- (_Bool)filterRedEnvelope:(id)arg1;
- (void)pr_handleReceivedRedEnvelope:(id)arg1 message:(id)arg2;
- (void)handleReceivedRedEnvelope:(id)arg1 message:(id)arg2;
- (void)fetchAllRedEnvelopesInRoom;
- (void)dequeSmallRedEnvelopeIfNeeded;
- (void)notifyBoxOpened;
- (void)showRedEnvelopeViewWith:(id)arg1;
- (void)didUpdateRoom:(id)arg1;
- (void)appDidBecomeActive;
- (void)messageReceived:(id)arg1;
- (_Bool)isEnd;
- (_Bool)shouldShowOpen;
- (void)setup;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

