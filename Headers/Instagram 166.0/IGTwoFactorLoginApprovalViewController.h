//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGTwoFactorLoginApprovalViewDelegate-Protocol.h>

@class IGTwoFactorLoginApprovalModel, IGTwoFactorLoginApprovalView, IGUserSession, NSString;

@interface IGTwoFactorLoginApprovalViewController : IGViewController <IGTwoFactorLoginApprovalViewDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorLoginApprovalView *_loginApprovalView;
    IGTwoFactorLoginApprovalModel *_loginApprovalModel;
    unsigned long long _loginApprovalAction;
}

- (void).cxx_destruct;
- (void)_sendDenyLoginRequest;
- (void)_sendApproveLoginRequest;
- (void)_showApproveConfirmationDialog;
- (void)twoFactorLoginApprovalViewDidRevertApproval:(id)arg1;
- (void)twoFactorLoginApprovalViewDidDenyRequest:(id)arg1;
- (void)twoFactorLoginApprovalViewDidApproveRequest:(id)arg1;
- (void)twoFactorLoginApprovalViewDidTapOnTrustedDevice:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 loginApprovalModel:(id)arg2 loginApprovalAction:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

