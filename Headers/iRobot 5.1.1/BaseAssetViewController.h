//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SubscribedViewController.h"

@interface BaseAssetViewController : SubscribedViewController
{
}

- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)presentCleanMapIsAlreadySmartMapAlert;
- (void)presentCleanToSmartMapUpdateFailedAlert;
- (void)presentCleanToSmartMapUpdateSucceededAlert:(CDUnknownBlockType)arg1;
- (id)configureNewFeatureViewWithVideoUrl:(id)arg1 headlineText:(id)arg2 descriptionText:(id)arg3;
- (void)presentNewFeatureViews:(id)arg1;
- (void)turnPMapsLearningOnForAsset;
- (void)presentPersistentMapsKeepOutZoneInstructionsWithContinueHandler:(CDUnknownBlockType)arg1 skipHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)presentPersistentMapsLabelRoomsInstructionsWithContinueHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2;
- (void)presentPersistentMapsDoorEditInstructionsWithContinueHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2;
- (void)presentPersistentMapsCustomizationIntroWithNavgiationHandler:(CDUnknownBlockType)arg1;
- (void)presentCleaningIntroWithCleanActionHandler:(CDUnknownBlockType)arg1;
- (void)dismissPersistentMapsModal;
- (id)persistentMapsTipsScreensWithNavigationHandler:(CDUnknownBlockType)arg1;
- (void)presentPersistentMapsTips;
- (void)startTrainingRunFromPresentingViewController:(id)arg1 startActionHandler:(CDUnknownBlockType)arg2;
- (void)presentTrainingRunInfoWithStartActionHandler:(CDUnknownBlockType)arg1;
- (void)presentTrainingRunInfo;
- (void)presentPersistentMapsIntroBraavaLockdown;
- (void)presentPersistentMapsIntroRoombaLockdown;
- (void)presentPersistentMapsIntro;
- (CDUnknownBlockType)presentScreens:(id)arg1 analyticsHandlers:(id)arg2;
- (void)pushInstallUpdateViewControllerWithUpdateItem:(id)arg1;
- (void)presentUpdateAvailableAlertWithUpdateItem:(id)arg1;

@end

