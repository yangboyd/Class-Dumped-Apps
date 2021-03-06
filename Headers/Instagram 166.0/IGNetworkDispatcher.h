//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkDispatcherOperationListener-Protocol.h>
#import <FBSharedFramework/IGNetworkLayer-Protocol.h>

@class IGNetworkingBandwidthRecorder, NSMutableDictionary, NSOperationQueue, NSString;
@protocol IGNetworkCongestionLoggerProtocol, IGNetworkDispatcherPerformanceLogging, IGNetworkLayer, OS_dispatch_queue;

@interface IGNetworkDispatcher : NSObject <IGNetworkDispatcherOperationListener, IGNetworkLayer>
{
    id <IGNetworkLayer> _nextLayer;
    id <IGNetworkDispatcherPerformanceLogging> _performanceLogger;
    id <IGNetworkCongestionLoggerProtocol> _congestionLogger;
    NSOperationQueue *_queue;
    IGNetworkingBandwidthRecorder *_bandwidthRecorder;
    NSObject<OS_dispatch_queue> *_payloadBasedQueue;
    NSObject<OS_dispatch_queue> *_performanceLoggerQueue;
    NSObject<OS_dispatch_queue> *_congestionLoggerQueue;
    NSObject<OS_dispatch_queue> *_bandwidthRecorderQueue;
    NSMutableDictionary *_trackingRequestOnScreenCount;
    NSMutableDictionary *_trackingRequestOffScreenCount;
    _Bool _isRemoveDispatchQueueEnabled;
    _Bool _isMediaOnlyBandwidthRecordingEnabled;
    _Bool _isQueueEnabled;
    _Bool _isPrivilegeElevationDisabled;
    _Bool _isPrioritizationDisabled;
    long long _maxRequests;
    long long _maxOffscreenRequests;
    long long _recordedRequestsCount;
    long long _recordedRequestsReceivingDataCount;
}

- (void).cxx_destruct;
- (void)_requestWithType:(unsigned long long)arg1 didFinishWithDidStartReceivingResponse:(_Bool)arg2;
- (void)_requestWithType:(unsigned long long)arg1 didReceiveBytes:(long long)arg2;
- (void)_requestDidStartReceivingResponseWithType:(unsigned long long)arg1;
- (void)_requestDidStartWithType:(unsigned long long)arg1;
- (void)_executeOperationsIfNeeded;
- (void)_executeOperationUsingPayloadBasedDispatcher;
- (void)_operationQueueUpdated;
- (void)request:(id)arg1 changedBehavior:(unsigned long long)arg2;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbacks:(id)arg3;
- (id)initWithNextLayer:(id)arg1 performanceLogger:(id)arg2 congestionLogger:(id)arg3 bandwidthRecorder:(id)arg4 configuration:(CDStruct_2cb8a35a)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

