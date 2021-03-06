//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEModernStickerTitleCollectionView, NSArray, NSDictionary, NSString;
@protocol ACCStickerComponentConfigProtocol, AWEModernStickerSwitchTabViewDelegate;

@interface AWEModernStickerSwitchTabView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _shouldIgnoreAnimation;
    _Bool _hasSelectItem;
    _Bool _isPhotoMode;
    _Bool _isStoryMode;
    unsigned long long _panelType;
    id <AWEModernStickerSwitchTabViewDelegate> _delegate;
    long long _selectedIndex;
    long long _lastSelectedIndex;
    double _proportion;
    NSArray *_categories;
    NSDictionary *_trackingInfoDictionary;
    AWEModernStickerTitleCollectionView *_stickerTitleCollectionView;
    UIView *_indicatorLine;
    id <ACCStickerComponentConfigProtocol> _stickerConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ACCStickerComponentConfigProtocol> stickerConfig; // @synthesize stickerConfig=_stickerConfig;
@property(retain, nonatomic) UIView *indicatorLine; // @synthesize indicatorLine=_indicatorLine;
@property(retain, nonatomic) AWEModernStickerTitleCollectionView *stickerTitleCollectionView; // @synthesize stickerTitleCollectionView=_stickerTitleCollectionView;
@property(copy, nonatomic) NSDictionary *trackingInfoDictionary; // @synthesize trackingInfoDictionary=_trackingInfoDictionary;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) _Bool isStoryMode; // @synthesize isStoryMode=_isStoryMode;
@property(nonatomic) _Bool isPhotoMode; // @synthesize isPhotoMode=_isPhotoMode;
@property(nonatomic) _Bool hasSelectItem; // @synthesize hasSelectItem=_hasSelectItem;
@property(nonatomic) double proportion; // @synthesize proportion=_proportion;
@property(nonatomic) long long lastSelectedIndex; // @synthesize lastSelectedIndex=_lastSelectedIndex;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) _Bool shouldIgnoreAnimation; // @synthesize shouldIgnoreAnimation=_shouldIgnoreAnimation;
@property(nonatomic) __weak id <AWEModernStickerSwitchTabViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long panelType; // @synthesize panelType=_panelType;
- (long long)adjustedIndex:(long long)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)updateIndicatorTitleColorWith:(double)arg1;
- (void)updateIndicatorLineFrameWithProportion:(double)arg1;
- (double)itemWidthForIndexPath:(long long)arg1;
- (struct CGRect)indicatorLineFrameForIndex:(long long)arg1;
- (void)trackSelectedStatusWithIndexPath:(long long)arg1;
- (_Bool)setSelectedIndex:(long long)arg1 callDelegate:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)selectedCategoryIgnoringCollection;
- (id)selectedCategoryName;
- (_Bool)selectItemWithoutCallDidSelectedDelegateAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)refreshWithStickerCategories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateFavoriteOnIndex:(long long)arg1 showYellowDot:(_Bool)arg2;
- (void)showYellowDotOnIndex:(long long)arg1;
- (void)addSubviews;
- (id)initWithStickerCategories:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

