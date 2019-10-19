//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacPreconditionContentAlertControllerDelegate-Protocol.h"
#import "SCCognacPreconditionDisplayNameAlertControllerDelegate-Protocol.h"
#import "SCCognacPreconditionLeaderboardAlertControllerDelegate-Protocol.h"

@class NSString, SCCognacAppDataModel, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacOperaDataSource, SCCognacPreconditionContentAlertController, SCCognacPreconditionDisplayNameAlertController, SCCognacPreconditionLeaderboardAlertController, SCCognacUserAppPreferences, UIViewController;

@interface SCCognacPreconditionsChecker : NSObject <SCCognacPreconditionDisplayNameAlertControllerDelegate, SCCognacPreconditionLeaderboardAlertControllerDelegate, SCCognacPreconditionContentAlertControllerDelegate>
{
    NSString *_userDisplayName;
    SCCognacOperaDataSource *_operaDataSource;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _resultBlock;
    _Bool _started;
    _Bool _stopped;
    _Bool _isLeaderboardEnabled;
    _Bool _userHasDisplayName;
    _Bool _userHasOpenedApp;
    _Bool _userHasViewedLeaderboardAlert;
    _Bool _userHasAcceptedContentAlert;
    SCCognacAppDataModel *_appDataModel;
    SCCognacUserAppPreferences *_userAppPreferences;
    SCCognacPreconditionDisplayNameAlertController *_displayNameAlertController;
    SCCognacPreconditionLeaderboardAlertController *_leaderboardAlertController;
    SCCognacPreconditionContentAlertController *_contentAlertController;
}

- (void).cxx_destruct;
- (void)_finishWithSucceeded:(_Bool)arg1 failedReason:(long long)arg2;
- (void)_presentContentAlertWithAlertType:(long long)arg1;
- (void)_presentLeaderboardAlertWithAlertType:(long long)arg1;
- (void)_presentDisplayNameAlert;
- (void)_continueChecking;
- (void)_doUpdating;
- (void)_getAppDataModelAndUserAppPreferencesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_syncLocalAndRemotePreferences;
- (void)_markContentAlertAcceptedAndLeaderboardAlertViewed;
- (void)_markLeaderboardAlertViewed;
- (_Bool)_isLeaderboardAlertViewed;
- (void)_markContentAlertAccepted;
- (_Bool)_isContentAlertAccepted;
- (_Bool)_isAppOpened;
- (void)_setUserAppPreferencesWithAcceptedContentAlert:(id)arg1 acceptedLeaderboardAlert:(id)arg2;
- (void)_addAppIdToUserPreferencesWithAppIdSetKey:(id)arg1;
- (_Bool)_isAppIdContainedInUserPreferencesWithAppIdSetKey:(id)arg1;
- (void)contentAlertControllerDidAbort:(id)arg1;
- (void)contentAlertControllerDidFinish:(id)arg1;
- (void)leaderboardAlertControllerDidFinish:(id)arg1;
- (void)displayNameAlertControllerDidAbort:(id)arg1;
- (void)displayNameAlertControllerDidFinish:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithUserDisplayName:(id)arg1 operaDataSource:(id)arg2 viewLifeCycleAnnouncer:(id)arg3 presentingViewController:(id)arg4 resultBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

