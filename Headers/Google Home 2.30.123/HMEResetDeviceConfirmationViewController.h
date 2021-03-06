//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESettingsCollectionViewController.h"

@class HMEResetDeviceLabelCell, NSString;

@interface HMEResetDeviceConfirmationViewController : HMESettingsCollectionViewController
{
    HMEResetDeviceLabelCell *_sizingCell;
    NSString *_deviceName;
    NSString *_modelName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
@property(readonly, nonatomic) HMEResetDeviceLabelCell *sizingCell; // @synthesize sizingCell=_sizingCell;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)prepareCell:(id)arg1 forIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDeviceName:(id)arg1 modelName:(id)arg2;

@end

