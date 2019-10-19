//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAVSystemControllerDirectToAirPlayObserver.h"
#import "SBControlCenterObserver.h"
#import "SBMainDisplaySceneManagerObserver.h"

@class AVExternalPlaybackMonitor, AVRoutingSessionDestination, AVRoutingSessionManager, MPMediaControlsStatusBarStyleOverridesCoordinator, NSArray, NSMutableDictionary, NSMutableSet, NSString, SBSStatusBarStyleOverridesAssertion, _SBDirectToAirPlayPolicyState;

@interface SBDirectToAirPlayController : NSObject <SBMainDisplaySceneManagerObserver, SBAVSystemControllerDirectToAirPlayObserver, SBControlCenterObserver>
{
    SBSStatusBarStyleOverridesAssertion *_directToAirPlayStatusBarStyleOverrideAssertion;
    NSString *_directToAirPlayStatusBarStyleOverrideAssertionCorrespondingBundleID;
    NSMutableDictionary *_directToAirPlayPlayingBundleIDsToRouteNames;
    NSMutableDictionary *_directToAirPlayReadyBundleIDsToRouteNames;
    NSMutableSet *_directToAirPlayIneligibleBundleIDs;
    NSMutableSet *_directToAirPlayEligibleBundleIDs;
    _Bool _controlCenterReportsItselfAsPresented;
    _Bool _currentRoutingSessionEstablishedAutomaticallyFromLikelyDestination;
    _Bool _externalPlaybackIsActive;
    _Bool _externalPlaybackIsPlaying;
    MPMediaControlsStatusBarStyleOverridesCoordinator *_mediaControlsCoordinator;
    AVExternalPlaybackMonitor *_externalPlaybackMonitor;
    AVRoutingSessionManager *_routingSessionManager;
    AVRoutingSessionDestination *_currentRoutingSessionDestination;
    NSArray *_likelyExternalPlaybackDestinations;
    _SBDirectToAirPlayPolicyState *_currentState;
}

+ (_Bool)_mediaControllerSaysWeHaveAWiredRoute;
+ (_Bool)directToAirPlayIsAvailable;
- (void).cxx_destruct;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)_rollBannerActionForReadyBundleID:(id)arg1 sceneHandle:(id)arg2;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingBackground:(id)arg1;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingForeground:(id)arg1;
- (id)_externalRouteNamesForDestination:(id)arg1;
- (id)_currentExternalRouteNames;
- (void)_updateRouteNamesForPlayingAndReadyApps;
- (void)_clearDirectToAirPlayStatusBarAssertion;
- (void)_acquireDirectToAirPlayStatusBarStyleOverrideForApplicationWithBundleID:(id)arg1 playing:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_main_evaluatePolicyForDirectToAirplayAlert;
- (id)_captureCurrentPolicyState;
- (void)_evaluatePolicyForDirectToAirplayAlert;
- (void)externalDisplayChanged:(id)arg1;
- (void)lockStateChanged:(id)arg1;
- (void)likelyExternalDestinationsDidChange:(id)arg1;
- (void)currentExternalDestinationDidChange:(id)arg1;
- (void)externalAirPlayVideoPlayingDidChange:(id)arg1;
- (void)externalAirPlayVideoActiveDidChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

