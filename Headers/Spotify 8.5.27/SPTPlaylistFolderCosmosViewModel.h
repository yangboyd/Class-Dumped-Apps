//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistFolderViewModel-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSURL, SPTPlaylistTestManager;
@protocol SPTCollectionLogger, SPTOfflineManager, SPTPlaylistFolderViewModelDelegate, SPTPlaylistModel, SPTPlaylistPlatformDataLoaderRequestToken, SPTPlaylistPlatformPlaylistDataLoader, SPTPlaylistPlatformPlaylistSynchroniser;

@interface SPTPlaylistFolderCosmosViewModel : NSObject <SPTPlaylistFolderViewModel>
{
    _Bool _showLocalFilesCell;
    _Bool _showDisplaySectionIndex;
    _Bool _showsOnlyWritablePlaylists;
    _Bool _showsOnlyOfflinedContent;
    _Bool _showCreateNewPlaylistCellInFolderRoot;
    _Bool _contentFiltered;
    _Bool _loaded;
    _Bool _ascendingSortOrder;
    _Bool _gotResponseForCurrentSubscription;
    id <SPTPlaylistFolderViewModelDelegate> delegate;
    NSString *_textFilter;
    NSURL *_uri;
    NSString *_name;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _subscription;
    unsigned long long _totalLength;
    unsigned long long _unfilteredLength;
    NSMutableArray *_rawItems;
    NSArray *_sectionedItems;
    NSArray *_headers;
    NSDictionary *_indexPathsToIndexes;
    unsigned long long _sortColumn;
    id <SPTPlaylistPlatformPlaylistSynchroniser> _playlistSynchroniser;
    id <SPTOfflineManager> _offlineManager;
    id <SPTCollectionLogger> _logger;
    id <SPTPlaylistModel> _playlistModel;
    NSMutableArray *_sectionCounts;
    SPTPlaylistTestManager *_testManager;
}

@property(retain, nonatomic) SPTPlaylistTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) NSMutableArray *sectionCounts; // @synthesize sectionCounts=_sectionCounts;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(nonatomic) _Bool gotResponseForCurrentSubscription; // @synthesize gotResponseForCurrentSubscription=_gotResponseForCurrentSubscription;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistSynchroniser> playlistSynchroniser; // @synthesize playlistSynchroniser=_playlistSynchroniser;
@property(nonatomic) _Bool ascendingSortOrder; // @synthesize ascendingSortOrder=_ascendingSortOrder;
@property(nonatomic) unsigned long long sortColumn; // @synthesize sortColumn=_sortColumn;
@property(retain, nonatomic) NSDictionary *indexPathsToIndexes; // @synthesize indexPathsToIndexes=_indexPathsToIndexes;
@property(retain, nonatomic) NSArray *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSArray *sectionedItems; // @synthesize sectionedItems=_sectionedItems;
@property(retain, nonatomic) NSMutableArray *rawItems; // @synthesize rawItems=_rawItems;
@property(nonatomic) unsigned long long unfilteredLength; // @synthesize unfilteredLength=_unfilteredLength;
@property(nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered; // @synthesize contentFiltered=_contentFiltered;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) _Bool showCreateNewPlaylistCellInFolderRoot; // @synthesize showCreateNewPlaylistCellInFolderRoot=_showCreateNewPlaylistCellInFolderRoot;
@property(nonatomic) _Bool showsOnlyOfflinedContent; // @synthesize showsOnlyOfflinedContent=_showsOnlyOfflinedContent;
@property(nonatomic) _Bool showsOnlyWritablePlaylists; // @synthesize showsOnlyWritablePlaylists=_showsOnlyWritablePlaylists;
@property(nonatomic) _Bool showDisplaySectionIndex; // @synthesize showDisplaySectionIndex=_showDisplaySectionIndex;
@property(nonatomic) _Bool showLocalFilesCell; // @synthesize showLocalFilesCell=_showLocalFilesCell;
@property(nonatomic) __weak id <SPTPlaylistFolderViewModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)buildItemsFromRawItems;
- (void)updateItemsWithAPIResponse:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)isPlaylistAtIndexPath:(id)arg1;
- (_Bool)isItemLoadedAtIndexPath:(id)arg1;
- (void)reload;
- (void)synchronisePlaylistAtIndexPath:(id)arg1;
- (void)resetFilters;
@property(readonly, nonatomic) NSArray *supportedSortColumns;
- (void)setSortOrderWithColumn:(unsigned long long)arg1 ascending:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)logItemSelectedAtIndexPath:(id)arg1 targetURL:(id)arg2;
- (_Bool)toggleItemOfflineStateAtIndexPath:(id)arg1;
- (_Bool)playlistIsSeparatorAtIndexPath:(id)arg1;
- (_Bool)canUserAddToPlaylistForRowAtIndexPath:(id)arg1;
- (void)stopObservingPlaylistContainerChildren;
- (void)startObservingPlaylistContainerChildren;
- (void)endObservingRowAtIndexPath:(id)arg1 context:(id)arg2;
- (void)beginObservingRowAtIndexPath:(id)arg1 context:(id)arg2;
- (id)indexPathForPlaylistURL:(id)arg1;
- (id)imageURLForRowAtIndexPath:(id)arg1;
- (_Bool)isCollaborativePlaylistAtIndexPath:(id)arg1;
- (_Bool)isRowAtIndexPathOwnedBySelf:(id)arg1;
- (void)deleteRowAtIndexPath:(id)arg1;
- (_Bool)canDeleteRowAtIndexPath:(id)arg1;
- (id)URLForRowAtIndexPath:(id)arg1;
- (long long)offlineSyncStatusAtIndexPath:(id)arg1;
- (long long)iconForRowAtIndexPath:(id)arg1;
- (id)indexPathForFlatIndex:(unsigned long long)arg1;
- (id)madeForUsernameAtIndexPath:(id)arg1;
- (unsigned long long)flatIndexForIndexPath:(id)arg1;
- (long long)numberOfItemsInRowAtIndexPath:(id)arg1;
- (id)ownerForRowAtIndexPath:(id)arg1;
- (id)subtitleForRowAtIndexPath:(id)arg1;
- (id)titleForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)loadRange:(struct _NSRange)arg1;
- (void)load;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) unsigned long long numberOfPlaylistContainers;
@property(readonly, nonatomic) _Bool isPlaylistFolderRootlist;
- (id)initWithPlaylistDataLoader:(id)arg1 folderURL:(id)arg2 logger:(id)arg3 playlistModel:(id)arg4 offlineManager:(id)arg5 playlistSynchroniser:(id)arg6 testManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

