//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

#import "WADeviceListHeaderCellDelegate-Protocol.h"
#import "WADeviceListMultiDeviceOptInCellDelegate-Protocol.h"

@class NSArray, NSString, WAChatManager, WADeviceListDeviceFactory;
@protocol WAOwnDeviceManagingMain;

@interface WADeviceListViewController : WATableViewController <WADeviceListHeaderCellDelegate, WADeviceListMultiDeviceOptInCellDelegate>
{
    _Bool _reloadOnNextViewWillAppear;
    _Bool _disablePairing;
    NSArray *_sortedCompanionDevices;
    NSArray *_sortedRemovedCompanionDevices;
    _Bool _shouldShowOptInUI;
    id <WAOwnDeviceManagingMain> _ownDeviceManager;
    WAChatManager *_chatManager;
    NSArray *_devices;
    NSArray *_peripherals;
    WADeviceListDeviceFactory *_deviceFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WADeviceListDeviceFactory *deviceFactory; // @synthesize deviceFactory=_deviceFactory;
@property(copy, nonatomic) NSArray *peripherals; // @synthesize peripherals=_peripherals;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) WAChatManager *chatManager; // @synthesize chatManager=_chatManager;
@property(retain, nonatomic) id <WAOwnDeviceManagingMain> ownDeviceManager; // @synthesize ownDeviceManager=_ownDeviceManager;
- (void)deviceListMultiDeviceOptInCell:(id)arg1 requestedCompanionRegUnavailableAlertWithCompletion:(CDUnknownBlockType)arg2;
- (void)deviceListMultiDeviceOptInCell:(id)arg1 requestedOptInChange:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDevicePressedInHeaderCell:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)peripheralCellSectionIndex;
- (long long)deviceCellSectionIndex;
- (long long)mdOptInCellSectionIndex;
- (long long)headerCellSectionIndex;
- (id)webClientSessions;
- (id)devicesForCompanionDevices:(id)arg1;
- (id)sortedRemovedCompanionDevices;
- (id)peripheralDevices;
- (id)sortedCompanionDevices;
- (id)companionDevices;
- (void)reloadDevices:(_Bool)arg1;
- (void)didUpdateRemovedDeviceList:(id)arg1;
- (void)didUpdateDevicePresence:(id)arg1;
- (void)didUpdateDeviceList:(id)arg1;
- (void)didUpdateDeviceSyncState:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isMDEnabled;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

