//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIViewController, WAChatJID, WAChatStorage, WAContactsSearchController, WAContactsStorage, WAPaymentSettings, WAPaymentUPIQRStore, WAProfilePictureManager, WAUserJID, _TtC8Payments16WAPaymentManager, _TtC8Payments19WAPaymentUPIManager;
@protocol WAContactsSearchControllerDelegate, WAPaymentBlockedContactsList, WAPaymentBlocklistAlertManaging, WAPaymentChatTransactionHandler, WAPaymentFactoryDependencyProvider, WAPaymentNotificationsHandler, WAPaymentParticipantPickerHandlerDelegate, WAPaymentParticipantPickerHandlerProtocol, WAPaymentServerPropsHandler, WAPaymentSettingsServiceSectionProvider, WAPaymentSupportHandlerProtocol, WAPaymentSyncHandler, WAPaymentSystemEventsHandler, WAPaymentTransactionListType, WAPaymentUPIParticipantPickerHandlerDelegate;

@protocol WAPaymentDependencyProviderProtocol
- (WAContactsSearchController *)newSearchControllerForChatStorage:(WAChatStorage *)arg1 contactsStorage:(WAContactsStorage *)arg2 includesPushNameContacts:(_Bool)arg3 includeSelf:(_Bool)arg4 delegate:(id <WAContactsSearchControllerDelegate>)arg5;
- (UIViewController *)createUPIDisplayQRCodeViewControllerWithUpiPaymentManager:(_TtC8Payments19WAPaymentUPIManager *)arg1 upiQRStore:(WAPaymentUPIQRStore *)arg2;
- (UIViewController *)createDisplayQRCodeViewController;
- (UIViewController *)createUPIMandatesListViewControllerWithListType:(id <WAPaymentTransactionListType>)arg1 paymentManager:(_TtC8Payments16WAPaymentManager *)arg2 paymentSettings:(WAPaymentSettings *)arg3 chatStorage:(WAChatStorage *)arg4 profilePictureManager:(WAProfilePictureManager *)arg5;
- (UIViewController *)createTransactionListViewControllerWithListType:(id <WAPaymentTransactionListType>)arg1 paymentManager:(_TtC8Payments16WAPaymentManager *)arg2 paymentSettings:(WAPaymentSettings *)arg3 chatStorage:(WAChatStorage *)arg4 profilePictureManager:(WAProfilePictureManager *)arg5;
- (id <WAPaymentBlocklistAlertManaging>)createPaymentBlocklistAlertManager;
- (UIViewController *)createMessageSenderContactViewControllerForJID:(WAUserJID *)arg1;
- (id <WAPaymentParticipantPickerHandlerProtocol>)createUPIParticipantPickerViewHanlderWithType:(unsigned long long)arg1 delegate:(id <WAPaymentUPIParticipantPickerHandlerDelegate>)arg2 groupOrListJID:(WAChatJID *)arg3;
- (id <WAPaymentParticipantPickerHandlerProtocol>)createParticipantPickerViewHanlderWithType:(unsigned long long)arg1 delegate:(id <WAPaymentParticipantPickerHandlerDelegate>)arg2 groupOrListJID:(WAChatJID *)arg3;
@property(nonatomic, readonly) id <WAPaymentSystemEventsHandler> systemEventsHandler;
@property(nonatomic, retain) id <WAPaymentSyncHandler> syncHandler;
@property(nonatomic, readonly) id <WAPaymentSupportHandlerProtocol> supportHandler;
@property(nonatomic, retain) id <WAPaymentServerPropsHandler> serverPropsHandler;
@property(nonatomic, readonly) id <WAPaymentSettingsServiceSectionProvider> settingsServiceSectionProvider;
@property(nonatomic, readonly) id <WAPaymentNotificationsHandler> notificationsHandler;
@property(nonatomic, readonly) Class navigationHelperHandler;
@property(nonatomic, readonly) id <WAPaymentFactoryDependencyProvider> factory;
@property(nonatomic, readonly) id <WAPaymentChatTransactionHandler> chatTransactionHandler;
@property(nonatomic, readonly) id <WAPaymentBlockedContactsList> blockedContactsList;
@end

