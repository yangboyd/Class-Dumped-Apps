//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLagunaAppStatusListener-Protocol.h"
#import "SCLagunaHomeWifiManagerEventListener-Protocol.h"
#import "SCMergedGalleryDataSourceListener-Protocol.h"
#import "SCSpectaclesEventListener-Protocol.h"

@class NSArray, NSSet, NSString, SCDataObjectContext, SCLagunaAppStatusCoordinator, SCLagunaHomeWifiManager, SCMergedGalleryDataSource, SCSpectaclesManager;
@protocol SCSpectaclesStatusControllerDelegate;

@interface SCSpectaclesStatusController : NSObject <SCLagunaAppStatusListener, SCSpectaclesEventListener, SCLagunaHomeWifiManagerEventListener, SCMergedGalleryDataSourceListener>
{
    SCLagunaAppStatusCoordinator *_lagunaAppStatusCoordinator;
    SCSpectaclesManager *_spectaclesManager;
    SCLagunaHomeWifiManager *_lagunaHomeWifiManager;
    SCMergedGalleryDataSource *_mergedGalleryDataSource;
    NSSet *_latestTransferredContentIds;
    NSArray *_transferPriorityContentIds;
    long long _lastState;
    unsigned long long _previousSessionTransferCount;
    SCDataObjectContext *_dataObjectContext;
    _Bool _tabFocused;
    id <SCSpectaclesStatusControllerDelegate> _delegate;
}

@property(nonatomic) _Bool tabFocused; // @synthesize tabFocused=_tabFocused;
@property(nonatomic) __weak id <SCSpectaclesStatusControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long lastState; // @synthesize lastState=_lastState;
- (void).cxx_destruct;
- (void)_markHomeWifiTransferredContentAsSynced;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (void)lagunaOnShareWifiCredentialsUpdate:(unsigned long long)arg1 device:(id)arg2 wifiSsid:(id)arg3;
- (void)spectaclesDevice:(id)arg1 didReceiveLastCloudUploadTime:(id)arg2;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;
- (void)spectaclesDeviceDidUpdateContentList:(id)arg1;
- (void)statusCoordinatorNeedsToPair:(id)arg1;
- (void)statusCoordinatorPressedLearnMoreForBluetoothOverloadError:(id)arg1;
- (void)statusCoordinator:(id)arg1 needsToUpdateStateForDevice:(id)arg2;
- (void)statusCoordinatorNumberOfDevicesUpdated:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOn:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOff:(id)arg1;
- (void)_notifyForDevice:(id)arg1;
- (id)_untransferredPictureContent;
- (id)_untransferredHdContent;
- (id)_currentTransferSessionForSnapCount;
- (void)_addListeners;
- (void)_updateTransferPriorityContentIds;
- (id)_multiSnapCombinedContentFromContent:(id)arg1;
- (id)transferringContent;
- (id)transferredContent;
- (id)untransferredContent;
- (id)connectedDevice;
- (void)setTransferPriorityContentIds:(id)arg1;
- (id)initWithUserSession:(id)arg1 dataObjectContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

