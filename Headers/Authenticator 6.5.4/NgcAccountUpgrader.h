//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NgcAadAddAccountFlowDelegate-Protocol.h"

@class NSString, UIView;

@interface NgcAccountUpgrader : NSObject <NgcAadAddAccountFlowDelegate>
{
    UIView *_toastView;
    _Bool _upgradeInProgress;
    _Bool _retryInteractively;
    NSString *_correlationId;
}

- (void).cxx_destruct;
- (void)addAccountFlow:(id)arg1 completedWithError:(id)arg2;
- (void)errorRegisteringForNgc:(id)arg1 addAccountFlow:(id)arg2 status:(long long)arg3;
- (void)accountSuccessfullyRegisteredForNgcPushNotifications:(id)arg1;
- (void)accountSuccessfullyRegisteredForNgc:(id)arg1;
- (void)registerAccountForPushNotifications:(id)arg1 isSilent:(_Bool)arg2;
- (void)showAadNgcPushNotificationUpsellForAccount:(id)arg1;
- (void)tryToUpgradeAccountsSilently;
- (id)initWithToastView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

