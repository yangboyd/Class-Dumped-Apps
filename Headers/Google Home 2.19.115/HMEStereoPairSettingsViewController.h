//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarListViewController.h"

#import "AsyncOperationDelegate-Protocol.h"
#import "HMEWiFiSettingsViewControllerDelegate-Protocol.h"
#import "SequentialAsyncOperationQueueDelegate-Protocol.h"

@class AnalyticsLogger, HMEStatusViewController, NSArray, NSString, NetworkRequestAsyncOperation, RebootRequestAsyncOperation, SequentialAsyncOperationQueue, SetupCastDevice, SetupDeviceScanner;
@protocol HMEStereoPairSettingsViewControllerDelegate;

@interface HMEStereoPairSettingsViewController : HMEAppBarListViewController <AsyncOperationDelegate, SequentialAsyncOperationQueueDelegate, HMEWiFiSettingsViewControllerDelegate>
{
    id <HMEStereoPairSettingsViewControllerDelegate> _delegate;
    NSArray *_sections;
    SetupDeviceScanner *_deviceScanner;
    AnalyticsLogger *_analyticsLogger;
    SetupCastDevice *_leftDevice;
    SetupCastDevice *_rightDevice;
    RebootRequestAsyncOperation *_leftDeviceRebootRequest;
    RebootRequestAsyncOperation *_rightDeviceRebootRequest;
    SequentialAsyncOperationQueue *_leftDeviceLeaveGroupAsyncExecutor;
    SequentialAsyncOperationQueue *_rightDeviceLeaveGroupAsyncExecutor;
    NetworkRequestAsyncOperation *_forgetWiFiOperation;
    HMEStatusViewController *_waitingViewController;
}

+ (void)configureRegularCell:(id)arg1;
+ (void)configureHeaderCell:(id)arg1;
@property(retain, nonatomic) HMEStatusViewController *waitingViewController; // @synthesize waitingViewController=_waitingViewController;
@property(nonatomic) __weak NetworkRequestAsyncOperation *forgetWiFiOperation; // @synthesize forgetWiFiOperation=_forgetWiFiOperation;
@property(retain, nonatomic) SequentialAsyncOperationQueue *rightDeviceLeaveGroupAsyncExecutor; // @synthesize rightDeviceLeaveGroupAsyncExecutor=_rightDeviceLeaveGroupAsyncExecutor;
@property(retain, nonatomic) SequentialAsyncOperationQueue *leftDeviceLeaveGroupAsyncExecutor; // @synthesize leftDeviceLeaveGroupAsyncExecutor=_leftDeviceLeaveGroupAsyncExecutor;
@property(retain, nonatomic) RebootRequestAsyncOperation *rightDeviceRebootRequest; // @synthesize rightDeviceRebootRequest=_rightDeviceRebootRequest;
@property(retain, nonatomic) RebootRequestAsyncOperation *leftDeviceRebootRequest; // @synthesize leftDeviceRebootRequest=_leftDeviceRebootRequest;
@property(retain, nonatomic) SetupCastDevice *rightDevice; // @synthesize rightDevice=_rightDevice;
@property(retain, nonatomic) SetupCastDevice *leftDevice; // @synthesize leftDevice=_leftDevice;
@property(retain, nonatomic) AnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) SetupDeviceScanner *deviceScanner; // @synthesize deviceScanner=_deviceScanner;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <HMEStereoPairSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operationQueue:(id)arg1 didFinishWithError:(id)arg2 contextInfo:(id)arg3;
- (void)asyncOperation:(id)arg1 didFinishWithError:(id)arg2;
- (void)WiFiSettingsViewControllerDidForgetWiFi:(id)arg1;
- (void)WiFiSettingsViewController:(id)arg1 shouldForgetWiFiWithOperation:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)localizedLeftRightDetailWitheVoiceOverPauseTextFormatString;
- (id)localizedLeftRightDetailTextFormatString;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)cancelStereoPairSeparation;
- (void)separatePair;
- (void)rebootDevice:(id)arg1;
- (unsigned long long)sectionFromIndexPath:(id)arg1;
- (id)initWithDevice:(id)arg1 deviceScanner:(id)arg2 experimentFlags:(id)arg3 analyticsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

