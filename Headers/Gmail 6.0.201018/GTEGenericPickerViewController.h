//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewController.h"

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSObject, NSString;
@protocol GTEGenericPickerViewControllerDelegate, GTEThemerProvider><GTENavigationServiceProvider;

@interface GTEGenericPickerViewController : MDCCollectionViewController <UICollectionViewDataSource>
{
    NSObject<GTEThemerProvider><GTENavigationServiceProvider> *_appContext;
    NSArray *_list;
    long long _selectedIndex;
    id <GTEGenericPickerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GTEGenericPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)regularCellFont;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAppContext:(id)arg1 list:(id)arg2 selectedIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

