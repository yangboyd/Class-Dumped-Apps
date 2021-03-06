//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveMessageSubscriber-Protocol.h"
#import "IESLiveGiftGuideActions-Protocol.h"

@class HTSEventContext, IESLiveGift, LiveRoomModel, NSString, RACDisposable;
@protocol HTSLiveDetailRouter, HTSLiveMessageDispatchProvider, IESActionDispatcher, IESLiveAppInfo, IESLiveCustomConfig, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveUserService;

@interface IESLiveGiftGuideStore : NSObject <IESLiveGiftGuideActions, HTSLiveMessageSubscriber>
{
    _Bool _showLackOfBanlance;
    _Bool _showGiftGuide;
    _Bool _showFirstChargeGuide;
    LiveRoomModel *_roomModel;
    IESLiveGift *_guideGift;
    NSString *_guideDescription;
    HTSEventContext *_eventContext;
    NSString *_toast;
    id <IESLiveCustomConfig> _customConfig;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <IESLiveSettings> _settings;
    id <IESActionDispatcher> _dispatcher;
    id <IESLiveToastFactory> _toastFactory;
    id <HTSLiveDetailRouter> _router;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESLiveAppInfo> _appInfo;
    RACDisposable *_disposable;
}

@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveCustomConfig> customConfig; // @synthesize customConfig=_customConfig;
@property(nonatomic) _Bool showFirstChargeGuide; // @synthesize showFirstChargeGuide=_showFirstChargeGuide;
@property(nonatomic) _Bool showGiftGuide; // @synthesize showGiftGuide=_showGiftGuide;
@property(retain, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(nonatomic) _Bool showLackOfBanlance; // @synthesize showLackOfBanlance=_showLackOfBanlance;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(retain, nonatomic) NSString *guideDescription; // @synthesize guideDescription=_guideDescription;
@property(retain, nonatomic) IESLiveGift *guideGift; // @synthesize guideGift=_guideGift;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg1;
- (void)sendGuideGift;
- (_Bool)isBanlanceEnough;
- (void)prepareSendGuideGift;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

