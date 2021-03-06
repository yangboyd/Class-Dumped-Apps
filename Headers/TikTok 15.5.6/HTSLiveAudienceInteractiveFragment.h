//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveAnchorInteractiveRouter-Protocol.h"
#import "HTSLiveComponent-Protocol.h"
#import "HTSLiveInteractionEntranceProvider-Protocol.h"
#import "HTSLiveInteractionStatusDelegate-Protocol.h"

@class HTSEventContext, HTSLiveInteractionEntranceStore, HTSLivePKMedalView, HTSLivePKPlayground, NSString;
@protocol HTSLiveAudienceActions, HTSLiveDetailRouter, HTSLiveInteractionEntranceActions, HTSLiveInteractionInstance, HTSLivePluginLayoutMachineProvider, HTSLiveViewHierarchyProvider, IESLiveAlertFactory, IESLiveSettings, IESLiveToastFactory;

@interface HTSLiveAudienceInteractiveFragment : NSObject <HTSLiveInteractionStatusDelegate, HTSLiveInteractionEntranceProvider, HTSLiveComponent, HTSLiveAnchorInteractiveRouter>
{
    _Bool _hideMedalView;
    _Bool _hasCouldUnmountComponentConfirmed;
    HTSEventContext *_trackContext;
    HTSLiveInteractionEntranceStore *_store;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLiveDetailRouter> _router;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <HTSLiveInteractionEntranceActions> _entranceActionCreator;
    id <HTSLiveAudienceActions> _roomViewActionCreator;
    id <IESLiveAlertFactory> _alertFactory;
    id <HTSLiveInteractionInstance> _currentInstance;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveSettings> _settings;
    HTSLivePKPlayground *_pkPlayground;
    HTSLivePKMedalView *_pkMedalView;
    unsigned long long _currentInteractionType;
}

+ (long long)preferredLoadPhase;
+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(nonatomic) unsigned long long currentInteractionType; // @synthesize currentInteractionType=_currentInteractionType;
@property(nonatomic) _Bool hasCouldUnmountComponentConfirmed; // @synthesize hasCouldUnmountComponentConfirmed=_hasCouldUnmountComponentConfirmed;
@property(nonatomic) _Bool hideMedalView; // @synthesize hideMedalView=_hideMedalView;
@property(retain, nonatomic) HTSLivePKMedalView *pkMedalView; // @synthesize pkMedalView=_pkMedalView;
@property(nonatomic) __weak HTSLivePKPlayground *pkPlayground; // @synthesize pkPlayground=_pkPlayground;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <HTSLiveInteractionInstance> currentInstance; // @synthesize currentInstance=_currentInstance;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(nonatomic) __weak id <HTSLiveAudienceActions> roomViewActionCreator; // @synthesize roomViewActionCreator=_roomViewActionCreator;
@property(nonatomic) __weak id <HTSLiveInteractionEntranceActions> entranceActionCreator; // @synthesize entranceActionCreator=_entranceActionCreator;
@property(nonatomic) __weak id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(nonatomic) __weak id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) HTSLiveInteractionEntranceStore *store; // @synthesize store=_store;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
- (void).cxx_destruct;
- (void)showPKPanelView;
- (void)showInteractiveItem:(_Bool)arg1;
- (unsigned long long)currentInteraction;
- (_Bool)inAnchorDoubleInteraction;
- (void)showNewRulesTipView;
- (void)showMVPPunishmentEffectPickerViewWithEffects:(id)arg1 channelID:(id)arg2 battleID:(id)arg3;
- (void)hidePKMedalView:(_Bool)arg1;
- (void)loadInteractionInstance:(unsigned long long)arg1;
- (void)handleQualifyingModel;
- (void)handleRoomUpdated;
- (void)handleLinkmicMessage:(id)arg1;
- (void)updateQualifyingModel;
- (id)eventContext;
- (id)interactionRoom;
- (void)onInteractionEnded:(id)arg1;
- (void)onInteractionStarted:(id)arg1;
- (void)addNormalInteractiveController;
- (void)componentDidAppear;
- (void)componentWillUnmount;
- (long long)componentPriority;
- (void)askForLeave;
- (_Bool)couldUnmountComponent;
- (void)componentDidMount;
- (id)init;
- (id)providedRouter;
- (id)makeInteractiveAudienceControllerWithRoomModel:(id)arg1 trackerContext:(id)arg2;
- (id)makeLinkMicMultiAudioAudienceControllerWithRoomModel:(id)arg1 trackerContext:(id)arg2;
- (_Bool)isKindOfHTSInteractiveAudienceController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

