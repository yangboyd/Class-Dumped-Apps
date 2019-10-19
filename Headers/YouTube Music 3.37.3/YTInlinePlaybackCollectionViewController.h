//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeCollectionViewController.h"

#import "YTInlinePlaybackContainerDelegate-Protocol.h"
#import "YTInlinePlaybackCurrentWatchEndpointResponderProvider-Protocol.h"
#import "YTInlinePlaybackFlowLayoutDelegate-Protocol.h"
#import "YTInlinePlaybackGlobalPlayResponderProvider-Protocol.h"
#import "YTPlayerMDXObserver-Protocol.h"
#import "YTShowDimmedNextPreviousButtonsResponderProvider-Protocol.h"

@class NSString, YTInlinePlaybackPlayerContainerViewController;
@protocol YTPlayerMDXObservable;

@interface YTInlinePlaybackCollectionViewController : YTInnerTubeCollectionViewController <YTInlinePlaybackCurrentWatchEndpointResponderProvider, YTInlinePlaybackFlowLayoutDelegate, YTInlinePlaybackGlobalPlayResponderProvider, YTShowDimmedNextPreviousButtonsResponderProvider, YTInlinePlaybackContainerDelegate, YTPlayerMDXObserver>
{
    id <YTPlayerMDXObservable> _mdxObserver;
    _Bool _pendingViewLayout;
    YTInlinePlaybackPlayerContainerViewController *_playerContainerController;
    _Bool _visibilityReportingAllowed;
}

@property(nonatomic) _Bool visibilityReportingAllowed; // @synthesize visibilityReportingAllowed=_visibilityReportingAllowed;
- (void).cxx_destruct;
- (_Bool)isMDXActive;
- (_Bool)isInlinePlaybackGlobalPlayEnabled;
- (id)baseFeedControllerAtIndexPath:(id)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (id)candidateContainer;
- (void)handleInlinePlaybackStartResponderEvent:(id)arg1;
- (id)currentWatchEndpointForVideoId:(id)arg1;
- (id)activeInlinePlaybackContainerIndexPath;
- (_Bool)isInlinePlaybackEntry:(id)arg1;
- (_Bool)isInlinePlaybackContainerAtIndexPath:(id)arg1;
- (void)mdxSessionDidEnd;
- (void)mdxSessionDidBegin;
- (void)addRenderers:(id)arg1 afterIndexPath:(id)arg2;
- (_Bool)containerShouldAutorotate;
- (id)cellControllerAtIndexPath:(id)arg1;
- (void)updatePlayIconOnVisibleInlinePlaybackContainers;
@property(readonly, nonatomic) _Bool showDimmedNextPreviousButtons;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionViewDataDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 UIFormatter:(id)arg3 layout:(id)arg4 controllerFactory:(id)arg5;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 mdxObserver:(id)arg3 UIFormatter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

