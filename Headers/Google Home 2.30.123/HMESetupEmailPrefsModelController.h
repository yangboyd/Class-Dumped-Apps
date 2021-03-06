//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMESetupEmailPrefsModelController-Protocol.h"

@class HMEModel, HMENetworkModel, NSString;
@protocol GCAEEmailOptinService;

@interface HMESetupEmailPrefsModelController : NSObject <HMESetupEmailPrefsModelController>
{
    HMENetworkModel *_networkModel;
    id <GCAEEmailOptinService> _emailService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GCAEEmailOptinService> emailService; // @synthesize emailService=_emailService;
@property(readonly, nonatomic) HMENetworkModel *networkModel; // @synthesize networkModel=_networkModel;
- (id)optinRequestWithPref:(int)arg1 marketingInfo:(id)arg2 hasBundledAOGHDevices:(_Bool)arg3;
- (_Bool)isSubscribed:(id)arg1;
@property(readonly, nonatomic) HMEModel *emailPrefs;
- (void)updateOptinWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeWithWifiOptInInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeWithDevice:(id)arg1 hasBundledAOGHDevices:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subscribeWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unsubscribe:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribe:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadPreferences;
- (id)initWithEmailService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

