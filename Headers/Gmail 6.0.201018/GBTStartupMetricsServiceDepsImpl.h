//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTStartupMetricsServiceDeps-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider, NSString;
@protocol GBTAccountsService, GBTProtectedGuestAppLifecycleService, GBTTracingManagerService, HUBAppStateManager;

@interface GBTStartupMetricsServiceDepsImpl : NSObject <GBTStartupMetricsServiceDeps>
{
    GOOProvider *_accountsServiceProvider;
    GOOProvider *_appStateManagerProvider;
    GOOAccountScopedProvider *_eventLoggingServiceProvider;
    GOOProvider *_protectedGuestAppLifecycleServiceProvider;
    GOOProvider *_tracingManagerServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *tracingManagerServiceProvider; // @synthesize tracingManagerServiceProvider=_tracingManagerServiceProvider;
@property(readonly, nonatomic) GOOProvider *protectedGuestAppLifecycleServiceProvider; // @synthesize protectedGuestAppLifecycleServiceProvider=_protectedGuestAppLifecycleServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *eventLoggingServiceProvider; // @synthesize eventLoggingServiceProvider=_eventLoggingServiceProvider;
@property(readonly, nonatomic) GOOProvider *appStateManagerProvider; // @synthesize appStateManagerProvider=_appStateManagerProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
@property(readonly, nonatomic) id <GBTTracingManagerService> tracingManagerService;
@property(readonly, nonatomic) id <GBTProtectedGuestAppLifecycleService> protectedGuestAppLifecycleService;
- (id)eventLoggingServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <HUBAppStateManager> appStateManager;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
- (id)initWithAccountsServiceProvider:(id)arg1 appStateManagerProvider:(id)arg2 eventLoggingServiceProvider:(id)arg3 protectedGuestAppLifecycleServiceProvider:(id)arg4 tracingManagerServiceProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

