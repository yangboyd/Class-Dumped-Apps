//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarViewController.h"

#import "SettingsPlaybackDelayViewDelegate-Protocol.h"

@class AnalyticsEvent, NSMutableSet, NSString, SettingsPlaybackDelayView, SetupCastDevice;
@protocol HMEDeviceQueryService, HMEHelpCoordinator, HMEQueryableDevice;

@interface SettingsPlaybackDelayViewController : HMEAppBarViewController <SettingsPlaybackDelayViewDelegate>
{
    SetupCastDevice *_device;
    id <HMEQueryableDevice> _queryableDevice;
    SettingsPlaybackDelayView *_delayView;
    unsigned long long _playbackDelayChangeCount;
    AnalyticsEvent *_closeEvent;
    NSMutableSet *_asyncOperations;
    id <HMEHelpCoordinator> _helpCoordinator;
    id <HMEDeviceQueryService> _deviceQueryService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEDeviceQueryService> deviceQueryService; // @synthesize deviceQueryService=_deviceQueryService;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator; // @synthesize helpCoordinator=_helpCoordinator;
- (void)didTapTips:(id)arg1;
- (void)didChangePlaybackDelayMicroseconds:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDevice:(id)arg1 queryableDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

