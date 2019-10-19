//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCComposerViewOwner-Protocol.h"
#import "SCMapCurrentStatusViewControllerDelegate-Protocol.h"
#import "SCMapModalViewControllerSubclass-Protocol.h"
#import "SCMapStatusCreationContext-Protocol.h"
#import "SCMapStatusFetcherListener-Protocol.h"
#import "SCVenueFeedbackViewControllerDelegate-Protocol.h"

@class NSString, SCExperimentManager, SCFeatureSettingsManager, SCLocationSharingAudienceChooser, SCLocationSharingPreferencesV1, SCMapLoggerEventSender, SCMapModalViewController, SCMapSnapTokenService, SCMapStatusCreationView, SCMapStatusStore, SCMapUserPreferences, SCStopwatch;
@protocol SCBitmojiSettingsPresenting, SCCheckInOptionFetcher, SCLocationProvider, SCLocationSharingSettingsPresenting, SCMapGDPRComplianceProviding, SCMapPeopleFriendsProvider, SCMapPersonLocationsProviding, SCMapStatusCreationViewControllerDelegate, SCMapStatusCreationViewProvider;

@interface SCMapStatusCreationViewController : UIViewController <SCComposerViewOwner, SCMapCurrentStatusViewControllerDelegate, SCMapStatusFetcherListener, SCMapStatusCreationContext, SCVenueFeedbackViewControllerDelegate, SCMapModalViewControllerSubclass>
{
    NSString *_bitmojiAvatarId;
    id <SCBitmojiSettingsPresenting> _bitmojiSettingsPresenter;
    id <SCCheckInOptionFetcher> _checkInOptionFetcher;
    NSString *_currentUserId;
    id <SCMapStatusCreationViewControllerDelegate> _delegate;
    SCFeatureSettingsManager *_featureSettingsManager;
    id <SCLocationProvider> _locationProvider;
    SCLocationSharingPreferencesV1 *_locationSharingPreferences;
    id <SCLocationSharingSettingsPresenting> _locationSharingSettingsPresenter;
    id <SCMapGDPRComplianceProviding> _mapGDPRComplianceProvider;
    SCMapLoggerEventSender *_mapLoggerEventSender;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    SCMapStatusStore *_mapStatusStore;
    SCMapUserPreferences *_mapUserPreferences;
    SCMapSnapTokenService *_snapTokenService;
    long long _source;
    id <SCMapStatusCreationViewProvider> _viewProvider;
    SCExperimentManager *_experimentManager;
    SCMapStatusCreationView *_statusCreationView;
    unsigned long long _statusSessionId;
    SCStopwatch *_stopwatch;
    SCStopwatch *_onboardingPageStopwatch;
    long long _previousOnboardingPageName;
    SCLocationSharingAudienceChooser *_presentedAudienceChooser;
}

+ (id)_subtitleForStatus:(id)arg1;
+ (id)_currentStatusViewModelFromStatus:(id)arg1 mapPeopleFriendsProvider:(id)arg2;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)_currentStatusViewModels;
- (void)_removeOptionWithId:(id)arg1;
- (void)_setStatusWithRequest:(id)arg1 type:(long long)arg2;
- (void)_promptToShareLocationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setOnboarded;
- (_Bool)_shouldShowOnboarding;
- (id)defaultProjectNameV2;
- (void)venueFeedbackViewControllerWantsToDismiss:(id)arg1;
- (void)mapStatusFetcherDidLoadMyStatus:(id)arg1;
- (void)mapCurrentStatusViewController:(id)arg1 wantsToPresentStoryForUserId:(id)arg2 fromBaseView:(id)arg3;
- (void)mapCurrentStatusViewController:(id)arg1 wantsToShowProfileForUserId:(id)arg2;
- (void)mapCurrentStatusViewController:(id)arg1 didDeleteMyStatus:(id)arg2 wasMostRecentStatus:(_Bool)arg3;
- (void)mapCurrentStatusViewControllerWantsToDismiss:(id)arg1;
- (void)didTapCreateBitmoji;
- (void)didTapReportOptionWithIdentifier:(id)arg1 title:(id)arg2 type:(double)arg3 creatorUserId:(id)arg4;
- (void)didTapDeleteOptionWithIdentifier:(id)arg1 title:(id)arg2 type:(double)arg3;
- (void)didViewCurrentStatusWithStatusId:(id)arg1;
- (void)didTapCurrentStatusWithRequiresUpdate:(_Bool)arg1 statusId:(id)arg2;
- (void)didChooseStatusOptionWithIdentifier:(id)arg1 title:(id)arg2 type:(double)arg3 index:(double)arg4 stickerCount:(double)arg5 actionId:(id)arg6 prefix:(id)arg7 creatorUserId:(id)arg8;
- (void)didTapStatusOptionWithType:(double)arg1 index:(double)arg2 stickerCount:(double)arg3;
- (void)didTapPassportButton;
- (void)didTapDismissButton;
- (void)_setCurrentOnboardingPageName:(long long)arg1;
- (void)didChangeOnboardingPageWithIndex:(double)arg1;
- (void)didTapLetsGo;
- (void)modalViewControllerIsFullyPresented:(id)arg1;
- (_Bool)modalViewController:(id)arg1 panGestureRecognizer:(id)arg2 shouldBeginInView:(id)arg3;
- (id)composerWillCreateViewForClass:(Class)arg1 nodeId:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBitmojiAvatarId:(id)arg1 bitmojiSettingsPresenter:(id)arg2 checkInOptionFetcher:(id)arg3 currentUserId:(id)arg4 delegate:(id)arg5 experimentManager:(id)arg6 featureSettingsManager:(id)arg7 locationProvider:(id)arg8 locationSharingPreferences:(id)arg9 locationSharingSettingsPresenter:(id)arg10 mapGDPRComplianceProvider:(id)arg11 mapLoggerEventSender:(id)arg12 mapPeopleFriendsProvider:(id)arg13 mapPersonLocationsProvider:(id)arg14 mapStatusStore:(id)arg15 mapUserPreferences:(id)arg16 snapTokenService:(id)arg17 source:(long long)arg18 viewProvider:(id)arg19;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SCMapModalViewController *parentModalViewController;
@property(readonly) Class superclass;

@end

