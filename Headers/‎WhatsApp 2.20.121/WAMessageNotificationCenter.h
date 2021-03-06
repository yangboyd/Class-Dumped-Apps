//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WANotificationConfiguration.h>

#import "WANotificationWindowDelegate-Protocol.h"

@class AVAudioPlayer, CTCallCenter, NSArray, NSMutableArray, NSMutableDictionary, NSString, WANotificationWindow, WAPushPayloadDecrypter, WAPushSound, WASoundEffect, XMPPAttributes, XMPPConnectionMain;
@protocol WAMessageNotificationCenterDelegate;

@interface WAMessageNotificationCenter : WANotificationConfiguration <WANotificationWindowDelegate>
{
    CTCallCenter *_callCenter;
    XMPPConnectionMain *_xmppConnection;
    WAPushPayloadDecrypter *_pushPayloadDecrypter;
    WASoundEffect *_incomingSoundEffect;
    WASoundEffect *_outgoingSoundEffect;
    AVAudioPlayer *_incomingSoundShort;
    NSString *_needsUpdateServerUUID;
    _Bool _requestInProgress;
    NSMutableArray *_presentedInAppNotificationAlerts;
    NSMutableArray *_deferredInAppNotificationAlerts;
    unsigned long long _timeoutCounter;
    NSMutableDictionary *_activeAlertViews;
    _Bool _showIOSStyleInAppNotifications;
    NSMutableDictionary *_customPushConfigs;
    XMPPAttributes *_changeTrackedGlobalConfigAttributes;
    _Bool _hasSubmittedInitialGlobalConfig;
    _Bool _cachedShowMessagePreview;
    NSString *_cachedPersonalMessageSound;
    _Bool _cachedPersonalMessageAlertsEnabled;
    NSString *_cachedGroupMessageSound;
    _Bool _cachedGroupMessageAlertsEnabled;
    NSString *_cachedCallSound;
    _Bool _cachedCallAlertsEnabled;
    _Bool _playOfflineMessageSound;
    _Bool _chatSoundsEnabled;
    _Bool _chatVibrateEnabled;
    WANotificationWindow *_notificationWindow;
    id <WAMessageNotificationCenterDelegate> _delegate;
    unsigned long long _inAppAlertStyle;
    NSArray *_pushSoundGroups;
    NSArray *_ringtoneGroups;
    WAPushSound *_defaultRingtone;
}

