//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBNotificationsOnboardingService-Protocol.h"
#import "HUBNotificationsOnboardingViewControllerDelegate-Protocol.h"

@class HUBNotificationOnboardingStore, HUBNotificationsOnboardingCapability, NSString;
@protocol GIPAccountID, HUBColorScheme, HUBNotificationsOnboardingServiceDependencies;

@interface HUBNotificationsOnboardingServiceImpl : NSObject <HUBNotificationsOnboardingViewControllerDelegate, HUBNotificationsOnboardingService>
{
    id <GIPAccountID> _accountID;
    HUBNotificationOnboardingStore *_store;
    HUBNotificationsOnboardingCapability *_capability;
    id <HUBColorScheme> _colorScheme;
    _Bool _deviceNotificationSettingsExperimentEnabled;
    id <HUBNotificationsOnboardingServiceDependencies> _deps;
    _Bool _presentingNotificationsOnboarding;
}

- (void).cxx_destruct;
- (void)notificationsOnboardingDidTapCancelButton:(id)arg1;
- (void)notificationsOnboardingDidTapAcknowledgeButton:(id)arg1;
- (void)writeNotificationsOnboardingSeenState:(unsigned long long)arg1 accountIdentifier:(id)arg2;
- (unsigned long long)readNotificationsOnboardingSeenStateForAccount:(id)arg1;
- (_Bool)isAppInstalled:(id)arg1;
- (_Bool)isChatAppInstalled;
- (void)turnOffChatAndMeetNotifications;
- (void)showHubNotificationsPromo;
- (void)showHubOnboardingDialogIfNeededInViewController:(id)arg1;
- (void)setDeviceNotificationSettingsExperimentEnabled:(_Bool)arg1;
- (id)initWithAccountID:(id)arg1 notificationsOnboardingServiceDependencies:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

