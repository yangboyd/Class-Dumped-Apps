//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPStreamAdPlacerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MPStreamAdPlacer, MPTimer, NSString, UICollectionView;
@protocol MPCollectionViewAdPlacerDelegate, UICollectionViewDataSource, UICollectionViewDelegate;

@interface MPCollectionViewAdPlacer : NSObject <UICollectionViewDelegate, MPStreamAdPlacerDelegate, UICollectionViewDelegateFlowLayout>
{
    id <MPCollectionViewAdPlacerDelegate> _delegate;
    MPStreamAdPlacer *_streamAdPlacer;
    UICollectionView *_collectionView;
    id <UICollectionViewDataSource> _originalDataSource;
    id <UICollectionViewDelegate> _originalDelegate;
    MPTimer *_insertionTimer;
}

+ (id)placerWithCollectionView:(id)arg1 viewController:(id)arg2 adPositioning:(id)arg3 rendererConfigurations:(id)arg4;
+ (id)placerWithCollectionView:(id)arg1 viewController:(id)arg2 rendererConfigurations:(id)arg3;
@property(retain, nonatomic) MPTimer *insertionTimer; // @synthesize insertionTimer=_insertionTimer;
@property(nonatomic) __weak id <UICollectionViewDelegate> originalDelegate; // @synthesize originalDelegate=_originalDelegate;
@property(nonatomic) __weak id <UICollectionViewDataSource> originalDataSource; // @synthesize originalDataSource=_originalDataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MPStreamAdPlacer *streamAdPlacer; // @synthesize streamAdPlacer=_streamAdPlacer;
@property(nonatomic) __weak id <MPCollectionViewAdPlacerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)nativeAdWillLeaveApplicationFromStreamAdPlacer:(id)arg1;
- (void)nativeAdDidDismissModalForStreamAdPlacer:(id)arg1;
- (void)nativeAdWillPresentModalForStreamAdPlacer:(id)arg1;
- (void)adPlacer:(id)arg1 didRemoveAdsAtIndexPaths:(id)arg2;
- (void)adPlacer:(id)arg1 didLoadAdAtIndexPath:(id)arg2;
- (void)updateVisibleCells;
- (void)loadAdsForAdUnitID:(id)arg1 targeting:(id)arg2;
- (void)loadAdsForAdUnitID:(id)arg1;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1 viewController:(id)arg2 adPositioning:(id)arg3 rendererConfigurations:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

