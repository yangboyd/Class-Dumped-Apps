//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UINavigationController, UIViewController;
@protocol HMEUpdateUserDefinedDeviceTypeCoordinatorDelegate;

@protocol HMEUpdateUserDefinedDeviceTypeCoordinator <NSObject>
@property(nonatomic) __weak id <HMEUpdateUserDefinedDeviceTypeCoordinatorDelegate> delegate;
- (void)startInNavigationController:(UINavigationController *)arg1 fromViewController:(UIViewController *)arg2;
@end

