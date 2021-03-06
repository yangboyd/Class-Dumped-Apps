//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNCollectionViewController.h"

#import "DYNDriveFilePickerDelegate-Protocol.h"
#import "DYNFileContentViewDelegate-Protocol.h"
#import "DYNFilesFetchingDelegate-Protocol.h"
#import "DYNFilesTabProtocol-Protocol.h"
#import "GILRecyclableViewLoggerDataSource-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDataSourcePrefetching-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DYNFilesViewModel, DYNIconInfoView, DYNTopTabbedRoomOptions, GILClientVisualElement, GILCollectionViewLogger, MDCFloatingButton, NSArray, NSCache, NSMutableArray, NSMutableSet, NSString, QTMPullToRefreshController, UIView;
@protocol DYNAlertManagerService, DYNColorSchemeService, DYNDriveFilePickerService, DYNExperimentsService, DYNLightboxService, DYNNavigationService, DYNProjectorService, DYNSharedLayerService, DYNSizingViewService, DYNStreamTopicReplyFactoryService, DYNTimerEventLoggingService, DYNTopTabbedRoomController, DYNTracingService, GILInteractionService;

@interface DYNFilesViewController : DYNCollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, DYNDriveFilePickerDelegate, DYNFilesFetchingDelegate, DYNFileContentViewDelegate, GILRecyclableViewLoggerDataSource, DYNFilesTabProtocol>
{
    DYNTopTabbedRoomOptions *_options;
    id <DYNSizingViewService> _sizingViewService;
    id <DYNLightboxService> _lightboxService;
    id <DYNProjectorService> _projectorService;
    id <DYNExperimentsService> _experimentService;
    id <DYNAlertManagerService> _alertManagerService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNDriveFilePickerService> _driveFilePickerService;
    id <DYNNavigationService> _navigationService;
    id <DYNStreamTopicReplyFactoryService> _topicReplyFactoryService;
    _Bool _tabIsSelected;
    _Bool _shouldShowLoadingIndicatorCell;
    QTMPullToRefreshController *_pullToRefreshController;
    id <DYNTopTabbedRoomController> _topTabbedRoomController;
    DYNFilesViewModel *_filesViewModel;
    NSArray *_contentViewObjects;
    UIView *_emptyStateView;
    UIView *_errorStateView;
    DYNIconInfoView *_emptyStateHistoryOffWarningView;
    NSMutableSet *_registeredReuseIdentifiers;
    MDCFloatingButton *_addFileButton;
    _Bool _modelWasUpdated;
    id <DYNTimerEventLoggingService> _timerEventLoggingService;
    GILCollectionViewLogger *_collectionViewLogger;
    GILClientVisualElement *_collectionViewVisualElement;
    id <GILInteractionService> _interactionLogger;
    id <DYNColorSchemeService> _colorSchemeService;
    id <DYNTracingService> _tracingService;
    GILClientVisualElement *_actionSheetVisualElement;
    NSMutableArray *_fileDriveIDStack;
    NSCache *_clonedDriveIDCache;
}

- (void).cxx_destruct;
- (void)didTapAddShortcutToDrive:(id)arg1;
- (void)didTapOrganize:(id)arg1;
- (void)handleAddToDriveFailure:(id)arg1;
- (void)handleAddToDriveSuccess:(id)arg1;
- (void)didTapAddToDrive:(id)arg1;
- (void)didTapNavigateToMessageInThreadedRooms:(id)arg1;
- (void)didTapNavigateToMessageInFlatRooms:(id)arg1;
- (id)driveDialogActionForViewObject:(id)arg1;
- (id)showMessageContextActionForViewObject:(id)arg1;
- (id)driveActionForViewObject:(id)arg1;
- (void)logMetrics;
- (void)setUpLightboxService;
- (void)setUpProjectorService;
- (void)openUserUploadedMetadata:(id)arg1;
- (void)openDriveMetadata:(id)arg1;
- (void)openAnnotation:(id)arg1;
- (void)reloadCollectionViewWithFileViewObjects:(id)arg1;
- (long long)firstFileContentViewObjectIndex;
- (id)contentViewObjectForIndex:(unsigned long long)arg1;
- (void)hidePullToRefreshIndicator;
- (_Bool)shouldShowLoadingIndicatorCellAtIndexPath:(id)arg1;
- (_Bool)shouldShowLoadingIndicatorCell;
- (id)historyOffWarningView;
- (void)filesViewModelDidUpdate:(id)arg1;
- (void)filesViewShowErrorState:(id)arg1;
- (void)filesViewShowErrorToast:(id)arg1;
- (void)handleFolderSelection:(id)arg1;
- (void)handleFileSelection:(id)arg1;
- (void)dismissDrivePickerController;
- (void)pickerVC:(id)arg1 fileSelected:(id)arg2 error:(id)arg3;
- (id)populatePostboxContentWithFile:(id)arg1;
- (void)showDiscardDraftDialog;
- (void)didTapAddFileButton;
- (struct CGPoint)addFileButtonCenter;
- (void)setupAddFileButton;
- (void)didTapMoreOptionsButtonForViewObject:(id)arg1;
- (id)visualElementParamsForItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)tabDidGetUnselected;
- (void)tabWillBeUnselected;
- (void)tabDidGetSelected;
- (void)tabWillBeSelected;
- (void)setIsOffTheRecordAndDidFetchState:(_Bool)arg1;
- (void)maybeRegisterIdentifierForV2Cell:(id)arg1;
- (void)setUpPullToRefresh;
- (void)didTapErrorStateRetryButton;
- (void)setUpCollectionView;
- (void)setUpErrorState;
- (void)showEmptyState;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOptions:(id)arg1 headerParentViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

