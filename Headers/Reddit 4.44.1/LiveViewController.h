//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingViewController.h"

#import "BufferedListingPresentable-Protocol.h"
#import "LiveNetworkSourceDelegate-Protocol.h"
#import "LiveUpdateContentViewDelegate-Protocol.h"
#import "LiveUpdateDelegate-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "SocketSessionDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class BaseCollectionView, BaseLabel, BufferedListingPresenter, FeedViewFlowLayout, FloatingUpdateView, LiveEvent, NSDictionary, NSIndexPath, NSString, NSTimer, NSURL, NSURLSession, SocketSession, UIScrollView;

@interface LiveViewController : ListingViewController <LiveUpdateDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, LiveNetworkSourceDelegate, LiveUpdateContentViewDelegate, BufferedListingPresentable, SocketSessionDelegate, PagedTabControllerProtocol>
{
    NSTimer *_heartbeatTimer;
    SocketSession *_socketSession;
    LiveEvent *_liveEvent;
    BaseLabel *_titleLabel;
    FloatingUpdateView *_updateView;
    unsigned long long _newUpdatesCount;
    FeedViewFlowLayout *_feedViewFlowLayout;
    BaseCollectionView *_feedCollectionView;
    NSIndexPath *_maxScrollIndexPath;
    NSURLSession *_trackingSession;
    NSTimer *_trackingTimer;
}

@property(retain, nonatomic) NSTimer *trackingTimer; // @synthesize trackingTimer=_trackingTimer;
@property(retain, nonatomic) NSURLSession *trackingSession; // @synthesize trackingSession=_trackingSession;
@property(retain, nonatomic) NSIndexPath *maxScrollIndexPath; // @synthesize maxScrollIndexPath=_maxScrollIndexPath;
@property(retain, nonatomic) BaseCollectionView *feedCollectionView; // @synthesize feedCollectionView=_feedCollectionView;
@property(retain, nonatomic) FeedViewFlowLayout *feedViewFlowLayout; // @synthesize feedViewFlowLayout=_feedViewFlowLayout;
@property(nonatomic) unsigned long long newUpdatesCount; // @synthesize newUpdatesCount=_newUpdatesCount;
@property(retain, nonatomic) FloatingUpdateView *updateView; // @synthesize updateView=_updateView;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) LiveEvent *liveEvent; // @synthesize liveEvent=_liveEvent;
@property(retain, nonatomic) SocketSession *socketSession; // @synthesize socketSession=_socketSession;
@property(retain, nonatomic) NSTimer *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
- (void).cxx_destruct;
- (void)sendActivityTrackingRequest;
- (void)stopTrackingTimer;
- (void)setupTrackingTimer;
- (void)liveUpdateContentView:(id)arg1 didTapLinkWithURLString:(id)arg2;
@property(readonly, nonatomic) NSDictionary *analyticsScrollEventParameters;
@property(readonly, nonatomic) NSDictionary *analyticsScreenViewParameters;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
- (void)fireDisappearAnalyticsEvents;
- (void)fireAppearAnalyticsEvents;
- (void)logHeartbeatEvent;
- (void)stopHeartbeatLogging;
- (void)startHeartbeatLogging;
- (id)pageItemText;
- (id)pageItemSelectedImage;
- (id)pageItemImage;
- (void)liveNetworkSource:(id)arg1 didParseEmbedForUpdate:(id)arg2;
- (void)liveEventDidUpdate:(id)arg1;
- (void)socketSession:(id)arg1 didLoseConnectionWithError:(id)arg2;
- (void)socketSessionDidConnect:(id)arg1;
- (void)liveUpdateParser:(id)arg1 didStrikeUpdateWithPK:(id)arg2;
- (void)liveUpdateParser:(id)arg1 didReceiveEmbeds:(id)arg2 withRenderedEmbeds:(id)arg3 forPK:(id)arg4;
- (void)liveUpdateParser:(id)arg1 didDeleteUpdateWithPK:(id)arg2;
- (void)liveUpdateParser:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)attributedStringForHeader;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTouchFloatingUpdateView:(id)arg1;
- (void)setFloatingUpdateViewVisible:(_Bool)arg1 updatedTextOrNil:(id)arg2 animated:(_Bool)arg3;
- (double)sectionHeaderHeight;
- (double)totalHeaderHeight;
- (_Bool)scrollViewIsAtTop;
- (void)didFlushListingBuffer:(id)arg1;
- (void)listingDidFailFetching:(id)arg1;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (void)updateContentViewsWhenLoadingMoreFinishes;
- (void)updateContentViewsWhenReloadFinishes;
- (long long)preferredStatusBarStyle;
- (void)configureNavigationBarAppearance;
- (void)handleAppDidEnterBackgroundWhenViewControllerIsOnTheTop;
- (void)handleAppDidEnterForegroundWhenViewControllerIsOnTheTop;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configureTitleWithLiveEvent:(id)arg1;
- (void)configureWithLiveEvent:(id)arg1;
@property(readonly, nonatomic) BufferedListingPresenter *bufferedPresenter;
- (id)initWithPresenter:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) NSString *analyticsPageType;
@property(copy, nonatomic) NSString *analyticsReason;
@property(copy, nonatomic) NSURL *analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isViewLoaded;
@property(readonly, nonatomic) _Bool screenViewLoggingEnabled;
@property(readonly) Class superclass;

@end

