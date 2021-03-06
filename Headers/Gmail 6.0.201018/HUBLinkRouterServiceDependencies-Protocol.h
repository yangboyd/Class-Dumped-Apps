//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOProvider;
@protocol GIPAccountID, HUBAppRouterService, HUBGrowthKitProtectedService, HUBProjectorService, SSOService;

@protocol HUBLinkRouterServiceDependencies <NSObject>
@property(readonly, nonatomic) GOOProvider *SSOServiceProvider;
@property(readonly, nonatomic) GOOProvider *projectorServiceProvider;
@property(readonly, nonatomic) GOOProvider *growthKitProtectedServiceProvider;
@property(readonly, nonatomic) GOOProvider *appRouterServiceProvider;
@property(readonly, nonatomic) id <SSOService> SSOService;
@property(readonly, nonatomic) id <HUBProjectorService> projectorService;
@property(readonly, nonatomic) id <HUBGrowthKitProtectedService> growthKitProtectedService;
@property(readonly, nonatomic) id <HUBAppRouterService> appRouterService;
@property(readonly, nonatomic) id <GIPAccountID> accountID;
@end

