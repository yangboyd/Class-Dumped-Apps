//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGGestureCoordinatingCollectionViewTouchCancellationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMusicBrowserNavigationBarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMusicRecommendedSongSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMusicSongSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMusicTrackFetchResultsDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class CALayer, IGGestureCoordinatingCollectionView, IGListAdapter, IGStoryMusicBrowserLoadingScreen, IGStoryMusicBrowserNavigationBar, IGStoryMusicTrendingDataSource, IGUserSession, NSMutableOrderedSet, NSOrderedSet, NSString;
@protocol IGStoryMusicTrendingViewControllerDelegate;

@interface IGStoryMusicTrendingViewController : UIViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGGestureCoordinatingCollectionViewTouchCancellationDelegate, IGStoryMusicBrowserNavigationBarDelegate, IGStoryMusicTrackFetchResultsDelegate, IGStoryMusicSongSectionControllerDelegate, IGStoryMusicRecommendedSongSectionControllerDelegate>
{
    IGStoryMusicBrowserNavigationBar *_navigationBar;
    CALayer *_navigationBarUnderlineSeparator;
    IGStoryMusicBrowserLoadingScreen *_loadingScreen;
    IGGestureCoordinatingCollectionView *_collectionView;
    NSMutableOrderedSet *_selectedTracks;
    IGListAdapter *_listAdapter;
    IGStoryMusicTrendingDataSource *_dataSource;
    IGUserSession *_userSession;
    long long _currentlyPlayingCellIndex;
    _Bool _navigationBarHidden;
    _Bool _loading;
    id <IGStoryMusicTrendingViewControllerDelegate> _delegate;
    double _bottomInset;
    unsigned long long _selectionStyle;
    unsigned long long _uploadStep;
    NSString *_category;
    NSString *_subcategory;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *subcategory; // @synthesize subcategory=_subcategory;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) unsigned long long uploadStep; // @synthesize uploadStep=_uploadStep;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(readonly, nonatomic) IGStoryMusicBrowserNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) __weak id <IGStoryMusicTrendingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deselectTrack:(id)arg1;
- (void)selectTrack:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *selectedTracks;
- (void)_stopPlayingSection:(long long)arg1;
- (void)musicTrackFetchResultsDidUpdateTrackCount:(id)arg1;
- (void)setLoading:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)_didTapBackButton:(id)arg1;
- (void)didTapNavigationBar:(id)arg1;
- (void)recommendedSongSectionController:(id)arg1 didSelectMusicTrack:(id)arg2;
- (void)recommendedSongSectionControllerWillBeginPlayingMusic:(id)arg1;
- (void)musicSongSectionController:(id)arg1 didTapMusicTrack:(id)arg2;
- (void)musicSongSectionControllerWillBeginPlayingMusic:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)gestureCoordinatingCollectionView:(id)arg1 touchesShouldCancelInContentView:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataSourceRequest:(id)arg1 userSession:(id)arg2;
- (id)initWithDataSource:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

