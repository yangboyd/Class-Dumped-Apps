//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAccountStoreCoordinator, IGUser;
@protocol IGAnalyticsEventLoggingProtocol, IGMultipleAccountHandling;

@protocol IGAccountStoreCoordinatorDelegate <NSObject>
- (void)accountStoreCoordinator:(IGAccountStoreCoordinator *)arg1 didFindEnabledUser:(IGUser *)arg2 withMultipleAccountHandler:(id <IGMultipleAccountHandling>)arg3 surface:(long long)arg4 analyticsLogger:(id <IGAnalyticsEventLoggingProtocol>)arg5;
@end

