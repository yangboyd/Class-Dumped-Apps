//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTIBatteryCapturerSettings, YTIDroppedFramesSettings, YTIStallDetectorSettings;

@protocol YTSystemHealthConfig <NSObject>
- (NSString *)innerTubeNetworkConnectivityBaselineGen204URL;
- (double)innerTubeNetworkConnectivityBaselineTimeout;
- (float)innerTubeNetworkConnectivityBaselineFractionOfRunsToSample;
- (_Bool)isInnerTubeNetworkConnectivityMeasurementEnabled;
- (int)networkCaptureBatchSizeAllErrors;
- (_Bool)enableNetworkCaptureAllErrors;
- (_Bool)enablePrecriticalMonitoring;
- (float)memoryWarningLoggingSampleRate;
- (_Bool)useWorkerForPeriodicCapture;
- (_Bool)needsSystemHealthCaptureWorker;
- (YTIStallDetectorSettings *)stallSettings;
- (YTIDroppedFramesSettings *)droppedFramesConfig;
- (double)delayedEventMetricCaptureInterval;
- (_Bool)isDelayedEventMetricsEnabled;
- (_Bool)isEventLoggingEnabled;
- (YTIBatteryCapturerSettings *)batteryConfig;
- (int)networkCaptureBatchSize;
- (_Bool)networkCaptureInstrumentPageVE;
- (_Bool)networkCaptureInstrumentInnertube;
- (_Bool)networkCaptureUseYtSanitizer;
- (_Bool)isNetworkCaptureEnabled;
- (_Bool)isPrimesCpuCaptureEnabled;
- (_Bool)isPrimesMemoryCaptureEnabled;
- (float)primesFractionOfRunsToSample;
- (_Bool)isPrimesEnabled;
- (double)backgroundActiveHeartbeatCutoffDuration;
- (double)backgroundActiveHeartbeatDecayFactor;
- (double)backgroundActiveHeartbeatBaseFrequency;
- (double)backgroundIdleHeartbeatCutoffDuration;
- (double)backgroundIdleHeartbeatDecayFactor;
- (double)backgroundIdleHeartbeatBaseFrequency;
- (double)foregroundHeartbeatCutoffDuration;
- (double)foregroundHeartbeatDecayFactor;
- (double)foregroundHeartbeatBaseFrequency;
- (void)disableSystemHealthMonitoring;
- (_Bool)isSystemHealthMonitoringEnabled;
@end

