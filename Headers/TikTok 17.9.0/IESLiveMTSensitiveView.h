//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IESLiveMTSensitiveModel, NSString, UIButton, UICollectionView, UILabel;

@interface IESLiveMTSensitiveView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isDelClick;
    IESLiveMTSensitiveModel *_dataModel;
    UIButton *_addButton;
    CDUnknownBlockType _delBlock;
    UICollectionView *_sensitiveCollectionView;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UIView *_redView;
    UIView *_backView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDelClick; // @synthesize isDelClick=_isDelClick;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *redView; // @synthesize redView=_redView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *sensitiveCollectionView; // @synthesize sensitiveCollectionView=_sensitiveCollectionView;
@property(copy, nonatomic) CDUnknownBlockType delBlock; // @synthesize delBlock=_delBlock;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) IESLiveMTSensitiveModel *dataModel; // @synthesize dataModel=_dataModel;
- (void)shouldShowRedView;
- (void)updateRedViewKey;
- (void)reloadCollectionView;
- (void)addSuccess:(id)arg1;
- (void)deleteSuccess:(id)arg1 index:(long long)arg2;
- (void)deleteTagIndexPathItem:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)gradientLayer:(_Bool)arg1 frame:(struct CGRect)arg2;
- (void)layoutSubviews;
- (double)labelHeight;
- (void)updateData;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

