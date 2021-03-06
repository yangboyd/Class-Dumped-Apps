//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESLiveAlbumPhotoCollectorObserver-Protocol.h"
#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IESLiveAlbumPhotoCollector, NSIndexPath, NSString, UIButton, UICollectionView;
@protocol IESLiveMTMattingViewProtocol, IESLiveToastFactory;

@interface IESLiveMTMattingView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, PHPhotoLibraryChangeObserver, IESLiveAlbumPhotoCollectorObserver>
{
    _Bool _showPhotoLoopEffectPlusButton;
    _Bool _needRefreshCakeImages;
    _Bool _hasAddPhotoLibraryChangeObserver;
    id <IESLiveMTMattingViewProtocol> _delegate;
    IESLiveAlbumPhotoCollector *_photoCollector;
    UIButton *_plusButton;
    UICollectionView *_collectionView;
    NSIndexPath *_selectedIndexPath;
    UIView *_loadingView;
    id <IESLiveToastFactory> _toastFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool hasAddPhotoLibraryChangeObserver; // @synthesize hasAddPhotoLibraryChangeObserver=_hasAddPhotoLibraryChangeObserver;
@property(nonatomic) _Bool needRefreshCakeImages; // @synthesize needRefreshCakeImages=_needRefreshCakeImages;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain, nonatomic) IESLiveAlbumPhotoCollector *photoCollector; // @synthesize photoCollector=_photoCollector;
@property(nonatomic) _Bool showPhotoLoopEffectPlusButton; // @synthesize showPhotoLoopEffectPlusButton=_showPhotoLoopEffectPlusButton;
@property(nonatomic) __weak id <IESLiveMTMattingViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void)_addRotateAnimationWithDuration:(double)arg1 forKey:(id)arg2 view:(id)arg3;
- (void)collectorDidFinishDetect:(id)arg1;
- (void)collectorDidPauseDetect:(id)arg1;
- (void)collector:(id)arg1 detectResultDidChange:(id)arg2;
- (void)collectorDidStartDetect:(id)arg1;
- (void)onHeaderViewPlusButton:(id)arg1;
- (void)showLoading:(_Bool)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)p_collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateSelectedPhotoWithAssetLocalIdentifier:(id)arg1;
- (void)cancelCakeDetect;
- (void)resumeCakeDetect;
- (void)resetCakeDetectingStatus;
- (void)resetToInitStateCauseByAlbumChange;
- (void)resetToInitState;
- (void)p_reset;
- (void)unSelectCurrentCell;
- (void)addSubviews;
- (void)addPhotoLibraryChangeObserver;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

