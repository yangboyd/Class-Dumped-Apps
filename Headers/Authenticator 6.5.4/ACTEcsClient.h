//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AriaObjC/ACTExpClient.h>

#import <AriaObjC/ACTIEcsClient-Protocol.h>

@class ACTObjCTaskScheduler, NSCharacterSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface ACTEcsClient : ACTExpClient <ACTIEcsClient>
{
    _Bool _enableECSClientTelemetry;
    int _clientStatus;
    NSMutableArray *_serverUrls;
    NSMutableArray *_listeners;
    NSString *_configActiveClientName;
    NSString *_configActiveClientVersion;
    NSDictionary *_configActive;
    NSDictionary *_incomingRequestParamDict;
    NSString *_configActiveRequestParams;
    NSString *_configActiveUserId;
    NSString *_configActiveUserToken;
    NSString *_configActiveDeviceId;
    ACTObjCTaskScheduler *_scheduler;
    unsigned long long _configActiveIntervalInSec;
    NSMutableDictionary *_loggers;
    NSString *_configActiveOfflineKey;
    NSCharacterSet *_encodingSet;
}

@property(retain) NSCharacterSet *encodingSet; // @synthesize encodingSet=_encodingSet;
@property(retain) NSString *configActiveOfflineKey; // @synthesize configActiveOfflineKey=_configActiveOfflineKey;
@property(retain) NSMutableDictionary *loggers; // @synthesize loggers=_loggers;
@property unsigned long long configActiveIntervalInSec; // @synthesize configActiveIntervalInSec=_configActiveIntervalInSec;
@property(retain) ACTObjCTaskScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property int clientStatus; // @synthesize clientStatus=_clientStatus;
@property _Bool enableECSClientTelemetry; // @synthesize enableECSClientTelemetry=_enableECSClientTelemetry;
@property(retain) NSString *configActiveDeviceId; // @synthesize configActiveDeviceId=_configActiveDeviceId;
@property(retain) NSString *configActiveUserToken; // @synthesize configActiveUserToken=_configActiveUserToken;
@property(retain) NSString *configActiveUserId; // @synthesize configActiveUserId=_configActiveUserId;
@property(retain) NSString *configActiveRequestParams; // @synthesize configActiveRequestParams=_configActiveRequestParams;
@property(retain) NSDictionary *incomingRequestParamDict; // @synthesize incomingRequestParamDict=_incomingRequestParamDict;
@property(retain) NSDictionary *configActive; // @synthesize configActive=_configActive;
@property(retain) NSString *configActiveClientVersion; // @synthesize configActiveClientVersion=_configActiveClientVersion;
@property(retain) NSString *configActiveClientName; // @synthesize configActiveClientName=_configActiveClientName;
@property(retain) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property(retain) NSMutableArray *serverUrls; // @synthesize serverUrls=_serverUrls;
- (void).cxx_destruct;
- (id)JSONSettingsWithAgentName:(id)arg1 forPath:(id)arg2;
- (id)doubleSettingsWithAgentName:(id)arg1 forPath:(id)arg2;
- (id)intSettingsWithAgentName:(id)arg1 forPath:(id)arg2;
- (id)stringSettingsWithAgentName:(id)arg1 forPath:(id)arg2;
- (double)settingWithAgentName:(id)arg1 forPath:(id)arg2 doubleDefaultValue:(double)arg3;
- (int)settingWithAgentName:(id)arg1 forPath:(id)arg2 intDefaultValue:(int)arg3;
- (_Bool)settingWithAgentName:(id)arg1 forPath:(id)arg2 boolDefaultValue:(_Bool)arg3;
- (id)settingWithAgentName:(id)arg1 forPath:(id)arg2 stringDefaultValue:(id)arg3;
- (id)keysWithAgentName:(id)arg1 forKeysPath:(id)arg2;
- (id)eTag;
- (_Bool)resume:(_Bool)arg1;
- (_Bool)resume;
- (_Bool)suspend;
- (_Bool)stop;
- (_Bool)start;
- (void)setAppExperimentIdsEnabled:(_Bool)arg1;
- (void)setRequestParameters:(id)arg1;
- (_Bool)setDeviceId:(id)arg1;
- (_Bool)setUserId:(id)arg1 userToken:(id)arg2;
- (_Bool)setUserId:(id)arg1;
- (_Bool)registerLogger:(id)arg1 forAgentName:(id)arg2;
- (_Bool)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (_Bool)setConfiguration:(id)arg1;
- (void)intakeData:(id)arg1 requestHeaders:(id)arg2 requestParams:(id)arg3 httpResponse:(id)arg4 eTag:(id)arg5 userToken:(id)arg6 error:(id)arg7 offlineKey:(id)arg8;
- (void)sendEventWithName:(id)arg1 value1:(id)arg2 value2:(id)arg3;
- (_Bool)isAppExperimentIdsEnabled;
- (_Bool)correctKey:(id)arg1;
- (void)createKey;
- (void)createRequestParams;
- (id)expireDateFromHeaders:(id)arg1;
- (void)getNewConfigStarting:(_Bool)arg1;
- (void)gotValidConfigNeedToSave:(_Bool)arg1;
- (id)createEventContext:(_Bool)arg1 failed:(_Bool)arg2;
- (id)objectForAgent:(id)arg1 atPath:(id)arg2;
- (void)onTimer;
- (void)sendRequestForNewConfigSettings;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

