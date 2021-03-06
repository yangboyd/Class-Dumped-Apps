//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IAInterfaceSingleton-Protocol.h>
#import <Funny/IANetworkingClientDelegate-Protocol.h>

@class IAAdModel, NSDateFormatter, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IAEventsReporter : NSObject <IANetworkingClientDelegate, IAInterfaceSingleton>
{
    IAAdModel *_mostRecentAdModel;
    NSMutableDictionary *_networkingClientsDictionary;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_dateFormatterHour;
    NSObject<OS_dispatch_queue> *_sendSerialQueue;
    NSObject<OS_dispatch_queue> *_validationSerialQueue;
    NSString *_customVersionAddition;
    NSMutableDictionary *_eventIDFromNofificationName;
    NSMutableDictionary *_eventsPerSessionMap;
    NSMutableDictionary *_eventsLimitValidators;
    NSObject<OS_dispatch_semaphore> *_eventsLimitSyncSemaphore;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *eventsLimitSyncSemaphore; // @synthesize eventsLimitSyncSemaphore=_eventsLimitSyncSemaphore;
@property(retain, nonatomic) NSMutableDictionary *eventsLimitValidators; // @synthesize eventsLimitValidators=_eventsLimitValidators;
@property(readonly, nonatomic) NSMutableDictionary *eventsPerSessionMap; // @synthesize eventsPerSessionMap=_eventsPerSessionMap;
@property(readonly, nonatomic) NSMutableDictionary *eventIDFromNofificationName; // @synthesize eventIDFromNofificationName=_eventIDFromNofificationName;
@property(readonly, nonatomic) NSString *customVersionAddition; // @synthesize customVersionAddition=_customVersionAddition;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue; // @synthesize validationSerialQueue=_validationSerialQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sendSerialQueue; // @synthesize sendSerialQueue=_sendSerialQueue;
@property(readonly, nonatomic) NSDateFormatter *dateFormatterHour; // @synthesize dateFormatterHour=_dateFormatterHour;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) NSMutableDictionary *networkingClientsDictionary; // @synthesize networkingClientsDictionary=_networkingClientsDictionary;
@property(copy) IAAdModel *mostRecentAdModel; // @synthesize mostRecentAdModel=_mostRecentAdModel;
- (void)dealloc;
- (id)eventCodeForCrash;
- (id)eventCodeForClickThroughEvent;
- (id)eventCodeForSKAdNetworkInvalidKeys;
- (id)eventCodeForFailedAdReporting;
- (id)eventCodeForAdDestroyed;
- (id)eventCodeForAdExpired;
- (id)eventCodeForAdLoadedFailForSomeReason;
- (id)eventCodeForStoreKitFailedToOpenUsingID;
- (id)eventCodeForATSSettingsError;
- (id)eventCodeForFatalConfigError;
- (id)eventCodeForNonSecureURL;
- (id)eventCodeForFraudPopup;
- (id)eventCodeForFraudClick;
- (id)eventCodeForCompanionFilteredEvent;
- (id)eventCodeForCompanionSuccessEvent;
- (id)eventCodeForCompanionFailedEvent;
- (id)eventCodeForMRAIDVideoFailedStarting;
- (id)eventCodeForMRAIDVideoDetectedEvent;
- (id)eventCodeForLatencyEvent;
- (id)eventCodeForCompanionAdClick;
- (id)eventCodeForReadyOnClientEvent;
- (_Bool)checkAndSetEventQuotaForCode:(id)arg1 session:(id)arg2;
- (void)sendCILogForSDKKeyEvent:(unsigned long long)arg1 withCode:(id)arg2 withDescription:(id)arg3;
- (id)adPlacementForCurrentMediationType:(id)arg1 fromString:(id)arg2;
- (id)tableValueForErrorCode:(id)arg1;
- (id)baseEventDataDictionaryForAdModel:(id)arg1;
- (id)dataForRequestFromEventDictionary:(id)arg1;
- (id)validatedEventDictionary:(id)arg1;
- (_Bool)networkingClient:(id)arg1 shouldRedirectToURL:(id)arg2;
- (void)networkingClient:(id)arg1 failedWithError:(id)arg2;
- (void)networkingClient:(id)arg1 succeededWithHTTPStatusCode:(long long)arg2 headers:(id)arg3 data:(id)arg4;
- (id)keyByNetworkingClient:(id)arg1;
- (void)sendRequestWithURLString:(id)arg1 eventInfo:(id)arg2 shouldBlockRedirect:(_Bool)arg3;
- (void)sendEventWithInfo:(id)arg1;
- (void)sendSKAdNetworkErrorEvent:(id)arg1;
- (void)reportFailedAd:(id)arg1;
- (void)reportSurvivalRateEventWithCode:(id)arg1 notification:(id)arg2;
- (void)reportMRAIDVideoEventWithCode:(id)arg1 extraData:(id)arg2 forAdModel:(id)arg3;
- (void)reportVideoCompanionAdClickEventForAdModel:(id)arg1 extraData:(id)arg2;
- (void)reportReadyOnClientEventForAdModel:(id)arg1 extraData:(id)arg2;
- (void)reportNonSecureConnectionForAd:(id)arg1 adData:(id)arg2;
- (void)reportFraudPopupEventForAd:(id)arg1 withPopupType:(id)arg2 message:(id)arg3 fromHost:(id)arg4;
- (void)reportFraudClickEventForAdModel:(id)arg1 withRequestingURL:(id)arg2 IAWrapper:(id)arg3 fraudActionTypeString:(id)arg4;
- (void)reportErrorEventForAdModel:(id)arg1 vastError:(id)arg2;
- (void)sendStoreKitFailedToOpenUsingID:(id)arg1;
- (void)sendStoreKitEvent:(id)arg1;
- (void)sendClickThroughEvent:(id)arg1;
- (void)sendATSSettingsError:(id)arg1;
- (void)sendFatalConfigError:(id)arg1;
- (void)sendAdDestroyedEvent:(id)arg1;
- (void)sendAdExpiredEvent:(id)arg1;
- (void)sendAdLoadedFailForSomeReasonEvent:(id)arg1;
- (void)sendOpenExternalBrowserEvent:(id)arg1;
- (void)sendPublisherShowEvent:(id)arg1;
- (void)sendMRAIDVideoCompletion:(id)arg1;
- (void)sendMRAIDVideoNotStartedEvent:(id)arg1;
- (void)sendMRAIDVideoDetectedEvent:(id)arg1;
- (void)sendLatencyEvent:(id)arg1;
- (void)sendVideoCompanionAdClickEvent:(id)arg1;
- (void)sendVideoReadyToPlayEvent:(id)arg1;
- (void)sendNonSecureConnectionEvent:(id)arg1;
- (void)sendFraudClickEvent:(id)arg1;
- (void)sendFraudPopupEvent:(id)arg1;
- (void)sendCompanionEvent:(id)arg1 withCode:(id)arg2;
- (void)sendCompanionFilteredEvent:(id)arg1;
- (void)sendCompanionSuccessEvent:(id)arg1;
- (void)sendCompanionFailedEvent:(id)arg1;
- (void)sendSDKClickEvent:(id)arg1;
- (void)sendSDKImpressionEvent:(id)arg1;
- (void)sendVASTErrorEvent:(id)arg1;
- (void)sendArrayOfBasicRequests:(id)arg1;
- (_Bool)useEventQuota:(id)arg1;
- (void)setupUnhandledExceptions;
- (void)setupEventsLimitation;
- (void)initDateFormatters;
- (id)customInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

