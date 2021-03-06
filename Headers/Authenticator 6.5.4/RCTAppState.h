//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <React/RCTEventEmitter.h>

#import <CoreModules/NativeAppStateSpec-Protocol.h>
#import <CoreModules/RCTInvalidating-Protocol.h>

@class NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTAppState : RCTEventEmitter <NativeAppStateSpec, RCTInvalidating>
{
    NSString *_lastKnownState;
}

+ (const struct RCTMethodInfo *)__rct_export__1360;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_09f1d460)arg1 nativeInvoker:(shared_ptr_09f1d460)arg2 perfLogger:(id)arg3;
- (void)getCurrentAppState:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)handleAppStateDidChange:(id)arg1;
- (void)handleMemoryWarning;
- (void)invalidate;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;
- (id)getConstants;
- (id)constantsToExport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end

