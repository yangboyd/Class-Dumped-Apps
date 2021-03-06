//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEThermostatControllerTransport-Protocol.h"

@class NSString;
@protocol HMEThermostatControllerAnalyticsProtocol, HMEThermostatControllerTransportDelegateProtocol;

@interface HMEThermostatControllerTransport : NSObject <HMEThermostatControllerTransport>
{
    id <HMEThermostatControllerAnalyticsProtocol> analyticsDelegate;
    id <HMEThermostatControllerTransportDelegateProtocol> delegate;
    CDUnknownBlockType updateCallback;
}

@property(copy, nonatomic) CDUnknownBlockType updateCallback; // @synthesize updateCallback;
@property(nonatomic) __weak id <HMEThermostatControllerTransportDelegateProtocol> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <HMEThermostatControllerAnalyticsProtocol> analyticsDelegate; // @synthesize analyticsDelegate;
- (void).cxx_destruct;
- (id)thermostatModeMap;
- (long long)homeAutomationModeForFoyerMode:(int)arg1;
- (int)foyerModeForHomeAutomationMode:(long long)arg1;
- (void)setFanTimerDuration:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setTargetTemperatureHeat:(double)arg1 cool:(double)arg2;
- (void)setTargetTemperature:(double)arg1;
- (void)fetchState;
- (id)initWithHomeAutomationManager:(id)arg1 backendRouting:(long long)arg2 energyService:(id)arg3 device:(id)arg4 homeCoreFoyerPathSupported:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

