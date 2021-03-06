//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HMESectionedCollectionViewLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UICollectionView;
@protocol GHCEnergyService, HMEThermostatTemperaturePreferenceSelection;

@interface HMEThermostatTemperaturePreferencesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, HMESectionedCollectionViewLayoutDelegate>
{
    id <HMEThermostatTemperaturePreferenceSelection> _temperatureSelectionDelegate;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    id <GHCEnergyService> _energyService;
    NSString *_HGSDeviceID;
    NSArray *_atoms;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *atoms; // @synthesize atoms=_atoms;
@property(retain, nonatomic) NSString *HGSDeviceID; // @synthesize HGSDeviceID=_HGSDeviceID;
@property(retain, nonatomic) id <GHCEnergyService> energyService; // @synthesize energyService=_energyService;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <HMEThermostatTemperaturePreferenceSelection> temperatureSelectionDelegate; // @synthesize temperatureSelectionDelegate=_temperatureSelectionDelegate;
- (void)createAtomsListFromResponse:(id)arg1;
- (void)loadAtoms;
- (double)collectionView:(id)arg1 heightForHeaderInLayout:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addSubviewConstraints;
- (void)registerCells;
- (void)addCollectionView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModelController:(id)arg1 deviceId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

