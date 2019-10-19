//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OGLAccountMenuCoordinator-Protocol.h"

@class MDCAlertController, NSString, OGLAccountMenuVCFactory, UINavigationController, UIViewController;
@protocol OGLAccountMenuSessionInternal;

@interface OGLAccountMenuCoordinator : NSObject <OGLAccountMenuCoordinator>
{
    UIViewController *_defaultPresentingViewController;
    OGLAccountMenuVCFactory *_accountMenuVCFactory;
    UINavigationController *_navigationController;
    UIViewController *_unwrappedViewController;
    UIViewController *_unwrappedPresentingViewController;
    MDCAlertController *_alertController;
    id <OGLAccountMenuSessionInternal> _session;
}

@property(readonly, nonatomic) __weak id <OGLAccountMenuSessionInternal> session; // @synthesize session=_session;
- (void)setAlertController:(id)arg1;
- (id)alertController;
- (void)setUnwrappedPresentingViewController:(id)arg1;
- (id)unwrappedPresentingViewController;
- (void)setUnwrappedViewController:(id)arg1;
- (id)unwrappedViewController;
- (void)setNavigationController:(id)arg1;
- (id)navigationController;
- (id)accountMenuVCFactory;
- (void).cxx_destruct;
- (id)createAccountMenuVC:(long long)arg1 activeAccount:(id)arg2 incognito:(_Bool)arg3;
- (id)defaultPresentingViewController;
- (id)presentingViewControllerForExternalFlows;
- (_Bool)shouldDismissAll;
- (long long)formFactorForEntity:(long long)arg1;
- (void)dismissUnwrappedViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissAllAnimated:(_Bool)arg1 internalCompletion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 formFactor:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentAlertController:(id)arg1;
- (void)presentViewControllerForFlowEntity:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasVisibleViewControllers;
- (void)reopenAccountMenuInFullscreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAllAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissEntityAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentExternalViewControllerWithBlock:(CDUnknownBlockType)arg1;
- (void)presentFailedToRemoveAccountDialog:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentRemoveAccountDialog:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentRestrictedAccountDialog:(id)arg1 restrictions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)present:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)accountMenuDependencies;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

