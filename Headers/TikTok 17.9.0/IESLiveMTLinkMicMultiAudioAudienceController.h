//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSLiveLinkmicMediaDelegate-Protocol.h"
#import "IESLiveMTActiveUserListFragmentDelegate-Protocol.h"
#import "IESLiveMTInteractionInstance-Protocol.h"

@class HTSEventContext, IESLiveMTInteractiveAudienceStore, IESLiveMTInteractiveContributorsView, IESLiveMTLinkMicAudioUserListFragment, IESLiveMTLinkMicMultiAudioInnerLayout, IESLiveMTLinkmicMediaService, IESLiveMTMultiAudioAnchorPorfileView, IESLiveMTMultiAudioAudienceCustomItemView, IESLiveMTMultiAudioStatusView, IESLiveMTToolbarItem, LiveRoomModel, NSString, NSTimer;
@protocol HTSLiveDetailRouter, HTSLiveDiggAction, HTSLivePluginLayoutMachineProvider, HTSLiveSmallGiftAction, HTSLiveUserEnterAction, HTSLiveViewHierarchyProvider, IESLiveAlertFactory, IESLiveAppInfo, IESLiveMTAudioBackProvider, IESLiveMTAuthorizationService, IESLiveMTECommerceRouter, IESLiveMTGiftModule, IESLiveMTInteractionStatusDelegate, IESLiveMTInteractiveAudienceActions, IESLiveMTNoticeActions, IESLiveMTRealStreamingProvider, IESLiveMTSharePanelRouter, IESLiveMTStreamPlayerProvider, IESLiveMTToolbarProvider, IESLiveMTUserPreviewRouter, IESLivePushStreamLifeCycle, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveUserService, IESLiveVerifyConfig;

