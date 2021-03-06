//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJ2VerifyProvisioningTaskHelper.h"

#import "WJ2BLEProvisioningEventManagerDelegate-Protocol.h"

@class BFTaskCompletionSource, NSString, WJ2CBLRegistrationDetails, WJ2WifiConnectionDetails;

@interface WJ2CoexDeviceVerifyProvisioningTaskHelper : WJ2VerifyProvisioningTaskHelper <WJ2BLEProvisioningEventManagerDelegate>
{
    BFTaskCompletionSource *_completionSource;
    WJ2WifiConnectionDetails *_lastWifiEvent;
    WJ2CBLRegistrationDetails *_lastRegistrationEvent;
}

@property(readonly) WJ2CBLRegistrationDetails *lastRegistrationEvent; // @synthesize lastRegistrationEvent=_lastRegistrationEvent;
@property(readonly) WJ2WifiConnectionDetails *lastWifiEvent; // @synthesize lastWifiEvent=_lastWifiEvent;
@property(retain) BFTaskCompletionSource *completionSource; // @synthesize completionSource=_completionSource;
- (void).cxx_destruct;
- (id)timeoutError;
- (void)handleRegistrationEvent:(id)arg1 forSupportedEvents:(id)arg2;
- (void)handleWifiEvent:(id)arg1;
- (void)didReceiveEventResult:(id)arg1 forSupportedEvents:(id)arg2;
- (id)getTask;
- (id)initWithConnectedDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

