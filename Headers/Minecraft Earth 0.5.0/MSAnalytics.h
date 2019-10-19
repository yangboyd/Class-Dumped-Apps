//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSServiceAbstract.h"

#import "MSChannelDelegate.h"
#import "MSServiceInternal.h"
#import "MSSessionTrackerDelegate.h"

@class MSAnalyticsTransmissionTarget, MSChannelUnitConfiguration, MSSessionTracker, NSMutableDictionary, NSString;

@interface MSAnalytics : MSServiceAbstract <MSSessionTrackerDelegate, MSServiceInternal, MSChannelDelegate>
{
    _Bool _autoPageTrackingEnabled;
    MSChannelUnitConfiguration *_channelUnitConfiguration;
    MSSessionTracker *_sessionTracker;
    id <MSAnalyticsDelegate> _delegate;
    unsigned long long _flushInterval;
    NSMutableDictionary *_transmissionTargets;
    MSAnalyticsTransmissionTarget *_defaultTransmissionTarget;
    id <MSChannelUnitProtocol> _oneCollectorChannelUnit;
    id <MSChannelUnitProtocol> _oneCollectorCriticalChannelUnit;
    id <MSChannelUnitProtocol> _criticalChannelUnit;
}

+ (void)setDelegate:(id)arg1;
+ (void)resetSharedInstance;
+ (void)resumeTransmissionTargetForToken:(id)arg1;
+ (void)pauseTransmissionTargetForToken:(id)arg1;
+ (id)transmissionTargetForToken:(id)arg1;
+ (void)setTransmissionInterval:(unsigned long long)arg1;
+ (_Bool)isAutoPageTrackingEnabled;
+ (void)setAutoPageTrackingEnabled:(_Bool)arg1;
+ (void)resume;
+ (void)pause;
+ (void)trackPage:(id)arg1 withProperties:(id)arg2;
+ (void)trackPage:(id)arg1;
+ (void)trackEvent:(id)arg1 withTypedProperties:(id)arg2 forTransmissionTarget:(id)arg3 flags:(unsigned long long)arg4;
+ (void)trackEvent:(id)arg1 withProperties:(id)arg2 forTransmissionTarget:(id)arg3 flags:(unsigned long long)arg4;
+ (void)trackEvent:(id)arg1 withTypedProperties:(id)arg2 flags:(unsigned long long)arg3;
+ (void)trackEvent:(id)arg1 withTypedProperties:(id)arg2;
+ (void)trackEvent:(id)arg1 withProperties:(id)arg2 flags:(unsigned long long)arg3;
+ (void)trackEvent:(id)arg1 withProperties:(id)arg2;
+ (void)trackEvent:(id)arg1;
+ (id)logTag;
+ (id)serviceName;
+ (id)sharedInstance;
@property(retain, nonatomic) id <MSChannelUnitProtocol> criticalChannelUnit; // @synthesize criticalChannelUnit=_criticalChannelUnit;
@property(retain, nonatomic) id <MSChannelUnitProtocol> oneCollectorCriticalChannelUnit; // @synthesize oneCollectorCriticalChannelUnit=_oneCollectorCriticalChannelUnit;
@property(retain, nonatomic) id <MSChannelUnitProtocol> oneCollectorChannelUnit; // @synthesize oneCollectorChannelUnit=_oneCollectorChannelUnit;
@property(retain, nonatomic) MSAnalyticsTransmissionTarget *defaultTransmissionTarget; // @synthesize defaultTransmissionTarget=_defaultTransmissionTarget;
@property(retain, nonatomic) NSMutableDictionary *transmissionTargets; // @synthesize transmissionTargets=_transmissionTargets;
@property(nonatomic) unsigned long long flushInterval; // @synthesize flushInterval=_flushInterval;
@property(retain, nonatomic) id <MSAnalyticsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSSessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
@property(retain, nonatomic) MSChannelUnitConfiguration *channelUnitConfiguration; // @synthesize channelUnitConfiguration=_channelUnitConfiguration;
@property(getter=isAutoPageTrackingEnabled) _Bool autoPageTrackingEnabled; // @synthesize autoPageTrackingEnabled=_autoPageTrackingEnabled;
- (void).cxx_destruct;
- (void)channel:(id)arg1 didFailSendingLog:(id)arg2 withError:(id)arg3;
- (void)channel:(id)arg1 didSucceedSendingLog:(id)arg2;
- (void)channel:(id)arg1 willSendLog:(id)arg2;
- (void)sessionTracker:(id)arg1 processLog:(id)arg2;
- (void)resumeTransmissionTargetForToken:(id)arg1;
- (void)pauseTransmissionTargetForToken:(id)arg1;
- (id)createTransmissionTargetForToken:(id)arg1;
- (id)transmissionTargetForToken:(id)arg1;
- (void)setTransmissionInterval:(unsigned long long)arg1;
- (void)sendLog:(id)arg1 flags:(unsigned long long)arg2;
- (void)trackPage:(id)arg1 withProperties:(id)arg2;
- (id)removeInvalidProperties:(id)arg1;
- (void)resume;
- (void)pause;
- (void)trackEvent:(id)arg1 withTypedProperties:(id)arg2 forTransmissionTarget:(id)arg3 flags:(unsigned long long)arg4;
- (void)trackEvent:(id)arg1 withProperties:(id)arg2 forTransmissionTarget:(id)arg3 flags:(unsigned long long)arg4;
- (void)updateConfigurationWithAppSecret:(id)arg1 transmissionTargetToken:(id)arg2;
- (_Bool)isAppSecretRequired;
- (void)applyEnabledState:(_Bool)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, copy, nonatomic) NSString *groupId;
- (void)startWithChannelGroup:(id)arg1 appSecret:(id)arg2 transmissionTargetToken:(id)arg3 fromApplication:(_Bool)arg4;
- (id)init;
- (id)validateAppCenterStringTypedPropertyValue:(id)arg1;
- (id)validateAppCenterPropertyName:(id)arg1;
- (id)validateAppCenterTypedProperty:(id)arg1;
- (id)validateAppCenterEventProperties:(id)arg1;
- (id)validateProperties:(id)arg1 forLogName:(id)arg2 andType:(id)arg3;
- (id)validateEventName:(id)arg1 forLogType:(id)arg2;
- (_Bool)validateLog:(id)arg1;
- (_Bool)channelUnit:(id)arg1 shouldFilterLog:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *appSecret;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(retain, nonatomic) id <MSChannelGroupProtocol> channelGroup;
@property(retain, nonatomic) id <MSChannelUnitProtocol> channelUnit;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSString *defaultTransmissionTargetToken;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long initializationPriority;
@property(readonly) Class superclass;

@end

