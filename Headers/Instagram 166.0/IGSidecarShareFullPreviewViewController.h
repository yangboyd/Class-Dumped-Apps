//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class IGComposition, IGUserSession, NSDictionary, NSString, UICollectionView, UIImageView, UIView;
@protocol IGSidecarShareFullPreviewDelegate;

@interface IGSidecarShareFullPreviewViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _isDismissing;
    _Bool _scrollEnabled;
    id <IGSidecarShareFullPreviewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSDictionary *_filtersById;
    IGComposition *_composition;
    IGUserSession *_userSession;
    UIImageView *_thumbnailImageView;
    UIView *_overlayView;
    UIView *_sourceView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGComposition *composition; // @synthesize composition=_composition;
@property(copy, nonatomic) NSDictionary *filtersById; // @synthesize filtersById=_filtersById;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <IGSidecarShareFullPreviewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)_stopPlayingVisibleCells;
- (void)_startPlayingCurrentCellIfNeeded;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)_videoCellForIndexPath:(id)arg1 mediaMetadata:(id)arg2;
- (id)_photoCellForIndexPath:(id)arg1 mediaMetadata:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dismiss;
- (void)scaleOpenFullPreview;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithComposition:(id)arg1 userSession:(id)arg2 sourceView:(id)arg3 scrollEnabled:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

