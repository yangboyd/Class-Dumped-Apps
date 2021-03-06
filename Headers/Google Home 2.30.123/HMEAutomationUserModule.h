//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ASTCameraManaging, ASTHomeAutomationManagerProtocol, HMEAutomationData, HMEHomeAutomationDeviceLinkOpener, HMEHomeAutomationDeviceStateCache, HMEHomeAutomationDeviceStateCacheInitialStateManager;

@interface HMEAutomationUserModule : NSObject
{
    id <HMEAutomationData> _homeAutomationData;
    id <ASTHomeAutomationManagerProtocol> _homeAutomationManager;
    id <HMEHomeAutomationDeviceStateCache> _deviceStateCache;
    id <HMEHomeAutomationDeviceStateCacheInitialStateManager> _deviceStateCacheInitialStateManager;
    id <ASTCameraManaging> _cameraManager;
    id <HMEHomeAutomationDeviceLinkOpener> _deviceLinkOpener;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEHomeAutomationDeviceLinkOpener> deviceLinkOpener; // @synthesize deviceLinkOpener=_deviceLinkOpener;
@property(readonly, nonatomic) id <ASTCameraManaging> cameraManager; // @synthesize cameraManager=_cameraManager;
@property(readonly, nonatomic) id <HMEHomeAutomationDeviceStateCacheInitialStateManager> deviceStateCacheInitialStateManager; // @synthesize deviceStateCacheInitialStateManager=_deviceStateCacheInitialStateManager;
@property(readonly, nonatomic) id <HMEHomeAutomationDeviceStateCache> deviceStateCache; // @synthesize deviceStateCache=_deviceStateCache;
@property(readonly, nonatomic) id <ASTHomeAutomationManagerProtocol> homeAutomationManager; // @synthesize homeAutomationManager=_homeAutomationManager;
@property(readonly, nonatomic) id <HMEAutomationData> homeAutomationData; // @synthesize homeAutomationData=_homeAutomationData;
- (id)initWithAccountID:(id)arg1 authorization:(id)arg2 analyticsLogger:(id)arg3 experimentFlags:(id)arg4 foyerHost:(id)arg5 realtimeMessagingData:(id)arg6 linkOpener:(id)arg7;

@end

