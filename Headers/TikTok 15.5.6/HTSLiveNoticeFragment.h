//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class HTSLiveNoticeStore, IESLiveAnchorAlertViewController, IESLiveAnchorMaskView, IESLiveHealthScoreTipsView, IESLiveNoticeAlertController, IESLiveNoticeAuditingBriefView, IESLiveNoticeAuditingView, LOTAnimationView, NSString;
@protocol HTSLiveDetailRouter, HTSLiveInteractiveAnchorActions, HTSLivePluginLayoutMachineProvider, HTSLiveTemplateProvider, HTSLiveViewHierarchyProvider, IESLiveAlertFactory, IESLiveEnvironment, IESLiveInternalRouter, IESLiveNoticeActions, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveWebViewFactory, OS_dispatch_queue, OS_dispatch_source;

@interface HTSLiveNoticeFragment : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, HTSLiveComponent>
{
    _Bool _timeup;
    HTSLiveNoticeStore *_store;
    id <IESLiveInternalRouter> _internalRouter;
    id <IESLiveTracker> _tracker;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveNoticeActions> _noticeActionCreator;
    id <HTSLiveInteractiveAnchorActions> _interactiveDispatcher;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveWebViewFactory> _webViewFactory;
    IESLiveAnchorMaskView *_maskView;
    IESLiveNoticeAlertController *_blockAlertController;
    IESLiveNoticeAuditingView *_auditingView;
    LOTAnimationView *_maskAnimationView;
    IESLiveNoticeAuditingBriefView *_auditingBriefView;
    IESLiveAnchorAlertViewController *_anchorNoticeAlert;
    IESLiveAnchorAlertViewController *_anchorBlockAlert;
    IESLiveAnchorAlertViewController *_anchorWaitingForReviewAlert;
    IESLiveAnchorAlertViewController *_anchorInReviewAlert;
    NSObject<OS_dispatch_source> *_checkAuditTimer;
    NSObject<OS_dispatch_queue> *_checkAuditQueue;
    IESLiveHealthScoreTipsView *_healthScoreTipsView;
    id <HTSLiveDetailRouter> _router;
    id <HTSLivePluginLayoutMachineProvider> _layoutMachine;
    id <IESLiveAlertFactory> _alertFactory;
    id <IESLiveSettings> _settings;
    id <IESLiveEnvironment> _appTarget;
    id <HTSLiveTemplateProvider> _templateProvider;
    CDUnknownBlockType _coverImageCompletion;
}

+ (long long)preferredLoadPhase;
+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(nonatomic) _Bool timeup; // @synthesize timeup=_timeup;
@property(copy, nonatomic) CDUnknownBlockType coverImageCompletion; // @synthesize coverImageCompletion=_coverImageCompletion;
@property(retain, nonatomic) id <HTSLiveTemplateProvider> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(retain, nonatomic) id <HTSLivePluginLayoutMachineProvider> layoutMachine; // @synthesize layoutMachine=_layoutMachine;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) IESLiveHealthScoreTipsView *healthScoreTipsView; // @synthesize healthScoreTipsView=_healthScoreTipsView;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkAuditQueue; // @synthesize checkAuditQueue=_checkAuditQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *checkAuditTimer; // @synthesize checkAuditTimer=_checkAuditTimer;
@property(nonatomic) __weak IESLiveAnchorAlertViewController *anchorInReviewAlert; // @synthesize anchorInReviewAlert=_anchorInReviewAlert;
@property(nonatomic) __weak IESLiveAnchorAlertViewController *anchorWaitingForReviewAlert; // @synthesize anchorWaitingForReviewAlert=_anchorWaitingForReviewAlert;
@property(nonatomic) __weak IESLiveAnchorAlertViewController *anchorBlockAlert; // @synthesize anchorBlockAlert=_anchorBlockAlert;
@property(nonatomic) __weak IESLiveAnchorAlertViewController *anchorNoticeAlert; // @synthesize anchorNoticeAlert=_anchorNoticeAlert;
@property(retain, nonatomic) IESLiveNoticeAuditingBriefView *auditingBriefView; // @synthesize auditingBriefView=_auditingBriefView;
@property(retain, nonatomic) LOTAnimationView *maskAnimationView; // @synthesize maskAnimationView=_maskAnimationView;
@property(retain, nonatomic) IESLiveNoticeAuditingView *auditingView; // @synthesize auditingView=_auditingView;
@property(nonatomic) __weak IESLiveNoticeAlertController *blockAlertController; // @synthesize blockAlertController=_blockAlertController;
@property(retain, nonatomic) IESLiveAnchorMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) id <IESLiveWebViewFactory> webViewFactory; // @synthesize webViewFactory=_webViewFactory;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(retain, nonatomic) id <HTSLiveInteractiveAnchorActions> interactiveDispatcher; // @synthesize interactiveDispatcher=_interactiveDispatcher;
@property(retain, nonatomic) id <IESLiveNoticeActions> noticeActionCreator; // @synthesize noticeActionCreator=_noticeActionCreator;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(retain, nonatomic) HTSLiveNoticeStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)removeReviewAlert;
- (void)updateReviewAlertWithAudittingModel:(id)arg1;
- (void)createCoverImageWithCompetion:(CDUnknownBlockType)arg1;
- (void)appBecomeActive;
- (void)setupTimer;
- (void)stopInteractive;
- (void)removeAlert;
- (void)removeAuditingView;
- (void)addAuditingView;
- (void)removeBackgroundMask;
- (void)addBackgroundMask;
- (void)_closeRoom;
- (void)showAlertForCloseRoom;
- (void)addHealthScoreTips;
- (void)removeAnchorMaskView;
- (void)addAnchorMaskView;
- (void)checkKTVAndDismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)showCoverAlert:(id)arg1;
- (void)showAnchorAlert:(id)arg1;
- (void)showAlert:(id)arg1;
- (id)attributedNoticeAlert:(id)arg1 title:(id)arg2 tips:(id)arg3;
- (id)noticeAlert:(id)arg1 title:(id)arg2 tips:(id)arg3;
- (void)componentDidUnmount;
- (void)componentDidMount;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

