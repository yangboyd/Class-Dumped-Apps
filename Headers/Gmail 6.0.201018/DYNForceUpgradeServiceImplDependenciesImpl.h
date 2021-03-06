//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNForceUpgradeServiceImplDependencies-Protocol.h"

@class GOOProvider, NSString;
@protocol DYNAlertManagerService, DYNExperimentsService, DYNForceUpgradeUIService, GIPAccountID, GSCNavigationService, HUBLinkRouterService;

@interface DYNForceUpgradeServiceImplDependenciesImpl : NSObject <DYNForceUpgradeServiceImplDependencies>
{
    id <GIPAccountID> _accountID;
    GOOProvider *_alertManagerServiceProvider;
    GOOProvider *_experimentsServiceProvider;
    GOOProvider *_forceUpgradeUIServiceProvider;
    GOOProvider *_linkRouterServiceProvider;
    GOOProvider *_navigationServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *navigationServiceProvider; // @synthesize navigationServiceProvider=_navigationServiceProvider;
@property(readonly, nonatomic) GOOProvider *linkRouterServiceProvider; // @synthesize linkRouterServiceProvider=_linkRouterServiceProvider;
@property(readonly, nonatomic) GOOProvider *forceUpgradeUIServiceProvider; // @synthesize forceUpgradeUIServiceProvider=_forceUpgradeUIServiceProvider;
@property(readonly, nonatomic) GOOProvider *experimentsServiceProvider; // @synthesize experimentsServiceProvider=_experimentsServiceProvider;
@property(readonly, nonatomic) GOOProvider *alertManagerServiceProvider; // @synthesize alertManagerServiceProvider=_alertManagerServiceProvider;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <GSCNavigationService> navigationService;
@property(readonly, nonatomic) id <HUBLinkRouterService> linkRouterService;
@property(readonly, nonatomic) id <DYNForceUpgradeUIService> forceUpgradeUIService;
@property(readonly, nonatomic) id <DYNExperimentsService> experimentsService;
@property(readonly, nonatomic) id <DYNAlertManagerService> alertManagerService;
- (id)initWithAccountID:(id)arg1 alertManagerServiceProvider:(id)arg2 experimentsServiceProvider:(id)arg3 forceUpgradeUIServiceProvider:(id)arg4 linkRouterServiceProvider:(id)arg5 navigationServiceProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

