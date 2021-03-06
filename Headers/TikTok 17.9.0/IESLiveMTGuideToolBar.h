//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "IESLiveMTGuideToolBar-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CAGradientLayer, NSArray, NSMutableDictionary, NSString;

@interface IESLiveMTGuideToolBar : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveMTGuideToolBar>
{
    NSArray *_sortedIDs;
    NSArray *_items;
    NSMutableDictionary *_redDotCountDict;
    CAGradientLayer *_gradientLayer;
}

+ (double)minimumLineSpacing;
+ (struct CGSize)itemSize;
- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) NSMutableDictionary *redDotCountDict; // @synthesize redDotCountDict=_redDotCountDict;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *sortedIDs; // @synthesize sortedIDs=_sortedIDs;
- (_Bool)canResetClipToBounds;
- (void)setupViews;
- (void)addItem:(id)arg1;
- (id)imageViewOfItemIdentifier:(id)arg1;
- (id)viewOfItem:(id)arg1;
- (void)tapItemWith:(id)arg1;
- (void)startTransaction:(CDUnknownBlockType)arg1;
- (struct CGSize)size;
- (void)removeItemWith:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)removeBreathAnimationWith:(id)arg1;
- (void)reload;
- (id)regroupIdentifier:(id)arg1 asExtend:(id)arg2;
- (long long)redDotCountForItem:(id)arg1;
- (void)setRedDotCount:(long long)arg1 forItem:(id)arg2 redDotType:(long long)arg3;
- (void)setRedDotCount:(long long)arg1 forItem:(id)arg2;
- (id)itemWith:(id)arg1;
- (void)insertItemToFront:(id)arg1;
- (void)insertItem:(id)arg1 before:(id)arg2;
- (void)insertItem:(id)arg1 asExtendedFor:(id)arg2;
- (void)insertItem:(id)arg1 after:(id)arg2;
- (void)hideForLanscape;
- (void)hide;
- (void)showForLanscape;
- (void)showBreathAnimationWith:(id)arg1 replaceImage:(id)arg2;
- (void)show;
- (struct CGRect)frameOfItemInRoom:(id)arg1;
- (_Bool)enableToolbarNewStyle;
- (void)doCollapse;
- (void)updateItem:(id)arg1;
- (_Bool)containItem:(id)arg1;
- (void)appendItemToLast:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateMaskLayerIsHidden:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

