//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIKOGLAccountMenuDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol GIKAccountMenuLifecycleDelegate, GIKAccountMenuSession, GIKBaseMutableForegroundAccountService, GIKExpressSignInLifecycleDelegate, GIKMutableMultiActiveAccountService;

@interface GIKOGLAccountMenuDelegate : NSObject <GIKOGLAccountMenuDelegate>
{
    id <GIKBaseMutableForegroundAccountService> _foregroundAccountService;
    id <GIKMutableMultiActiveAccountService> _multiActiveAccountService;
    _Bool _accountSwitchingInProgress;
    id <GIKAccountMenuLifecycleDelegate> _accountMenuLifecycleDelegate;
    id <GIKExpressSignInLifecycleDelegate> _expressSignInLifecycleDelegate;
    id <GIKAccountMenuSession> _accountMenuSession;
    UIViewController *_accountMenuPresenterViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *accountMenuPresenterViewController; // @synthesize accountMenuPresenterViewController=_accountMenuPresenterViewController;
@property(nonatomic) __weak id <GIKAccountMenuSession> accountMenuSession; // @synthesize accountMenuSession=_accountMenuSession;
@property(nonatomic) __weak id <GIKExpressSignInLifecycleDelegate> expressSignInLifecycleDelegate; // @synthesize expressSignInLifecycleDelegate=_expressSignInLifecycleDelegate;
@property(nonatomic) __weak id <GIKAccountMenuLifecycleDelegate> accountMenuLifecycleDelegate; // @synthesize accountMenuLifecycleDelegate=_accountMenuLifecycleDelegate;
- (id)actionSourceFromAccountMenuPresenter:(id)arg1;
- (void)runBlockAsyncOnMainThreadWhenIdle:(CDUnknownBlockType)arg1;
- (void)dismissExpressSignInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)updateStateWithSelectedAccount:(id)arg1 actionSource:(id)arg2;
- (void)accountMenuPresenter:(id)arg1 didToggleAccount:(id)arg2 on:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)accountMenuPresenter:(id)arg1 didUpdateFromSelectedAccounts:(id)arg2 toSelectedAccounts:(id)arg3;
- (void)expressSignInViewController:(id)arg1 didSignInAccount:(id)arg2 error:(id)arg3;
- (void)accountMenuPresenter:(id)arg1 switchToNoAccountFromAccount:(id)arg2;
- (void)accountMenuPresenter:(id)arg1 didEndSessionWithState:(id)arg2;
- (_Bool)accountMenuPresenter:(id)arg1 shouldStartSessionWithState:(id)arg2;
- (void)accountMenuPresenter:(id)arg1 didSwitchToIncognitoModeWithNewValue:(_Bool)arg2;
- (void)accountMenuPresenter:(id)arg1 didSwitchFromAccount:(id)arg2 toAccount:(id)arg3;
- (id)initWithMutableForegroundAccountService:(id)arg1 mutableMultiActiveAccountService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

