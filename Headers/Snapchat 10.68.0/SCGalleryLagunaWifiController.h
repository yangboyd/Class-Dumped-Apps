//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesEventListener-Protocol.h"

@class NSArray, NSString, NSTimer, SCBaseAlertView, SCGalleryLagunaWifiControllerEventListenerAnnouncer, SCSpectaclesDevice, SCSpectaclesManager;
@protocol SCSpectaclesAppLogger;

@interface SCGalleryLagunaWifiController : NSObject <SCSpectaclesEventListener>
{
    _Bool _wasAWDLEnabled;
    _Bool _hasTriedToConnectWifi;
    _Bool _hasConnectedWifi;
    long long _state;
    SCSpectaclesManager *_spectaclesManager;
    id <SCSpectaclesAppLogger> _analyticsLogger;
    SCGalleryLagunaWifiControllerEventListenerAnnouncer *_announcer;
    SCBaseAlertView *_wifiPopup;
    CDUnknownBlockType _backgroundCancelBlock;
    NSTimer *_wifiDelayRetryTimer;
    SCSpectaclesDevice *_device;
    NSString *_ssidPassword;
    NSArray *_hdContentUUIDs;
    unsigned long long _getHdStartSource;
}

+ (id)_wifiSettingsUrlString;
+ (id)_generateSsidPassword;
@property(nonatomic) unsigned long long getHdStartSource; // @synthesize getHdStartSource=_getHdStartSource;
@property(retain, nonatomic) NSArray *hdContentUUIDs; // @synthesize hdContentUUIDs=_hdContentUUIDs;
@property(copy, nonatomic) NSString *ssidPassword; // @synthesize ssidPassword=_ssidPassword;
@property(retain, nonatomic) SCSpectaclesDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSTimer *wifiDelayRetryTimer; // @synthesize wifiDelayRetryTimer=_wifiDelayRetryTimer;
@property(copy, nonatomic) CDUnknownBlockType backgroundCancelBlock; // @synthesize backgroundCancelBlock=_backgroundCancelBlock;
@property(nonatomic) _Bool hasConnectedWifi; // @synthesize hasConnectedWifi=_hasConnectedWifi;
@property(nonatomic) _Bool hasTriedToConnectWifi; // @synthesize hasTriedToConnectWifi=_hasTriedToConnectWifi;
@property(nonatomic) _Bool wasAWDLEnabled; // @synthesize wasAWDLEnabled=_wasAWDLEnabled;
@property(nonatomic) __weak SCBaseAlertView *wifiPopup; // @synthesize wifiPopup=_wifiPopup;
@property(retain, nonatomic) SCGalleryLagunaWifiControllerEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(nonatomic) __weak id <SCSpectaclesAppLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak SCSpectaclesManager *spectaclesManager; // @synthesize spectaclesManager=_spectaclesManager;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;
- (void)spectaclesDevice:(id)arg1 didUpdateInfo:(unsigned long long)arg2;
- (void)spectaclesOnPairingStateUpdate:(unsigned long long)arg1 deviceInformation:(id)arg2;
- (void)_stopCancelTimer;
- (void)_resetCancelTimer;
- (void)_handleAppBackground:(id)arg1;
- (void)_handleAppForeground:(id)arg1;
- (void)_displayFailurePopup;
- (void)_displayRetryPopup;
- (void)_dismissWifiPopup;
- (void)_displayWifiPopup;
- (void)_promptToJoinSpectaclesWifi;
- (void)dismissWifiView;
- (void)_transitionToState:(long long)arg1;
- (void)_wifiDelayRetryTimeout:(id)arg1;
- (void)_startWifiDelayRetryTimer;
- (id)_getHdSessionAnalyticsInfo;
- (void)_appendHdContentUUIDs:(id)arg1;
- (void)_startWifiConnection;
- (void)cancelWifiConnection;
- (void)startWifiFlowForDevice:(id)arg1 hdContentUUIDs:(id)arg2 getHdStartSource:(unsigned long long)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithSpectaclesManager:(id)arg1 analyticsLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

