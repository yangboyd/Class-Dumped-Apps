//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEWifiNetworksScanner-Protocol.h"

@class NSString;
@protocol HMEDeviceQueryService, HMEQueryableDevice;

@interface HMEWifiNetworksScannerImpl : NSObject <HMEWifiNetworksScanner>
{
    _Bool _isScanInProgress;
    id <HMEDeviceQueryService> _deviceQueryService;
    id <HMEQueryableDevice> _queryableDevice;
    CDUnknownBlockType _completionBlock;
    double _scanResultsInterval;
    double _retryInterval;
    double _timeoutInterval;
    double _wifiScanRequestTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double wifiScanRequestTimestamp; // @synthesize wifiScanRequestTimestamp=_wifiScanRequestTimestamp;
@property(nonatomic) _Bool isScanInProgress; // @synthesize isScanInProgress=_isScanInProgress;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) double scanResultsInterval; // @synthesize scanResultsInterval=_scanResultsInterval;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) id <HMEQueryableDevice> queryableDevice; // @synthesize queryableDevice=_queryableDevice;
@property(readonly, nonatomic) id <HMEDeviceQueryService> deviceQueryService; // @synthesize deviceQueryService=_deviceQueryService;
- (id)wifiNetworksFromResponse:(id)arg1;
- (void)wifiScanFailedWithError:(id)arg1;
- (void)wifiScanSucceedWithWiFiNetworks:(id)arg1;
- (void)requestWifiScanResults;
- (void)waitForWifiScanToCompleteWithInterval:(double)arg1;
- (void)requestWifiScan;
- (void)scanWifiNetworksWithQueryableDevice:(id)arg1 scanResultsInterval:(double)arg2 retryInterval:(double)arg3 timeoutInterval:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)scanWifiNetworksWithQueryableDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDeviceQueryService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

