//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGFeedItemUpdatedForAllListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSavedItemStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGSavedMediaCollectionListener-Protocol.h>

@class IGEmptyFeedView, IGNetworkSource, IGSaveMapPlaceholderModel, IGUserSession, NSArray, NSMutableArray, NSString;
@protocol IGSavedMediaCollectionsAddPlaceholderDelegate, IGSavedMediaCollectionsDataSourceConfigurationType, IGSavedMediaCollectionsDataSourceDelegate, IGSavedMediaCollectionsThumbnailSectionControllerDelegate;

@interface IGSavedMediaCollectionsDataSource : NSObject <IGFeedItemUpdatedForAllListener, IGSavedItemStatusListener, IGSavedMediaCollectionListener, IGListAdapterDataSource, IGNetworkSourceDelegate>
{
    NSString *_module;
    NSMutableArray *_items;
    IGUserSession *_userSession;
    IGNetworkSource *_networkSource;
    IGEmptyFeedView *_emptyView;
    id <IGSavedMediaCollectionsDataSourceConfigurationType> _configuration;
    id <IGSavedMediaCollectionsThumbnailSectionControllerDelegate> _selectionDelegate;
    id <IGSavedMediaCollectionsAddPlaceholderDelegate> _addDelegate;
    id <IGSavedMediaCollectionsDataSourceDelegate> _dataSourceDelegate;
    _Bool _enableAddPlaceholder;
    IGSaveMapPlaceholderModel *_mapPlaceholderModel;
    NSArray *_collections;
    long long _locationCount;
}

@property(readonly, nonatomic) long long locationCount; // @synthesize locationCount=_locationCount;
@property(readonly, nonatomic) NSArray *collections; // @synthesize collections=_collections;
- (void).cxx_destruct;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3;
- (void)saveStatusChangedForItem:(id)arg1 withEvent:(long long)arg2 changedCollectionIds:(id)arg3;
- (void)_savedMediaRemoved:(id)arg1;
- (void)_savedMediaAdded:(id)arg1;
- (void)feedItemWasUpdated:(id)arg1 feedItemChange:(long long)arg2;
- (_Bool)_shouldCollectionBeVisible:(id)arg1;
- (void)_collectionUpdated:(id)arg1;
- (void)_collectionDeleted:(id)arg1;
- (void)_collectionCreated:(id)arg1;
- (void)savedMediaCollectionStatusChanged:(long long)arg1 collection:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)hasResults;
- (void)fetchMoreIfAvailable;
- (void)fetch;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 configuration:(id)arg2 selectionDelegate:(id)arg3 addDelegate:(id)arg4 dataSourceDelegate:(id)arg5 enableAddPlaceholder:(_Bool)arg6 module:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

