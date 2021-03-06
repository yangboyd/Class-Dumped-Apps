//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class HMEDeviceProfileManager, HMEWaitingViewController, SequentialAsyncOperationQueue, SettingsOpencastView, SetupCastDevice;

@interface SettingsOpencastViewController : UIViewController
{
    SetupCastDevice *_device;
    long long _type;
    SettingsOpencastView *_opencastView;
    HMEWaitingViewController *_loadingViewController;
    SequentialAsyncOperationQueue *_updateOptInQueue;
    SequentialAsyncOperationQueue *_waitForOpencastPINQueue;
    HMEDeviceProfileManager *_deviceProfileManager;
}

+ (id)localizedOpencastStateSubtitleForDevice:(id)arg1;
- (void).cxx_destruct;
- (void)updateOptInOperationQueue:(id)arg1 didFinishWithError:(id)arg2 contextInfo:(id)arg3;
- (void)waitForOpencastPINOperationQueue:(id)arg1 didFinishWithError:(id)arg2 contextInfo:(id)arg3;
- (void)didChangeOpencastSwitch:(id)arg1;
- (void)didTapLearnMore:(id)arg1;
- (void)updateFromDevice;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithDevice:(id)arg1 deviceProfileManager:(id)arg2 type:(long long)arg3;
- (id)initWithDevice:(id)arg1 deviceProfileManager:(id)arg2;

@end

