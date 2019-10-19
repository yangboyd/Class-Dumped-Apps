//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoAbstractEntityItemCell.h"

#import "LolomoItemCell-Protocol.h"
#import "NFUICellFactoryItemProtocol-Protocol.h"

@class NFUIRenderTimer, NSString, UIImageView;
@protocol LolomoViewDelegate><LolomoActionDelegate;

@interface LolomoCoverflowItemCell : LolomoAbstractEntityItemCell <LolomoItemCell, NFUICellFactoryItemProtocol>
{
    UIImageView *_displayArtImageView;
}

+ (id)dequeueForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 withLolomoViewDelegate:(id)arg3;
+ (void)registerInCollectionView:(id)arg1 withLolomoViewDelegate:(id)arg2;
+ (id)reuseIdentifier;
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
@property(nonatomic) __weak UIImageView *displayArtImageView; // @synthesize displayArtImageView=_displayArtImageView;
- (void).cxx_destruct;
- (void)itemCellDidEndDisplaying;
- (void)setHighlighted:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)viewInitialized:(_Bool)arg1;
- (void)didMoveToSuperview;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isForReuse;
@property(nonatomic) __weak id <LolomoViewDelegate><LolomoActionDelegate> lolomoViewDelegate;
@property(nonatomic) __weak NFUIRenderTimer *renderTimer;
@property(readonly) Class superclass;
@property(readonly, nonatomic) __weak id viewModel;

@end

