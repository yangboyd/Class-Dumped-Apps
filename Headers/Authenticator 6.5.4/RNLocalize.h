//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <React/RCTEventEmitter.h>

#import <RNLocalize/RCTBridgeModule-Protocol.h>

@class NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RNLocalize : RCTEventEmitter <RCTBridgeModule>
{
}

+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void)onLocalizationDidChange;
- (id)supportedEvents;
- (id)constantsToExport;
- (void)stopObserving;
- (void)startObserving;
- (id)exportedConstants;
- (_Bool)usesMetricSystemForLocale:(id)arg1;
- (_Bool)uses24HourClockForLocale:(id)arg1;
- (id)temperatureUnitForLocale:(id)arg1 countryCode:(id)arg2;
- (id)numberFormatSettingsForLocale:(id)arg1;
- (id)languageTagForLanguageCode:(id)arg1 scriptCode:(id)arg2 countryCode:(id)arg3;
- (id)currencyCodeForLocale:(id)arg1;
- (id)countryCodeForLocale:(id)arg1;
- (id)calendarForLocale:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

