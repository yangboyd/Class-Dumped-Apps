//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEDeviceSettingsData-Protocol.h"

@class HMECoreDataStack, NSString;
@protocol HMEDeviceNetworkService, HMELocalDeviceSettingsService;

@interface HMEDeviceSettingsModelController : NSObject <HMEDeviceSettingsData>
{
    id <HMELocalDeviceSettingsService> _localService;
    id <HMEDeviceNetworkService> _networkService;
    HMECoreDataStack *_coreDataStack;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMECoreDataStack *coreDataStack; // @synthesize coreDataStack=_coreDataStack;
@property(readonly, nonatomic) id <HMEDeviceNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) id <HMELocalDeviceSettingsService> localService; // @synthesize localService=_localService;
- (void)persistDisplayName:(id)arg1 forDeviceWithDeviceID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudUpdateDisplayName:(id)arg1 forDeviceWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)locallyUpdateDisplayName:(id)arg1 forSetupCastDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDisplayName:(id)arg1 forLocalDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCoreDataStack:(id)arg1 localService:(id)arg2 networkService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

