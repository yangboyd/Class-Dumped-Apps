//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCRegistrationUserActionDelegate-Protocol.h"

@class NSString, SCPrePromptPermissionCustomDialogView, SCRegisterService, SCUserSession;
@protocol SCRegisterAccountV2ViewControllerDelegate, SCRegistrationUserActionDelegate;

@interface SCRegisterBlitzPrepromptNotificationPermissionViewController : UIViewController <SCRegistrationUserActionDelegate>
{
    SCRegisterService *_registerService;
    SCUserSession *_abandonedUserSession;
    id <SCRegisterAccountV2ViewControllerDelegate> _registerAccountDelegate;
    id <SCRegistrationUserActionDelegate> _userActionDelegate;
    SCPrePromptPermissionCustomDialogView *_backgroundView;
}

- (void).cxx_destruct;
- (void)registrationViewDidDeallocate;
- (void)didDismissRegistration;
- (void)didTapSwitchToLoginButton;
- (void)_moveToNextVC;
- (void)_notificationPermissionRequestFinished;
- (void)_dontAllowButtonPressed:(id)arg1;
- (void)_okButtonPressed:(id)arg1;
- (_Bool)shouldPopToRootViewController;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRegisterService:(id)arg1 registerAccountDelegate:(id)arg2 userActionDelegate:(id)arg3 abandonedUserSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

