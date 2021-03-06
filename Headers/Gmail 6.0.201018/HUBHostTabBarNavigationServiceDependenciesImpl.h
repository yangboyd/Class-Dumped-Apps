//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBHostTabBarNavigationServiceDependencies-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider, NSArray, NSString;
@protocol GSCAccountsService, GSCNavigationService, GSCRootNavigationControllerProvider, HUBColorScheme, HUBHostUpgradeService, HUBPerformanceMonitoringManagerService;

@interface HUBHostTabBarNavigationServiceDependenciesImpl : NSObject <HUBHostTabBarNavigationServiceDependencies>
{
    GOOProvider *_accountsServiceProvider;
    GOOAccountScopedProvider *_appAvailabilityServiceProvider;
    GOOAccountScopedProvider *_callGuestBadgeServiceProvider;
    GOOAccountScopedProvider *_callsGuestTabBarServiceProvider;
    GOOAccountScopedProvider *_chatGuestBadgeServiceProvider;
    GOOAccountScopedProvider *_chatGuestTabBarServiceProvider;
    GOOProvider *_colorSchemeProvider;
    GOOAccountScopedProvider *_gmailGuestBadgeServiceProvider;
    GOOAccountScopedProvider *_gmailGuestTabBarServiceProvider;
    GOOAccountScopedProvider *_groupsGuestBadgeServiceProvider;
    GOOAccountScopedProvider *_groupsGuestTabBarServiceProvider;
    GOOProvider *_hostUpgradeServiceProvider;
    GOOProvider *_navigationServiceProvider;
    GOOProvider *_performanceMonitoringManagerServiceProvider;
    GOOProvider *_rootNavigationControllerProviderProvider;
    GOOProvider *_navigationListenerServicesProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *navigationListenerServicesProvider; // @synthesize navigationListenerServicesProvider=_navigationListenerServicesProvider;
@property(readonly, nonatomic) GOOProvider *rootNavigationControllerProviderProvider; // @synthesize rootNavigationControllerProviderProvider=_rootNavigationControllerProviderProvider;
@property(readonly, nonatomic) GOOProvider *performanceMonitoringManagerServiceProvider; // @synthesize performanceMonitoringManagerServiceProvider=_performanceMonitoringManagerServiceProvider;
@property(readonly, nonatomic) GOOProvider *navigationServiceProvider; // @synthesize navigationServiceProvider=_navigationServiceProvider;
@property(readonly, nonatomic) GOOProvider *hostUpgradeServiceProvider; // @synthesize hostUpgradeServiceProvider=_hostUpgradeServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *groupsGuestTabBarServiceProvider; // @synthesize groupsGuestTabBarServiceProvider=_groupsGuestTabBarServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *groupsGuestBadgeServiceProvider; // @synthesize groupsGuestBadgeServiceProvider=_groupsGuestBadgeServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *gmailGuestTabBarServiceProvider; // @synthesize gmailGuestTabBarServiceProvider=_gmailGuestTabBarServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *gmailGuestBadgeServiceProvider; // @synthesize gmailGuestBadgeServiceProvider=_gmailGuestBadgeServiceProvider;
@property(readonly, nonatomic) GOOProvider *colorSchemeProvider; // @synthesize colorSchemeProvider=_colorSchemeProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *chatGuestTabBarServiceProvider; // @synthesize chatGuestTabBarServiceProvider=_chatGuestTabBarServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *chatGuestBadgeServiceProvider; // @synthesize chatGuestBadgeServiceProvider=_chatGuestBadgeServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *callsGuestTabBarServiceProvider; // @synthesize callsGuestTabBarServiceProvider=_callsGuestTabBarServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *callGuestBadgeServiceProvider; // @synthesize callGuestBadgeServiceProvider=_callGuestBadgeServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *appAvailabilityServiceProvider; // @synthesize appAvailabilityServiceProvider=_appAvailabilityServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
@property(readonly, nonatomic) NSArray *navigationListenerServices;
@property(readonly, nonatomic) id <GSCRootNavigationControllerProvider> rootNavigationControllerProvider;
@property(readonly, nonatomic) id <HUBPerformanceMonitoringManagerService> performanceMonitoringManagerService;
@property(readonly, nonatomic) id <GSCNavigationService> navigationService;
@property(readonly, nonatomic) id <HUBHostUpgradeService> hostUpgradeService;
- (id)groupsGuestTabBarServiceWithAccountID:(id)arg1;
- (id)groupsGuestBadgeServiceWithAccountID:(id)arg1;
- (id)gmailGuestTabBarServiceWithAccountID:(id)arg1;
- (id)gmailGuestBadgeServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <HUBColorScheme> colorScheme;
- (id)chatGuestTabBarServiceWithAccountID:(id)arg1;
- (id)chatGuestBadgeServiceWithAccountID:(id)arg1;
- (id)callsGuestTabBarServiceWithAccountID:(id)arg1;
- (id)callGuestBadgeServiceWithAccountID:(id)arg1;
- (id)appAvailabilityServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <GSCAccountsService> accountsService;
- (id)initWithAccountsServiceProvider:(id)arg1 appAvailabilityServiceProvider:(id)arg2 callGuestBadgeServiceProvider:(id)arg3 callsGuestTabBarServiceProvider:(id)arg4 chatGuestBadgeService:(id)arg5 chatGuestTabBarServiceProvider:(id)arg6 colorSchemeProvider:(id)arg7 gmailGuestBadgeService:(id)arg8 gmailGuestTabBarServiceProvider:(id)arg9 groupsGuestBadgeService:(id)arg10 groupsGuestTabBarServiceProvider:(id)arg11 hostUpgradeServiceProvider:(id)arg12 navigationServiceProvider:(id)arg13 performanceMonitoringManagerServiceProvider:(id)arg14 rootNavigationControllerProviderProvider:(id)arg15 navigationListenerServicesProvider:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

