//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSChannelDelegate.h"

@class MSPropertyConfigurator, NSMutableDictionary, NSString;

@interface MSAnalyticsTransmissionTarget : NSObject <MSChannelDelegate>
{
    MSPropertyConfigurator *_propertyConfigurator;
    MSAnalyticsTransmissionTarget *_parentTarget;
    NSMutableDictionary *_childTransmissionTargets;
    NSString *_isEnabledKey;
    id <MSChannelGroupProtocol> _channelGroup;
    NSString *_transmissionTargetToken;
}

+ (void)setAuthenticationProvider:(id)arg1;
+ (id)authenticationProvider;
+ (void)addAuthenticationProvider:(id)arg1;
@property(readonly, copy, nonatomic) NSString *transmissionTargetToken; // @synthesize transmissionTargetToken=_transmissionTargetToken;
@property(readonly, nonatomic) id <MSChannelGroupProtocol> channelGroup; // @synthesize channelGroup=_channelGroup;
@property(readonly, nonatomic) NSString *isEnabledKey; // @synthesize isEnabledKey=_isEnabledKey;
@property(retain, nonatomic) NSMutableDictionary *childTransmissionTargets; // @synthesize childTransmissionTargets=_childTransmissionTargets;
@property(retain, nonatomic) MSAnalyticsTransmissionTarget *parentTarget; // @synthesize parentTarget=_parentTarget;
@property(readonly, nonatomic) MSPropertyConfigurator *propertyConfigurator; // @synthesize propertyConfigurator=_propertyConfigurator;
- (void).cxx_destruct;
- (_Bool)isImmediateParent;
- (void)channel:(id)arg1 prepareLog:(id)arg2;
- (void)resume;
- (void)pause;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (id)transmissionTargetForToken:(id)arg1;
- (void)trackEvent:(id)arg1 withTypedProperties:(id)arg2 flags:(unsigned long long)arg3;
- (void)trackEvent:(id)arg1 withTypedProperties:(id)arg2;
- (void)trackEvent:(id)arg1 withProperties:(id)arg2 flags:(unsigned long long)arg3;
- (void)trackEvent:(id)arg1 withProperties:(id)arg2;
- (void)trackEvent:(id)arg1;
- (id)initWithTransmissionTargetToken:(id)arg1 parentTarget:(id)arg2 channelGroup:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

