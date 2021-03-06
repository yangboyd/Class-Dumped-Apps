//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IESLiveMTFeedCellUpdater-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, UICollectionView;
@protocol IESLiveMTFeedItem, IESLiveMTFeedSchemeHandler;

@interface IESLiveMTFeedRankRoundCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveMTFeedCellUpdater>
{
    id <IESLiveMTFeedItem> _item;
    UICollectionView *_collectionView;
    NSArray *_rankLists;
    long long _timerInterval;
    NSTimer *_autoScrollTimer;
    id <IESLiveMTFeedSchemeHandler> _schemeHandler;
}

+ (struct CGSize)sizeForCell;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMTFeedSchemeHandler> schemeHandler; // @synthesize schemeHandler=_schemeHandler;
@property(retain, nonatomic) NSTimer *autoScrollTimer; // @synthesize autoScrollTimer=_autoScrollTimer;
@property(nonatomic) long long timerInterval; // @synthesize timerInterval=_timerInterval;
@property(retain, nonatomic) NSArray *rankLists; // @synthesize rankLists=_rankLists;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) id <IESLiveMTFeedItem> item; // @synthesize item=_item;
- (void)adjustScrollView:(id)arg1;
- (void)update:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)automaticScrollBanner:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)setupViews;
- (void)updateWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

