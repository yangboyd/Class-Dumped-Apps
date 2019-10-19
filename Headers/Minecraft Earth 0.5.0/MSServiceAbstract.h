//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSService.h"
#import "MSServiceCommon.h"

@class MSChannelUnitConfiguration, NSString;

@interface MSServiceAbstract : NSObject <MSServiceCommon, MSService>
{
    _Bool _startedFromApplication;
    _Bool _started;
    id <MSChannelGroupProtocol> _channelGroup;
    id <MSChannelUnitProtocol> _channelUnit;
    NSString *_appSecret;
    NSString *_defaultTransmissionTargetToken;
    NSString *_isEnabledKey;
}

+ (_Bool)isEnabled;
+ (void)setEnabled:(_Bool)arg1;
@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
@property(readonly, copy, nonatomic) NSString *isEnabledKey; // @synthesize isEnabledKey=_isEnabledKey;
@property(nonatomic) _Bool startedFromApplication; // @synthesize startedFromApplication=_startedFromApplication;
@property(retain, nonatomic) NSString *defaultTransmissionTargetToken; // @synthesize defaultTransmissionTargetToken=_defaultTransmissionTargetToken;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) id <MSChannelUnitProtocol> channelUnit; // @synthesize channelUnit=_channelUnit;
@property(retain, nonatomic) id <MSChannelGroupProtocol> channelGroup; // @synthesize channelGroup=_channelGroup;
- (void).cxx_destruct;
- (void)updateConfigurationWithAppSecret:(id)arg1 transmissionTargetToken:(id)arg2;
- (void)startWithChannelGroup:(id)arg1 appSecret:(id)arg2 transmissionTargetToken:(id)arg3 fromApplication:(_Bool)arg4;
- (_Bool)isStartedFromApplication;
- (_Bool)isAppSecretRequired;
@property(readonly, nonatomic) long long initializationPriority;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (_Bool)canBeUsed;
- (void)applyEnabledState:(_Bool)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)init;

// Remaining properties
@property(retain, nonatomic) MSChannelUnitConfiguration *channelUnitConfiguration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *groupId;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

