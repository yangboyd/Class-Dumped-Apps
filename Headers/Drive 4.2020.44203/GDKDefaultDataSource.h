//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKFileCVOActionDelegate-Protocol.h"
#import "GDKFilesViewDataSource-Protocol.h"
#import "GDKItemsLiveListDelegate-Protocol.h"
#import "GDKParentViewControlling-Protocol.h"
#import "GDKPeopleActivitySectionProviderDelegate-Protocol.h"
#import "GDKQuickAccessSectionProviderDelegate-Protocol.h"

@class GDKCollectionViewModel, GDKFileChangeListener, GDKFileIDResourceKeyPair, GDKFileQuery, GDKSort, GDKTheme, GIPReachability, NSMutableArray, NSOrderedSet, NSString;
@protocol GDKDataSourceSectionProviding, GDKDragSessionManagerProtocol, GDKFile, GDKFileFetcher, GDKFileSectionProviding, GDKFilesViewDataSourceDelegate, GDKFilesViewViewControllerContainingDelegate, GDKItemsLiveList, GDKItemsLiveListDelegate, GDKItemsLiveListQuerent, SSOIdentity;

@interface GDKDefaultDataSource : NSObject <GDKFileCVOActionDelegate, GDKItemsLiveListDelegate, GDKFilesViewDataSource, GDKQuickAccessSectionProviderDelegate, GDKParentViewControlling, GDKPeopleActivitySectionProviderDelegate>
{
    _Bool _currentlyRefreshingPeopleData;
    _Bool _hasPendingUpdate;
    _Bool _loadMoreInProgress;
    _Bool _dynamicTypeEnabled;
    id <GDKDragSessionManagerProtocol> _dragSessionManager;
    id <GDKFilesViewDataSourceDelegate> _delegate;
    id <GDKFilesViewViewControllerContainingDelegate> _vcParentDelegate;
    GDKFileQuery *_fileQuery;
    NSOrderedSet *_supportedSortTypes;
    NSString *_title;
    id <SSOIdentity> _userIdentity;
    GDKFileIDResourceKeyPair *_folderIDResourceKeyPair;
    id <GDKFileFetcher> _fileFetcher;
    id <GDKItemsLiveListQuerent> _liveListQuerent;
    NSString *_explicitTitle;
    NSString *_identifier;
    id <GDKFile> _folder;
    CDUnknownBlockType _completion;
    id <GDKFileSectionProviding> _fileSectionProvider;
    id <GDKItemsLiveList> _liveList;
    id <GDKItemsLiveListDelegate> _liveListDelegate;
    GDKFileChangeListener *_folderChangeListener;
    NSMutableArray *_sectionedModel;
    GDKCollectionViewModel *_viewModel;
    id <GDKDataSourceSectionProviding> _additionalSectionProvider;
    GIPReachability *_reachability;
    GDKTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) _Bool dynamicTypeEnabled; // @synthesize dynamicTypeEnabled=_dynamicTypeEnabled;
