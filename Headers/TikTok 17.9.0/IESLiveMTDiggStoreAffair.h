//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTDiggStoreAffairProtocol-Protocol.h"

@class HTSEventContext, IESLiveComponentContext, IESLiveMTDiggAPI, LiveRoomModel, NSNumber, NSString, NSTimer;
@protocol HTSLiveDiggAction, HTSLiveMessageDispatchProvider, IESLiveMTDiggReaction, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveUserService;

@interface IESLiveMTDiggStoreAffair : NSObject <IESLiveMTDiggStoreAffairProtocol>
{
    _Bool _alreadyToastDiggLimit;
    _Bool _isDigging;
    _Bool _alreadyFakeDiggMessage;
    _Bool _isAnchor;
    _Bool _fakeMessageShowed;
    id <IESLiveMTDiggReaction> _reaction;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_eventContext;
    IESLiveMTDiggAPI *_diggAPI;
    LiveRoomModel *_roomModel;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveSettings> _settings;
    id <IESLiveUserService> _userService;
    id <IESLiveTracker> _tracker;
    NSTimer *_diggingTimer;
    long long _currentContinueCount;
    id <HTSLiveDiggAction> _actionCreator;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    long long _diggCountToUpload;
}

- (void).cxx_destruct;
@property(nonatomic) long long diggCountToUpload; // @synthesize diggCountToUpload=_diggCountToUpload;
@property(nonatomic) _Bool fakeMessageShowed; // @synthesize fakeMessageShowed=_fakeMessageShowed;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <HTSLiveDiggAction> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(readonly, nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) _Bool alreadyFakeDiggMessage; // @synthesize alreadyFakeDiggMessage=_alreadyFakeDiggMessage;
@property(nonatomic) long long currentContinueCount; // @synthesize currentContinueCount=_currentContinueCount;
@property(retain, nonatomic) NSTimer *diggingTimer; // @synthesize diggingTimer=_diggingTimer;
@property(nonatomic) _Bool isDigging; // @synthesize isDigging=_isDigging;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(nonatomic) _Bool alreadyToastDiggLimit; // @synthesize alreadyToastDiggLimit=_alreadyToastDiggLimit;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) IESLiveMTDiggAPI *diggAPI; // @synthesize diggAPI=_diggAPI;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(nonatomic) __weak id <IESLiveMTDiggReaction> reaction; // @synthesize reaction=_reaction;
- (_Bool)enableMessageStyleSwitch;
- (_Bool)p_isMyselfAnchor;
- (void)sendFakeLikeMessageIfNeeded;
- (void)uploadDiggMessageWithDiggCount:(long long)arg1;
- (void)endingContinueDigg;
- (void)_diggClickedWithTouchPoint:(struct CGPoint)arg1;
- (void)diggClicked:(_Bool)arg1 touchPoint:(struct CGPoint)arg2 gapTime:(double)arg3;
- (_Bool)_diggEnable;
- (id)initWitRoom:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *firstIndex;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

