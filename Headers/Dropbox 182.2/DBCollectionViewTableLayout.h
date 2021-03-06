//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import "DBCollectionViewGlobalSupplementaryViewChangeObserver-Protocol.h"
#import "DBCollectionViewLayoutGlobalSupplementaryViewSupporting-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class DBCollectionViewTableLayoutAttributes, DBObserverHandle, NSIndexPath, NSMutableArray, NSString, UILongPressGestureRecognizer;
@protocol DBCollectionViewGlobalSupplementaryViewProvider, DBCollectionViewTableLayoutDelegate;

@interface DBCollectionViewTableLayout : UICollectionViewLayout <DBCollectionViewGlobalSupplementaryViewChangeObserver, UIGestureRecognizerDelegate, DBCollectionViewLayoutGlobalSupplementaryViewSupporting>
{
    DBCollectionViewTableLayoutAttributes *_globalHeaderViewAttr;
    DBCollectionViewTableLayoutAttributes *_globalFooterViewAttr;
    NSMutableArray *_sections;
    NSMutableArray *_invalidationContexts;
    struct CGRect _lastBounds;
    struct CGSize _collectionViewContentSize;
    DBObserverHandle *_globalViewChangeObserver;
    UILongPressGestureRecognizer *_longPressGesture;
    id <DBCollectionViewGlobalSupplementaryViewProvider> _supplementaryViewProvider;
    id <DBCollectionViewTableLayoutDelegate> _delegate;
    NSIndexPath *_indexPathForInteractiveMovement;
}

+ (_Bool)isValidGlobalSupplementaryViewForIndexPath:(id)arg1 elementKind:(id)arg2;
+ (id)db_indexPathForSupplementaryViewOfKind:(id)arg1 inSection:(long long)arg2;
+ (id)db_indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
@property(retain, nonatomic) NSIndexPath *indexPathForInteractiveMovement; // @synthesize indexPathForInteractiveMovement=_indexPathForInteractiveMovement;
@property(readonly, nonatomic) __weak id <DBCollectionViewTableLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DBCollectionViewGlobalSupplementaryViewProvider> supplementaryViewProvider; // @synthesize supplementaryViewProvider=_supplementaryViewProvider;
- (void).cxx_destruct;
- (void)db_handleLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)db_setupGestureRecognizerIfNeeded;
- (void)collectionViewGlobalSupplementaryViewProvider:(id)arg1 didChangeSupplementaryViewAtIndex:(id)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLayout;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)db_layoutAttributesForGlobalSupplementaryView:(id)arg1 withKind:(id)arg2 atIndexPath:(id)arg3 yOffset:(double)arg4 contentSize:(struct CGSize)arg5;
- (id)db_layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2 yOffset:(double)arg3 contentWidth:(double)arg4;
- (id)db_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(long long)arg2 yOffset:(double)arg3 contentWidth:(double)arg4;
- (id)db_createSectionWithNum:(long long)arg1 yOffset:(double)arg2 contentWidth:(double)arg3;
- (id)db_sectionWithNum:(long long)arg1;
- (void)db_prepareLayoutWithInvalidationContextList:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

