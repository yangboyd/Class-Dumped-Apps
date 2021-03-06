//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NativeDeviceInfoSpec-Protocol.h>
#import <FBSharedFramework/RCTBridgeModule-Protocol.h>

@class NSDictionary, NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleRegistry;

@interface RCTDeviceInfo : NSObject <NativeDeviceInfoSpec, RCTBridgeModule>
{
    long long _currentInterfaceOrientation;
    NSDictionary *_currentInterfaceDimensions;
    RCTBridge *_bridge;
    id <RCTTurboModuleRegistry> _turboModuleRegistry;
}

+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RCTTurboModuleRegistry> turboModuleRegistry; // @synthesize turboModuleRegistry=_turboModuleRegistry;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (shared_ptr_3725e3cd)getTurboModule:(const struct InitParams *)arg1;
- (void)_interfaceFrameDidChange;
- (void)interfaceFrameDidChange;
- (void)_interfaceOrientationDidChange;
- (void)interfaceOrientationDidChange;
- (void)didReceiveNewContentSizeMultiplier;
- (id)getConstants;
- (id)constantsToExport;
- (void)setBridge:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

