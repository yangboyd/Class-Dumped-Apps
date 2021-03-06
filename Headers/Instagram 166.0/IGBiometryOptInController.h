//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAccountStoreCoordinator, IGUserSession, LAContext;

@interface IGBiometryOptInController : NSObject
{
    IGUserSession *_userSession;
    long long _surface;
    LAContext *_laContext;
    IGAccountStoreCoordinator *_accountStoreCoordinator;
}

- (void).cxx_destruct;
- (id)_titleForBiometryType:(long long)arg1;
- (void)_optIntoBiometricsLoginWithFaceIDSupported:(_Bool)arg1;
- (void)_startBiometricsOptInWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startBiometricsOptInWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showBiometricsOptInDialogIfNeeded;
- (id)initWithUserSession:(id)arg1 surface:(long long)arg2 accountStoreCoordinator:(id)arg3;

@end

