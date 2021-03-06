//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGGDPRConsentParentalApprovalViewDelegate-Protocol.h>

@class IGGDPRConsentContext, IGGDPRConsentDataSource, IGGDPRConsentLayoutSpec, IGGDPRConsentLogger, IGGDPRConsentNavigationPresenter, IGGDPRConsentParentalApprovalView, IGUserSession, NSString;
@protocol IGAPIClient;

@interface IGGDPRConsentParentalApprovalViewController : IGViewController <IGGDPRConsentParentalApprovalViewDelegate>
{
    IGUserSession *_userSession;
    IGGDPRConsentDataSource *_consentDataSource;
    IGGDPRConsentContext *_consentContext;
    IGGDPRConsentParentalApprovalView *_parentalApprovalView;
    IGGDPRConsentLogger *_logger;
    IGGDPRConsentLayoutSpec *_layoutSpec;
    id <IGAPIClient> _networker;
    IGGDPRConsentNavigationPresenter *_presenter;
}

- (void).cxx_destruct;
- (void)GDPRConsentParentalApprovalViewDidTapGetPermissionButton;
- (void)GDPRConsentParentalApprovalViewDidTapSkipButton;
- (void)onCancelModal;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)_configureParentalApprovalView;
- (void)_configureWithConsentContext;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 consentContext:(id)arg2 consentDataSource:(id)arg3 networker:(id)arg4 navigationPresenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

