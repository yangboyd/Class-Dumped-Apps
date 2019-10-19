//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCRegisterV2ViewDelegate-Protocol.h"

@class NSString, SCRegisterCaptchaV2View, SCUserSession;
@protocol SCLegacyCaptchaDelegate;

@interface SCLegacyCaptchaViewController : UIViewController <SCRegisterV2ViewDelegate>
{
    long long _attemptCount;
    SCRegisterCaptchaV2View *_captchaView;
    SCUserSession *_userSession;
    NSString *_captchaId;
    _Bool _shouldPlaceBackButton;
    id <SCLegacyCaptchaDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_getDeferredDeepLinkRequestJson:(id)arg1;
- (void)continueButtonClicked;
- (void)backButtonPressed:(id)arg1;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_captchaVerifiedWithResult:(long long)arg1 captchaCount:(unsigned long long)arg2 preAuthToken:(id)arg3;
- (void)_verifyCaptchaWithId:(id)arg1 solution:(id)arg2 successQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_captchaDidFinishLoading:(_Bool)arg1;
- (void)_fetchCaptchaImagesWithSuccessQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_loadCaptcha;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 withBackButton:(_Bool)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

