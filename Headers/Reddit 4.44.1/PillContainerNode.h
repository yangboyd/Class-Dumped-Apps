//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ASCollectionDataSource-Protocol.h"
#import "ASCollectionDelegate-Protocol.h"

@class ASCollectionNode, NSArray, NSString, PillStyle, UICollectionView;
@protocol PillContainerNodeDelegate;

@interface PillContainerNode : BaseFeedDisplayNode <ASCollectionDataSource, ASCollectionDelegate>
{
    id <PillContainerNodeDelegate> _delegate;
    ASCollectionNode *_collectionNode;
    PillStyle *_pillStyle;
    NSArray *_pills;
}

+ (double)collectionViewSizeHeightForPillStyle:(id)arg1;
@property(copy, nonatomic) NSArray *pills; // @synthesize pills=_pills;
@property(retain, nonatomic) PillStyle *pillStyle; // @synthesize pillStyle=_pillStyle;
@property(retain, nonatomic) ASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
@property(nonatomic) __weak id <PillContainerNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateCollectionView;
- (CDStruct_90e057aa)collectionNode:(id)arg1 constrainedSizeForItemAtIndexPath:(id)arg2;
- (long long)collectionNode:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionNode:(id)arg1;
- (void)didNodeTap:(id)arg1;
- (void)collectionNode:(id)arg1 willDisplayItemWithNode:(id)arg2;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)didLoad;
- (void)configureWithPills:(id)arg1;
- (id)initWithPillStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

