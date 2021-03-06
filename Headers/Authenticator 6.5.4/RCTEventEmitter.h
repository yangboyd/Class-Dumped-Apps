//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <React/RCTBridgeModule-Protocol.h>
#import <React/RCTJSInvokerModule-Protocol.h>

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTEventEmitter : NSObject <RCTBridgeModule, RCTJSInvokerModule>
{
    long long _listenerCount;
    CDUnknownBlockType _invokeJS;
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__1031;
+ (const struct RCTMethodInfo *)__rct_export__880;
+ (void)initialize;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(copy, nonatomic) CDUnknownBlockType invokeJS; // @synthesize invokeJS=_invokeJS;
- (void)removeListeners:(double)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (void)stopObserving;
- (void)startObserving;
- (void)sendEventWithName:(id)arg1 body:(id)arg2;
- (id)supportedEvents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

