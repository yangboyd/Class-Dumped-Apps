//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAComponent.h>

#import <Airship/UAEventManagerDelegate-Protocol.h>
#import <Airship/UAExtendableAnalyticsHeaders-Protocol.h>

@class NSDate, NSMutableArray, NSNotificationCenter, NSString, UAChannel, UADate, UADispatcher, UAEventManager, UAPreferenceDataStore, UARuntimeConfig;
@protocol UAAnalyticsEventConsumerProtocol;

@interface UAAnalytics : UAComponent <UAExtendableAnalyticsHeaders, UAEventManagerDelegate>
{
    _Bool _isEnteringForeground;
    NSString *_conversionSendID;
    NSString *_conversionPushMetadata;
    NSString *_sessionID;
    NSDate *_lastSendTime;
    id <UAAnalyticsEventConsumerProtocol> _eventConsumer;
    UARuntimeConfig *_config;
    UAPreferenceDataStore *_dataStore;
    UAChannel *_channel;
    UAEventManager *_eventManager;
    NSNotificationCenter *_notificationCenter;
    UADate *_date;
    UADispatcher *_dispatcher;
    NSMutableArray *_SDKExtensions;
    NSMutableArray *_headerBlocks;
    NSString *_currentScreen;
    NSString *_previousScreen;
    double _startTime;
}

+ (id)nameForSDKExtension:(unsigned long long)arg1;
+ (id)analyticsWithConfig:(id)arg1 dataStore:(id)arg2 channel:(id)arg3 eventManager:(id)arg4 notificationCenter:(id)arg5 date:(id)arg6 dispatcher:(id)arg7;
+ (id)analyticsWithConfig:(id)arg1 dataStore:(id)arg2 channel:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *previousScreen; // @synthesize previousScreen=_previousScreen;
@property(copy, nonatomic) NSString *currentScreen; // @synthesize currentScreen=_currentScreen;
@property(retain, nonatomic) NSMutableArray *headerBlocks; // @synthesize headerBlocks=_headerBlocks;
@property(nonatomic) _Bool isEnteringForeground; // @synthesize isEnteringForeground=_isEnteringForeground;
@property(retain, nonatomic) NSMutableArray *SDKExtensions; // @synthesize SDKExtensions=_SDKExtensions;
@property(retain, nonatomic) UADispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) UADate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) UAEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) UAChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) UARuntimeConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) id <UAAnalyticsEventConsumerProtocol> eventConsumer; // @synthesize eventConsumer=_eventConsumer;
@property(readonly, nonatomic) NSDate *lastSendTime; // @synthesize lastSendTime=_lastSendTime;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *conversionPushMetadata; // @synthesize conversionPushMetadata=_conversionPushMetadata;
@property(copy, nonatomic) NSString *conversionSendID; // @synthesize conversionSendID=_conversionSendID;
- (void)onDataCollectionEnabledChanged;
- (void)addAnalyticsHeadersBlock:(CDUnknownBlockType)arg1;
- (id)analyticsHeaders;
- (void)registerSDKExtension:(unsigned long long)arg1 version:(id)arg2;
- (void)onComponentEnableChange;
- (void)scheduleUpload;
- (void)cancelUpload;
- (void)stopTrackingScreen;
- (void)trackScreen:(id)arg1;
- (id)currentAssociatedDeviceIdentifiers;
- (void)associateDeviceIdentifiers:(id)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)startSession;
- (void)launchedFromNotification:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)initWithConfig:(id)arg1 dataStore:(id)arg2 channel:(id)arg3 eventManager:(id)arg4 notificationCenter:(id)arg5 date:(id)arg6 dispatcher:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

