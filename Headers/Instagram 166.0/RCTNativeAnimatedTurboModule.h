//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/RCTEventEmitter.h>

#import <InstagramAppCoreFramework/NativeAnimatedModuleSpec-Protocol.h>
#import <InstagramAppCoreFramework/RCTBridgeModule-Protocol.h>
#import <InstagramAppCoreFramework/RCTEventDispatcherObserver-Protocol.h>
#import <InstagramAppCoreFramework/RCTSurfacePresenterObserver-Protocol.h>
#import <InstagramAppCoreFramework/RCTUIManagerObserver-Protocol.h>
#import <InstagramAppCoreFramework/RCTValueAnimatedNodeObserver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, RCTBridge, RCTNativeAnimatedNodesManager;
@protocol OS_dispatch_queue, RCTSurfacePresenterStub, RCTTurboModuleRegistry;

@interface RCTNativeAnimatedTurboModule : RCTEventEmitter <NativeAnimatedModuleSpec, RCTBridgeModule, RCTValueAnimatedNodeObserver, RCTEventDispatcherObserver, RCTUIManagerObserver, RCTSurfacePresenterObserver>
{
    RCTNativeAnimatedNodesManager *_nodesManager;
    id <RCTSurfacePresenterStub> _surfacePresenter;
    NSMutableArray *_operations;
    NSMutableArray *_preOperations;
    NSMutableDictionary *_animIdIsManagedByFabric;
}

+ (const struct RCTMethodInfo *)__rct_export__25419;
+ (const struct RCTMethodInfo *)__rct_export__24718;
+ (const struct RCTMethodInfo *)__rct_export__23117;
+ (const struct RCTMethodInfo *)__rct_export__22216;
+ (const struct RCTMethodInfo *)__rct_export__21415;
+ (const struct RCTMethodInfo *)__rct_export__20714;
+ (const struct RCTMethodInfo *)__rct_export__20013;
+ (const struct RCTMethodInfo *)__rct_export__19312;
+ (const struct RCTMethodInfo *)__rct_export__18411;
+ (const struct RCTMethodInfo *)__rct_export__17610;
+ (const struct RCTMethodInfo *)__rct_export__1699;
+ (const struct RCTMethodInfo *)__rct_export__1628;
+ (const struct RCTMethodInfo *)__rct_export__1547;
+ (const struct RCTMethodInfo *)__rct_export__1436;
+ (const struct RCTMethodInfo *)__rct_export__1255;
+ (const struct RCTMethodInfo *)__rct_export__1154;
+ (const struct RCTMethodInfo *)__rct_export__1073;
+ (const struct RCTMethodInfo *)__rct_export__992;
+ (const struct RCTMethodInfo *)__rct_export__931;
+ (const struct RCTMethodInfo *)__rct_export__880;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (shared_ptr_3725e3cd)getTurboModule:(const struct InitParams *)arg1;
- (void)eventDispatcherWillDispatchEvent:(id)arg1;
- (void)animatedNode:(id)arg1 didUpdateValue:(double)arg2;
- (id)supportedEvents;
- (void)uiManagerWillPerformMounting:(id)arg1;
- (void)didMountComponentsWithRootTag:(long long)arg1;
- (void)willMountComponentsWithRootTag:(long long)arg1;
- (void)flushOperationQueues;
- (void)addPreOperationBlock:(CDUnknownBlockType)arg1;
- (void)addOperationBlock:(CDUnknownBlockType)arg1;
- (void)getValue:(double)arg1 saveValueCallback:(CDUnknownBlockType)arg2;
- (void)removeAnimatedEventFromView:(double)arg1 eventName:(id)arg2 animatedNodeTag:(double)arg3;
- (void)addAnimatedEventToView:(double)arg1 eventName:(id)arg2 eventMapping:(struct EventMapping *)arg3;
- (void)stopListeningToAnimatedNodeValue:(double)arg1;
- (void)startListeningToAnimatedNodeValue:(double)arg1;
- (void)dropAnimatedNode:(double)arg1;
- (void)restoreDefaultValues:(double)arg1;
- (void)disconnectAnimatedNodeFromView:(double)arg1 viewTag:(double)arg2;
- (void)connectAnimatedNodeToView:(double)arg1 viewTag:(double)arg2;
- (void)extractAnimatedNodeOffset:(double)arg1;
- (void)flattenAnimatedNodeOffset:(double)arg1;
- (void)setAnimatedNodeOffset:(double)arg1 offset:(double)arg2;
- (void)setAnimatedNodeValue:(double)arg1 value:(double)arg2;
- (void)stopAnimation:(double)arg1;
- (void)startAnimatingNode:(double)arg1 nodeTag:(double)arg2 config:(id)arg3 endCallback:(CDUnknownBlockType)arg4;
- (void)disconnectAnimatedNodes:(double)arg1 childTag:(double)arg2;
- (void)connectAnimatedNodes:(double)arg1 childTag:(double)arg2;
- (void)createAnimatedNode:(double)arg1 config:(id)arg2;
- (void)finishOperationBatch;
- (void)startOperationBatch;
- (void)setSurfacePresenter:(id)arg1;
- (void)setBridge:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleRegistry> turboModuleRegistry;

@end

