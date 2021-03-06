//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupAbstractBottomChromeViewController.h"

#import "HMESectionedCollectionViewLayoutDelegate-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class HMEDeviceMO, MDCAppBarViewController, MDCInkTouchController, NSArray, NSString, NSValue, UICollectionView;
@protocol AnalyticsLogger, HMEDeviceData, HMEDeviceTypeChooserViewControllerDelegate;

@interface HMEDeviceTypeChooserViewController : HMESetupAbstractBottomChromeViewController <HMESectionedCollectionViewLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate, MDCInkTouchControllerDelegate>
{
    _Bool _isInkAnimationActive;
    id <HMEDeviceTypeChooserViewControllerDelegate> _delegate;
    HMEDeviceMO *_device;
    id <HMEDeviceData> _deviceData;
    NSArray *_supportedDeviceTypeIDs;
    NSString *_currentDeviceType;
    NSString *_selectedDeviceType;
    UICollectionView *_collectionView;
    MDCAppBarViewController *_appBarViewController;
    MDCInkTouchController *_inkTouchController;
    NSValue *_inkTouchLocation;
    id <AnalyticsLogger> _analyticsLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) NSValue *inkTouchLocation; // @synthesize inkTouchLocation=_inkTouchLocation;
@property(nonatomic) _Bool isInkAnimationActive; // @synthesize isInkAnimationActive=_isInkAnimationActive;
@property(retain, nonatomic) MDCInkTouchController *inkTouchController; // @synthesize inkTouchController=_inkTouchController;
@property(readonly, nonatomic) MDCAppBarViewController *appBarViewController; // @synthesize appBarViewController=_appBarViewController;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *selectedDeviceType; // @synthesize selectedDeviceType=_selectedDeviceType;
@property(readonly, copy, nonatomic) NSString *currentDeviceType; // @synthesize currentDeviceType=_currentDeviceType;
@property(readonly, copy, nonatomic) NSArray *supportedDeviceTypeIDs; // @synthesize supportedDeviceTypeIDs=_supportedDeviceTypeIDs;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, nonatomic) HMEDeviceMO *device; // @synthesize device=_device;
@property(nonatomic) __weak id <HMEDeviceTypeChooserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logDeviceTypeChangeEvent;
- (id)supportedDeviceTypesFromExperimentList:(id)arg1;
- (void)preselectDeviceType;
- (void)setupCollectionView;
- (void)setupAppNavigationBar;
- (void)didTapOverflowButton;
- (void)didTapNextButton;
- (id)inkTouchController:(id)arg1 inkViewAtTouchLocation:(struct CGPoint)arg2;
- (_Bool)inkTouchController:(id)arg1 shouldProcessInkTouchesAtTouchLocation:(struct CGPoint)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (void)viewDidLoad;
- (id)initWithDevice:(id)arg1 deviceData:(id)arg2 experimentFlags:(id)arg3 analyticsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

