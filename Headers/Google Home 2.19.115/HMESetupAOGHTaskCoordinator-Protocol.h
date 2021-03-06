//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMESetupNavigationController, NSString;
@protocol HMELocalDevice, HMESetupAOGHTaskCoordinatorDelegate;

@protocol HMESetupAOGHTaskCoordinator <NSObject>
@property(nonatomic) __weak id <HMESetupAOGHTaskCoordinatorDelegate> delegate;
- (void)cancelFlow;
- (void)startStandaloneFlowInNavigationController:(HMESetupNavigationController *)arg1 withDeviceType:(NSString *)arg2 structureID:(NSString *)arg3 source:(long long)arg4;
- (void)startOOBEFlowInNavigationController:(HMESetupNavigationController *)arg1 withDeviceType:(NSString *)arg2 hostDevice:(id <HMELocalDevice>)arg3 structureID:(NSString *)arg4;
@end

