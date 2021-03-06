//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarCollectionViewController.h"

#import "HMECoinActionDelegate-Protocol.h"
#import "HMECompactStructurePickerViewControllerDelegate-Protocol.h"
#import "HMEFullWidthSectionLayoutDelegate-Protocol.h"
#import "HMEHomeAutomationDeviceStateCacheListener-Protocol.h"
#import "HMEHomeViewToggleModalViewControllerDelegate-Protocol.h"
#import "HMELightImmersiveViewControllerDelegate-Protocol.h"
#import "HMEModelObserver-Protocol.h"
#import "HMERetryDelegate-Protocol.h"
#import "HMERoutinesCoinBottomSheetCollectionViewControllerDelegate-Protocol.h"
#import "HMESectionedCollectionViewLayoutDelegate-Protocol.h"
#import "HMESpacesChipActionDelegate-Protocol.h"
#import "HMEStructureModeSelectorViewControllerDelegate-Protocol.h"
#import "MDCCollectionViewStylingDelegate-Protocol.h"

@class HMECoalescedAction, HMECoreDataStack, HMEHorizontalChipsCollectionViewCell, HMEModel, HMEStatusViewController, MDCBottomDrawerViewController, NSArray, NSMutableSet, NSString, UINotificationFeedbackGenerator, UIRefreshControl, UIViewController;
@protocol ASTHomeAutomationManagerProtocol, AnalyticsLogger, GCAConfigurationFlags, HMEAppReviewManager, HMEAutomationData, HMECoinData, HMEDeviceData, HMEDeviceEligibilityChecker, HMEHomeAutomationDeviceStateCache, HMELightGroupData, HMELinkableAppData, HMELocalDeviceData, HMESectionLayout, HMESpaceData, HMESpacesChipData, HMESpacesViewControllerDelegate, HMEStructureData, HMEStructureModeData, HMEUnifiedDeviceData;

