//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface AdjustSdk : NSObject <RCTBridgeModule>
{
}

+ (const struct RCTMethodInfo *)__rct_export__43031;
+ (const struct RCTMethodInfo *)__rct_export__42630;
+ (const struct RCTMethodInfo *)__rct_export__41629;
+ (const struct RCTMethodInfo *)__rct_export__34428;
+ (const struct RCTMethodInfo *)__rct_export__34027;
+ (const struct RCTMethodInfo *)__rct_export__33626;
+ (const struct RCTMethodInfo *)__rct_export__33225;
+ (const struct RCTMethodInfo *)__rct_export__32824;
+ (const struct RCTMethodInfo *)__rct_export__32423;
+ (const struct RCTMethodInfo *)__rct_export__32022;
+ (const struct RCTMethodInfo *)__rct_export__30121;
+ (const struct RCTMethodInfo *)__rct_export__29920;
+ (const struct RCTMethodInfo *)__rct_export__29019;
+ (const struct RCTMethodInfo *)__rct_export__28118;
+ (const struct RCTMethodInfo *)__rct_export__27717;
+ (const struct RCTMethodInfo *)__rct_export__27316;
+ (const struct RCTMethodInfo *)__rct_export__26415;
+ (const struct RCTMethodInfo *)__rct_export__26014;
+ (const struct RCTMethodInfo *)__rct_export__25613;
+ (const struct RCTMethodInfo *)__rct_export__24912;
+ (const struct RCTMethodInfo *)__rct_export__24211;
+ (const struct RCTMethodInfo *)__rct_export__23810;
+ (const struct RCTMethodInfo *)__rct_export__2319;
+ (const struct RCTMethodInfo *)__rct_export__2248;
+ (const struct RCTMethodInfo *)__rct_export__2207;
+ (const struct RCTMethodInfo *)__rct_export__2036;
+ (const struct RCTMethodInfo *)__rct_export__1965;
+ (const struct RCTMethodInfo *)__rct_export__1904;
+ (const struct RCTMethodInfo *)__rct_export__1863;
+ (const struct RCTMethodInfo *)__rct_export__1822;
+ (const struct RCTMethodInfo *)__rct_export__1321;
+ (const struct RCTMethodInfo *)__rct_export__250;
+ (void)load;
+ (id)moduleName;
- (id)convertMilliStringToNumber:(id)arg1;
- (void)addValueOrEmpty:(id)arg1 key:(id)arg2 value:(id)arg3;
- (_Bool)isFieldValid:(id)arg1;
- (void)onPause;
- (void)onResume;
- (void)teardown;
- (void)setTestOptions:(id)arg1;
- (void)setDeferredDeeplinkCallbackListener;
- (void)setSessionTrackingFailedCallbackListener;
- (void)setSessionTrackingSucceededCallbackListener;
- (void)setEventTrackingFailedCallbackListener;
- (void)setEventTrackingSucceededCallbackListener;
- (void)setAttributionCallbackListener;
- (void)getAttribution:(CDUnknownBlockType)arg1;
- (void)setReferrer:(id)arg1;
- (void)getSdkVersion:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getAdid:(CDUnknownBlockType)arg1;
- (void)getAmazonAdId:(CDUnknownBlockType)arg1;
- (void)getGoogleAdId:(CDUnknownBlockType)arg1;
- (void)getIdfa:(CDUnknownBlockType)arg1;
- (void)gdprForgetMe;
- (void)resetSessionPartnerParameters;
- (void)removeSessionPartnerParameter:(id)arg1;
- (void)addSessionPartnerParameter:(id)arg1 value:(id)arg2;
- (void)resetSessionCallbackParameters;
- (void)removeSessionCallbackParameter:(id)arg1;
- (void)addSessionCallbackParameter:(id)arg1 value:(id)arg2;
- (void)sendFirstPackages;
- (void)appWillOpenUrl:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)isEnabled:(CDUnknownBlockType)arg1;
- (void)setEnabled:(id)arg1;
- (void)setOfflineMode:(id)arg1;
- (void)trackEvent:(id)arg1;
- (void)create:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

