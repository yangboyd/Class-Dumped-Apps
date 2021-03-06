//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider;
@protocol GBTAccountsService, GIPAccountID, HUBHelpKitService, HUBHostTabBarNavigationService;

@protocol GBTHelpKitServiceImplDeps <NSObject>
@property(readonly, nonatomic) GOOProvider *hostTabBarNavigationServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *helpKitServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider;
@property(readonly, nonatomic) id <HUBHostTabBarNavigationService> hostTabBarNavigationService;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
- (id <HUBHelpKitService>)helpKitServiceWithAccountID:(id <GIPAccountID>)arg1;
@end

