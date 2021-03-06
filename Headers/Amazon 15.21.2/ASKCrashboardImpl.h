//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASKCrashboard-Protocol.h"

@class MDCrashManager, NSString;

@interface ASKCrashboardImpl : NSObject <ASKCrashboard>
{
    MDCrashManager *_crashManager;
}

+ (void)TEST_ONLY_RESET_ONCE_TOKEN;
+ (_Bool)isDebugging;
+ (id)sharedInstance;
@property(retain, nonatomic) MDCrashManager *crashManager; // @synthesize crashManager=_crashManager;
- (void).cxx_destruct;
- (void)setCrashReportMetadataOverrideForKey:(id)arg1 withValue:(id)arg2;
- (id)getCrashReportMetadataOverrideForKey:(id)arg1;
- (void)setDeviceUUID;
- (void)registerForWeblabCacheUpdate;
- (void)updateIsStartupMetadata:(_Bool)arg1;
- (void)updateRecoveryModeStatus;
- (void)updateSignInStatus;
- (void)updateDeviceLocale;
- (void)didReceiveSignOutSucceededNotification;
- (void)didReceiveSignInSucceededNotification;
- (void)recordReactError:(id)arg1 crashSpecificMetadata:(id)arg2;
- (void)recordError:(id)arg1 crashSpecificMetadata:(id)arg2;
- (void)recordException:(id)arg1 crashSpecificMetadata:(id)arg2;
- (void)uploadLastCrashReportWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)uploadLastCrashReport;
- (void)currentLocaleDidUpdateWithLocaleIdentifier:(id)arg1;
- (void)currentMarketplaceDidUpdateWithDesignator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

