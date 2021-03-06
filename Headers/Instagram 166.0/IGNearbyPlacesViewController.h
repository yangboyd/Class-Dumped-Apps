//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGListAdapter, IGNetworkSource, IGSearchAnalyticsLogger, IGUserSession, NSArray, NSDate, NSString, UICollectionView;

@interface IGNearbyPlacesViewController : IGViewController <IGNetworkSourceDelegate, IGListAdapterDataSource, UICollectionViewDelegate>
{
    IGUserSession *_userSession;
    IGNetworkSource *_networkSource;
    IGSearchAnalyticsLogger *_searchAnalyticsLogger;
    NSString *_rankToken;
    NSDate *_fetchStartTime;
    NSArray *_places;
    NSArray *_viewModels;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3;
- (void)_fetch;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_logResultsLoaded;
- (void)_logTapActionWithPlace:(id)arg1 position:(long long)arg2;
- (void)_updateItems;
- (id)_generateTokenWithCurrentUser;
- (void)_setupCollectionViewAndAdapter;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 searchAnalyticsLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

