//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface StreamLifecycleModule : NSObject <RCTBridgeModule>
{
}

+ (const struct RCTMethodInfo *)__rct_export__503;
+ (const struct RCTMethodInfo *)__rct_export__432;
+ (const struct RCTMethodInfo *)__rct_export__341;
+ (const struct RCTMethodInfo *)__rct_export__250;
+ (void)load;
+ (id)moduleName;
- (void)disableScreenTimeout:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)enableScreenTimeout:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)exitStreamingMode:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)enterStreamingMode:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (id)getMainViewController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

