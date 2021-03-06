//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAPaymentSyncHandler-Protocol.h"
#import "WAUnifiedSyncDataTypeFetching-Protocol.h"

@class NSDate, NSMutableArray, NSMutableSet, NSSet, NSUserDefaults, WABizManagerMain, WAChatStorage, WAContactsStorage, WANameDirectory, WAProfilePictureManager, WASyncStateHolder, XMPPConnectionMain, _TtC8Payments16WAPaymentManager;
@protocol OS_dispatch_queue, OS_dispatch_source, WAAccountSyncDevicesHandling><WADeviceListLoading, WASyncManagerDelegate;

@interface WASyncManager : NSObject <WAUnifiedSyncDataTypeFetching, WAPaymentSyncHandler>
{
    NSObject<OS_dispatch_source> *_fullSyncTimer;
    NSObject<OS_dispatch_source> *_writeSyncPollingTimer;
    NSObject<OS_dispatch_source> *_querySyncPollingTimer;
    NSMutableArray *_syncHistory;
    NSDate *_nextWriteSyncDate;
    unsigned long long _nextWriteSyncMode;
    unsigned long long _nextWriteSyncContext;
    NSMutableSet *_pendingDeletes;
    NSMutableSet *_pendingPhoneNumbers;
    NSSet *_processedDeletes;
    NSSet *_processedPhoneNumbers;
    NSMutableSet *_pendingOfflineContactUpdates;
    WASyncStateHolder *_stateHolder;
    _Bool _syncEnabled;
    _Bool _writeSyncInProgress;
    id <WASyncManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    WABizManagerMain *_bizManagerMain;
    WAChatStorage *_chatStorage;
    WAContactsStorage *_contactsStorage;
    WANameDirectory *_nameDirectory;
    _TtC8Payments16WAPaymentManager *_paymentManager;
    WAProfilePictureManager *_profilePictureManager;
    NSUserDefaults *_userDefaults;
    XMPPConnectionMain *_xmppConnection;
    NSSet *_devicesQuerySyncContextNumbers;
    NSSet *_devicesQuerySyncContextNumbersIgnoringBackoff;
    id <WAAccountSyncDevicesHandling><WADeviceListLoading> _deviceManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <WAAccountSyncDevicesHandling><WADeviceListLoading> deviceManager; // @synthesize deviceManager=_deviceManager;
@property(readonly, nonatomic) NSSet *devicesQuerySyncContextNumbersIgnoringBackoff; // @synthesize devicesQuerySyncContextNumbersIgnoringBackoff=_devicesQuerySyncContextNumbersIgnoringBackoff;
@property(readonly, nonatomic) NSSet *devicesQuerySyncContextNumbers; // @synthesize devicesQuerySyncContextNumbers=_devicesQuerySyncContextNumbers;
@property _Bool writeSyncInProgress; // @synthesize writeSyncInProgress=_writeSyncInProgress;
@property(readonly, nonatomic) XMPPConnectionMain *xmppConnection; // @synthesize xmppConnection=_xmppConnection;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) WAProfilePictureManager *profilePictureManager; // @synthesize profilePictureManager=_profilePictureManager;
@property(nonatomic) __weak _TtC8Payments16WAPaymentManager *paymentManager; // @synthesize paymentManager=_paymentManager;
@property(readonly, nonatomic) WANameDirectory *nameDirectory; // @synthesize nameDirectory=_nameDirectory;
@property(readonly, nonatomic) WAContactsStorage *contactsStorage; // @synthesize contactsStorage=_contactsStorage;
@property(readonly, nonatomic) WAChatStorage *chatStorage; // @synthesize chatStorage=_chatStorage;
@property(readonly, nonatomic) WABizManagerMain *bizManagerMain; // @synthesize bizManagerMain=_bizManagerMain;
@property _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <WASyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)internalProcessIncomingContactsNotification:(id)arg1;
- (void)processIncomingContactsNotification:(id)arg1;
- (void)contactUpdated:(id)arg1 offlineStorage:(_Bool)arg2;
- (unsigned long long)validatedDevicesQuerySyncContext:(unsigned long long)arg1;
- (id)loadUserDevicesRequestsWithUserJIDs:(id)arg1;
- (double)remainingQuerySyncBackoffForMetadataProtocolKey:(id)arg1 context:(unsigned long long)arg2;
- (void)saveSyncHistory;
- (void)cleanSyncHistory;
- (void)loadSyncHistory;
- (void)addDeletedJIDs:(id)arg1;
- (void)addPhoneNumbers:(id)arg1;
- (void)reset;
- (void)enableSync;
- (void)finishUnifiedSyncWithMode:(unsigned long long)arg1 context:(unsigned long long)arg2 withResult:(int)arg3 failureReason:(int)arg4;
- (void)processUnifiedSyncResponse:(id)arg1 listUsers:(id)arg2 sidelistUsers:(id)arg3 mode:(unsigned long long)arg4 context:(unsigned long long)arg5 error:(id)arg6 completions:(id)arg7;
- (void)reallyPerformWriteSync;
- (void)sendPendingDevicesQuerySyncRequestWithContext:(unsigned long long)arg1;
- (void)removePendingOfflineContactUpdates;
- (void)runQuerySyncIfNecessary;
- (int)runWriteSyncIfNecessary;
- (void)runFullSyncIfNecessary;
- (void)setNextFullSyncDate:(id)arg1;
- (void)requestWriteSyncWithMode:(unsigned long long)arg1 context:(unsigned long long)arg2;
- (void)requestPaymentsQuerySyncWithUserJIDs:(id)arg1 context:(unsigned long long)arg2;
- (void)requestQuerySync:(id)arg1 context:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestDevicesQuerySyncWithContext:(unsigned long long)arg1 userJIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAddQuerySync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestInteractiveQuerySync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestNotificationDeltaSync;
- (void)requestInteractiveDeltaSync;
- (void)requestInteractiveFullSync;
- (id)initWithBizManager:(id)arg1 deviceManager:(id)arg2 chatStorage:(id)arg3 contactsStorage:(id)arg4 nameDirectory:(id)arg5 paymentManager:(id)arg6 profilePictureManager:(id)arg7 userDefaults:(id)arg8 xmppConnection:(id)arg9 stateHolder:(id)arg10;
- (void)requestInteractivePaymentsQueryForUserJID:(id)arg1;
- (void)paymentsRequestAllListsQuery;
- (void)paymentsRequestNotificationSyncForHash:(id)arg1;
- (void)fetchJIDForPhoneNumber:(id)arg1 alertTitle:(id)arg2 rootViewController:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

