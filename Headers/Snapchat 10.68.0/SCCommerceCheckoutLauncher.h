//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceCheckoutDelegate-Protocol.h"
#import "SCCommerceCheckoutLaunching-Protocol.h"

@class NSString, SCOptionalScopeExposer;
@protocol SCCommerceCheckoutDelegate;

@interface SCCommerceCheckoutLauncher : NSObject <SCCommerceCheckoutDelegate, SCCommerceCheckoutLaunching>
{
    SCOptionalScopeExposer *_scopeExposer;
    id <SCCommerceCheckoutDelegate> _checkoutDelegate;
}

- (void).cxx_destruct;
- (void)checkoutDidComplete;
- (void)checkoutWillPresent;
- (void)checkoutFailedToLoadWithError:(id)arg1;
- (void)checkoutWillStartPreloading;
- (void)launchCheckoutWithUIContainer:(id)arg1 store:(id)arg2 delegate:(id)arg3;
- (_Bool)isEnabled;
- (id)initWithScopeExposer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