@interface HMESpacesViewController : HMEAppBarCollectionViewController <HMEModelObserver, HMERetryDelegate, MDCCollectionViewStylingDelegate, HMESpacesChipActionDelegate, HMECoinActionDelegate, HMEStructureModeSelectorViewControllerDelegate, HMEHomeViewToggleModalViewControllerDelegate, HMELightImmersiveViewControllerDelegate, HMEHomeAutomationDeviceStateCacheListener, HMESectionedCollectionViewLayoutDelegate, HMEFullWidthSectionLayoutDelegate, HMECompactStructurePickerViewControllerDelegate, HMERoutinesCoinBottomSheetCollectionViewControllerDelegate>
{
    _Bool _visible;
    _Bool _areAllCastDevicesChromecastDisplay;
    id <HMESectionLayout> _coinsSectionLayout;
    id <HMESectionLayout> _fullWidthSectionLayout;
    id <HMESectionLayout> _devicesSectionLayout;
    id <HMESectionLayout> _structureModeHeaderSectionLayout;
    id <HMESpacesViewControllerDelegate> _delegate;
    HMECoalescedAction *_coalescedRefreshAction;
    NSString *_currentStructureID;
    NSArray *_chips;
    NSArray *_coins;
    NSArray *_deviceShelfObjects;
    HMEStatusViewController *_statusViewController;
    HMECoreDataStack *_coreDataStack;
    id <HMEStructureData> _structureData;
    id <HMESpaceData> _spaceData;
    id <HMEDeviceData> _deviceData;
    id <HMEUnifiedDeviceData> _unifiedDeviceData;
    id <HMESpacesChipData> _chipData;
    id <HMECoinData> _coinData;
    id <HMEAutomationData> _homeAutomationData;
    id <HMELinkableAppData> _linkableAppData;
    id <HMELocalDeviceData> _localDeviceData;
    HMEModel *_structuresModel;
    HMEModel *_structureModel;
    HMEModel *_shelvesModel;
    HMEModel *_chipsModel;
    HMEModel *_coinsModel;
    id <GCAConfigurationFlags> _flags;
    id <AnalyticsLogger> _analyticsLogger;
    id <HMEAppReviewManager> _appReviewManager;
    UINotificationFeedbackGenerator *_actionFeedbackGenerator;
    NSMutableSet *_loggedChipImpressions;
    NSMutableSet *_loggedCoinImpressions;
    id <ASTHomeAutomationManagerProtocol> _homeAutomationManager;
    id <HMEDeviceEligibilityChecker> _deviceEligibilityChecker;
    UIRefreshControl *_refreshControl;
    long long _structureMode;
    id <HMEStructureModeData> _structureModeData;
    HMEModel *_structureModeModel;
    UIViewController *_accountParticleDiscViewConroller;
    HMEModel *_wifiNetworkModel;
    id <HMELightGroupData> _lightGroupData;
    MDCBottomDrawerViewController *_bottomDrawerViewController;
    HMEHorizontalChipsCollectionViewCell *_chipsCollectionViewCell;
    id <HMEHomeAutomationDeviceStateCache> _deviceStateCache;
    HMECoalescedAction *_coalescedRerenderAction;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool areAllCastDevicesChromecastDisplay; // @synthesize areAllCastDevicesChromecastDisplay=_areAllCastDevicesChromecastDisplay;
@property(readonly, nonatomic) HMECoalescedAction *coalescedRerenderAction; // @synthesize coalescedRerenderAction=_coalescedRerenderAction;
@property(retain, nonatomic) id <HMEHomeAutomationDeviceStateCache> deviceStateCache; // @synthesize deviceStateCache=_deviceStateCache;
@property(retain, nonatomic) HMEHorizontalChipsCollectionViewCell *chipsCollectionViewCell; // @synthesize chipsCollectionViewCell=_chipsCollectionViewCell;
@property(retain, nonatomic) MDCBottomDrawerViewController *bottomDrawerViewController; // @synthesize bottomDrawerViewController=_bottomDrawerViewController;
@property(readonly, nonatomic) id <HMELightGroupData> lightGroupData; // @synthesize lightGroupData=_lightGroupData;
@property(retain, nonatomic) HMEModel *wifiNetworkModel; // @synthesize wifiNetworkModel=_wifiNetworkModel;
@property(retain, nonatomic) UIViewController *accountParticleDiscViewConroller; // @synthesize accountParticleDiscViewConroller=_accountParticleDiscViewConroller;
@property(readonly, nonatomic) HMEModel *structureModeModel; // @synthesize structureModeModel=_structureModeModel;
@property(readonly, nonatomic) id <HMEStructureModeData> structureModeData; // @synthesize structureModeData=_structureModeData;
@property(nonatomic) long long structureMode; // @synthesize structureMode=_structureMode;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(readonly, nonatomic) id <HMEDeviceEligibilityChecker> deviceEligibilityChecker; // @synthesize deviceEligibilityChecker=_deviceEligibilityChecker;
@property(readonly, nonatomic) id <ASTHomeAutomationManagerProtocol> homeAutomationManager; // @synthesize homeAutomationManager=_homeAutomationManager;
@property(readonly, nonatomic) NSMutableSet *loggedCoinImpressions; // @synthesize loggedCoinImpressions=_loggedCoinImpressions;
@property(readonly, nonatomic) NSMutableSet *loggedChipImpressions; // @synthesize loggedChipImpressions=_loggedChipImpressions;
@property(readonly, nonatomic) UINotificationFeedbackGenerator *actionFeedbackGenerator; // @synthesize actionFeedbackGenerator=_actionFeedbackGenerator;
@property(readonly, nonatomic) id <HMEAppReviewManager> appReviewManager; // @synthesize appReviewManager=_appReviewManager;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) HMEModel *coinsModel; // @synthesize coinsModel=_coinsModel;
@property(readonly, nonatomic) HMEModel *chipsModel; // @synthesize chipsModel=_chipsModel;
@property(readonly, nonatomic) HMEModel *shelvesModel; // @synthesize shelvesModel=_shelvesModel;
@property(readonly, nonatomic) HMEModel *structureModel; // @synthesize structureModel=_structureModel;
@property(readonly, nonatomic) HMEModel *structuresModel; // @synthesize structuresModel=_structuresModel;
@property(readonly, nonatomic) id <HMELocalDeviceData> localDeviceData; // @synthesize localDeviceData=_localDeviceData;
@property(readonly, nonatomic) id <HMELinkableAppData> linkableAppData; // @synthesize linkableAppData=_linkableAppData;
@property(readonly, nonatomic) id <HMEAutomationData> homeAutomationData; // @synthesize homeAutomationData=_homeAutomationData;
@property(readonly, nonatomic) id <HMECoinData> coinData; // @synthesize coinData=_coinData;
@property(readonly, nonatomic) id <HMESpacesChipData> chipData; // @synthesize chipData=_chipData;
@property(readonly, nonatomic) id <HMEUnifiedDeviceData> unifiedDeviceData; // @synthesize unifiedDeviceData=_unifiedDeviceData;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, nonatomic) id <HMESpaceData> spaceData; // @synthesize spaceData=_spaceData;
@property(readonly, nonatomic) id <HMEStructureData> structureData; // @synthesize structureData=_structureData;
@property(readonly, nonatomic) HMECoreDataStack *coreDataStack; // @synthesize coreDataStack=_coreDataStack;
@property(readonly, nonatomic) HMEStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) NSArray *deviceShelfObjects; // @synthesize deviceShelfObjects=_deviceShelfObjects;
@property(retain, nonatomic) NSArray *coins; // @synthesize coins=_coins;
@property(retain, nonatomic) NSArray *chips; // @synthesize chips=_chips;
@property(readonly, copy, nonatomic) NSString *currentStructureID; // @synthesize currentStructureID=_currentStructureID;
@property(readonly, nonatomic) HMECoalescedAction *coalescedRefreshAction; // @synthesize coalescedRefreshAction=_coalescedRefreshAction;
@property(nonatomic) __weak id <HMESpacesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logSpacesCoinImpressionWithCoinActionContentInfo:(id)arg1 withHorizontalIndex:(long long)arg2;
- (void)logSpacesChipTapWithChipMetadata:(id)arg1;
- (void)logSpacesChipDismissalWithChipMetadata:(id)arg1;
- (void)logSpacesChipImpressionWithChipMetadata:(id)arg1;
- (_Bool)shouldShowLiveTvOptionForDevice:(id)arg1;
- (id)selectedDeviceForRoutineExecutionFromDevices:(id)arg1;
- (id)snackBarMessageForExecutingRoutineOnDeviceName:(id)arg1 error:(id)arg2;
- (id)devicePickerModelsFromDeviceMOs:(id)arg1;
- (void)openDevicePickerForRoutinesCoin:(id)arg1 assistantDevicesInStructureModel:(id)arg2 routinesModel:(id)arg3;
- (void)openAssistantRoutinesSettings;
- (void)executeSelectedRoutine:(id)arg1 selectedDeviceID:(id)arg2 selectedDeviceName:(id)arg3;
- (id)coinViewForCoin:(id)arg1;
- (void)triggerHapticFeedback;
- (void)playLiveTVOnDevice:(id)arg1;
- (void)playSomethingOnDevice:(id)arg1;
- (void)logActionCoinTappedWithType:(long long)arg1 hasSubActions:(_Bool)arg2 coinIndex:(long long)arg3;
- (void)actionCoinPressed:(id)arg1 withType:(long long)arg2;
- (id)actionForDropDownOption:(id)arg1;
- (id)dropDownActionSheetForCoin:(id)arg1;
- (id)emptyStateMessage;
- (id)emptyStateImage;
- (id)emptyStateTile;
- (_Bool)isEmptyState;
- (id)emptyStructureTile;
- (id)emptyStructureImage;
- (_Bool)isEmptyStructure;
- (_Bool)isStructureModeEnabled;
- (_Bool)shouldShowStructureMode;
- (unsigned long long)structureModeCellTypeForStructureMode:(long long)arg1;
- (id)HGSDeviceIDsInCurrentStructure;
- (void)collectionViewDidSelectStructurePickerCell:(id)arg1;
- (id)structureModeCollectionViewCellForIndexPath:(id)arg1 fromCollectionView:(id)arg2;
- (id)structureNameCollectionViewCellForIndexPath:(id)arg1 fromCollectionView:(id)arg2;
- (id)structureNameCellForIndexPath:(id)arg1 fromCollectionView:(id)arg2;
- (_Bool)unifiedDeviceSupportsStatefulHomeViewFeatures:(id)arg1;
- (_Bool)hasSingleTypeAOGHDevices:(id)arg1;
- (_Bool)hasUnconfiguredAOGHDevicesOnly:(id)arg1;
- (_Bool)duplicateSpacesInDeviceShelfObjects:(id)arg1;
- (void)homeControlProviderLinkingChipFlowDidCompleteForAgentID:(id)arg1 success:(_Bool)arg2;
- (void)addButtonPressed;
- (void)updateAddButtonItem;
- (void)updateChromecastOnlyFlag;
- (void)updateView;
- (void)setupModel;
- (id)combinedModelStatus;
- (long long)numberOfEmptyStructureCells;
- (long long)numberOfEmptyStateCells;
- (void)showErrorSnackbar;
- (void)forceRefresh;
- (void)syncDevices;
- (void)stalenessDidChangeForDeviceWithHGSID:(id)arg1;
- (void)traitsDidChange:(id)arg1 forDeviceWithHGSID:(id)arg2;
- (void)openLightControllerForLightGroup:(id)arg1 viewController:(id)arg2;
- (void)wifiCoinPressed:(id)arg1;
- (void)callHomeCoin:(id)arg1 didReceiveTapForStructure:(id)arg2;
- (void)cameraDropDownActionPressedForDeviceID:(id)arg1;
- (void)showSnackBarWithMessage:(id)arg1;
- (void)dropDownActionCompleted:(id)arg1 withError:(id)arg2;
- (void)openLightControllerForLightGroup:(id)arg1;
- (void)openCameraRemoteControllerForDeviceID:(id)arg1;
- (void)openUniversalRemoteControllerForDeviceID:(id)arg1;
- (void)openUniversalRemoteControllerForDeviceWithCloudID:(id)arg1;
- (void)cameraCoinPressed:(id)arg1;
- (void)thermostatCoinPressed:(id)arg1;
- (void)mediaCoinPressed:(id)arg1;
- (void)lightCoinPressed:(id)arg1;
- (void)routinesCoinPressed:(id)arg1 assistantDevicesInStructureModel:(id)arg2 routinesModel:(id)arg3;
- (void)routinesCoinPressed:(id)arg1 assistantDevicesInStructureModel:(id)arg2 routinesModel:(id)arg3 suggestedRoutineCardsModel:(id)arg4;
- (void)broadcastPressed:(id)arg1 query:(id)arg2 toCloudCastDeviceIDs:(id)arg3;
- (void)settingsCoinPressed:(id)arg1;
- (void)deviceAndServiceAddingCoinPressed:(id)arg1;
- (void)openURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)chipDismissed:(id)arg1;
- (id)dropDownForReadyToSetupNestCamDevices:(id)arg1;
- (void)setupNewmanCameraChipPressed:(id)arg1 withDevices:(id)arg2;
- (void)mediaProviderLinkingChipPressed:(id)arg1 forLinkableAppId:(id)arg2 accountSetupInfo:(id)arg3 accountLegalInfo:(id)arg4;
- (void)suggestionChipExecuted:(id)arg1 withSuggestion:(id)arg2 error:(id)arg3;
- (void)suggestionChipPressed:(id)arg1 withSuggestion:(id)arg2;
- (void)connectHomeControlProviderChipPressed:(id)arg1 withAgentID:(id)arg2;
- (void)importWifiNetworkChipPressed:(id)arg1 migrationTriggerSource:(id)arg2;
- (void)inviteHomeMemberChipPressed:(id)arg1;
- (void)healthCheckChipPressed:(id)arg1;
- (void)pendingInvitationsChipPressed:(id)arg1;
- (void)setUpDevicesChipPressed:(id)arg1 withUnconfiguredDevices:(id)arg2;
- (void)shouldRetry;
- (void)homeViewToggleModalViewController:(id)arg1 didSelectStructureMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestRefetchStructureModeFromHomeViewToggleModalViewController:(id)arg1;
- (void)structureModeSelector:(id)arg1 didSelectStructureMode:(long long)arg2;
- (void)structureModeSelectorDidSelectCurrentStructureMode:(id)arg1;
- (void)structurePicker:(id)arg1 didPickStructure:(id)arg2;
- (void)structurePickerDidPickCurrentStructure:(id)arg1;
- (double)collectionView:(id)arg1 sectionLayout:(id)arg2 heightForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 layoutForSection:(long long)arg3;
@property(readonly, nonatomic) id <HMESectionLayout> structureModeHeaderSectionLayout; // @synthesize structureModeHeaderSectionLayout=_structureModeHeaderSectionLayout;
@property(readonly, nonatomic) id <HMESectionLayout> devicesSectionLayout; // @synthesize devicesSectionLayout=_devicesSectionLayout;
@property(readonly, nonatomic) id <HMESectionLayout> fullWidthSectionLayout; // @synthesize fullWidthSectionLayout=_fullWidthSectionLayout;
@property(readonly, nonatomic) id <HMESectionLayout> coinsSectionLayout; // @synthesize coinsSectionLayout=_coinsSectionLayout;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 hidesInkViewAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHideHeaderSeparatorForSection:(long long)arg2;
- (void)modelDidChange:(id)arg1;
- (_Bool)shrinkAppBarOnScroll;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) int page;
@property(readonly, nonatomic) int section;
- (id)initWithStructureID:(id)arg1 coreDataStack:(id)arg2 structureData:(id)arg3 spaceData:(id)arg4 deviceData:(id)arg5 unifiedDeviceData:(id)arg6 chipData:(id)arg7 coinData:(id)arg8 homeAutomationData:(id)arg9 deviceStateCache:(id)arg10 linkableAppData:(id)arg11 localDeviceData:(id)arg12 structureModeData:(id)arg13 analyticsLogger:(id)arg14 flags:(id)arg15 homeAutomationManager:(id)arg16 deviceEligibilityChecker:(id)arg17 appReviewManager:(id)arg18 accountParticleDiscViewController:(id)arg19 lightGroupData:(id)arg20;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

