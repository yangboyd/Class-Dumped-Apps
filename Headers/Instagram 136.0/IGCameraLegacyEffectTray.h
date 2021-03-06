//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGCameraEffectBottomSheetViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCameraLegacyEffectTrayCollectionControllerDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGPartialModalSheetListener-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGAREffectApplicator, IGCameraEffectBottomSheetViewController, IGCameraLegacyEffectTrayCollectionController, IGCameraLegacyEffectTrayGalleryView, IGCameraLegacyEffectTrayListView, IGUserSession, NSIndexPath, NSString, UISelectionFeedbackGenerator;
@protocol IGCameraLegacyEffectTrayDataSource, IGCameraLegacyEffectTrayDelegate;

@interface IGCameraLegacyEffectTray : UIView <IGPartialModalSheetListener, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, IGCameraLegacyEffectTrayCollectionControllerDataSource, IGCameraEffectBottomSheetViewControllerDelegate>
{
    IGAREffectApplicator *_arEffectApplicator;
    NSIndexPath *_currentAREffectIndexPath;
    _Bool _compactTrayDesignEnabled;
    IGUserSession *_userSession;
    CDStruct_70b37879 _config;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _Bool _isTrayAnimatingScrollToItem;
    IGCameraLegacyEffectTrayCollectionController *_effectCollectionController;
    IGCameraEffectBottomSheetViewController *_bottomSheetViewController;
    UIView *_backgroundView;
    IGCameraLegacyEffectTrayGalleryView *_galleryView;
    _Bool _displaysBrowseEffects;
    id <IGCameraLegacyEffectTrayDelegate> _delegate;
    id <IGCameraLegacyEffectTrayDataSource> _dataSource;
    IGCameraLegacyEffectTrayListView *_thumbnailList;
}

@property(retain, nonatomic) IGCameraLegacyEffectTrayListView *thumbnailList; // @synthesize thumbnailList=_thumbnailList;
@property(nonatomic) __weak id <IGCameraLegacyEffectTrayDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGCameraLegacyEffectTrayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool displaysBrowseEffects; // @synthesize displaysBrowseEffects=_displaysBrowseEffects;
- (void).cxx_destruct;
- (unsigned long long)_numberOfItemsInTray;
- (unsigned long long)_trayCellIndexForAREffectIndex:(unsigned long long)arg1;
- (unsigned long long)_arEffectIndexForRow:(long long)arg1;
- (id)_cellFromAREffectIndex:(long long)arg1;
- (id)_configureBottomSheetWithEffectModel:(id)arg1;
- (void)_presentMoreInfoSheetForItemAtIndex:(long long)arg1;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (id)cameraEffectBottomSheetViewControllerAttributionModelForCurrentAREffect:(id)arg1;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didRequestRemovalOfEffectWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didToggleSaveToWishlist:(_Bool)arg2;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didTapViewProductItem:(id)arg2;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didToggleNetworkAccess:(_Bool)arg2;
- (void)cameraEffectBottomSheetViewControllerDidTapAddToBag:(id)arg1;
- (void)cameraEffectBottomSheetViewControllerDidLeaveFullscreenMode:(id)arg1;
- (void)cameraEffectBottomSheetViewControllerDidEnterFullscreenMode:(id)arg1;
- (long long)arEffectCollectionControllerLoggingSurface:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_selectItemAtIndexPath:(id)arg1 passively:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)arEffectWithID:(id)arg1;
- (id)arEffectAtIndex:(long long)arg1;
- (long long)indexOfAREffectWithID:(id)arg1;
- (void)_applyAREffectAtIndexPath:(id)arg1 effectPersistedMetadata:(id)arg2;
- (void)_processDidSelectItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 effectPersistedMetadata:(id)arg3;
- (struct CGRect)_calculateGalleryViewFrame;
- (void)_didTapGallery:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setAutoSelectTrayBehaviorEnabled:(_Bool)arg1;
- (void)showMoreInfoSheet;
- (id)_defaultIndexPath;
- (id)selectedAREffectID;
- (id)_selectedAREffectModel;
- (long long)selectedAREffectIndex;
- (void)selectAREffectAtIndex:(long long)arg1 effectPersistedMetadata:(id)arg2;
- (void)selectAREffectAtIndex:(long long)arg1;
- (void)selectAREffectWithID:(id)arg1 effectPersistedMetadata:(id)arg2;
- (void)selectDefaultItem;
- (void)deselectsAREffect;
- (void)reloadAREffectsForSwitcherMode:(long long)arg1 withSelection:(_Bool)arg2;
- (void)_logImpressionForAREffectAtCollectionViewIndexPath:(id)arg1;
- (id)analyticsModule;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithAREffectApplicator:(id)arg1 config:(CDStruct_70b37879)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