@interface IESLiveMTLinkMicMultiAudioAudienceController : UIViewController <HTSLiveLinkmicMediaDelegate, IESLiveMTActiveUserListFragmentDelegate, IESLiveMTInteractionInstance>
{
    id <IESLiveMTInteractionStatusDelegate> statusDelegate;
    HTSEventContext *_trackContext;
    IESLiveMTInteractiveAudienceStore *_store;
    IESLiveMTLinkmicMediaService *_mediaService;
    id <IESLiveMTInteractiveAudienceActions> _dispatcher;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <HTSLiveDiggAction> _diggDispatcher;
    id <HTSLiveSmallGiftAction> _giftDispatcher;
    id <HTSLiveUserEnterAction> _userEnterDispatcher;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveAlertFactory> _alertFactory;
    id <IESLiveMTRealStreamingProvider> _streamProvider;
    id <IESLiveMTGiftModule> _giftModule;
    id <IESLiveTracker> _tracker;
    id <HTSLiveDetailRouter> _router;
    id <HTSLiveViewHierarchyProvider> _hierarchyProvider;
    id <IESLiveSettings> _settings;
    id <IESLiveUserService> _userService;
    id <IESLiveMTToolbarProvider> _toolbarProvider;
    id <IESLiveVerifyConfig> _verifyConfig;
    id <IESLiveMTAudioBackProvider> _audioBackProvider;
    id <IESLiveMTStreamPlayerProvider> _streamPlayer;
    id <IESLiveMTAuthorizationService> _authorizationService;
    id <IESLiveMTECommerceRouter> _eCommerceRouter;
    id <IESLiveMTSharePanelRouter> _sharePanelRouter;
    id <IESLiveMTUserPreviewRouter> _userPreviewRouter;
    id <IESLivePushStreamLifeCycle> _pushStreamLifeCycle;
    id <IESLiveMTNoticeActions> _noticeActionCreator;
    id <IESLiveAppInfo> _appInfo;
    NSTimer *_aliveTimer;
    double _connectionStartTime;
    IESLiveMTLinkMicMultiAudioInnerLayout *_audioInnerLayout;
    IESLiveMTMultiAudioAnchorPorfileView *_profileView;
    IESLiveMTInteractiveContributorsView *_guestContributorsView;
    IESLiveMTLinkMicAudioUserListFragment *_guestListView;
    IESLiveMTMultiAudioStatusView *_statusView;
    IESLiveMTToolbarItem *_muteItem;
    IESLiveMTMultiAudioAudienceCustomItemView *_itemView;
    id _certificationAlert;
    LiveRoomModel *_roomModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(nonatomic) __weak id certificationAlert; // @synthesize certificationAlert=_certificationAlert;
@property(retain, nonatomic) IESLiveMTMultiAudioAudienceCustomItemView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) __weak IESLiveMTToolbarItem *muteItem; // @synthesize muteItem=_muteItem;
@property(nonatomic) __weak IESLiveMTMultiAudioStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) IESLiveMTLinkMicAudioUserListFragment *guestListView; // @synthesize guestListView=_guestListView;
@property(retain, nonatomic) IESLiveMTInteractiveContributorsView *guestContributorsView; // @synthesize guestContributorsView=_guestContributorsView;
@property(retain, nonatomic) IESLiveMTMultiAudioAnchorPorfileView *profileView; // @synthesize profileView=_profileView;
@property(nonatomic) __weak IESLiveMTLinkMicMultiAudioInnerLayout *audioInnerLayout; // @synthesize audioInnerLayout=_audioInnerLayout;
@property(nonatomic) double connectionStartTime; // @synthesize connectionStartTime=_connectionStartTime;
@property(retain, nonatomic) NSTimer *aliveTimer; // @synthesize aliveTimer=_aliveTimer;
@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) id <IESLiveMTNoticeActions> noticeActionCreator; // @synthesize noticeActionCreator=_noticeActionCreator;
@property(retain, nonatomic) id <IESLivePushStreamLifeCycle> pushStreamLifeCycle; // @synthesize pushStreamLifeCycle=_pushStreamLifeCycle;
@property(retain, nonatomic) id <IESLiveMTUserPreviewRouter> userPreviewRouter; // @synthesize userPreviewRouter=_userPreviewRouter;
@property(retain, nonatomic) id <IESLiveMTSharePanelRouter> sharePanelRouter; // @synthesize sharePanelRouter=_sharePanelRouter;
@property(retain, nonatomic) id <IESLiveMTECommerceRouter> eCommerceRouter; // @synthesize eCommerceRouter=_eCommerceRouter;
@property(retain, nonatomic) id <IESLiveMTAuthorizationService> authorizationService; // @synthesize authorizationService=_authorizationService;
@property(nonatomic) __weak id <IESLiveMTStreamPlayerProvider> streamPlayer; // @synthesize streamPlayer=_streamPlayer;
@property(nonatomic) __weak id <IESLiveMTAudioBackProvider> audioBackProvider; // @synthesize audioBackProvider=_audioBackProvider;
@property(retain, nonatomic) id <IESLiveVerifyConfig> verifyConfig; // @synthesize verifyConfig=_verifyConfig;
@property(nonatomic) __weak id <IESLiveMTToolbarProvider> toolbarProvider; // @synthesize toolbarProvider=_toolbarProvider;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> hierarchyProvider; // @synthesize hierarchyProvider=_hierarchyProvider;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveMTGiftModule> giftModule; // @synthesize giftModule=_giftModule;
@property(retain, nonatomic) id <IESLiveMTRealStreamingProvider> streamProvider; // @synthesize streamProvider=_streamProvider;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <HTSLiveUserEnterAction> userEnterDispatcher; // @synthesize userEnterDispatcher=_userEnterDispatcher;
@property(retain, nonatomic) id <HTSLiveSmallGiftAction> giftDispatcher; // @synthesize giftDispatcher=_giftDispatcher;
@property(nonatomic) __weak id <HTSLiveDiggAction> diggDispatcher; // @synthesize diggDispatcher=_diggDispatcher;
@property(nonatomic) __weak id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(retain, nonatomic) id <IESLiveMTInteractiveAudienceActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) IESLiveMTLinkmicMediaService *mediaService; // @synthesize mediaService=_mediaService;
@property(retain, nonatomic) IESLiveMTInteractiveAudienceStore *store; // @synthesize store=_store;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(nonatomic) __weak id <IESLiveMTInteractionStatusDelegate> statusDelegate; // @synthesize statusDelegate;
- (void)onShowBindMobileAlert:(CDUnknownBlockType)arg1;
- (void)onShowMinorAlert;
- (void)trackWithEvent:(id)arg1 extra:(id)arg2;
- (void)trackWithEvent:(id)arg1;
- (_Bool)useNewStyle;
- (id)activedUserListInFragment:(id)arg1;
- (void)fragmentRequestsLayout:(id)arg1 animated:(_Bool)arg2;
- (void)clickSelfUserView;
- (void)fragment:(id)arg1 didClickUserView:(id)arg2;
- (id)ultimateFanTicket;
- (_Bool)canLeave;
- (void)startWithTimeStamp:(id)arg1;
- (void)showUserPreView:(id)arg1 trackerLabel:(id)arg2;
- (void)permissionChecked;
- (void)authenticationNofity:(id)arg1;
- (void)didTapAnchorProfileView;
- (void)didTapStatusView;
- (void)didClickStatusButton;
- (void)releaseAudienceInteractiveItem;
- (void)collapseAudienceInteractiveItem;
- (void)removeAudienceInteractiveItem;
- (void)addAudienceInteractiveItem;
- (void)loadStatusView;
- (void)updateGuestContributorsListView:(id)arg1;
- (void)showGuestContributorsListView;
- (void)updateContributeListOfUser:(id)arg1;
- (void)showGiftView:(id)arg1;
- (void)showGuestList;
- (void)showAnchorProfileView;
- (void)showLoginPanel;
- (void)showToast:(id)arg1;
- (void)stopAndQuit;
- (void)stopInteractiveMode;
- (void)stopInteractiveConnectionWithAlert:(_Bool)arg1;
- (void)didCancelApplication;
- (void)askForStopConnectionAction:(CDUnknownBlockType)arg1;
- (void)askForStopApply;
- (void)showAlertWhenInteractionEndedWith:(id)arg1 isSelfDisconnect:(_Bool)arg2;
- (void)removeMuteToolBarItem;
- (void)changeMuteItem;
- (void)addMuteToolBarItem;
- (void)needIdentityAuthentication;
- (void)askForStartConnectionAction:(CDUnknownBlockType)arg1;
- (void)startInteractiveConnection:(id)arg1 appID:(id)arg2 vendor:(unsigned long long)arg3;
- (void)startInteractiveMode;
- (void)mediaService:(id)arg1 UserOfflineWithStrUid:(id)arg2;
- (void)mediaServiceUserFrameHasAccur:(id)arg1 withUid:(id)arg2;
- (void)linkmicDidEnd:(id)arg1;
- (void)linkmicWillEnd:(id)arg1;
- (void)linkmicDidStart:(id)arg1;
- (void)startAliveTimer;
- (void)stopAliveTimer;
- (id)createSDKConfig;
- (void)loadMediaService;
- (void)bindStore:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)didSetAttachingDIContext;
- (id)initWithRoomModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

