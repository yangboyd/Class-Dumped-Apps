//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGDirectVisualMessageActivityDataSource, IGListAdapter, IGRefreshControl, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGDirectVisualMessageChronologicalActivityViewController : IGViewController <IGListAdapterDataSource, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    long long _mediaType;
    IGDirectVisualMessageActivityDataSource *_activityDataSource;
    _Bool _isGroupThread;
    NSArray *_activities;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGRefreshControl *_refreshControl;
}

- (void).cxx_destruct;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_fetch;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)dismiss;
- (void)_setupCollectionViewAndListAdapter;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMediaType:(long long)arg1 userSession:(id)arg2 activityDataSource:(id)arg3 isGroupThread:(_Bool)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

