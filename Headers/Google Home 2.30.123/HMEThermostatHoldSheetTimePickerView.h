//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class HMEThermostatHoldSheetTimePickerItem, HMEThermostatHoldSheetTimePickerViewModel, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel;

@interface HMEThermostatHoldSheetTimePickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _shouldUse24HourFormat;
    UILabel *_subtitleLabel;
    UILabel *_AMPMIndicator;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    HMEThermostatHoldSheetTimePickerViewModel *_pickerItems;
    NSIndexPath *_selectedPickerItemIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUse24HourFormat; // @synthesize shouldUse24HourFormat=_shouldUse24HourFormat;
@property(retain, nonatomic) NSIndexPath *selectedPickerItemIndex; // @synthesize selectedPickerItemIndex=_selectedPickerItemIndex;
@property(retain, nonatomic) HMEThermostatHoldSheetTimePickerViewModel *pickerItems; // @synthesize pickerItems=_pickerItems;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *AMPMIndicator; // @synthesize AMPMIndicator=_AMPMIndicator;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (long long)indexAtPoint:(struct CGPoint)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) HMEThermostatHoldSheetTimePickerItem *selectedEndTime;
- (void)setSelectedAtomID:(unsigned int)arg1;
- (void)setInsetsFromViewWidth:(double)arg1;
- (void)initializeConstraints;
- (id)initWithTime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

