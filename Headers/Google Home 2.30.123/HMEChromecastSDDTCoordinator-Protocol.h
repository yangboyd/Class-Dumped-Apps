//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMESetupNavigationController, NSArray, NSString;
@protocol HMEChromecastSDDTCoordinatorDelegate;

@protocol HMEChromecastSDDTCoordinator <NSObject>
+ (NSArray *)applicationsFromJSONArray:(NSArray *)arg1;
@property(nonatomic) __weak id <HMEChromecastSDDTCoordinatorDelegate> delegate;
- (void)startInNavigationController:(HMESetupNavigationController *)arg1 withDeviceIPAddress:(NSString *)arg2;
@end

