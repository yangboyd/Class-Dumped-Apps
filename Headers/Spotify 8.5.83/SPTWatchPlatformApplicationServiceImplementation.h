//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivityDebugDelegate-Protocol.h"
#import "SPTWatchConnectivitySessionObserver-Protocol.h"
#import "SPTWatchPlatformApplicationService-Protocol.h"

@class NSArray, NSString, SPTAllocationContext;
@protocol SPTExternalIntegrationDebugLogService;

@interface SPTWatchPlatformApplicationServiceImplementation : NSObject <SPTWatchConnectivitySessionObserver, SPTWatchConnectivityDebugDelegate, SPTWatchPlatformApplicationService>
{
    id <SPTExternalIntegrationDebugLogService> _externalIntegrationDebugLogService;
    NSArray *_publishers;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *publishers; // @synthesize publishers=_publishers;
@property(nonatomic) __weak id <SPTExternalIntegrationDebugLogService> externalIntegrationDebugLogService; // @synthesize externalIntegrationDebugLogService=_externalIntegrationDebugLogService;
- (id)watchConnectivityManager;
- (void)handleWatchConnectivityDebugMessage:(id)arg1 severity:(long long)arg2;
- (void)sessionReachabilityDidChange:(id)arg1;
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

