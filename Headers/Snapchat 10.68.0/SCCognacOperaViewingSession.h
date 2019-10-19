//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacOperaDataSourceDelegate-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"
#import "SCCognacOperaSessionParticipantTracking-Protocol.h"

@class NSArray, NSString, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacOperaAdViewingSession, SCCognacOperaConfigureSession, SCCognacOperaDataSource, SCCognacOperaInviteSession, SCCognacOperaLeaderboardSession, SCCognacOperaMediaShareSession, SCCognacOperaPlayWithSession, SCCognacOperaSettingsSession, SCCognacOperaTalkSession, SCCognacOperaViewingSessionConfig, SCCognacServiceClient, SCCognacUserAppSessionsUserAppSession, SCWeakTimer;

@interface SCCognacOperaViewingSession : NSObject <SCCognacOperaSession, SCCognacOperaDataSourceDelegate, SCCognacOperaSessionParticipantTracking>
{
    SCCognacOperaInviteSession *_inviteSession;
    SCCognacOperaPlayWithSession *_playWithSession;
    SCCognacOperaAdViewingSession *_adViewingSession;
    SCCognacOperaLeaderboardSession *_leaderboardSession;
    SCCognacOperaTalkSession *_talkSession;
    SCCognacOperaSettingsSession *_settingsSession;
    SCCognacOperaConfigureSession *_configureSession;
    SCCognacOperaMediaShareSession *_mediaShareSession;
    SCWeakTimer *_keepAliveTimer;
    double _appDidOpenTime;
    SCCognacServiceClient *_serviceClient;
    SCCognacUserAppSessionsUserAppSession *_userAppSession;
    _Bool _isResourceBundleLoadedAtGameOpen;
    SCCognacOperaViewingSessionConfig *_config;
    double _appIsReadyTime;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    NSArray *_subSessions;
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSArray *subSessions; // @synthesize subSessions=_subSessions;
@property(readonly, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
@property(nonatomic) _Bool isResourceBundleLoadedAtGameOpen; // @synthesize isResourceBundleLoadedAtGameOpen=_isResourceBundleLoadedAtGameOpen;
@property(nonatomic) double appIsReadyTime; // @synthesize appIsReadyTime=_appIsReadyTime;
@property(nonatomic) double appDidOpenTime; // @synthesize appDidOpenTime=_appDidOpenTime;
@property(retain, nonatomic) SCCognacOperaViewingSessionConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)_terminateUserAppSession;
- (void)_createUserAppSession;
- (id)participantInfo;
- (void)_keepAliveTimerDidFire;
- (void)_removeKeepAliveTimer;
- (void)_scheduleKeepAliveTimer;
- (void)cognacOperaDataSourceDidUpdateSessionId:(id)arg1;
- (void)_registerJSHandlersWithBridge:(id)arg1;
- (void)outputJSConsoleLog;
- (void)clearInvitedFriends;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredWVJBHandlerNameToHandler;
- (void)resumeSession;
- (void)pauseSession;
- (void)endSession;
- (void)startSession;
- (id)init;
- (void)logGameLoadingScreenDisplayedWithParamDict:(id)arg1;
- (void)logGameCloseEventWithFpsResponseDict:(id)arg1;
- (void)logGameCloseAttemptEvent;
- (void)logGameReadyToPlayEvent;
- (void)logGameOpenEvent;
- (void)_logEventWithEventName:(id)arg1 paramDict:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

