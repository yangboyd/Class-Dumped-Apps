//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "CXProviderDelegate-Protocol.h"
#import "RCTBridgeModule-Protocol.h"
#import "RCTInvalidating-Protocol.h"

@class CXCallController, CXProvider, NSMutableArray, NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface DCDCallKitManager : RCTEventEmitter <RCTBridgeModule, RCTInvalidating, CXProviderDelegate>
{
    RCTBridge *_bridge;
    CXCallController *_callController;
    NSMutableArray *_initialEvents;
}

+ (id)getProviderConfiguration;
+ (_Bool)application:(id)arg1 continueUserActivity:(id)arg2;
+ (const struct RCTMethodInfo *)__rct_export__2069;
+ (const struct RCTMethodInfo *)__rct_export__1968;
+ (const struct RCTMethodInfo *)__rct_export__1847;
+ (const struct RCTMethodInfo *)__rct_export__1696;
+ (const struct RCTMethodInfo *)__rct_export__1575;
+ (const struct RCTMethodInfo *)__rct_export__1434;
+ (const struct RCTMethodInfo *)__rct_export__1333;
+ (const struct RCTMethodInfo *)__rct_export__1272;
+ (const struct RCTMethodInfo *)__rct_export__1181;
+ (void)reportNewIncomingCall:(id)arg1 handle:(id)arg2 hasVideo:(_Bool)arg3 localizedCallerName:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (const struct RCTMethodInfo *)__rct_export__720;
+ (_Bool)requiresMainQueueSetup;
+ (id)provider;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) NSMutableArray *initialEvents; // @synthesize initialEvents=_initialEvents;
@property(retain, nonatomic) CXCallController *callController; // @synthesize callController=_callController;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (id)supportedEvents;
- (void)invalidate;
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;
- (void)providerDidReset:(id)arg1;
- (void)requestTransaction:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)sendEventWithName:(id)arg1 body:(id)arg2;
- (void)handleStartCallNotification:(id)arg1;
- (void)useHalloweenRingtone:(_Bool)arg1;
- (void)setMutedCall:(id)arg1 muted:(_Bool)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)endCall:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)startCall:(id)arg1 handle:(id)arg2 video:(_Bool)arg3 contactIdentifier:(id)arg4 resolve:(CDUnknownBlockType)arg5 reject:(CDUnknownBlockType)arg6;
- (void)reportCallEnded:(id)arg1;
- (void)reportCall:(id)arg1 handle:(id)arg2 hasVideo:(_Bool)arg3 localizedCallerName:(id)arg4;
- (void)reportOutgoingCallConnected:(id)arg1;
- (void)reportOutgoingCallStartedConnecting:(id)arg1;
- (void)reportNewIncomingCall:(id)arg1 handle:(id)arg2 hasVideo:(_Bool)arg3 localizedCallerName:(id)arg4;
- (void)initialize;
@property(readonly, nonatomic) CXProvider *provider;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

