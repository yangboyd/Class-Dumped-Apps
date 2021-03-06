//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/RCTEventEmitter.h>

#import <FBSharedFramework/NativeStatusBarManagerIOSSpec-Protocol.h>

@class NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleRegistry;

@interface RCTStatusBarManager : RCTEventEmitter <NativeStatusBarManagerIOSSpec>
{
}

+ (const struct RCTMethodInfo *)__rct_export__1733;
+ (const struct RCTMethodInfo *)__rct_export__1592;
+ (const struct RCTMethodInfo *)__rct_export__1451;
+ (const struct RCTMethodInfo *)__rct_export__1380;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (shared_ptr_3725e3cd)getTurboModule:(const struct InitParams *)arg1;
- (id)constantsToExport;
- (id)getConstants;
- (void)setNetworkActivityIndicatorVisible:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1 withAnimation:(id)arg2;
- (void)setStyle:(id)arg1 animated:(_Bool)arg2;
- (void)getHeight:(CDUnknownBlockType)arg1;
- (void)applicationWillChangeStatusBarFrame:(id)arg1;
- (void)applicationDidChangeStatusBarFrame:(id)arg1;
- (void)emitEvent:(id)arg1 forNotification:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleRegistry> turboModuleRegistry;

@end

