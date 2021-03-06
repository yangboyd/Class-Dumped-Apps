//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreModules/NativeDeviceInfoSpec-Protocol.h>
#import <CoreModules/RCTBridgeModule-Protocol.h>

@class NSDictionary, NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTDeviceInfo : NSObject <NativeDeviceInfoSpec, RCTBridgeModule>
{
    long long _currentInterfaceOrientation;
    NSDictionary *_currentInterfaceDimensions;
    RCTBridge *_bridge;
}

+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_09f1d460)arg1 nativeInvoker:(shared_ptr_09f1d460)arg2 perfLogger:(id)arg3;
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
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end

