//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistItemController-Protocol.h"
#import "SCOperaSession-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaPlaylist, SCOperaPlaylistItem, SCOperaPlaylistItemConverter, SCOperaViewController, SCOperaViewModel;
@protocol SCOperaPlaylistViewCoordinatorDelegate;

@interface SCOperaPlaylistViewCoordinator : NSObject <SCOperaSession, SCOperaPlaylistItemController>
{
    _Bool _shouldShowAttachment;
    unsigned long long _groupDisplaySquence;
    SCOperaPlaylist *_playlist;
    _Bool _hasPlayedItemForCurrentGroup;
    _Bool _hasOpenedOpera;
    _Bool _appIsInBackground;
    _Bool _isUpdatingViewModels;
    SCOperaViewModel *_currentViewModel;
    SCOperaPlaylistItemConverter *_playlistItemConverter;
    NSMutableDictionary *_groupIdToResolvedGroup;
    NSMutableDictionary *_pageIdToPlaylistItem;
    NSMutableDictionary *_itemIdToPlaylistItem;
    NSMutableDictionary *_itemIdToViewModels;
    NSMutableSet *_itemIdsWithViewPrepared;
    NSMutableSet *_itemIdsWithMediaPrepared;
    NSMutableSet *_groupIdsToUpdate;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCOperaPlaylistItem *_firstItemToDisplay;
    NSSet *_viewModelsToPreload;
    NSMutableDictionary *_itemIdToInjectedPlaylistItem;
    NSMutableDictionary *_playlistItemGroupIdToInjectedPlaylistItemGroup;
    NSString *_leftMostViewedPlaylistItemGroupId;
    unsigned long long _indexOfRightMostViewedPlaylistItemGroup;
    id <SCOperaPlaylistViewCoordinatorDelegate> _delegate;
    SCOperaViewController *_operaVC;
    SCOperaConfiguration *_operaConfiguration;
}

@property(nonatomic) __weak SCOperaConfiguration *operaConfiguration; // @synthesize operaConfiguration=_operaConfiguration;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
@property(nonatomic) __weak id <SCOperaPlaylistViewCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateViewModelsToPreload:(id)arg1;
- (void)_addViewModel:(id)arg1 toPreloadSetIfNecessary:(id)arg2;
- (long long)_normalizeIndexInPlaylist:(long long)arg1;
- (id)_nextGroupAfterGroup:(id)arg1;
- (long long)_indexOfRightMostPlaylistItemGroup;
- (long long)_indexOfLeftMostViewedPlaylistItemGroup;
- (long long)_rightMostPlaylistItemGroupToBuild;
- (long long)_leftMostPlaylistItemGroupToBuild;
- (void)_resolvePlaylistItemGroup:(id)arg1 forceResolve:(_Bool)arg2;
- (void)_prepareMediaForItem:(id)arg1 shouldUpdateViewModelIfFailed:(_Bool)arg2 waitForDownloading:(_Bool)arg3 startWaitingForDownloadCallback:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setPlaylistCurrentItemId:(id)arg1;
- (id)playlist;
- (id)rightMostViewedPlaylistItemGroup;
- (id)playlistItemGroupForGroupId:(id)arg1;
- (id)initialPlaylistItemToDisplayInGroup:(id)arg1;
- (id)firstPlaylistItemToDisplay;
- (id)dataModelForPlaylistItemGroup:(id)arg1;
- (id)dataModelForPlaylistItem:(id)arg1;
- (id)playlistItemForPageID:(id)arg1;
- (id)playlistItemForItemID:(id)arg1;
- (id)_viewModelWithNextViewModel:(id)arg1;
- (void)setPlaylistCurrentGroupId:(id)arg1 resetCurrentItem:(_Bool)arg2;
- (_Bool)insertPlaylistItemGroup:(id)arg1 afterPlaylistItemGroup:(id)arg2;
- (_Bool)insertPlaylistItem:(id)arg1 afterPlaylistItem:(id)arg2;
- (void)_removePageForViewModel:(id)arg1 item:(id)arg2;
- (void)_removePlaylistItem:(id)arg1;
- (void)removePlaylistItemForID:(id)arg1;
- (void)_regenerateViewModelForPlaylistItemWithID:(id)arg1;
- (void)playlistItemDidUpdateForID:(id)arg1;
- (void)updatePlaylistWithGroups:(id)arg1;
- (void)_updateOperaViewIfNecessaryWithRemovedItem:(id)arg1 group:(id)arg2;
- (void)_updateGroupsBasedOnGroupIdsToUpdate;
- (void)asyncUpdatePlaylistItemGroupForID:(id)arg1;
- (id)_groupForDataModel:(id)arg1;
- (id)_playlistBasedOnGroupDataModels:(id)arg1 initialGroupDataModel:(id)arg2;
- (void)_viewModelsForPlaylistItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_buildViewModelsForGroup:(id)arg1 isCurrentViewingGroup:(_Bool)arg2;
- (void)_updateConnectionsForPreviousGroup:(id)arg1 previousGroupViewModel:(id)arg2 currentGroup:(id)arg3 currentGroupViewModel:(id)arg4;
- (_Bool)_resolveGroupsInRange:(struct _NSRange)arg1 mediaLoadRange:(struct _NSRange)arg2;
- (struct _NSRange)_setupGroupsToBuild;
- (void)_updateViewModelsBasedOnPlaylist;
- (void)_updateViewModelsIfNecessaryOnEvent:(id)arg1 context:(id)arg2 playlistItem:(id)arg3;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)prepareFirstPlaylistItemWithCompletion:(CDUnknownBlockType)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3;
- (void)teardown;
- (void)updatePlaylistWithGroupDataModels:(id)arg1;
- (id)createInitialViewModel;
- (void)_setUpPlaylistWithGroupDataModels:(id)arg1 initialGroupDataModel:(id)arg2;
- (id)initWithItemGroupDataModels:(id)arg1 initialGroupDataModel:(id)arg2 mediaTypeConfigurations:(id)arg3 extraPropertiesProviders:(id)arg4 eventAnnouncer:(id)arg5 startWithAttachment:(_Bool)arg6 groupDisplaySquenceRule:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

