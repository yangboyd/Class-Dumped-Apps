//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProfiledAsyncOperation.h"

#import "SetupDeviceScannerListener-Protocol.h"

@class NSString, NSTimer, SetupCastDevice;
@protocol SetupDeviceScanner;

@interface ScanForDeviceAsyncOperation : ProfiledAsyncOperation <SetupDeviceScannerListener>
{
    NSString *_deviceID;
    double _timeoutInterval;
    id <SetupDeviceScanner> _deviceScanner;
    NSTimer *_timeoutTimer;
    long long _setupProtocolVersion;
    SetupCastDevice *_foundDevice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SetupCastDevice *foundDevice; // @synthesize foundDevice=_foundDevice;
- (id)analyticsEventsInContext:(long long)arg1 basedOnAnalyticsEvent:(id)arg2;
- (void)cancelTimer;
- (void)timeoutTimerDidFire:(id)arg1;
- (void)setupDeviceDidGoOffline:(id)arg1;
- (void)setupDeviceDidComeOnline:(id)arg1;
- (void)cancel;
- (void)start;
- (void)didFinishWithError:(id)arg1;
- (_Bool)checkFoundDevice:(id)arg1;
- (id)initWithDeviceID:(id)arg1 setupProtocolVersion:(long long)arg2 deviceScanner:(id)arg3 timeoutInterval:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

