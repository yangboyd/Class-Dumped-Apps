//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCImageProcessLensCommandListener-Protocol.h"
#import "SCLensDataFetcherListener-Protocol.h"
#import "SCPreviewFeatureSnap3D-Protocol.h"
#import "SCPreviewFeatureSnap3DLensFiltersProviderDelegate-Protocol.h"

@class NSString, SCFriendsPageOnboardingView, SCFuture, SCImageProcessSnap3DLensCommand, SCLens, SCLensUriServiceProvider, SCLensUriServiceSnap3DRemoteDataHandler, SCPreviewConfiguration, SCPreviewFeatureSnap3DLensFiltersProvider, SCPreviewFeatureSnap3DLensFiltersTooltip, SCPreviewSnap3DRemoteAssetsProvider, SCPreviewView, SCSmartCarouselFilterArranger, SCTimeProvider, SCUserSession;
@protocol SCFeatureSwipeFilters, SCImageProcessLensCommandListener, SCLensByIdRetrievable, SCLensRemoteAssetsUploadOperation, SCLensUnlockerProtocol, SCPreviewFeatureSnap3DDelegate, SCPreviewLogging;

@interface SCPreviewFeatureSnap3DImpl : SCFeature <SCLensDataFetcherListener, SCPreviewFeatureSnap3DLensFiltersProviderDelegate, SCImageProcessLensCommandListener, SCPreviewFeatureSnap3D>
{
    SCPreviewConfiguration *_configuration;
    SCUserSession *_userSession;
    id <SCPreviewLogging> _previewLogger;
    id <SCFeatureSwipeFilters> _swipeFilters;
    SCSmartCarouselFilterArranger *_filterArranger;
    SCPreviewView *_previewView;
    SCPreviewFeatureSnap3DLensFiltersTooltip *_tooltip;
    SCFriendsPageOnboardingView *_onboardingView;
    _Bool _isToolTipShownBefore;
    SCTimeProvider *_currentDateProvider;
    SCPreviewSnap3DRemoteAssetsProvider *_remoteAssetsProvider;
    SCLensUriServiceProvider *_uriServiceProvider;
    SCLensUriServiceSnap3DRemoteDataHandler *_remoteDataHandler;
    SCPreviewFeatureSnap3DLensFiltersProvider *_lensFiltersProvider;
    NSString *_defaultLensId;
    SCLens *_activeLens;
    id <SCLensByIdRetrievable> _lensByIdRetrievable;
    id <SCLensUnlockerProtocol> _lensUnlocker;
    id <SCImageProcessLensCommandListener> _lensCommandListener;
    _Bool _enabled;
    _Bool _isTransitioningBetweenFilters;
    SCImageProcessSnap3DLensCommand *_snap3DLensCommand;
    id <SCPreviewFeatureSnap3DDelegate> _delegate;
}

@property(nonatomic) _Bool isTransitioningBetweenFilters; // @synthesize isTransitioningBetweenFilters=_isTransitioningBetweenFilters;
@property(nonatomic) __weak id <SCPreviewFeatureSnap3DDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) SCImageProcessSnap3DLensCommand *snap3DLensCommand; // @synthesize snap3DLensCommand=_snap3DLensCommand;
- (void).cxx_destruct;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeFaces:(unsigned long long)arg2;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeExpression:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didFinishProcessingFrameWithLens:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didUnloadWithLensComponentManager:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 willLoadWithLensComponentManager:(id)arg2;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingFilterOverlayImageForLens:(id)arg2 imagePath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingFilterOverlayImagePathForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForAsset:(id)arg2 content:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingAsset:(id)arg2;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingImageForLens:(id)arg2 image:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingImageForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForLens:(id)arg2 contentPath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingContentForLens:(id)arg2;
- (void)didLoadSwipeFilterForLens:(id)arg1;
- (void)hideTooltip;
- (void)_showTooltip;
- (void)_setupTooltipIfNeeded;
- (void)_showTooltipIfNeeded;
- (void)clearResources;
- (id)_currentFilterView;
- (id)lensCommandWithCurrentLens;
- (id)_getLensUnlocker:(id)arg1;
- (id)_getLensByIdRetrievable:(id)arg1;
- (id)_createLensCommandWithRemoteAssetsProvider:(id)arg1 uriServiceProvider:(id)arg2 isExportMode:(_Bool)arg3;
- (void)_setupUriServiceProvider;
- (void)_setupRemoteAssetsProvider;
- (void)configureVideoFilter:(id)arg1;
- (id)_metadataWithDepthDataFieldOfView;
- (void)activateLensFromCurrentFilter;
- (void)_activateDefaultLens;
- (void)activateLens:(id)arg1 withLensCommandListener:(id)arg2;
- (void)setSwipeFilters:(id)arg1;
@property(readonly, nonatomic) SCFuture *serializedLensAssetsFuture;
@property(readonly, nonatomic) id <SCLensRemoteAssetsUploadOperation> assetUploadOperation;
@property(readonly, nonatomic) SCFuture *serializedDepthMetadataFuture;
@property(readonly, nonatomic) SCFuture *lensMetadataFuture;
- (void)_activateBundledSnap3DLens;
- (void)_fetchLens:(id)arg1;
- (void)activate;
- (id)defaultLensId;
- (void)configureWithView:(id)arg1;
- (id)initWithConfiguration:(id)arg1 userSession:(id)arg2 lensUsageNotifier:(id)arg3 lensDataProviderFactory:(id)arg4 swipeFilters:(id)arg5 filterArranger:(id)arg6 previewLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

