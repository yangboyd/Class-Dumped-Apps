//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTEventLoggingService-Protocol.h"
#import "GBTSyncClientManagerListener-Protocol.h"

@class GBTClearcutLogTransportFactory, JBTLoggingLateBindingLogTransport, JBTLoggingNonWebEventLoggingComponentFactory, NSString;
@protocol GBTEventLoggingServiceImplDeps, GIPAccountID, JBTLoggingEventLoggingComponent, XPTScheduledExecutor;

@interface GBTEventLoggingServiceImpl : NSObject <GBTEventLoggingService, GBTSyncClientManagerListener>
{
    id <GIPAccountID> _accountID;
    JBTLoggingNonWebEventLoggingComponentFactory *_loggingComponentFactory;
    GBTClearcutLogTransportFactory *_clearcutTransportFactory;
    id <XPTScheduledExecutor> _loggingExecutor;
    id <GBTEventLoggingServiceImplDeps> _deps;
    id <JBTLoggingEventLoggingComponent> _loggingComponent;
    JBTLoggingLateBindingLogTransport *_syncServerLogTransport;
}

- (void).cxx_destruct;
- (void)setExecutor:(id)arg1;
- (void)setClearcutTransportFactory:(id)arg1;
- (void)setLoggingComponentFactory:(id)arg1;
- (void)syncClientManager:(id)arg1 didRemoveSyncClientForAccount:(id)arg2;
- (void)syncClientManager:(id)arg1 didAddClient:(id)arg2 withSettings:(id)arg3;
- (id)loggingComponent;
- (void)createEventLoggingComponentWithAccount:(id)arg1;
- (id)initWithAccountID:(id)arg1 deps:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

