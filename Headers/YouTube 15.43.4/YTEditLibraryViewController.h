//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/UICollectionViewDelegate-Protocol.h>
#import <Module_Framework/YTCollectionViewScrollObserver-Protocol.h>
#import <Module_Framework/YTEditSplitChildViewController-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTUploadCameraRollCollectionViewControllerDelegate-Protocol.h>

@class GIMMe, NSString, YTCommandResponderEvent, YTEditDownloadDialogController, YTEditRetryDownloadDialogController, YTICommand, YTIInteractionLoggingClientData, YTInteractionLoggingProxyButton, YTUploadCameraRollCollectionViewController, YTUploadGelLogger;
@protocol UIScrollViewDelegate, YTEditLibraryThumbnailObserver, YTResponder;

@interface YTEditLibraryViewController : UIViewController <UICollectionViewDelegate, YTCollectionViewScrollObserver, YTGraftingViewController, YTUploadCameraRollCollectionViewControllerDelegate, YTEditSplitChildViewController>
{
    YTICommand *_model;
    YTIInteractionLoggingClientData *_clientData;
    _Bool _viewDidAppear;
    YTInteractionLoggingProxyButton *_videoSelectionProxyButton;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    id <YTEditLibraryThumbnailObserver> _thumbnailObserver;
    YTUploadGelLogger *_gelLogger;
    YTEditDownloadDialogController *_downloadDialog;
    YTEditRetryDownloadDialogController *_retryDialog;
    YTUploadCameraRollCollectionViewController *_cameraRollCollectionViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTUploadCameraRollCollectionViewController *cameraRollCollectionViewController; // @synthesize cameraRollCollectionViewController=_cameraRollCollectionViewController;
@property(retain, nonatomic) YTEditRetryDownloadDialogController *retryDialog; // @synthesize retryDialog=_retryDialog;
@property(retain, nonatomic) YTEditDownloadDialogController *downloadDialog; // @synthesize downloadDialog=_downloadDialog;
@property(retain, nonatomic) YTUploadGelLogger *gelLogger; // @synthesize gelLogger=_gelLogger;
@property(nonatomic) __weak id <YTEditLibraryThumbnailObserver> thumbnailObserver; // @synthesize thumbnailObserver=_thumbnailObserver;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)logFetchDidFailForFrontendID:(id)arg1 error:(id)arg2;
- (void)logFetchDidSucceedForFrontendID:(id)arg1;
- (void)logFetchDidStartForFrontendID:(id)arg1;
- (void)sendEditVideoEndpointWithClientVideoID:(id)arg1 frontendID:(id)arg2;
- (void)sendEditVideoEndpointWithGalleryAsset:(id)arg1 audiovisualAsset:(id)arg2 frontendID:(id)arg3;
- (void)didFetchPHAsset:(id)arg1 frontendID:(id)arg2 audiovisualAsset:(id)arg3 URL:(id)arg4 assetIdentifier:(id)arg5 fetchedFromCloud:(_Bool)arg6 cancelled:(_Bool)arg7 error:(id)arg8;
- (void)presentRetryDialogForIdentifier:(id)arg1 frontendID:(id)arg2 error:(id)arg3;
- (void)fetchAssetForIdentifier:(id)arg1 frontendID:(id)arg2;
- (void)didSelectAsset:(id)arg1;
- (id)navEndpoint;
- (_Bool)shouldRefreshVideoList;
- (void)didInsertItemsAtIndexes:(id)arg1 inSection:(id)arg2;
- (void)collectionViewControllerDidScroll:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)relogVEs;
- (void)setDisplayMode:(long long)arg1;
@property(nonatomic, getter=isActive) _Bool active;
- (void)refreshVideoList;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

