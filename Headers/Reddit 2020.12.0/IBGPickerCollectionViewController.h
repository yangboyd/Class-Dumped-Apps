//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGCollectionViewController.h>

#import <Instabug/IBGProgressViewDelegate-Protocol.h>
#import <Instabug/PHPhotoLibraryChangeObserver-Protocol.h>

@class IBGPickerDataSource, IBGProgressView, IBGVideoQualityReducer, NSString, UIBarButtonItem;
@protocol IBGPickerCollectionViewDelegate;

@interface IBGPickerCollectionViewController : IBGCollectionViewController <PHPhotoLibraryChangeObserver, IBGProgressViewDelegate>
{
    _Bool _firstLoad;
    _Bool _isShowingProgressView;
    int _currentImageRequest;
    id <IBGPickerCollectionViewDelegate> _delegate;
    double _availableWidth;
    UIBarButtonItem *_cancelBarButton;
    IBGPickerDataSource *_dataSource;
    IBGProgressView *_progressView;
    IBGVideoQualityReducer *_reducer;
    long long _compressionRate;
    unsigned long long _progressViewScale;
    struct CGSize _thumbnailSize;
    struct CGRect _previousPreheatRect;
}

@property(nonatomic) unsigned long long progressViewScale; // @synthesize progressViewScale=_progressViewScale;
@property(nonatomic) long long compressionRate; // @synthesize compressionRate=_compressionRate;
@property(retain, nonatomic) IBGVideoQualityReducer *reducer; // @synthesize reducer=_reducer;
@property(nonatomic) _Bool isShowingProgressView; // @synthesize isShowingProgressView=_isShowingProgressView;
@property(retain, nonatomic) IBGProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) int currentImageRequest; // @synthesize currentImageRequest=_currentImageRequest;
@property(retain, nonatomic) IBGPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct CGRect previousPreheatRect; // @synthesize previousPreheatRect=_previousPreheatRect;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(retain, nonatomic) UIBarButtonItem *cancelBarButton; // @synthesize cancelBarButton=_cancelBarButton;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) double availableWidth; // @synthesize availableWidth=_availableWidth;
@property(nonatomic) __weak id <IBGPickerCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)moveItemsUsingChanges:(id)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTapCancel;
- (void)dismissViewControllerWithIBGAVAsset:(id)arg1;
- (void)showOneActionAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showiCloudImportErrorAlert;
- (void)showMaximumDurationAlert;
- (void)showMaximumSizeAlert;
- (void)dismissProgressView;
- (void)showProgressView;
- (void)prepareReducerForVideoImport;
- (void)prepareDataSourceForVideoImport;
- (void)prepareDataSourceForImageImport;
- (void)compressAsset:(id)arg1 urlAsset:(id)arg2;
- (void)didSelectImageAsset:(id)arg1;
- (void)didSelectVideoAsset:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollToBottom;
- (void)fetchImagesFromGallery;
- (void)prepareCollectionViewForFirstLoad;
- (void)dismissWithError;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)dealloc;
- (_Bool)isRectValuesNan:(struct CGRect)arg1;
- (id)differencesBetweenOldRect:(struct CGRect)arg1 newRect:(struct CGRect)arg2;
- (void)updateCachedAssets;
- (void)resetCachedAssets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

