//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GLUEStyleable-Protocol.h"
#import "SPContentInsetViewController-Protocol.h"
#import "SPTEntityHeaderContentController-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPodcastEpisodeDescriptionTableViewCellDelegate-Protocol.h"
#import "SPTPodcastEpisodeFeaturedContentViewControllerDelegate-Protocol.h"
#import "SPTPodcastEpisodeViewModelDelegate-Protocol.h"
#import "SPTPodcastRecommendationsViewControllerDelegate-Protocol.h"
#import "SPTShareableContext-Protocol.h"
#import "SPViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEEntityRowTableViewCell, NSString, NSURL, SPTEntityHeaderViewController, SPTPodcastEpisodeActionsTableViewCell, SPTPodcastEpisodeCoverArtTableViewCell, SPTPodcastEpisodeDescriptionTableViewCell, SPTPodcastEpisodeEntityHeaderContentViewController, SPTPodcastEpisodeFeatureProperties, SPTPodcastEpisodeLogger, SPTPodcastEpisodeTheme, SPTPodcastEpisodeViewModel, SPTProgressView, SPTTableView, UIBarButtonItem, UITableViewCell;
@protocol SPTImageLoaderFactory, SPTLinkDispatcher, SPTModalPresentationController, SPTPageContainer, SPTPodcastContextMenuProvider, SPTPodcastEpisodeFeaturedContentViewController, SPTPodcastRecommendationsViewController, SPTPodcastUIButtonsFactory, SPTProductState, SPTRemoteConfigurationResolver, SPTShareFeature, SPTShowContextMenuControllerOptions, SPTViewLogger;

@interface SPTPodcastEpisodeViewController : UIViewController <SPContentInsetViewController, SPTPodcastEpisodeViewModelDelegate, SPTEntityHeaderContentController, SPTPodcastEpisodeDescriptionTableViewCellDelegate, SPTNavigationControllerNavigationBarState, SPTPodcastRecommendationsViewControllerDelegate, SPTPodcastEpisodeFeaturedContentViewControllerDelegate, GLUEStyleable, UITableViewDelegate, UITableViewDataSource, SPTPageController, SPViewController, SPTShareableContext>
{
    _Bool _showLoadingOverlayProgressView;
    _Bool _viewHasAppeared;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTProductState> _productState;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTShareFeature> _shareFeature;
    SPTPodcastEpisodeViewModel *_podcastEpisodeViewModel;
    SPTPodcastEpisodeTheme *_podcastTheme;
    SPTPodcastEpisodeEntityHeaderContentViewController *_headerContentController;
    SPTEntityHeaderViewController *_headerView;
    SPTTableView *_tableView;
    SPTPodcastEpisodeActionsTableViewCell *_actionsCell;
    SPTPodcastEpisodeDescriptionTableViewCell *_descriptionCell;
    SPTPodcastEpisodeCoverArtTableViewCell *_coverArtCell;
    UITableViewCell *_featuredContentCell;
    GLUEEntityRowTableViewCell *_podcastCell;
    UITableViewCell *_recommendationsCell;
    UIBarButtonItem *_contextMenuBarButtonItem;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    SPTPodcastEpisodeLogger *_logger;
    id <SPTViewLogger> _viewLogger;
    UIViewController<SPTPodcastRecommendationsViewController> *_recommendations;
    UIViewController<SPTPodcastEpisodeFeaturedContentViewController> *_featuredContent;
    id <SPTShowContextMenuControllerOptions> _contextMenuOptions;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPodcastUIButtonsFactory> _buttonsFactory;
    SPTProgressView *_progressView;
    double _featuredContentBottomMargin;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTPodcastEpisodeFeatureProperties *_featureProperties;
}

@property(retain, nonatomic) SPTPodcastEpisodeFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(nonatomic) __weak id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(nonatomic) double featuredContentBottomMargin; // @synthesize featuredContentBottomMargin=_featuredContentBottomMargin;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) _Bool showLoadingOverlayProgressView; // @synthesize showLoadingOverlayProgressView=_showLoadingOverlayProgressView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTPodcastUIButtonsFactory> buttonsFactory; // @synthesize buttonsFactory=_buttonsFactory;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTShowContextMenuControllerOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(retain, nonatomic) UIViewController<SPTPodcastEpisodeFeaturedContentViewController> *featuredContent; // @synthesize featuredContent=_featuredContent;
@property(retain, nonatomic) UIViewController<SPTPodcastRecommendationsViewController> *recommendations; // @synthesize recommendations=_recommendations;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTPodcastEpisodeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(retain, nonatomic) UIBarButtonItem *contextMenuBarButtonItem; // @synthesize contextMenuBarButtonItem=_contextMenuBarButtonItem;
@property(retain, nonatomic) UITableViewCell *recommendationsCell; // @synthesize recommendationsCell=_recommendationsCell;
@property(retain, nonatomic) GLUEEntityRowTableViewCell *podcastCell; // @synthesize podcastCell=_podcastCell;
@property(retain, nonatomic) UITableViewCell *featuredContentCell; // @synthesize featuredContentCell=_featuredContentCell;
@property(retain, nonatomic) SPTPodcastEpisodeCoverArtTableViewCell *coverArtCell; // @synthesize coverArtCell=_coverArtCell;
@property(retain, nonatomic) SPTPodcastEpisodeDescriptionTableViewCell *descriptionCell; // @synthesize descriptionCell=_descriptionCell;
@property(retain, nonatomic) SPTPodcastEpisodeActionsTableViewCell *actionsCell; // @synthesize actionsCell=_actionsCell;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTEntityHeaderViewController *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTPodcastEpisodeEntityHeaderContentViewController *headerContentController; // @synthesize headerContentController=_headerContentController;
@property(retain, nonatomic) SPTPodcastEpisodeTheme *podcastTheme; // @synthesize podcastTheme=_podcastTheme;
@property(retain, nonatomic) SPTPodcastEpisodeViewModel *podcastEpisodeViewModel; // @synthesize podcastEpisodeViewModel=_podcastEpisodeViewModel;
@property(readonly, nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
- (void).cxx_destruct;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)playURIInContext:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)sp_updateContentInsets;
- (void)playButtonTapped:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)setupConstraints;
- (void)setupHeaderViewController;
- (void)initializeView;
- (void)featuredViewControllerUpdated:(id)arg1;
- (void)viewControllerUpdated:(id)arg1;
- (void)episodeDescriptionURLTapped:(id)arg1;
- (void)episodeDescriptionTimestampTapped:(double)arg1;
- (void)episodeDescriptionDidExpand;
- (void)viewModelUpdatedPlaybackState:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateWithError:(id)arg2;
- (void)removeViewControllerFromCell:(id)arg1;
- (void)addViewController:(id)arg1 toCell:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) NSURL *URI;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (unsigned long long)preferredNavigationBarState;
- (void)glue_applyStyle:(id)arg1;
- (void)invokeHeaderContextMenu:(id)arg1;
- (void)setupContextMenuButtons;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEpisodeViewModel:(id)arg1 imageLoaderFactory:(id)arg2 productState:(id)arg3 modalPresentationController:(id)arg4 podcastContextMenuProvider:(id)arg5 shareFeature:(id)arg6 logger:(id)arg7 viewLogger:(id)arg8 recommendations:(id)arg9 featuredContent:(id)arg10 linkDispatcher:(id)arg11 buttonsFactory:(id)arg12 remoteConfigurationResolver:(id)arg13;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

