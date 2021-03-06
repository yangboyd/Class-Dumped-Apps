//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEDoorbellNotificationManager-Protocol.h"

@class NSString;
@protocol ASTHomeAutomationManagerProtocol, HMEDeviceData, HMEDeviceEligibilityChecker;

@interface HMEDoorbellNotificationManagerImpl : NSObject <HMEDoorbellNotificationManager>
{
    id <HMEDeviceData> _deviceData;
    id <HMEDeviceEligibilityChecker> _deviceEligibilityChecker;
    id <ASTHomeAutomationManagerProtocol> _homeAutomationManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <ASTHomeAutomationManagerProtocol> homeAutomationManager; // @synthesize homeAutomationManager=_homeAutomationManager;
@property(readonly, nonatomic) id <HMEDeviceEligibilityChecker> deviceEligibilityChecker; // @synthesize deviceEligibilityChecker=_deviceEligibilityChecker;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
- (void)handleDoorbellNotificationForDeviceWithHGSID:(id)arg1 actionIdentifier:(id)arg2;
- (id)initWithDeviceData:(id)arg1 deviceEligibilityChecker:(id)arg2 homeAutomationManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

