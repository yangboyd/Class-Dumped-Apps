//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginDelayedSignupDialogPresenter, SPTLoginDelayedSignupPageProvider, SPTLoginNavigationRouter, UIViewController;
@protocol SPTModalPresentationController, SPTSignupService;

@interface SPTLoginDelayedSignupLoginFlowPresenter : NSObject
{
    id <SPTSignupService> _signupService;
    SPTLoginNavigationRouter *_loginNavigationRouter;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTLoginDelayedSignupDialogPresenter *_dialogPresenter;
    SPTLoginDelayedSignupPageProvider *_pageProvider;
    UIViewController *_presentedController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentedController; // @synthesize presentedController=_presentedController;
@property(readonly, nonatomic) SPTLoginDelayedSignupPageProvider *pageProvider; // @synthesize pageProvider=_pageProvider;
@property(readonly, nonatomic) SPTLoginDelayedSignupDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) SPTLoginNavigationRouter *loginNavigationRouter; // @synthesize loginNavigationRouter=_loginNavigationRouter;
@property(readonly, nonatomic) __weak id <SPTSignupService> signupService; // @synthesize signupService=_signupService;
- (void)dismissPresentedViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)presentViewWithURI:(id)arg1;
- (void)presentWelcomeView;
- (id)initWithSignupService:(id)arg1 pageProvider:(id)arg2 loginNavigationRouter:(id)arg3 modalPresentationController:(id)arg4 dialogPresenter:(id)arg5;

@end