+ (id)titleForWAAlertStyle:(unsigned long long)arg1;
+ (void)promptUserForToUnmuteFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)promptUserForMuteEndDateFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) WAPushSound *defaultRingtone; // @synthesize defaultRingtone=_defaultRingtone;
@property(readonly, nonatomic) NSArray *ringtoneGroups; // @synthesize ringtoneGroups=_ringtoneGroups;
@property(readonly, nonatomic) NSArray *pushSoundGroups; // @synthesize pushSoundGroups=_pushSoundGroups;
@property(nonatomic) unsigned long long inAppAlertStyle; // @synthesize inAppAlertStyle=_inAppAlertStyle;
@property(nonatomic) _Bool chatVibrateEnabled; // @synthesize chatVibrateEnabled=_chatVibrateEnabled;
@property(nonatomic) _Bool chatSoundsEnabled; // @synthesize chatSoundsEnabled=_chatSoundsEnabled;
@property(nonatomic) _Bool playOfflineMessageSound; // @synthesize playOfflineMessageSound=_playOfflineMessageSound;
@property(nonatomic) __weak id <WAMessageNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WANotificationWindow *notificationWindow; // @synthesize notificationWindow=_notificationWindow;
- (void)showLocalNotificationWithAlertText:(id)arg1;
- (void)showLocalNotificationForFailedMessageSendWithBodyText:(id)arg1 userInfo:(id)arg2;
- (void)presentLocalNotificationIfNeededForMessage:(id)arg1;
- (void)didDismissAlertView:(id)arg1;
- (void)showAlertView:(id)arg1;
- (void)launchChatFromInAppAlert:(id)arg1 forJID:(id)arg2;
- (void)showInAppNotificationAlertForMessage:(id)arg1;
- (_Bool)shouldOpenPaymentTransaction:(id)arg1;
- (_Bool)isChatVisibleDuringNotificationWithWindow:(id)arg1;
- (void)notificationWindow:(id)arg1 didSelectPaymentNotificationWithUserInfo:(id)arg2;
- (void)notificationWindowDidDeclineCall:(id)arg1;
- (void)notificationWindowDidAcceptCall:(id)arg1;
- (void)notificationWindow:(id)arg1 didSelectBasicNotification:(id)arg2;
- (void)notificationWindowDidCancel:(id)arg1;
- (void)notificationWindow:(id)arg1 userDidSubmitText:(id)arg2;
- (void)messageNotificationWindowTapped:(id)arg1;
- (void)statusErrorNotificationWindowTapped:(id)arg1;
- (void)showInAppNotificationBannerForMessage:(id)arg1;
- (void)showInAppNotificationForMessage:(id)arg1;
- (void)resetDeferredInAppNotifications;
- (void)cancelDeferredInAppNotificationWithIdentifier:(id)arg1;
- (void)deferInAppNotification:(id)arg1;
- (void)processDeferredNotificationsByDiscardingNotifications:(_Bool)arg1;
- (void)showInAppNotificationForIncomingMessage:(id)arg1;
- (_Bool)shouldDisplayNotificationsInApp;
- (void)presentBasicNotification:(id)arg1;
- (void)presentPaymentNotification:(id)arg1;
- (void)presentPendingNotifications;
- (void)presentNotificationForMessage:(id)arg1;
- (void)notifyBadgeControllerOfProcessedMessage:(id)arg1;
- (void)scheduleNotificationForMessage:(id)arg1;
- (void)transactionDidReceiveMessage:(id)arg1;
- (void)presentPeerLowBatteryNotificationForParticipantJID:(id)arg1 inGroupCall:(_Bool)arg2;
- (void)presentStatusErrorNotificationForMessage:(id)arg1;
- (void)presentInAppPreRegNotificationWithTapBlock:(CDUnknownBlockType)arg1;
- (void)presentLowBatteryNotification;
- (void)clearAllNotificationTimeouts;
@property(nonatomic) _Bool callAlertsEnabled;
@property(copy, nonatomic) NSString *callSound;
@property(readonly, nonatomic) NSString *localizedCallSound;
@property(nonatomic) _Bool groupMessageAlertsEnabled;
@property(copy, nonatomic) NSString *groupMessageSound;
@property(readonly, nonatomic) NSString *localizedGroupMessageSound;
@property(nonatomic) _Bool personalMessageAlertsEnabled;
@property(copy, nonatomic) NSString *personalMessageSound;
@property(readonly, nonatomic) NSString *localizedPersonalMessageSound;
@property(nonatomic) _Bool showMessagePreview;
- (void)playOutgoingSoundEffect;
- (void)playIncomingSoundEffectShort;
- (void)playIncomingSoundEffect;
- (void)playOutgoingSoundEffectIfAllowed;
- (void)playIncomingSoundEffectForWAMessage:(id)arg1;
@property(copy, nonatomic) NSString *voipToken;
@property(copy, nonatomic) NSString *apnsToken;
- (_Bool)hasValidVOIPToken;
- (_Bool)hasValidAPNSToken;
- (void)setPushNotificationSound:(id)arg1 forJID:(id)arg2;
- (id)localizedPushNotificationSoundForJID:(id)arg1;
- (void)setMuteDate:(id)arg1 forJID:(id)arg2;
- (id)localizedMuteDateForJID:(id)arg1 forVoiceOver:(_Bool)arg2;
- (id)allChatJIDsWithMuteDate;
- (void)updateServerIfNecessary;
- (void)setNeedsUpdateServer;
- (id)changeTrackedGlobalConfigAttributes;
- (id)globalConfigPlatform;
- (id)globalConfigPushVersion;
- (void)fetchPushConfigForJID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)withCustomPushConfigForJID:(id)arg1 insertIfNeeded:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)pruneCustomPushConfigs;
- (void)dropDeferredObjects;
- (void)loadDeferredObjects;
- (void)registerDailyStatsCallback:(id)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performOnNotificationsDisabled:(CDUnknownBlockType)arg1;
- (void)sendDisplayedMessageNotificationsToWebClientIfNeeded;
@property(readonly, nonatomic) _Bool shouldDelayNotificationDueToWebclientActivity;
- (void)loadNotificationSounds;
- (void)resetToDefaults_willDeleteChatStorage:(_Bool)arg1;
- (void)migrateSettings;
- (void)loadGlobalSettings;
- (id)additionalRegisteredDefaults;
- (void)connectionStateDidChange:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)initWithXMPPConnection:(id)arg1 userDefaults:(id)arg2 chatStorage:(id)arg3 pushPayloadDecrypter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

