//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRApp, CRSDKSettings, NSMutableDictionary;

@interface CRResponsivenessMonitor : NSObject
{
    CRApp *_app;
    CRSDKSettings *_sdkSettings;
    NSMutableDictionary *_watchdogTimers;
}

@property(retain, nonatomic) NSMutableDictionary *watchdogTimers; // @synthesize watchdogTimers=_watchdogTimers;
@property(readonly, nonatomic) CRSDKSettings *sdkSettings; // @synthesize sdkSettings=_sdkSettings;
@property(readonly, nonatomic) CRApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)settingsDidUpdate:(id)arg1;
- (void)logBreadcrumbWithAppHang:(id)arg1;
- (void)logBreadcrumbWithAppLag:(id)arg1;
- (void)stopMonitoringForName:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoringQueue:(id)arg1 withName:(id)arg2;
- (void)startMonitoringThread:(id)arg1 withName:(id)arg2;
- (void)startMonitoringQueue:(id)arg1 withName:(id)arg2 warnThreshold:(double)arg3 hangThreshold:(double)arg4;
- (void)startMonitoringThread:(id)arg1 withName:(id)arg2 warnThreshold:(double)arg3 hangThreshold:(double)arg4;
- (void)dealloc;
- (id)initWithApp:(id)arg1 sdkSettings:(id)arg2;

@end

