//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOProvider;
@protocol GBTAccountsService, GBTStartupMetricsService, HUBAppScopedAppAvailabilityService, HUBHostAccountParticleDiscBadgeService, OGLAccountService, SSOService;

@protocol GBTAccountsUIServiceImplDependencies <NSObject>
@property(readonly, nonatomic) GOOProvider *startupMetricsServiceProvider;
@property(readonly, nonatomic) GOOProvider *SSOServiceProvider;
@property(readonly, nonatomic) GOOProvider *oneGoogleAccountServiceProvider;
@property(readonly, nonatomic) GOOProvider *hostAccountParticleDiscBadgeServiceProvider;
@property(readonly, nonatomic) GOOProvider *appScopedAppAvailabilityServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider;
@property(readonly, nonatomic) id <GBTStartupMetricsService> startupMetricsService;
@property(readonly, nonatomic) id <SSOService> SSOService;
@property(readonly, nonatomic) id <OGLAccountService> oneGoogleAccountService;
@property(readonly, nonatomic) id <HUBHostAccountParticleDiscBadgeService> hostAccountParticleDiscBadgeService;
@property(readonly, nonatomic) id <HUBAppScopedAppAvailabilityService> appScopedAppAvailabilityService;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
@end

