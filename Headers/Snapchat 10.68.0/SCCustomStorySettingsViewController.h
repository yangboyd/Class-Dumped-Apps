//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCCustomStorySettingsStoryCellDelegate-Protocol.h"
#import "SCCustomStorySettingsStoryHeaderCellDelegate-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCExportMyStoriesManagerDelegate-Protocol.h"
#import "SCGroupStoryGeoPrivacySettingsViewController-Protocol.h"
#import "SCGroupStoryGeofencePrivacyCellDelegate-Protocol.h"
#import "SCGroupStoryMapCellDelegate-Protocol.h"
#import "SCGroupStorySelectMembersViewControllerDelegate-Protocol.h"
#import "SCGroupStorySettingsControllerDelegate-Protocol.h"
#import "SCLocationObserver-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CLLocation, NSArray, NSString, SCAlertViewActionButtonController, SCContextOperaPlaylistPlugin, SCExportMyStoriesManager, SCGroupStoryCreationSession, SCGroupStorySettingsController, SCHeaderAccessoryView, SCLazy, SCLegacyOperaPlaylistStoriesPlugin, SCLoadingIndicatorView, SCMyGroupStories, SCOperaPresenter, SCScopedAccess, SCSearchContainerView, SCSendToTransitionProvider, SCSnapchatterMiniProfileActionHandler, SCUserSession, UIButton, UIColor, UILabel, UIPanGestureRecognizer, UITableView, UITapGestureRecognizer, UIView, UIViewController;
@protocol SCCustomStorySettingsViewControllerDelegate;

@interface SCCustomStorySettingsViewController : SCGenericSettingsViewController <SCExportMyStoriesManagerDelegate, SCGroupStoryGeoPrivacySettingsViewController, SCLocationObserver, SCCustomStorySettingsStoryHeaderCellDelegate, SCGroupStorySettingsControllerDelegate, SCCustomStorySettingsStoryCellDelegate, SCOperaPresenterDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, SCGroupStoryMapCellDelegate, SCSendToNavigationDelegate, SCGroupStorySelectMembersViewControllerDelegate, SCGroupStoryGeofencePrivacyCellDelegate, SCDataCoordinatorListener, SCPageNameLogging, SCStoriesModelUpdateListener>
{
    UITableView *_tableView;
    UILabel *_customTypeDescriptionLabel;
    UILabel *_footerSubtextLabel;
    UIViewController *_parentViewController;
    NSArray *_sections;
    UIButton *_createStoryButton;
    SCLoadingIndicatorView *_createButtonSpinner;
    CLLocation *_location;
    UIColor *_tintColor;
    SCMyGroupStories *_myGroupStories;
    SCUserSession *_userSession;
    SCExportMyStoriesManager *_exportMyStoriesManager;
    SCOperaPresenter *_storyPresenter;
    SCLegacyOperaPlaylistStoriesPlugin *_storiesPlugin;
    SCContextOperaPlaylistPlugin *_contextPlugin;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_geofencePrivacyTapGestureRecognizer;
    UIView *_loadingView;
    _Bool _viewHasLoaded;
    _Bool _findingLocation;
    _Bool _modifiedSettings;
    _Bool _fetchingMetadata;
    _Bool _isExpanded;
    _Bool _editing;
    _Bool _hideStories;
    _Bool _inactive;
    _Bool _isGroupChatSelectedSavedState;
    _Bool _isSaving;
    SCGroupStoryCreationSession *_creationSession;
    long long _sourceType;
    long long _createType;
    UIPanGestureRecognizer *_verticalDismissGesture;
    SCHeaderAccessoryView *_groupStoryEditPencilIconView;
    SCAlertViewActionButtonController *_namingSaveAction;
    SCSearchContainerView *_blurredContainerView;
    SCGroupStorySettingsController *_settingsController;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCSnapchatterMiniProfileActionHandler *_snapchatterMiniProfileActionHandler;
    SCLazy *_lazySnapchattersFetcher;
    SCLazy *_lazyGroupsDataCreator;
    SCLazy *_lazyGroupsDataFetcher;
    SCLazy *_lazyGroupsDataMutator;
    SCLazy *_customStoriesDataMutator;
    SCLazy *_customStoriesDataFetcher;
    SCScopedAccess *_scopedStoriesSnapSaveCoordinator;
    SCScopedAccess *_scopedStoriesSnapDeleteCoordinator;
    id <SCCustomStorySettingsViewControllerDelegate> _delegate;
    long long _context;
}

