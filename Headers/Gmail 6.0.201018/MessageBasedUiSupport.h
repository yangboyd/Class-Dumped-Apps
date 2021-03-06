//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTSyncClientManagerListener-Protocol.h"
#import "JBTSettings_SettingChangeListener-Protocol.h"

@class NSString, OperationWithTimeout, UndismissablePopupViewController;
@protocol JBTBigTopSyncClientAPI;

@interface MessageBasedUiSupport : NSObject <GBTSyncClientManagerListener, JBTSettings_SettingChangeListener>
{
    id <JBTBigTopSyncClientAPI> _sapi;
    OperationWithTimeout *_operation;
    UndismissablePopupViewController *_undismissablePopupViewController;
    double _timeoutWaitPeriod;
    _Bool _messageBasedUiSettingSwitched;
    NSString *_email;
}

+ (_Bool)isSnoozeEnabledForClient:(id)arg1;
+ (long long)databaseMessageBasedUiState:(id)arg1;
+ (_Bool)isMessageBasedUIEnabledBestGuessForAccount:(id)arg1;
+ (id)getMessageBasedUiSettingForRuntimeOption:(id)arg1;
+ (_Bool)isProcessingAlertVisible;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void)storeBeginMessageBasedUISwitchingTimestamp;
- (void)removeBeginMessageBasedUISwitchingTimestamp;
- (void)logMessageBasedUiSwitchingIntervalMetric:(id)arg1;
- (id)messageBasedUITimestampKey;
- (void)logMetric:(id)arg1;
- (void)dismissLoadingView;
- (void)presentLoadingView;
- (_Bool)hasUnsyncedChanges;
- (void)handleContinueToWaitAlertAction:(_Bool)arg1;
- (void)showConfirmContinueToWaitOptions;
- (_Bool)isUnifiedInboxActiveForListConfig:(id)arg1;
- (void)shutdownSAPIAndDeleteDatabase;
- (void)refreshDatabase;
- (_Bool)hasNetworkConnection;
- (void)resumeMessageBasedUiSwitchingIfInterrupted;
- (long long)getMessageBasedUiSetting;
- (_Bool)isMessageBasedUiEnabled;
- (_Bool)isFeatureEnabled;
- (void)setMessageBasedUiValue:(long long)arg1;
- (void)setDatabaseMessageBasedUiState:(long long)arg1;
- (long long)databaseMessageBasedUiState;
- (void)waitForSettingChangeToSync;
- (void)setWaitPeriod:(double)arg1;
- (double)waitPeriod;
- (id)createOperation;
- (void)showNoNetworkMessage;
- (void)restoreDaysToSync;
- (id)backupDateToSync;
- (void)backupDaysToSyncAndSwitch;
- (void)setNumDaysToSync:(long long)arg1;
- (id)getNumDaysToSync;
- (id)getSyncSettings;
- (id)getUserSettings;
- (void)reinitializeSyncClientForAlternateAccount;
- (void)reloadInboxIfNecessary;
- (void)loadInboxWithListIdentifier:(id)arg1;
- (_Bool)shouldSwitch;
- (void)updateRemoteNotificationsRegistration;
- (void)didRemoveSyncClient;
- (void)showMessageBasedUiSwitchedAlertIfNecessary;
- (void)syncClientManager:(id)arg1 didRemoveSyncClientForAccount:(id)arg2;
- (void)onChangeWithId:(id)arg1 withId:(id)arg2;
- (void)toggleMessageBasedUi:(CDUnknownBlockType)arg1;
- (void)didAddSyncClient;
- (id)initWithSapi:(id)arg1 forEmail:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

