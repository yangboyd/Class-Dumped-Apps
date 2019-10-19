//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDXSmartPairingBaseViewController.h"

#import "MDXScreenDiscoveryManagerObserver-Protocol.h"
#import "MDXSessionManagerObserver-Protocol.h"
#import "MDXSmartPairingSectionControllerDelegate-Protocol.h"
#import "YTReachabilityObserver-Protocol.h"

@class MDXSmartPairingSectionController, NSMutableArray, NSString, YTReachabilityController;

@interface MDXSmartPairingMainViewController : MDXSmartPairingBaseViewController <MDXScreenDiscoveryManagerObserver, MDXSessionManagerObserver, MDXSmartPairingSectionControllerDelegate, YTReachabilityObserver>
{
    YTReachabilityController *_reachabilityController;
    NSMutableArray *_sectionControllers;
    MDXSmartPairingSectionController *_deviceSelectionController;
    MDXSmartPairingSectionController *_useTVCodeSectionController;
    MDXSmartPairingSectionController *_notSeeingTVController;
    MDXSmartPairingSectionController *_deleteDevicesController;
}

- (void).cxx_destruct;
- (void)copyAndSetSectionControllers;
- (void)createNotSeeingTVController;
- (void)addDeleteDevicesSectionController;
- (void)updateDeleteDevicesSectionController;
- (void)addUseTVCodeController;
- (void)updateUseTVCodeController;
- (id)createStateIndicationCell;
- (void)updateDeviceSelectionController;
- (void)updateControllers;
- (void)reachabilityDidChange;
- (void)sendNavigationEventWithNavEndpoint:(id)arg1 fromView:(id)arg2;
- (void)didTapCell:(id)arg1 withNavEndpoint:(id)arg2;
- (void)MDXSmartPairingDeviceCell:(id)arg1 shouldDisconectFromScreen:(id)arg2;
- (void)MDXSmartPairingDeviceCell:(id)arg1 shouldConnectToScreen:(id)arg2;
- (void)MDXSessionManager:(id)arg1 didEndSession:(id)arg2 withError:(id)arg3;
- (void)MDXSessionManager:(id)arg1 didFailToStartSession:(id)arg2 withError:(id)arg3;
- (void)MDXSessionManager:(id)arg1 willStartSession:(id)arg2;
- (void)MDXScreenDiscoveryManager:(id)arg1 onlineScreensDidChange:(id)arg2;
- (void)viewDidLoad;
- (id)initWithReachabilityController:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

