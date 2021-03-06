//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "RCTBridgeModule-Protocol.h"

@class CMAltimeter, NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface Barometer : RCTEventEmitter <RCTBridgeModule>
{
    CMAltimeter *_altimeter;
    int logLevel;
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__985;
+ (const struct RCTMethodInfo *)__rct_export__744;
+ (const struct RCTMethodInfo *)__rct_export__693;
+ (const struct RCTMethodInfo *)__rct_export__612;
+ (const struct RCTMethodInfo *)__rct_export__571;
+ (const struct RCTMethodInfo *)__rct_export__isAvailable390;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)stopUpdates;
- (void)startUpdates;
- (void)getUpdateInterval:(CDUnknownBlockType)arg1;
- (void)setLogLevel:(int)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)isAvailableWithResolver:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)resolver:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (id)supportedEvents;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

