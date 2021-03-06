//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCoreService-Protocol.h"

@class NSString, SPCore, SPTAllocationContext, SPTAuthLegacySession, SPTCoreAuthenticatedScope, SPTEventSenderCoreProxyImplementation;
@protocol SPTAudioDriverController, SPTConnectivityService, _TtP20CoreThreadingFeature23SPTCoreThreadingService_, _TtP22CorePreferencesFeature25SPTCorePreferencesService_, _TtP25CoreConsoleLoggingFeature28SPTCoreConsoleLoggingService_, _TtP30CoreFilesystemBootstrapFeature33SPTCoreFilesystemBootstrapService_;

@interface SPTCoreServiceImplementation : NSObject <SPTCoreService>
{
    id <SPTAudioDriverController> _audioDriverController;
    SPTEventSenderCoreProxyImplementation *_eventSenderCoreProxy;
    id <_TtP20CoreThreadingFeature23SPTCoreThreadingService_> _coreThreadingService;
    id <_TtP25CoreConsoleLoggingFeature28SPTCoreConsoleLoggingService_> _coreConsoleLoggingService;
    id <_TtP22CorePreferencesFeature25SPTCorePreferencesService_> _corePreferencesService;
    id <_TtP30CoreFilesystemBootstrapFeature33SPTCoreFilesystemBootstrapService_> _coreFilesystemBootstrapService;
    id <SPTConnectivityService> _connectivityService;
    SPCore *_core;
    SPTAuthLegacySession *_session;
    SPTCoreAuthenticatedScope *_authenticatedScope;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTCoreAuthenticatedScope *authenticatedScope; // @synthesize authenticatedScope=_authenticatedScope;
@property(nonatomic) __weak SPTAuthLegacySession *session; // @synthesize session=_session;
@property(retain, nonatomic) SPCore *core; // @synthesize core=_core;
@property(nonatomic) __weak id <SPTConnectivityService> connectivityService; // @synthesize connectivityService=_connectivityService;
@property(nonatomic) __weak id <_TtP30CoreFilesystemBootstrapFeature33SPTCoreFilesystemBootstrapService_> coreFilesystemBootstrapService; // @synthesize coreFilesystemBootstrapService=_coreFilesystemBootstrapService;
@property(nonatomic) __weak id <_TtP22CorePreferencesFeature25SPTCorePreferencesService_> corePreferencesService; // @synthesize corePreferencesService=_corePreferencesService;
@property(nonatomic) __weak id <_TtP25CoreConsoleLoggingFeature28SPTCoreConsoleLoggingService_> coreConsoleLoggingService; // @synthesize coreConsoleLoggingService=_coreConsoleLoggingService;
@property(nonatomic) __weak id <_TtP20CoreThreadingFeature23SPTCoreThreadingService_> coreThreadingService; // @synthesize coreThreadingService=_coreThreadingService;
@property(retain, nonatomic) SPTEventSenderCoreProxyImplementation *eventSenderCoreProxy; // @synthesize eventSenderCoreProxy=_eventSenderCoreProxy;
@property(retain, nonatomic) id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
- (void)teardownCore;
- (void)setupCore;
- (id)coreCreateOptions;
- (void)exitSessionScope;
- (void)exitSessionScopeOnCoreThread;
- (void)enterSessionScopeWithSession:(id)arg1;
- (void)setEventSenderCore:(id)arg1;
- (id)provideAudioDriverController;
- (id)provideInternalAuthenticatedScope;
- (id)provideCoreInstance;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

