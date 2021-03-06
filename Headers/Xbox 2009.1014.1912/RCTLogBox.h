//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeLogBoxSpec-Protocol.h"
#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTLogBox : NSObject <NativeLogBoxSpec, RCTBridgeModule>
{
}

+ (id)moduleName;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_cb283e74)arg1;
- (void)hide;
- (void)show;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end

