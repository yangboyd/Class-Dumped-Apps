//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataSettingsSettingsServiceComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataSettingsDaggerSettingsServiceComponentImpl : NSObject <ComGoogleAppsBigtopDataSettingsSettingsServiceComponentImpl>
{
    id <JavaxInjectProvider> btdDatabaseProvider_;
    id <JavaxInjectProvider> xplatDbTableControllersProvider_;
    id <JavaxInjectProvider> settingsTableControllerProvider_;
    id <JavaxInjectProvider> settingSyncStateTableControllerProvider_;
    id <JavaxInjectProvider> settingStorageProvider_;
    id <JavaxInjectProvider> getSettingsSyncServiceClientProvider_;
    id <JavaxInjectProvider> currentJobExecutorProvider_;
    id <JavaxInjectProvider> settingChangesToSyncUpTableControllerProvider_;
    id <JavaxInjectProvider> getSettableProvider_;
    id <JavaxInjectProvider> transactionPromiseFactoryProvider_;
    id <JavaxInjectProvider> settingSyncStatusManagerProvider_;
    id <JavaxInjectProvider> getSettableProvider2_;
    id <JavaxInjectProvider> getSettableProvider3_;
    id <JavaxInjectProvider> settingStorageUpdateHintPublisherProvider_;
    id <JavaxInjectProvider> settingSyncerProvider_;
    id <JavaxInjectProvider> settingChangeApplierProvider_;
    id <JavaxInjectProvider> rootLifecycleProvider_;
    id <JavaxInjectProvider> settingsServiceServerProvider_;
}

- (void)dealloc;
- (id)getSettingsService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

