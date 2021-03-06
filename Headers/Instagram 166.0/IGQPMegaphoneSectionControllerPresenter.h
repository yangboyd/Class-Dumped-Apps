//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGQPSectionControllerPresenter.h>

#import <InstagramAppCoreFramework/BKBloksViewHelperDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGQPBloksActionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGQPViewPresenterDelegate-Protocol.h>

@class BKBloksViewHelper, IGGenericMegaphone, IGUserSession, NSString, UIView;
@protocol IGMegaphonePresenterProtocol, IGQPActionHandlerProtocol, IGQPMegaphonePresenterProtocol, IGQPMegaphoneSectionControllerPresenterDelegate;

@interface IGQPMegaphoneSectionControllerPresenter : IGQPSectionControllerPresenter <BKBloksViewHelperDelegate, IGQPBloksActionDelegate, IGQPViewPresenterDelegate>
{
    IGUserSession *_userSession;
    IGGenericMegaphone *_megaphone;
    id <IGQPMegaphonePresenterProtocol> _presenter;
    id <IGMegaphonePresenterProtocol> _legacyPresenter;
    id <IGQPActionHandlerProtocol> _actionHandler;
    UIView *_megaphoneView;
    BKBloksViewHelper *_bloksViewHelper;
    _Bool _isInUpdate;
    _Bool _enableServerMegaPhoneBackground;
    id <IGQPMegaphoneSectionControllerPresenterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableServerMegaPhoneBackground; // @synthesize enableServerMegaPhoneBackground=_enableServerMegaPhoneBackground;
@property(nonatomic) __weak id <IGQPMegaphoneSectionControllerPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didDismissPromotion;
- (void)didClickButtonWithActionType:(id)arg1;
- (void)handleBloksAction:(id)arg1 actionType:(id)arg2;
- (void)bloksViewHelperNeedsUpdate:(id)arg1;
- (void)dismissCurrentPromotion;
- (id)qpSurfaceID;
- (void)megaphoneViewPresenterTappedNotNow:(id)arg1;
- (void)megaphonePresenterDismissCurrentPromotion;
- (void)viewPresenter:(id)arg1 handleUserScopedIntent:(id)arg2;
- (void)megaphonePresenterNeedsMegaphoneResize:(id)arg1;
- (void)viewPresenter:(id)arg1 dismissViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewPresenter:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)popToPresentersViewController;
- (void)viewPresenterPopTopViewController:(id)arg1;
- (void)viewPresenter:(id)arg1 needsToPushViewController:(id)arg2;
- (void)megaphoneViewPresenter:(id)arg1 didHandleButton:(id)arg2;
- (void)viewPresenter:(id)arg1 handleURL:(id)arg2;
- (void)viewPresenterDidDismiss:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (Class)cellClass;
- (void)setLegacyPresenter:(id)arg1;
- (id)currentMegaphone;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