@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <SCCustomStorySettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_fetchGroupById:(id)arg1 success:(_Bool)arg2 errorMessage:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateLocalAndCreateGroupsOnServerIfNeededWithGroupId:(id)arg1 displayName:(id)arg2 autoSaveTurnedOn:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_createGroupChatStoryWithGroupParticipants:(id)arg1 displayName:(id)arg2 autoSaveTurnedOn:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_createGroupChatStoryWithSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didFailLeaveGroupWithPublicationId:(id)arg1 alertDescription:(id)arg2;
- (void)_didFailEditSettingsWithPublicationId:(id)arg1 responseCode:(long long)arg2;
- (void)_didAttemptToKeepEditing;
- (void)_didFinishEditSettings;
- (void)dismissSendViewController:(id)arg1;
- (void)updateGeofenceToPrivacyType:(long long)arg1;
- (void)_updateCreationSessionWithPublicationId:(id)arg1 mischiefId:(id)arg2;
- (void)mapCellDidFinishLoading;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (void)geoPrivacySettingsViewController:(id)arg1 didUpdatePrivacyType:(long long)arg2;
- (void)_didUpdateGroupStories:(id)arg1;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)updateSaveMyStories:(id)arg1 withProgress:(double)arg2;
- (void)handleSavedMyStories:(id)arg1 withError:(id)arg2;
- (void)handleStartSavingMyStories;
- (void)viewersPressedInCell:(id)arg1 forMyStory:(id)arg2;
- (void)deletePressedForStory:(id)arg1;
- (void)savePressedForStory:(id)arg1;
- (void)showPhotoAccessDeniedAlertView;
- (void)savePressedForMyStories:(id)arg1;
- (void)addToMyStoryPressedForMyStories:(id)arg1;
- (void)_expandMyStories;
- (void)expandMyStoryButtonPressedForMyStories:(id)arg1;
- (id)_firstNameOfUserForUserId:(id)arg1;
- (id)_subLabelForRoundedCell:(id)arg1 isAddToStoryCell:(_Bool)arg2;
- (void)_removeInvalidFriendsFromPermissions;
- (void)newGroupStorySelectMembersViewController:(id)arg1 updateCustomGroupStoryPrivacyWithPosterIds:(id)arg2 viewerIds:(id)arg3 modifiedSettings:(_Bool)arg4 storyType:(long long)arg5;
- (void)didFinishUpdatingCustomStory:(id)arg1;
- (id)_currentMapCell;
- (id)_currentStoryHeaderCell;
- (id)_roundedCellForSectionType:(unsigned long long)arg1;
- (_Bool)_shouldShowGroupChatCell;
- (double)_heightToOffsetFooter;
- (double)_heightOfTableViewCells;
- (id)_sectionsTemplate;
- (void)_enableCreateButtonIfPossible;
- (void)_updateCell:(id)arg1 enabled:(_Bool)arg2;
- (void)_setCreateButtonEnabled:(_Bool)arg1;
- (void)_setAllButtonsEnabled:(_Bool)arg1;
- (id)_groupStoryOptionsArrayForParticipant;
- (id)_groupStoryOptionsArrayForCreator;
- (void)_handleLeaveGroupStoryWithPublicationId:(id)arg1 leaveByBlocking:(_Bool)arg2 success:(_Bool)arg3;
- (void)_leaveGroupStoryByBlocking:(_Bool)arg1;
- (void)_blockGroupStory;
- (void)_leaveGroupStory;
- (void)_handleDeleteGroupStoryWithPublicationId:(id)arg1 success:(_Bool)arg2;
- (void)_deleteGroupStory;
- (void)_alertToConfirmDiscardChanges;
- (_Bool)_isDirty;
- (_Bool)_isEditingPrivateStory;
- (_Bool)_willCreateGroupChatWithCurrentSettings;
- (void)_updateStoryTypeWithCurrentSettings;
- (id)_alertDisplayNamePlaceholderText;
- (void)_showEnterDisplayNameAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showOopsAlertWithTitle:(id)arg1 description:(id)arg2 showKeepEditing:(_Bool)arg3;
- (void)_showOopsAlertForResponseCode:(long long)arg1 showKeepEditing:(_Bool)arg2;
- (void)_handleFailedGroupStoryCreationForResponseCode:(long long)arg1;
- (void)_handleSuccessfulGroupStoryCreationForPublicationId:(id)arg1;
- (id)_existingMischiefForCurrentPosterIds;
- (void)_createGroupChatStory;
- (void)_createGroupStory;
- (void)_prepUIForCreation;
- (void)_createGroupStoryWithCurrentPostingSettings;
- (void)_createStoryButtonPressed;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)textColorForPlaceholderInHeader:(id)arg1;
- (id)placeHolderForHeaderTextField;
- (_Bool)shouldEnableTextField:(id)arg1;
- (void)_saveChangesToCustomStories;
- (void)leftButtonPressed;
- (void)_dismissInContextAnimated:(_Bool)arg1;
- (_Bool)_isBottomController;
- (void)_updateDisplayName;
- (void)_startEditDisplayName;
- (void)rightButtonPressed;
- (id)_trimmedHeaderTextField;
- (long long)maxLengthForHeaderTextField:(id)arg1;
- (void)headerTextFieldTextEditingChanged;
- (void)headerTextFieldTextEditingDidBegin;
- (void)headerTextFieldTextEditingDidEnd;
- (id)viewForTitleInHeader:(id)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (void)onLocationUpdate:(id)arg1;
- (id)locationObserverIdentifier;
- (double)locationObserverDesiredAccuracy;
- (id)locationObserverDispatchQueue;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (void)_updatePrivacyFooterSubtext;
- (void)_updateFooterSubtextViewWithMayAnimated:(_Bool)arg1;
- (void)_updateAndFormatCustomStoryDescriptionLabel;
- (void)_updateCustomStoryDescriptionText;
- (void)_updatePrivacyFooterAndHeaderLabels;
- (void)_updateAllTextLabelsAndCells;
- (id)_fireStringForDaysActive:(long long)arg1;
- (long long)_daysSinceCreation:(id)arg1 timeNow:(id)arg2;
- (id)_subtextLessThanOneDay:(id)arg1 timeNow:(id)arg2;
- (id)_timeAgoCreatedWithFires;
- (id)_streaksFooterSubtext;
- (void)_setupCustomStoryDescriptionLabel;
- (void)_setupPrivacyFooterSubtext;
- (void)_setupStreaksFooterSubtext;
- (void)_setupFooterSubtext;
- (void)_updateLocation;
- (void)_getOrObserveLocationWithForcedUpdate:(_Bool)arg1;
- (void)fillInGeofenceDetails;
- (CDUnknownBlockType)_locationPermissionsActionHandler;
- (void)_promptUserForLocationPermission;
- (void)_authorizeAndUpdateLocation;
- (_Bool)_allowsAddToStory;
- (struct UIEdgeInsets)_gsCreateOptionCellEdgeInsets;
- (id)_groupChatCellAtIndexPath:(id)arg1;
- (id)_geofencePrivacyCellAtIndexPath:(id)arg1;
- (id)_viewThisStoryCellAtIndexPath:(id)arg1;
- (id)_addToStoryCellAtIndexPath:(id)arg1;
- (id)_autosaveCellAtIndexPath:(id)arg1;
- (id)_mapCell;
- (id)_myStoryCellAtIndexPath:(id)arg1;
- (id)_myGroupStoriesCell;
- (id)_navigationDelegate;
- (void)_setupContextPluginIfNeeded;
- (void)_setupStoriesOperaPresenterIfNeeded;
- (void)_presentStoryUsingOperaWithFriendStories:(id)arg1 story:(id)arg2 viewLocationPosition:(unsigned long long)arg3 showViewersTable:(_Bool)arg4 baseView:(id)arg5;
- (void)_didSelectCell:(id)arg1 withStory:(id)arg2;
- (void)_addToMyStories:(id)arg1;
- (void)_didSelectStoriesCell:(id)arg1;
- (void)_showCustomViewerPosterInfoWithTitle:(id)arg1 isWhoCanPostCell:(_Bool)arg2;
- (void)_showGeofenceViewerPosterInfo:(_Bool)arg1;
- (void)_didSelectGroupChatCell;
- (void)_didSelectAutosaveCell;
- (void)_didSelectViewPostCell:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_dismissKeyboard;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_sectionHeaderTextForSectionType:(unsigned long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)_updateStoriesHeaderCell;
- (void)_updateCellWithStory:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (unsigned long long)_sectionForIndexPath:(id)arg1;
- (unsigned long long)_sectionForIndexSection:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)publicationId;
- (_Bool)_isCreator;
- (_Bool)_missingGroupStoriesMetadata;
- (void)_setupLoadingView;
- (void)_handleGeofencePrivacyTap:(id)arg1;
- (void)_presentMiniProfileOfCreator;
- (void)_setupCreateStoryButton;
- (void)_setupTableView;
- (_Bool)shouldPopToRootViewController;
- (void)handlePopRecognizer:(id)arg1;
- (id)pageViewName;
- (void)_handleVerticalDismissGesture:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCustomStoryPublicationIdToEdit:(id)arg1 showExpanded:(_Bool)arg2 hideStories:(_Bool)arg3 userSession:(id)arg4 sourceType:(long long)arg5 fromContext:(long long)arg6;
- (id)initWithCreationContext:(long long)arg1 userSession:(id)arg2 creationSettings:(id)arg3 fromViewController:(id)arg4 createType:(long long)arg5 creationSession:(id)arg6 lazySnapchattersFetcher:(id)arg7 lazyGroupsDataCreator:(id)arg8 lazyGroupsDataFetcher:(id)arg9 lazyGroupsDataMutator:(id)arg10 customStoriesDataFetcher:(id)arg11 customStoriesDataMutator:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

