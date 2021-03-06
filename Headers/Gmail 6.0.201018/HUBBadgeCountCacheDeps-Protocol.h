//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider;
@protocol CallGuestBadgeService, DYNChatGuestBadgeService, DYNGroupsGuestBadgeService, GBTGuestBadgeService, GBTGuestChimeNotificationsService, GIPAccountID, GSCAccountsService, HUBAppAvailabilityService, HUBHostGoogleNotificationsService;

@protocol HUBBadgeCountCacheDeps <NSObject>
@property(readonly, nonatomic) GOOProvider *hostGoogleNotificationsServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *groupsGuestBadgeServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *gmailGuestNotificationChimeServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *gmailGuestBadgeServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *chatGuestBadgeServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *callsGuestBadgeServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *appAvailabilityServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider;
@property(readonly, nonatomic) id <HUBHostGoogleNotificationsService> hostGoogleNotificationsService;
@property(readonly, nonatomic) id <GSCAccountsService> accountsService;
- (id <DYNGroupsGuestBadgeService>)groupsGuestBadgeServiceWithAccountID:(id <GIPAccountID>)arg1;
- (id <GBTGuestChimeNotificationsService>)gmailGuestNotificationChimeServiceWithAccountID:(id <GIPAccountID>)arg1;
- (id <GBTGuestBadgeService>)gmailGuestBadgeServiceWithAccountID:(id <GIPAccountID>)arg1;
- (id <DYNChatGuestBadgeService>)chatGuestBadgeServiceWithAccountID:(id <GIPAccountID>)arg1;
- (id <CallGuestBadgeService>)callsGuestBadgeServiceWithAccountID:(id <GIPAccountID>)arg1;
- (id <HUBAppAvailabilityService>)appAvailabilityServiceWithAccountID:(id <GIPAccountID>)arg1;
@end

