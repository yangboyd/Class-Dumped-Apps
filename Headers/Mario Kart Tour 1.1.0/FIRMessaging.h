//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIRMessagingClientDelegate.h"
#import "FIRMessagingReceiverDelegate.h"
#import "GULReachabilityDelegate.h"

@class FIRInstanceID, FIRMessagingClient, FIRMessagingDataMessageManager, FIRMessagingPubSub, FIRMessagingReceiver, FIRMessagingRmqManager, FIRMessagingSyncMessageManager, GULReachabilityChecker, NSData, NSMutableSet, NSString, NSUserDefaults;

@interface FIRMessaging : NSObject <FIRMessagingClientDelegate, FIRMessagingReceiverDelegate, GULReachabilityDelegate>
{
    _Bool _shouldEstablishDirectChannel;
    _Bool _isClientSetup;
    id <FIRMessagingDelegate> _delegate;
    NSData *_apnsTokenData;
    NSString *_defaultFcmToken;
    FIRInstanceID *_instanceID;
    FIRMessagingClient *_client;
    GULReachabilityChecker *_reachability;
    FIRMessagingDataMessageManager *_dataMessageManager;
    FIRMessagingPubSub *_pubsub;
    FIRMessagingRmqManager *_rmq2Manager;
    FIRMessagingReceiver *_receiver;
    FIRMessagingSyncMessageManager *_syncMessageManager;
    NSUserDefaults *_messagingUserDefaults;
    NSMutableSet *_loggedMessageIDs;
}

+ (id)firebaselocalesMap;
+ (id)firebaseLocales;
+ (id)currentLocale;
+ (_Bool)createApplicationSupportSubDirectory:(id)arg1;
+ (id)pathForApplicationSupportSubDirectory:(id)arg1;
+ (_Bool)hasApplicationSupportSubDirectory:(id)arg1;
+ (id)FIRMessagingSDKCurrentLocale;
+ (id)FIRMessagingSDKVersion;
+ (id)createFIRMessagingMessageWithMessage:(id)arg1 to:(id)arg2 withID:(id)arg3 timeToLive:(long long)arg4 delay:(int)arg5;
+ (id)normalizeTopic:(id)arg1;
+ (_Bool)isAPNSSyncMessage:(id)arg1;
+ (void)didReceiveConfigureSDKNotification:(id)arg1;
+ (void)load;
+ (id)messaging;
@property(retain, nonatomic) NSMutableSet *loggedMessageIDs; // @synthesize loggedMessageIDs=_loggedMessageIDs;
@property(retain, nonatomic) NSUserDefaults *messagingUserDefaults; // @synthesize messagingUserDefaults=_messagingUserDefaults;
@property(retain, nonatomic) FIRMessagingSyncMessageManager *syncMessageManager; // @synthesize syncMessageManager=_syncMessageManager;
@property(retain, nonatomic) FIRMessagingReceiver *receiver; // @synthesize receiver=_receiver;
@property(retain, nonatomic) FIRMessagingRmqManager *rmq2Manager; // @synthesize rmq2Manager=_rmq2Manager;
@property(retain, nonatomic) FIRMessagingPubSub *pubsub; // @synthesize pubsub=_pubsub;
@property(retain, nonatomic) FIRMessagingDataMessageManager *dataMessageManager; // @synthesize dataMessageManager=_dataMessageManager;
@property(retain, nonatomic) GULReachabilityChecker *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) FIRMessagingClient *client; // @synthesize client=_client;
@property(nonatomic) _Bool isClientSetup; // @synthesize isClientSetup=_isClientSetup;
@property(retain, nonatomic) FIRInstanceID *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) NSString *defaultFcmToken; // @synthesize defaultFcmToken=_defaultFcmToken;
@property(retain, nonatomic) NSData *apnsTokenData; // @synthesize apnsTokenData=_apnsTokenData;
@property(nonatomic) _Bool shouldEstablishDirectChannel; // @synthesize shouldEstablishDirectChannel=_shouldEstablishDirectChannel;
@property(nonatomic) __weak id <FIRMessagingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)defaultInstanceIDTokenWasRefreshed:(id)arg1;
- (void)didReceiveDefaultInstanceIDToken:(id)arg1;
- (BOOL)networkType;
- (_Bool)isNetworkAvailable;
- (void)onNetworkStatusChanged;
- (void)reachability:(id)arg1 statusChanged:(int)arg2;
- (void)receiver:(id)arg1 receivedRemoteMessage:(id)arg2;
- (void)sendMessage:(id)arg1 to:(id)arg2 withMessageID:(id)arg3 timeToLive:(long long)arg4;
- (void)unsubscribeFromTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unsubscribeFromTopic:(id)arg1;
- (void)subscribeToTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeToTopic:(id)arg1;
- (void)disconnect;
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyOfDirectChannelConnectionChange;
- (void)updateAutomaticClientConnection;
- (_Bool)shouldBeConnectedAutomatically;
@property(readonly, nonatomic) _Bool isDirectChannelEstablished;
- (void)applicationStateChanged;
- (void)notifyDelegateOfFCMTokenAvailability;
- (void)validateDelegateConformsToTokenAvailabilityMethods;
- (void)deleteFCMTokenForSenderID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrieveFCMTokenForSenderID:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *FCMToken;
@property(nonatomic, getter=isAutoInitEnabled) _Bool autoInitEnabled;
- (void)setAPNSToken:(id)arg1 type:(long long)arg2;
@property(copy, nonatomic) NSData *APNSToken;
- (id)linkURLFromMessage:(id)arg1;
- (void)handleIncomingLinkIfNeededFromMessage:(id)arg1;
- (_Bool)handleContextManagerMessage:(id)arg1;
- (id)appDidReceiveMessage:(id)arg1;
- (void)teardown;
- (void)setupSyncMessageManager;
- (void)setupTopics;
- (void)setupRmqManager;
- (void)setupDataMessageManager;
- (void)setupClient;
- (void)setupReceiver;
- (void)setupNotificationListeners;
- (void)setupApplicationSupportSubDirectory;
- (void)start;
- (void)configureMessaging:(id)arg1;
- (void)dealloc;
- (id)initPrivately;
- (id)initWithInstanceID:(id)arg1 userDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

