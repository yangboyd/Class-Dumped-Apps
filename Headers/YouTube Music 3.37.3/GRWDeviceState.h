//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIPReachability, NSDictionary;

@interface GRWDeviceState : NSObject
{
    _Bool _isWiFiConnected;
    _Bool _keyboardVisible;
    _Bool _reachabilityReady;
    GIPReachability *_reachability;
}

+ (_Bool)determineIfiOSWasUpgraded;
+ (_Bool)determineIfAppWasUpgraded;
+ (_Bool)determineIfAppCrashedLastRun;
+ (_Bool)isVoiceOverEnabled;
+ (_Bool)iOSWasUpgraded;
+ (_Bool)appWasUpgraded;
+ (id)countryCode;
+ (id)languageCode;
+ (void)initialize;
@property(nonatomic, getter=isReachabilityReady) _Bool reachabilityReady; // @synthesize reachabilityReady=_reachabilityReady;
@property(getter=isKeyboardVisible) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(retain, nonatomic) GIPReachability *reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) _Bool isWiFiConnected; // @synthesize isWiFiConnected=_isWiFiConnected;
- (void).cxx_destruct;
- (_Bool)appUnexpectedlyTerminatedOnLastRun;
- (void)handleKeyboardWillHideNotification:(id)arg1;
- (void)handleKeyboardWillShowNotification:(id)arg1;
- (void)appForegrounded:(id)arg1;
- (void)appBackgrounded:(id)arg1;
- (void)startReachabilityWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSDictionary *attributesOfFileSystem;
@property(readonly, nonatomic) long long lastApplicationState;
- (void)setLastApplicationState:(long long)arg1;
- (unsigned long long)freeStorage;
- (unsigned long long)totalStorage;
- (_Bool)isWifiConnected;
@property(readonly, nonatomic) _Bool isNetworkConnected;
@property(readonly, nonatomic) float batteryLevel;
@property(readonly, nonatomic) _Bool isCharging;
- (void)setupDeviceState;
- (void)dealloc;
- (id)init;
- (_Bool)isValidType:(long long)arg1;
- (void)logPromoNotShownReason:(int)arg1 forMessage:(id)arg2;
- (id)notSatisfiedConditionsForMessage:(id)arg1;
- (_Bool)satisfiesMessage:(id)arg1;

@end

