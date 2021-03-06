//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface SNPAppInfo : NSObject <RCTBridgeModule>
{
}

+ (id)reactNativeVersion;
+ (id)SNP_CONSTANTS;
+ (id)ssnap_constant_REACT_NATIVE_VERSION;
+ (id)ssnap_constant_SSNAP_VERSION;
+ (id)ssnap_constant_SSNAP_URL_PROP;
+ (id)ssnap_constant_SSNAP_URL_INTERCEPTION_HANDLER;
+ (id)ssnap_constant_SSNAP_DEEPLINK_HANDLER;
+ (id)ssnap_constant_APP_VERSION;
+ (const struct RCTMethodInfo *)__rct_export__370;
+ (id)ssnap_constant_OS_VERSION;
+ (id)ssnap_constant_OS;
+ (id)ssnap_constant_SSNAP_DOMAIN;
+ (void)load;
+ (id)moduleName;
- (id)constantsToExport;
- (void)getApplicationInstallIdAsync:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