@property(readonly, nonatomic) GIPReachability *reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) id <GDKDataSourceSectionProviding> additionalSectionProvider; // @synthesize additionalSectionProvider=_additionalSectionProvider;
@property(nonatomic) _Bool loadMoreInProgress; // @synthesize loadMoreInProgress=_loadMoreInProgress;
@property(retain, nonatomic) GDKCollectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableArray *sectionedModel; // @synthesize sectionedModel=_sectionedModel;
@property(retain, nonatomic) GDKFileChangeListener *folderChangeListener; // @synthesize folderChangeListener=_folderChangeListener;
@property(retain, nonatomic) id <GDKItemsLiveListDelegate> liveListDelegate; // @synthesize liveListDelegate=_liveListDelegate;
@property(retain, nonatomic) id <GDKItemsLiveList> liveList; // @synthesize liveList=_liveList;
@property(readonly, nonatomic) id <GDKFileSectionProviding> fileSectionProvider; // @synthesize fileSectionProvider=_fileSectionProvider;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) id <GDKFile> folder; // @synthesize folder=_folder;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *explicitTitle; // @synthesize explicitTitle=_explicitTitle;
@property(readonly, nonatomic) id <GDKItemsLiveListQuerent> liveListQuerent; // @synthesize liveListQuerent=_liveListQuerent;
@property(readonly, nonatomic) id <GDKFileFetcher> fileFetcher; // @synthesize fileFetcher=_fileFetcher;
@property(retain, nonatomic) GDKFileIDResourceKeyPair *folderIDResourceKeyPair; // @synthesize folderIDResourceKeyPair=_folderIDResourceKeyPair;
@property(nonatomic) _Bool hasPendingUpdate; // @synthesize hasPendingUpdate=_hasPendingUpdate;
@property(getter=isCurrentlyRefreshingPeopleData) _Bool currentlyRefreshingPeopleData; // @synthesize currentlyRefreshingPeopleData=_currentlyRefreshingPeopleData;
@property(readonly, nonatomic) id <SSOIdentity> userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, copy, nonatomic) NSOrderedSet *supportedSortTypes; // @synthesize supportedSortTypes=_supportedSortTypes;
@property(retain, nonatomic) GDKFileQuery *fileQuery; // @synthesize fileQuery=_fileQuery;
@property(nonatomic) __weak id <GDKFilesViewViewControllerContainingDelegate> vcParentDelegate; // @synthesize vcParentDelegate=_vcParentDelegate;
@property(nonatomic) __weak id <GDKFilesViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <GDKDragSessionManagerProtocol> dragSessionManager; // @synthesize dragSessionManager=_dragSessionManager;
- (void)notify:(id)arg1 userInfo:(id)arg2;
- (id)firstItemOfLastSectionInViewModel:(id)arg1;
- (_Bool)isValidIndexPath:(id)arg1 forOperation:(BOOL)arg2 inViewModel:(id)arg3;
- (CDUnknownBlockType)updateBlockWithPreviousSectionedModel:(id)arg1 previousViewModel:(id)arg2;
- (id)fileIdentifierToIndexPathMap:(id)arg1;
- (id)cvoConfigurationForSection:(long long)arg1;
- (void)performQuery;
- (id)sectionsForSort:(id)arg1;
- (void)viewObject:(id)arg1 actionWasPerformed:(id)arg2 userInfo:(id)arg3;
- (void)itemsLiveList:(id)arg1 itemsDidChange:(id)arg2 error:(id)arg3;
- (void)itemsLiveList:(id)arg1 didFetchResults:(id)arg2 resultsCompleteness:(long long)arg3 error:(id)arg4;
- (void)peopleSectionProvider:(id)arg1 didSelectFileIDResourceKeyPair:(id)arg2 fromView:(id)arg3;
- (void)quickAccessSectionProvider:(id)arg1 didLongPressFile:(id)arg2 fromView:(id)arg3;
- (void)quickAccessSectionProvider:(id)arg1 didSelectFile:(id)arg2 fromView:(id)arg3;
- (void)didMoveToParentViewControllerFromViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)reachabilityDidChange:(id)arg1;
- (id)activityIndicatorHeaderViewObject;
- (void)insertLoadMoreSectionIntoViewModel:(id)arg1 resultsCompleteness:(long long)arg2;
- (void)insertSectionsFromDeltas:(id)arg1 intoViewModel:(id)arg2;
- (void)insertAdditionalSections:(id)arg1 intoViewModel:(id)arg2;
- (id)styleOverridesForSection:(long long)arg1;
- (id)sectionedModelFromDeltaItems:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (_Bool)isEmpty;
- (void)didEndDisplayingFileAtIndexPath:(id)arg1;
- (void)willDisplayFileAtIndexPath:(id)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)indexPathForFile:(id)arg1;
- (id)fileAtIndexPath:(id)arg1;
- (long long)numberOfFilesInSection:(unsigned long long)arg1;
- (long long)numberOfSections;
- (unsigned long long)sectionIndexForFiles;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) GDKSort *sort;
- (void)destroyModel;
- (_Bool)hasMoreFiles;
- (_Bool)isLoadUserVisible;
- (void)loadMoreFiles:(CDUnknownBlockType)arg1;
- (void)createModel:(CDUnknownBlockType)arg1;
- (void)configureDataSourceWithLiveListQuerent:(id)arg1;
- (id)initWithParams:(id)arg1 fileFetcher:(id)arg2 liveListQuerent:(id)arg3 fileSectionProvider:(id)arg4 additionalSectionProvider:(id)arg5 dragSessionManager:(id)arg6 theme:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

