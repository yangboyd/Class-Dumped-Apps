//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol HMEAmbientPhotosCarouselViewDelegate;

@interface HMEAmbientPhotosCarouselView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <HMEAmbientPhotosCarouselViewDelegate> _delegate;
    NSArray *_albums;
    UICollectionView *_albumsCollectionView;
}

+ (id)buildAlbumsCollectionView;
- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *albumsCollectionView; // @synthesize albumsCollectionView=_albumsCollectionView;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(nonatomic) __weak id <HMEAmbientPhotosCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)maxCellHeight;
- (double)maxCellWidth;
- (void)updateCellSelections;
- (void)setupSubviews;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateViewWithPhotoAlbums:(id)arg1;
- (id)init;
- (id)initWithPhotoAlbums:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

