//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "CLLocationManager_ULRAdditionsDelegate-Protocol.h"
#import "ULRCollector-Protocol.h"
#import "ULRMonitorable-Protocol.h"

@class CLLocationManager, NSDate, NSString, NSTimer, ULRAnalyticsLogger, ULRBackgroundTask, ULRLocation, ULRLocationEaterLocationUpdateCache, ULRPowerObserver;
@protocol OS_dispatch_queue, ULRLocationCollectorDelegate><ULRMonitorableDelegate;

@interface ULRLocationCollector : NSObject <CLLocationManager_ULRAdditionsDelegate, CLLocationManagerDelegate, ULRCollector, ULRMonitorable>
{
    id <ULRLocationCollectorDelegate><ULRMonitorableDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    ULRPowerObserver *_powerObserver;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSDate *_collectionStartDate;
    CLLocationManager *_locationManager;
    NSTimer *_collectionMaxTimer;
    NSTimer *_collectionQualityStepTimer;
    ULRBackgroundTask *_collectionBackgroundTask;
    ULRLocation *_locationToReport;
    ULRLocationEaterLocationUpdateCache *_eatenLocationCache;
    ULRAnalyticsLogger *_analyticsLogger;
    _Bool _collectionIsBurst;
    _Bool _collectionIsExpedited;
    _Bool _collectionIsOneShot;
}

+ (double)locationCollectorMinimumInterval;
+ (_Bool)isSupported;
@property(readonly, nonatomic) __weak id <ULRLocationCollectorDelegate><ULRMonitorableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastCollectionStartDate;
@property(readonly, nonatomic) CLLocationManager *collectionConfiguredLocationManager;
- (long long)locationSource;
- (void)adjustTimer:(id)arg1 withOldTimeInterval:(double)arg2 toNewTimeInterval:(double)arg3;
- (void)adjustQualityTimerForExpeditedCollection;
- (void)adjustMaxTimerForExpeditedCollectionWithNewTimeout:(double)arg1;
- (void)deniedLocationServicesPromptFromLocationManager:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopCollecting;
- (id)startCollectingWithMaxTime:(double)arg1 qualityStepTime:(double)arg2 ignoreLastCollectionStartDate:(_Bool)arg3;
- (_Bool)startCollectingWithError:(id *)arg1;
- (_Bool)startCollectingForSendDataWithError:(id *)arg1;
- (_Bool)startCollectingForExpeditedLocationWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)startCollectingForBurstWithError:(id *)arg1;
@property(readonly, nonatomic, getter=isCollecting) _Bool collecting;
- (void)collectionProcessDidTimeOut;
- (void)backgroundTaskDidExpire;
- (id)abortCollectionOnMainThread;
- (void)finishCollectingWithTimer:(id)arg1;
- (void)finishCollecting;
- (void)clearCollectionState;
- (void)didCollectLocations:(id)arg1;
- (void)updateLocationAccuracy;
- (_Bool)canCollect;
- (void)updateMonitorState;
- (void)processEatenLocationUpdate;
@property(nonatomic) _Bool collectionIsOneShot; // @synthesize collectionIsOneShot=_collectionIsOneShot;
@property(nonatomic) _Bool collectionIsExpedited; // @synthesize collectionIsExpedited=_collectionIsExpedited;
@property(nonatomic) _Bool collectionIsBurst; // @synthesize collectionIsBurst=_collectionIsBurst;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 workQueue:(id)arg3 powerObserver:(id)arg4 analyticsLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

