//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLivePluginLayoutView-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IESLiveMTShortTouchStore, NSMutableArray, NSString, NSTimer, UICollectionView;
@protocol HTSLivePluginLayoutMachineProvider, IESLiveTracker;

@interface IESLiveMTShortTouchContainerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HTSLivePluginLayoutView>
{
    _Bool _isUpdating;
    IESLiveMTShortTouchStore *_store;
    double _maxHeight;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <IESLiveTracker> _tracker;
    UICollectionView *_collectionView;
    NSMutableArray *_queue;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) IESLiveMTShortTouchStore *store; // @synthesize store=_store;
- (struct UIEdgeInsets)pluginLayoutContentInsets;
- (struct CGSize)pluginLayoutContentSize;
- (id)viewType;
- (_Bool)isValid:(id)arg1 isRemove:(_Bool)arg2;
- (long long)itemIndexForIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)startDequeuePingWithDuration:(double)arg1;
- (void)dequeueWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueAction:(CDUnknownBlockType)arg1;
- (void)reloadData;
- (struct CGRect)frameOfType:(id)arg1;
- (void)moveIndexPathFrom:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadItems;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)gradientMaskLayer;
- (_Bool)shouldShowMask;
- (void)setupContainer;
- (id)initWithStore:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

