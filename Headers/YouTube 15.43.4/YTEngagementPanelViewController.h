//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTCollectionConfigurationResponderProvider-Protocol.h"
#import "YTCollectionViewScrollObserver-Protocol.h"
#import "YTCollectionViewScrollObserverResponderProvider-Protocol.h"
#import "YTCompanionAdResponderProvider-Protocol.h"
#import "YTEngagementPanelHeaderViewDelegate-Protocol.h"
#import "YTEngagementPanelResizeDelegate-Protocol.h"
#import "YTEngagementPanelScrollSyncViewControllerDelegate-Protocol.h"
#import "YTEngagementPanelScrollToItemControllerDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTHotConfigObserver-Protocol.h"
#import "YTResponseViewController-Protocol.h"
#import "YTStyleContextResponderProvider-Protocol.h"

@class GIMMe, NSHashTable, NSIndexPath, NSString, UICollectionView, YTEngagementPanelScrollSyncViewController, YTEngagementPanelScrollToItemController, YTEngagementPanelView, YTHotConfig, YTICommand, YTIEngagementPanelOpenStyle, YTInteractionLoggingProxyButton;
@protocol ELMContext, YTCollectionViewProtocol, YTEngagementPanelDelegate, YTEngagementPanelViewModel, YTRendererController, YTResponder;

@interface YTEngagementPanelViewController : UIViewController <YTStyleContextResponderProvider, YTCollectionConfigurationResponderProvider, YTGraftingViewController, YTEngagementPanelResizeDelegate, YTEngagementPanelScrollSyncViewControllerDelegate, YTEngagementPanelScrollToItemControllerDelegate, YTHotConfigObserver, YTCollectionViewScrollObserver, YTCollectionViewScrollObserverResponderProvider, YTCompanionAdResponderProvider, YTEngagementPanelHeaderViewDelegate, YTResponseViewController>
{
    YTICommand *_showEngagementPanelCommand;
    _Bool _hasUpdatedAndAttachedButtonsInHeader;
    _Bool _hasUpdatedAndAttachedResizeHandleProxyButton;
    _Bool _isEngagementPanelOnShowCommandsFixEnabled;
    UIViewController<YTRendererController> *_sectionListContentViewController;
    UIViewController<YTRendererController> *_browseSectionListContentViewController;
    UIViewController<YTRendererController> *_commentRepliesEngagementPanelContentViewController;
    NSHashTable *_scrollObservers;
    id <ELMContext> _elementsContext;
    _Bool _engagementPanelScrollSyncFeatureEnabled;
    YTEngagementPanelScrollToItemController *_engagementPanelScrollToItemController;
    YTEngagementPanelScrollSyncViewController *_engagementPanelScrollSyncViewController;
    _Bool _scrollSyncEnabled;
    NSIndexPath *_lastActiveScrollIndexPath;
    UICollectionView<YTCollectionViewProtocol> *_collectionView;
    YTInteractionLoggingProxyButton *_resizeHandleProxyButton;
    YTHotConfig *_hotConfig;
    _Bool _modelReloadNeeded;
    _Bool _activelyEngaging;
    _Bool _scrolledByUser;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTEngagementPanelDelegate> _delegate;
    YTIEngagementPanelOpenStyle *_openStyle;
    NSString *_panelIdentifier;
    id <YTEngagementPanelViewModel> _model;
    UIViewController<YTRendererController> *_contentViewController;
    id <YTEngagementPanelViewModel> _rootPanelModel;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isScrolledByUser) _Bool scrolledByUser; // @synthesize scrolledByUser=_scrolledByUser;
@property(retain, nonatomic) id <YTEngagementPanelViewModel> rootPanelModel; // @synthesize rootPanelModel=_rootPanelModel;
@property(nonatomic, getter=isActivelyEngaging) _Bool activelyEngaging; // @synthesize activelyEngaging=_activelyEngaging;
@property(nonatomic) _Bool modelReloadNeeded; // @synthesize modelReloadNeeded=_modelReloadNeeded;
@property(readonly, nonatomic) UIViewController<YTRendererController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) id <YTEngagementPanelViewModel> model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *panelIdentifier; // @synthesize panelIdentifier=_panelIdentifier;
@property(readonly, nonatomic) YTIEngagementPanelOpenStyle *openStyle; // @synthesize openStyle=_openStyle;
@property(nonatomic) __weak id <YTEngagementPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)createActionSheet;
- (_Bool)isEngagementPanelAllowedToResizeForModel:(id)arg1;
- (id)elementsContext;
- (void)collectionViewControllerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)engagementPanelScrollToItemController:(id)arg1 scrollToItemDataChanged:(id)arg2;
- (void)onScrollSyncStateChanged:(_Bool)arg1;
- (void)hotConfigDidChange:(id)arg1;
- (void)scrollToLastActiveCollectionViewItem;
- (void)prepareFooterViewForModel:(id)arg1;
- (void)prepareHeaderViewForModel:(id)arg1;
- (void)prepareContentViewControllerForModel:(id)arg1;
- (void)reloadContentWithContinuation:(id)arg1;
- (void)setupResponderEventHandlers;
- (_Bool)hideSectionTopInset;
- (_Bool)showDonationCompanionShelf;
- (void)engagementPanelHeaderDidTapThumbnail;
- (void)didTapInformationButton;
- (void)didTapActionButton;
- (void)didTapOverflowMenuButton:(id)arg1;
- (void)didTapSortFilterMenuButton:(id)arg1;
- (void)didTapCloseButton;
- (void)didTapBackButton;
- (void)didTapResizeHandle;
- (void)engagementPanelDidEndDragging:(id)arg1 velocity:(struct CGPoint)arg2;
- (void)engagementPanelDidDrag:(id)arg1 offset:(struct CGPoint)arg2;
- (void)engagementPanelWillBeginDragging:(id)arg1;
@property(readonly, nonatomic) NSString *styleContext;
- (void)addCompanionAdObserver:(id)arg1;
- (void)removeScrollObserver:(id)arg1;
- (void)addScrollObserver:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)willMakeRequest:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)relogScreen;
- (id)navEndpoint;
- (id)elementsConfiguration;
- (_Bool)shouldBlacklistElements;
- (_Bool)shouldEnableElements;
- (void)viewDidLayoutSubviews;
- (void)initializeScrollSyncViewController;
- (void)logEngagementPanelVisibilityDidChange:(int)arg1 gestureType:(int)arg2;
- (void)setFullscreen:(_Bool)arg1;
- (_Bool)shouldAllowAutoplay;
- (_Bool)containsLiveChat;
- (void)setupInteractionLoggingWithCommand:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *overrideStyleContext;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;
@property(retain, nonatomic) YTEngagementPanelView *view; // @dynamic view;

@end

