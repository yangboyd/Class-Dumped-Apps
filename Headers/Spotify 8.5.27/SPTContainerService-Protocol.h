//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPTAppLogModel, SPTDebugLogService, SPTNavigationManager, SPTStartupTracer;
@protocol SPTKeychainManager, SPTLogCenter, SPTMetaViewController, SPTNavigationRouter, SPTPageRegistry, SPTStateController, SPTUICompletionNotifier;

@protocol SPTContainerService <SPTService>
- (void (^)(void))provideContainerLogoutHandler;
- (id <SPTKeychainManager>)provideKeychainManager;
- (SPTAppLogModel *)provideAppLogModel;
- (SPTDebugLogService *)provideDebugLogService;
- (id <SPTLogCenter>)provideLogCenter;
- (id <SPTUICompletionNotifier>)provideUICompletionNotifier;
- (id <SPTNavigationRouter>)provideNavigationRouter;
- (SPTNavigationManager *)provideNavigationManager;
- (id <SPTMetaViewController>)provideMetaViewController;
- (id <SPTStateController>)provideStateController;
- (SPTStartupTracer *)provideStartupTracer;
- (id <SPTPageRegistry>)providePageRegistry;
@end

