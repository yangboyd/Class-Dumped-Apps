//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SetupCastDevice;
@protocol HMEDeviceLinkingCoordinatorDelegate;

@protocol HMEDeviceLinkingCoordinator <NSObject>
@property(nonatomic) __weak id <HMEDeviceLinkingCoordinatorDelegate> delegate;
- (void)confirmLinkDevice:(SetupCastDevice *)arg1;
@end

