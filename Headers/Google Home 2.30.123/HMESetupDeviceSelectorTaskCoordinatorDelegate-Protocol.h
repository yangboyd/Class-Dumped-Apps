//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NLGProductDescriptor, NSString;
@protocol HMESetupDeviceSelectorTaskCoordinator, HMEUnconfiguredDevice;

@protocol HMESetupDeviceSelectorTaskCoordinatorDelegate <NSObject>
- (void)deviceSelectorTaskDidCancel:(id <HMESetupDeviceSelectorTaskCoordinator>)arg1;
- (void)deviceSelectorTask:(id <HMESetupDeviceSelectorTaskCoordinator>)arg1 didCompleteWithWeaveDeviceDescriptor:(NLGProductDescriptor *)arg2;
- (void)deviceSelectorTask:(id <HMESetupDeviceSelectorTaskCoordinator>)arg1 didCompleteWithAOGHDeviceType:(NSString *)arg2;
- (void)deviceSelectorTask:(id <HMESetupDeviceSelectorTaskCoordinator>)arg1 didCompleteWithDevice:(id <HMEUnconfiguredDevice>)arg2 atPosition:(unsigned long long)arg3;
@end

