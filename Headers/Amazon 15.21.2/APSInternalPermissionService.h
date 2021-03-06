//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class APSManifestProvider, APSPermissionService, APSPermissionStorage, APSSystemPermissions, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface APSInternalPermissionService : NSObject <RCTBridgeModule>
{
    APSManifestProvider *_provider;
    APSPermissionStorage *_storage;
    APSPermissionService *_permissionService;
    APSSystemPermissions *_systemPermissions;
}

+ (const struct RCTMethodInfo *)__rct_export__21616;
+ (const struct RCTMethodInfo *)__rct_export__20015;
+ (const struct RCTMethodInfo *)__rct_export__17914;
+ (const struct RCTMethodInfo *)__rct_export__16813;
+ (const struct RCTMethodInfo *)__rct_export__15512;
+ (const struct RCTMethodInfo *)__rct_export__14311;
+ (const struct RCTMethodInfo *)__rct_export__12810;
+ (const struct RCTMethodInfo *)__rct_export__1159;
+ (const struct RCTMethodInfo *)__rct_export__1088;
+ (const struct RCTMethodInfo *)__rct_export__1007;
+ (const struct RCTMethodInfo *)__rct_export__906;
+ (const struct RCTMethodInfo *)__rct_export__714;
+ (const struct RCTMethodInfo *)__rct_export__562;
+ (const struct RCTMethodInfo *)__rct_export__471;
+ (const struct RCTMethodInfo *)__rct_export__340;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) APSSystemPermissions *systemPermissions; // @synthesize systemPermissions=_systemPermissions;
@property(retain, nonatomic) APSPermissionService *permissionService; // @synthesize permissionService=_permissionService;
@property(retain, nonatomic) APSPermissionStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) APSManifestProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)openDashboardFromBS;
- (void)requireForFeatureWithRequestTime:(id)arg1 requestId:(id)arg2 requestTime:(id)arg3 resolve:(CDUnknownBlockType)arg4 reject:(CDUnknownBlockType)arg5;
- (void)requireForFeature:(id)arg1 requestId:(id)arg2 uiResources:(id)arg3 resolve:(CDUnknownBlockType)arg4 reject:(CDUnknownBlockType)arg5;
- (void)isGranted:(id)arg1 requestId:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)getAllFeatureManifests:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)completeRequest:(id)arg1 requestId:(id)arg2 result:(id)arg3 resolve:(CDUnknownBlockType)arg4 reject:(CDUnknownBlockType)arg5;
- (void)getMetadata:(id)arg1 requestId:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)showSettings:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)savePermissionStorage:(id)arg1 value:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)readPermissionStorage:(id)arg1 defaultValue:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)savePermissionState:(id)arg1 requestId:(id)arg2 state:(id)arg3 resolve:(CDUnknownBlockType)arg4 reject:(CDUnknownBlockType)arg5;
- (void)requestSystemPermission:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)getSystemPermissionState:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)isFeatureLevelGranted:(id)arg1 requestId:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)getManifest:(id)arg1 requestId:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

