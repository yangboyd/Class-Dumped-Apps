//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OGLAnalyticsInternalDelegate-Protocol.h"
#import "OGLAnalyticsProtocol-Protocol.h"

@class NSString;
@protocol OGLAnalyticsAccountMenuDelegate, OGLAnalyticsAccountParticleDelegate, OGLAnalyticsAccountParticleDiscDelegate, OGLAnalyticsAccountSnackbarDelegate, OGLAnalyticsDefaultAccountDelegate, OGLAnalyticsDrawerAccountHeaderDelegate, OGLAnalyticsExpressSignInDelegate, OGLAnalyticsPrivacyPolicyToSDelegate, OGLAnalyticsProtocol;

@interface OGLAnalytics : NSObject <OGLAnalyticsInternalDelegate, OGLAnalyticsProtocol>
{
    _Bool _alwaysLogAnonymously;
    _Bool _disabled;
    id <OGLAnalyticsProtocol> _loggingService;
    id <OGLAnalyticsAccountMenuDelegate> _accountMenuDelegate;
    id <OGLAnalyticsDrawerAccountHeaderDelegate> _drawerAccountHeaderDelegate;
    id <OGLAnalyticsPrivacyPolicyToSDelegate> _privacyPolicyToSDelegate;
    id <OGLAnalyticsExpressSignInDelegate> _expressSignInDelegate;
    id <OGLAnalyticsDefaultAccountDelegate> _defaultAccountDelegate;
    id <OGLAnalyticsAccountParticleDelegate> _accountParticleDelegate;
    id <OGLAnalyticsAccountParticleDiscDelegate> _accountParticleDiscDelegate;
    id <OGLAnalyticsAccountSnackbarDelegate> _accountSnackbarDelegate;
}

+ (id)clearcutLoggerOrNil;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <OGLAnalyticsAccountSnackbarDelegate> accountSnackbarDelegate; // @synthesize accountSnackbarDelegate=_accountSnackbarDelegate;
@property(nonatomic) __weak id <OGLAnalyticsAccountParticleDiscDelegate> accountParticleDiscDelegate; // @synthesize accountParticleDiscDelegate=_accountParticleDiscDelegate;
@property(nonatomic) __weak id <OGLAnalyticsAccountParticleDelegate> accountParticleDelegate; // @synthesize accountParticleDelegate=_accountParticleDelegate;
@property(nonatomic) __weak id <OGLAnalyticsDefaultAccountDelegate> defaultAccountDelegate; // @synthesize defaultAccountDelegate=_defaultAccountDelegate;
@property(nonatomic) __weak id <OGLAnalyticsExpressSignInDelegate> expressSignInDelegate; // @synthesize expressSignInDelegate=_expressSignInDelegate;
@property(nonatomic) __weak id <OGLAnalyticsPrivacyPolicyToSDelegate> privacyPolicyToSDelegate; // @synthesize privacyPolicyToSDelegate=_privacyPolicyToSDelegate;
@property(nonatomic) __weak id <OGLAnalyticsDrawerAccountHeaderDelegate> drawerAccountHeaderDelegate; // @synthesize drawerAccountHeaderDelegate=_drawerAccountHeaderDelegate;
@property(nonatomic) __weak id <OGLAnalyticsAccountMenuDelegate> accountMenuDelegate; // @synthesize accountMenuDelegate=_accountMenuDelegate;
@property(nonatomic) _Bool alwaysLogAnonymously; // @synthesize alwaysLogAnonymously=_alwaysLogAnonymously;
- (void)logDidTapAccountSnackbarToOpenAccountMenuEvent;
- (void)logDidPresentAccountSnackbarEvent;
- (void)logDidDismissDrawerAccountHeaderEvent;
- (void)logDidPresentDrawerAccountHeaderEvent;
- (void)logDidRightSwipeToSwitchAccountEvent;
- (void)logDidLeftSwipeToSwitchAccountEvent;
- (void)logWillQuickSwitchToSecondAccountEvent;
- (void)logWillQuickSwitchToFirstAccountEvent;
- (void)logDidTapApdEducationScrim;
- (void)logDidTapApdEducationAnchorView;
- (void)logDidTapApdEducationTooltipActionButton;
- (void)logDidTapApdEducationTooltip;
- (void)logWillEndApdEducation;
- (void)logWillStartApdEducation;
- (void)logWillEndLongPressOnApdEducation;
- (void)logWillStartLongPressOnApdEducation;
- (void)logWillTurnOffIncognitoByLongPressOnApd;
- (void)logWillTurnOnIncognitoByLongPressOnApd;
- (void)logLongPressAbortApdWithAnonymous:(_Bool)arg1;
- (void)logLongPressStartApdWithAnonymous:(_Bool)arg1;
- (void)logWillSwitchToNextAccountEvent;
- (void)logWillSwitchToPreviousAccountEvent;
- (void)logDidPresentAccountParticleDiscEvent;
- (void)logDidTapAccountParticleDiscEvent;
- (void)logDidPresentAccountParticleEvent;
- (void)logDidTapAccountParticleEvent;
- (void)logDidFinalizeNewDefaultIdentityEvent;
- (void)logDidSelectNewDefaultIdentityEvent;
- (void)logWillSelectNewDefaultIdentityEvent;
- (void)logWillOpenLicenses;
- (void)logWillOpenTermsOfService;
- (void)logWillOpenPrivacyPolicy;
- (void)logDidCloseExpressSignInContainerByClickingScrim;
- (void)logDidContinueWithoutAccount;
- (void)logDidSwitchToADifferentExpressAccount;
- (void)logWillSwitchToADifferentExpressAccount;
- (void)logDidDismissExpressAccountMenu;
- (void)logDidPresentExpressAccountMenu;
- (void)logDidAbsorbCrashWithError:(unsigned long long)arg1;
- (void)logDidTapExpandedAccountMenuHeader;
- (void)logDidTapCollapsedAccountMenuHeader;
- (void)logDidSelectCommonItem;
- (void)logDidSelectCustomItem;
- (void)logDidCloseAccountMenuContainerByClickingScrim;
- (void)logWillOpenDefaultAccountMenu;
- (void)logWillShowDialogForRemoveAccountFromDevice;
- (void)logDidCancelRemoveAccountFromDevice;
- (void)logDidFailRemoveAccountFromDevice;
- (void)logDidRemoveAccountFromDevice;
- (void)logWillRemoveAccountFromDevice;
- (void)logWillOpenUseAnotherAccount;
- (void)logWillOpenAccountManagement;
- (void)logWillOpenMyAccount;
- (void)logDidSelectTheSameAccount;
- (void)logDidTurnOffIncognito;
- (void)logWillTurnOnIncognito;
- (void)logWillTurnOnUseWithoutAnAccount;
- (void)logDidSwitchToADifferentAccount;
- (void)logWillSwitchToADifferentAccount;
- (void)logDidDismissAccountMenu;
- (void)logDidPresentAccountMenu;
@property(retain, nonatomic) id <OGLAnalyticsProtocol> loggingService; // @synthesize loggingService=_loggingService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

