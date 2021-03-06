//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IESLiveMTEffectUIConfig, NSArray, NSIndexPath, NSString, UIActivityIndicatorView, UICollectionView;
@protocol IESEffectListViewDelegate;

@interface IESLiveMTEffectListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <IESEffectListViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_effectItems;
    UIActivityIndicatorView *_indicator;
    long long _selectedIndex;
    NSIndexPath *_latestDownloadingIndexPath;
    IESLiveMTEffectUIConfig *_uiConfig;
    unsigned long long _itemPerRow;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long itemPerRow; // @synthesize itemPerRow=_itemPerRow;
@property(retain, nonatomic) IESLiveMTEffectUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(retain, nonatomic) NSIndexPath *latestDownloadingIndexPath; // @synthesize latestDownloadingIndexPath=_latestDownloadingIndexPath;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(copy, nonatomic) NSArray *effectItems; // @synthesize effectItems=_effectItems;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <IESEffectListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_onCleanButtonClicked:(id)arg1;
- (void)_cancelStickerSlection:(id)arg1;
- (void)_selectItemAtIndexPath:(id)arg1;
- (void)updateWithModels:(id)arg1 selectedIndex:(long long)arg2 itemPerRow:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 uiConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

