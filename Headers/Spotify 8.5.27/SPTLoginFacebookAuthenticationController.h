//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPFacebookSSO, SPTAuthenticationHandler, SPTLoginDialogController, SPTLoginErrorDecorator, SPTLoginErrorDialogLogger;
@protocol SPTLoginFacebookAuthenticationControllerDelegate, SPTNavigationRouter;

@interface SPTLoginFacebookAuthenticationController : NSObject
{
    id <SPTLoginFacebookAuthenticationControllerDelegate> _delegate;
    SPFacebookSSO *_facebookSSO;
    SPTAuthenticationHandler *_authenticationHandler;
    id <SPTNavigationRouter> _navigationRouter;
    SPTLoginErrorDecorator *_errorDecorator;
    SPTLoginDialogController *_dialogController;
    SPTLoginErrorDialogLogger *_dialogLogger;
}

@property(readonly, nonatomic) SPTLoginErrorDialogLogger *dialogLogger; // @synthesize dialogLogger=_dialogLogger;
@property(readonly, nonatomic) SPTLoginDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(readonly, nonatomic) SPTLoginErrorDecorator *errorDecorator; // @synthesize errorDecorator=_errorDecorator;
@property(readonly, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(readonly, nonatomic) SPTAuthenticationHandler *authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(readonly, nonatomic) SPFacebookSSO *facebookSSO; // @synthesize facebookSSO=_facebookSSO;
@property(nonatomic) __weak id <SPTLoginFacebookAuthenticationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleFacebookLoginWithError:(id)arg1 userInfo:(id)arg2;
- (void)loginWithFacebook;
- (id)initWithFacebookSSO:(id)arg1 authenticationHandler:(id)arg2 navigationRouter:(id)arg3 errorDecorator:(id)arg4 dialogLogger:(id)arg5 dialogController:(id)arg6;

@end

