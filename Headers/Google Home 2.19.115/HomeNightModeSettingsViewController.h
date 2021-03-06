//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarCollectionViewController.h"

#import "AsyncOperationDelegate-Protocol.h"
#import "HomeScheduleCollectionViewCellDelegate-Protocol.h"

@class GAENightModeSettings, HMETextWithSwitchButtonCollectionViewCellModel, HomeScheduleCollectionViewCellModel, MDCRaisedButton, NSString, SetupCastDevice, UIDatePicker, UIView;

@interface HomeNightModeSettingsViewController : HMEAppBarCollectionViewController <HomeScheduleCollectionViewCellDelegate, AsyncOperationDelegate>
{
    HMETextWithSwitchButtonCollectionViewCellModel *_nightModeCellModel;
    HMETextWithSwitchButtonCollectionViewCellModel *_doNotDisturbCellModel;
    UIDatePicker *_datePicker;
    MDCRaisedButton *_okButtonForDatePicker;
    UIView *_veil;
    SetupCastDevice *_device;
    GAENightModeSettings *_nightModeSettings;
    CDUnknownBlockType _ledBrightnessChangeCallback;
    CDUnknownBlockType _volumeChangeCallback;
    CDUnknownBlockType _saveSettingsClosureWithDemoModeEnabled;
    unsigned long long _scheduleEditingMode;
    HomeScheduleCollectionViewCellModel *_scheduleCellModel;
}

@property(retain, nonatomic) HomeScheduleCollectionViewCellModel *scheduleCellModel; // @synthesize scheduleCellModel=_scheduleCellModel;
@property(nonatomic) unsigned long long scheduleEditingMode; // @synthesize scheduleEditingMode=_scheduleEditingMode;
@property(copy, nonatomic) CDUnknownBlockType saveSettingsClosureWithDemoModeEnabled; // @synthesize saveSettingsClosureWithDemoModeEnabled=_saveSettingsClosureWithDemoModeEnabled;
@property(copy, nonatomic) CDUnknownBlockType volumeChangeCallback; // @synthesize volumeChangeCallback=_volumeChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType ledBrightnessChangeCallback; // @synthesize ledBrightnessChangeCallback=_ledBrightnessChangeCallback;
@property(retain, nonatomic) GAENightModeSettings *nightModeSettings; // @synthesize nightModeSettings=_nightModeSettings;
@property(retain, nonatomic) SetupCastDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) UIView *veil; // @synthesize veil=_veil;
@property(retain, nonatomic) MDCRaisedButton *okButtonForDatePicker; // @synthesize okButtonForDatePicker=_okButtonForDatePicker;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) HMETextWithSwitchButtonCollectionViewCellModel *doNotDisturbCellModel; // @synthesize doNotDisturbCellModel=_doNotDisturbCellModel;
@property(retain, nonatomic) HMETextWithSwitchButtonCollectionViewCellModel *nightModeCellModel; // @synthesize nightModeCellModel=_nightModeCellModel;
- (void).cxx_destruct;
- (void)didRemoveWeekday:(id)arg1;
- (void)didAddWeekday:(id)arg1;
- (void)editTimeButtonDidTap:(unsigned long long)arg1;
- (_Bool)shouldHideLEDSection;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)okButtonTappedOnTimePicker:(id)arg1;
- (void)updateScheduleState;
- (void)dateValueChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutTimePickerView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)asyncOperation:(id)arg1 didFinishWithError:(id)arg2;
- (void)setupModels;
- (void)viewDidLoad;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

